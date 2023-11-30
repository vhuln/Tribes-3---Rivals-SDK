#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EGameplayEffectGrantedAbilityRemovePolicy : uint8
{
	CancelAbilityImmediately       = 0,
	RemoveAbilityOnEnd             = 1,
	DoNothing                      = 2,
	EGameplayEffectGrantedAbilityRemovePolicy_MAX = 3,
};

enum class EGameplayEffectAttributeCaptureSource : uint8
{
	Source                         = 0,
	Target                         = 1,
	EGameplayEffectAttributeCaptureSource_MAX = 2,
};

enum class EGameplayCueEvent : uint8
{
	OnActive                       = 0,
	WhileActive                    = 1,
	Executed                       = 2,
	Removed                        = 3,
	EGameplayCueEvent_MAX          = 4,
};

enum class EGameplayAbilityActivationMode : uint8
{
	Authority                      = 0,
	NonAuthority                   = 1,
	Predicting                     = 2,
	Confirmed                      = 3,
	Rejected                       = 4,
	EGameplayAbilityActivationMode_MAX = 5,
};

enum class EAbilityGenericReplicatedEvent : uint8
{
	GenericConfirm                 = 0,
	GenericCancel                  = 1,
	InputPressed                   = 2,
	InputReleased                  = 3,
	GenericSignalFromClient        = 4,
	GenericSignalFromServer        = 5,
	GameCustom1                    = 6,
	GameCustom2                    = 7,
	GameCustom3                    = 8,
	GameCustom4                    = 9,
	GameCustom5                    = 10,
	GameCustom6                    = 11,
	MAX                            = 12,
};

enum class EGameplayCuePayloadType : uint8
{
	CueParameters                  = 0,
	FromSpec                       = 1,
	EGameplayCuePayloadType_MAX    = 2,
};

enum class EGameplayAbilityInputBinds : uint8
{
	Ability1                       = 0,
	Ability2                       = 1,
	Ability3                       = 2,
	Ability4                       = 3,
	Ability5                       = 4,
	Ability6                       = 5,
	Ability7                       = 6,
	Ability8                       = 7,
	Ability9                       = 8,
	EGameplayAbilityInputBinds_MAX = 9,
};

enum class ETargetDataFilterSelf : uint8
{
	TDFS_Any                       = 0,
	TDFS_NoSelf                    = 1,
	TDFS_NoOthers                  = 2,
	TDFS_MAX                       = 3,
};

enum class EAbilityTaskWaitState : uint8
{
	WaitingOnGame                  = 1,
	WaitingOnUser                  = 2,
	WaitingOnAvatar                = 4,
	EAbilityTaskWaitState_MAX      = 5,
};

enum class ERootMotionMoveToActorTargetOffsetType : uint8
{
	AlignFromTargetToSource        = 0,
	AlignToTargetForward           = 1,
	AlignToWorldSpace              = 2,
	ERootMotionMoveToActorTargetOffsetType_MAX = 3,
};

enum class EAbilityTaskNetSyncType : uint8
{
	BothWait                       = 0,
	OnlyServerWait                 = 1,
	OnlyClientWait                 = 2,
	EAbilityTaskNetSyncType_MAX    = 3,
};

enum class EWaitAttributeChangeComparison : uint8
{
	None                           = 0,
	GreaterThan                    = 1,
	LessThan                       = 2,
	GreaterThanOrEqualTo           = 3,
	LessThanOrEqualTo              = 4,
	NotEqualTo                     = 5,
	ExactlyEqualTo                 = 6,
	MAX                            = 7,
};

enum class EWaitGameplayTagQueryTriggerCondition : uint8
{
	WhenTrue                       = 0,
	WhenFalse                      = 1,
	EWaitGameplayTagQueryTriggerCondition_MAX = 2,
};

enum class EGameplayEffectReplicationMode : uint8
{
	Minimal                        = 0,
	Mixed                          = 1,
	Full                           = 2,
	EGameplayEffectReplicationMode_MAX = 3,
};

enum class ERepAnimPositionMethod : uint8
{
	Position                       = 0,
	CurrentSectionId               = 1,
	ERepAnimPositionMethod_MAX     = 2,
};

enum class EGameplayTargetingConfirmation : uint8
{
	Instant                        = 0,
	UserConfirmed                  = 1,
	Custom                         = 2,
	CustomMulti                    = 3,
	EGameplayTargetingConfirmation_MAX = 4,
};

enum class EGameplayAbilityTargetingLocationType : uint8
{
	LiteralTransform               = 0,
	ActorTransform                 = 1,
	SocketTransform                = 2,
	EGameplayAbilityTargetingLocationType_MAX = 3,
};

enum class EGameplayAbilityInstancingPolicy : uint8
{
	NonInstanced                   = 0,
	InstancedPerActor              = 1,
	InstancedPerExecution          = 2,
	EGameplayAbilityInstancingPolicy_MAX = 3,
};

enum class EGameplayAbilityNetExecutionPolicy : uint8
{
	LocalPredicted                 = 0,
	LocalOnly                      = 1,
	ServerInitiated                = 2,
	ServerOnly                     = 3,
	EGameplayAbilityNetExecutionPolicy_MAX = 4,
};

enum class EGameplayAbilityNetSecurityPolicy : uint8
{
	ClientOrServer                 = 0,
	ServerOnlyExecution            = 1,
	ServerOnlyTermination          = 2,
	ServerOnly                     = 3,
	EGameplayAbilityNetSecurityPolicy_MAX = 4,
};

enum class EGameplayAbilityReplicationPolicy : uint8
{
	ReplicateNo                    = 0,
	ReplicateYes                   = 1,
	EGameplayAbilityReplicationPolicy_MAX = 2,
};

enum class EGameplayAbilityTriggerSource : uint8
{
	GameplayEvent                  = 0,
	OwnedTagAdded                  = 1,
	OwnedTagPresent                = 2,
	EGameplayAbilityTriggerSource_MAX = 3,
};

enum class EGameplayCueNotify_EffectPlaySpace : uint8
{
	WorldSpace                     = 0,
	CameraSpace                    = 1,
	EGameplayCueNotify_MAX         = 2,
};

enum class EGameplayCueNotify_LocallyControlledSource : uint8
{
	InstigatorActor                = 0,
	TargetActor                    = 1,
	EGameplayCueNotify_MAX         = 2,
};

enum class EGameplayCueNotify_LocallyControlledPolicy : uint8
{
	Always                         = 0,
	LocalOnly                      = 1,
	NotLocal                       = 2,
	EGameplayCueNotify_MAX         = 3,
};

enum class EGameplayCueNotify_AttachPolicy : uint8
{
	DoNotAttach                    = 0,
	AttachToTarget                 = 1,
	EGameplayCueNotify_MAX         = 2,
};

enum class EGameplayEffectMagnitudeCalculation : uint8
{
	ScalableFloat                  = 0,
	AttributeBased                 = 1,
	CustomCalculationClass         = 2,
	SetByCaller                    = 3,
	EGameplayEffectMagnitudeCalculation_MAX = 4,
};

enum class EAttributeBasedFloatCalculationType : uint8
{
	AttributeMagnitude             = 0,
	AttributeBaseValue             = 1,
	AttributeBonusMagnitude        = 2,
	AttributeMagnitudeEvaluatedUpToChannel = 3,
	EAttributeBasedFloatCalculationType_MAX = 4,
};

enum class EGameplayEffectVersion : uint8
{
	Monolithic                     = 0,
	Modular53                      = 1,
	AbilitiesComponent53           = 2,
	Current                        = 2,
	EGameplayEffectVersion_MAX     = 3,
};

enum class EGameplayEffectScopedModifierAggregatorType : uint8
{
	CapturedAttributeBacked        = 0,
	Transient                      = 1,
	EGameplayEffectScopedModifierAggregatorType_MAX = 2,
};

enum class EGameplayEffectDurationType : uint8
{
	Instant                        = 0,
	Infinite                       = 1,
	HasDuration                    = 2,
	EGameplayEffectDurationType_MAX = 3,
};

enum class EGameplayEffectStackingDurationPolicy : uint8
{
	RefreshOnSuccessfulApplication = 0,
	NeverRefresh                   = 1,
	EGameplayEffectStackingDurationPolicy_MAX = 2,
};

enum class EGameplayEffectStackingPeriodPolicy : uint8
{
	ResetOnSuccessfulApplication   = 0,
	NeverReset                     = 1,
	EGameplayEffectStackingPeriodPolicy_MAX = 2,
};

enum class EGameplayEffectStackingExpirationPolicy : uint8
{
	ClearEntireStack               = 0,
	RemoveSingleStackAndRefreshDuration = 1,
	RefreshDuration                = 2,
	EGameplayEffectStackingExpirationPolicy_MAX = 3,
};

enum class EGameplayEffectPeriodInhibitionRemovedPolicy : uint8
{
	NeverReset                     = 0,
	ResetPeriod                    = 1,
	ExecuteAndResetPeriod          = 2,
	EGameplayEffectPeriodInhibitionRemovedPolicy_MAX = 3,
};

enum class EGameplayModEvaluationChannel : uint8
{
	Channel0                       = 0,
	Channel1                       = 1,
	Channel2                       = 2,
	Channel3                       = 3,
	Channel4                       = 4,
	Channel5                       = 5,
	Channel6                       = 6,
	Channel7                       = 7,
	Channel8                       = 8,
	Channel9                       = 9,
	Channel_MAX                    = 10,
	EGameplayModEvaluationChannel_MAX = 11,
};

enum class EGameplayModOp : uint8
{
	Additive                       = 0,
	Multiplicitive                 = 1,
	Division                       = 2,
	Override                       = 3,
	Max                            = 4,
};

enum class EGameplayEffectStackingType : uint8
{
	None                           = 0,
	AggregateBySource              = 1,
	AggregateByTarget              = 2,
	EGameplayEffectStackingType_MAX = 3,
};

enum class EGameplayTagEventType : uint8
{
	NewOrRemoved                   = 0,
	AnyCountChange                 = 1,
	EGameplayTagEventType_MAX      = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x38 - 0x0)
// ScriptStruct GameplayAbilities.GameplayAttribute
struct GameplayAbilities_GameplayAttribute
{
public:
	class FString                                AttributeName;                                     // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FFieldPathProperty_                          Attribute;                                         // 0x10(0x20)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UStruct*                               AttributeOwner;                                    // 0x30(0x8)(Edit, ZeroConstructor, EditConst, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct GameplayAbilities.GameplayEffectModifiedAttribute
struct GameplayAbilities_GameplayEffectModifiedAttribute
{
public:
	struct GameplayAbilities_GameplayAttribute   Attribute;                                         // 0x0(0x38)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TotalMagnitude;                                    // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2286[0x4];                                     // Fixing Size Of Struct 
};

// 0x40 (0x40 - 0x0)
// ScriptStruct GameplayAbilities.GameplayEffectAttributeCaptureDefinition
struct GameplayAbilities_GameplayEffectAttributeCaptureDefinition
{
public:
	struct GameplayAbilities_GameplayAttribute   AttributeToCapture;                                // 0x0(0x38)(Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGameplayEffectAttributeCaptureSource AttributeSource;                                   // 0x38(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSnapshot;                                         // 0x39(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_228F[0x6];                                     // Fixing Size Of Struct 
};

// 0x50 (0x50 - 0x0)
// ScriptStruct GameplayAbilities.GameplayEffectAttributeCaptureSpec
struct GameplayAbilities_GameplayEffectAttributeCaptureSpec
{
public:
	struct GameplayAbilities_GameplayEffectAttributeCaptureDefinition BackingDefinition;                                 // 0x0(0x40)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_22A0[0x10];                                    // Fixing Size Of Struct 
};

// 0x28 (0x28 - 0x0)
// ScriptStruct GameplayAbilities.GameplayEffectAttributeCaptureSpecContainer
struct GameplayAbilities_GameplayEffectAttributeCaptureSpecContainer
{
public:
	TArray<struct GameplayAbilities_GameplayEffectAttributeCaptureSpec> SourceAttributes;                                  // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct GameplayAbilities_GameplayEffectAttributeCaptureSpec> TargetAttributes;                                  // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	bool                                         bHasNonSnapshottedAttributes;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_22A4[0x7];                                     // Fixing Size Of Struct 
};

// 0x88 (0x88 - 0x0)
// ScriptStruct GameplayAbilities.TagContainerAggregator
struct GameplayAbilities_TagContainerAggregator
{
public:
	struct GameplayTags_GameplayTagContainer     CapturedActorTags;                                 // 0x0(0x20)(NativeAccessSpecifierPrivate)
	struct GameplayTags_GameplayTagContainer     CapturedSpecTags;                                  // 0x20(0x20)(NativeAccessSpecifierPrivate)
	struct GameplayTags_GameplayTagContainer     ScopedTags;                                        // 0x40(0x20)(NativeAccessSpecifierPrivate)
	uint8                                        Pad_22A8[0x28];                                    // Fixing Size Of Struct 
};

// 0x4 (0x4 - 0x0)
// ScriptStruct GameplayAbilities.ModifierSpec
struct GameplayAbilities_ModifierSpec
{
public:
	float                                        EvaluatedMagnitude;                                // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct GameplayAbilities.ScalableFloat
struct GameplayAbilities_ScalableFloat
{
public:
	float                                        Value;                                             // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_22B0[0x4];                                     // Fixing Size After Last Property  
	struct Engine_CurveTableRowHandle            Curve;                                             // 0x8(0x10)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct DataRegistry_DataRegistryType         RegistryType;                                      // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_22B4[0x8];                                     // Fixing Size Of Struct 
};

// 0x4 (0x4 - 0x0)
// ScriptStruct GameplayAbilities.GameplayAbilitySpecHandle
struct GameplayAbilities_GameplayAbilitySpecHandle
{
public:
	int32                                        Handle;                                            // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x98 (0x98 - 0x0)
// ScriptStruct GameplayAbilities.GameplayAbilitySpecDef
struct GameplayAbilities_GameplayAbilitySpecDef
{
public:
	TSubclassOf<class UGameplayAbility>          Ability;                                           // 0x0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, RepSkip, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GameplayAbilities_ScalableFloat       LevelScalableFloat;                                // 0x8(0x28)(Edit, DisableEditOnInstance, RepSkip, NativeAccessSpecifierPublic)
	int32                                        InputID;                                           // 0x30(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGameplayEffectGrantedAbilityRemovePolicy RemovalPolicy;                                     // 0x34(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_22C1[0x3];                                     // Fixing Size After Last Property  
	TWeakObjectPtr<class UObject>                SourceObject;                                      // 0x38(0x8)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_22C2[0x50];                                    // Fixing Size After Last Property  
	struct GameplayAbilities_GameplayAbilitySpecHandle AssignedHandle;                                    // 0x90(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_22C4[0x4];                                     // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GameplayAbilities.GameplayEffectContextHandle
struct GameplayAbilities_GameplayEffectContextHandle
{
public:
	uint8                                        Pad_22D2[0x18];                                    // Fixing Size Of Struct 
};

// 0x298 (0x298 - 0x0)
// ScriptStruct GameplayAbilities.GameplayEffectSpec
struct GameplayAbilities_GameplayEffectSpec
{
public:
	class UGameplayEffect*                       Def;                                               // 0x0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct GameplayAbilities_GameplayEffectModifiedAttribute> ModifiedAttributes;                                // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct GameplayAbilities_GameplayEffectAttributeCaptureSpecContainer CapturedRelevantAttributes;                        // 0x18(0x28)(RepSkip, NativeAccessSpecifierPublic)
	uint8                                        Pad_22DE[0x10];                                    // Fixing Size After Last Property  
	float                                        Duration;                                          // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Period;                                            // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ChanceToApplyToTarget;                             // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_22EA[0x4];                                     // Fixing Size After Last Property  
	struct GameplayAbilities_TagContainerAggregator CapturedSourceTags;                                // 0x60(0x88)(RepSkip, NativeAccessSpecifierPublic)
	struct GameplayAbilities_TagContainerAggregator CapturedTargetTags;                                // 0xE8(0x88)(RepSkip, NativeAccessSpecifierPublic)
	struct GameplayTags_GameplayTagContainer     DynamicGrantedTags;                                // 0x170(0x20)(NativeAccessSpecifierPublic)
	struct GameplayTags_GameplayTagContainer     DynamicAssetTags;                                  // 0x190(0x20)(NativeAccessSpecifierPublic)
	TArray<struct GameplayAbilities_ModifierSpec> Modifiers;                                         // 0x1B0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        StackCount;                                        // 0x1C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCompletedSourceAttributeCapture : 1;              // Mask: 0x1, PropSize: 0x10x1C4(0x1)(RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCompletedTargetAttributeCapture : 1;              // Mask: 0x2, PropSize: 0x10x1C4(0x1)(RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDurationLocked : 1;                               // Mask: 0x4, PropSize: 0x10x1C4(0x1)(RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_A3 : 5;                                     // Fixing Bit-Field Size  
	uint8                                        Pad_230A[0x3];                                     // Fixing Size After Last Property  
	TArray<struct GameplayAbilities_GameplayAbilitySpecDef> GrantedAbilitySpecs;                               // 0x1C8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_2310[0xA0];                                    // Fixing Size After Last Property  
	struct GameplayAbilities_GameplayEffectContextHandle EffectContext;                                     // 0x278(0x18)(NativeAccessSpecifierPrivate)
	float                                        Level;                                             // 0x290(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2311[0x4];                                     // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GameplayAbilities.PredictionKey
struct GameplayAbilities_PredictionKey
{
public:
	class UPackageMap*                           PredictiveConnection;                              // 0x0(0x8)(ZeroConstructor, RepSkip, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int16                                        Current;                                           // 0x8(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int16                                        base;                                              // 0xA(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsStale;                                          // 0xC(0x1)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsServerInitiated;                                // 0xD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_231E[0xA];                                     // Fixing Size Of Struct 
};

// 0x35C (0x368 - 0xC)
// ScriptStruct GameplayAbilities.ActiveGameplayEffect
struct GameplayAbilities_ActiveGameplayEffect : public NetCore_FastArraySerializerItem
{
public:
	uint8                                        Pad_2327[0xC];                                     // Fixing Size After Last Property  
	struct GameplayAbilities_GameplayEffectSpec  Spec;                                              // 0x18(0x298)(NativeAccessSpecifierPublic)
	struct GameplayAbilities_PredictionKey       PredictionKey;                                     // 0x2B0(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct GameplayAbilities_GameplayAbilitySpecHandle> GrantedAbilityHandles;                             // 0x2C8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        StartServerWorldTime;                              // 0x2D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CachedStartServerWorldTime;                        // 0x2DC(0x4)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StartWorldTime;                                    // 0x2E0(0x4)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsInhibited;                                      // 0x2E4(0x1)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2338[0x83];                                    // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// ScriptStruct GameplayAbilities.ActiveGameplayEffectHandle
struct GameplayAbilities_ActiveGameplayEffectHandle
{
public:
	int32                                        Handle;                                            // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bPassedFiltersAndWasExecuted;                      // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_234D[0x3];                                     // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GameplayAbilities.GameplayEffectSpecHandle
struct GameplayAbilities_GameplayEffectSpecHandle
{
public:
	uint8                                        Pad_2351[0x10];                                    // Fixing Size Of Struct 
};

// 0xD8 (0xD8 - 0x0)
// ScriptStruct GameplayAbilities.GameplayCueParameters
struct GameplayAbilities_GameplayCueParameters
{
public:
	float                                        NormalizedMagnitude;                               // 0x0(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RawMagnitude;                                      // 0x4(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GameplayAbilities_GameplayEffectContextHandle EffectContext;                                     // 0x8(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
	struct GameplayTags_GameplayTag              MatchedTagName;                                    // 0x20(0x8)(BlueprintVisible, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GameplayTags_GameplayTag              OriginalTag;                                       // 0x28(0x8)(BlueprintVisible, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GameplayTags_GameplayTagContainer     AggregatedSourceTags;                              // 0x30(0x20)(BlueprintVisible, NativeAccessSpecifierPublic)
	struct GameplayTags_GameplayTagContainer     AggregatedTargetTags;                              // 0x50(0x20)(BlueprintVisible, NativeAccessSpecifierPublic)
	struct Engine_Vector_NetQuantize10           Location;                                          // 0x70(0x18)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Engine_Vector_NetQuantizeNormal       Normal;                                            // 0x88(0x18)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class AActor>                 Instigator;                                        // 0xA0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class AActor>                 EffectCauser;                                      // 0xA8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UObject>                SourceObject;                                      // 0xB0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UPhysicalMaterial>      PhysicalMaterial;                                  // 0xB8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        GameplayEffectLevel;                               // 0xC0(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AbilityLevel;                                      // 0xC4(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class USceneComponent>        TargetAttachComponent;                             // 0xC8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReplicateLocationWhenUsingMinimalRepProxy;        // 0xD0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_237A[0x7];                                     // Fixing Size Of Struct 
};

// 0x28 (0x28 - 0x0)
// ScriptStruct GameplayAbilities.GameplayEffectRemovalInfo
struct GameplayAbilities_GameplayEffectRemovalInfo
{
public:
	bool                                         bPrematureRemoval;                                 // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2390[0x3];                                     // Fixing Size After Last Property  
	int32                                        StackCount;                                        // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GameplayAbilities_GameplayEffectContextHandle EffectContext;                                     // 0x8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic)
	uint8                                        Pad_2391[0x8];                                     // Fixing Size Of Struct 
};

// 0x28 (0x28 - 0x0)
// ScriptStruct GameplayAbilities.GameplayAbilityTargetDataHandle
struct GameplayAbilities_GameplayAbilityTargetDataHandle
{
public:
	uint8                                        Pad_2392[0x28];                                    // Fixing Size Of Struct 
};

// 0xB0 (0xB0 - 0x0)
// ScriptStruct GameplayAbilities.GameplayEventData
struct GameplayAbilities_GameplayEventData
{
public:
	struct GameplayTags_GameplayTag              EventTag;                                          // 0x0(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Instigator;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Target;                                            // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               OptionalObject;                                    // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               OptionalObject2;                                   // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GameplayAbilities_GameplayEffectContextHandle ContextHandle;                                     // 0x28(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct GameplayTags_GameplayTagContainer     InstigatorTags;                                    // 0x40(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct GameplayTags_GameplayTagContainer     TargetTags;                                        // 0x60(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                        EventMagnitude;                                    // 0x80(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23A8[0x4];                                     // Fixing Size After Last Property  
	struct GameplayAbilities_GameplayAbilityTargetDataHandle TargetData;                                        // 0x88(0x28)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x88 (0x88 - 0x0)
// ScriptStruct GameplayAbilities.GameplayTagRequirements
struct GameplayAbilities_GameplayTagRequirements
{
public:
	struct GameplayTags_GameplayTagContainer     RequireTags;                                       // 0x0(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct GameplayTags_GameplayTagContainer     IgnoreTags;                                        // 0x20(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct GameplayTags_GameplayTagQuery         TagQuery;                                          // 0x40(0x48)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GameplayAbilities.GameplayTargetDataFilterHandle
struct GameplayAbilities_GameplayTargetDataFilterHandle
{
public:
	uint8                                        Pad_23B8[0x10];                                    // Fixing Size Of Struct 
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GameplayAbilities.GameplayAbilityActivationInfo
struct GameplayAbilities_GameplayAbilityActivationInfo
{
public:
	enum class EGameplayAbilityActivationMode    ActivationMode;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCanBeEndedByOtherInstance : 1;                    // Mask: 0x1, PropSize: 0x10x1(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_A4 : 7;                                     // Fixing Bit-Field Size  
	uint8                                        Pad_23C0[0x6];                                     // Fixing Size After Last Property  
	struct GameplayAbilities_PredictionKey       PredictionKeyWhenActivated;                        // 0x8(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x198 (0x198 - 0x0)
// ScriptStruct GameplayAbilities.GameplayEffectQuery
struct GameplayAbilities_GameplayEffectQuery
{
public:
	uint8                                        Pad_23CC[0x10];                                    // Fixing Size After Last Property  
	FDelegateProperty_                           CustomMatchDelegate_BP;                            // 0x10(0x10)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GameplayTags_GameplayTagQuery         OwningTagQuery;                                    // 0x20(0x48)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct GameplayTags_GameplayTagQuery         EffectTagQuery;                                    // 0x68(0x48)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct GameplayTags_GameplayTagQuery         SourceTagQuery;                                    // 0xB0(0x48)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct GameplayTags_GameplayTagQuery         SourceAggregateTagQuery;                           // 0xF8(0x48)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct GameplayAbilities_GameplayAttribute   ModifyingAttribute;                                // 0x140(0x38)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               EffectSource;                                      // 0x178(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UGameplayEffect>           EffectDefinition;                                  // 0x180(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23DF[0x10];                                    // Fixing Size Of Struct 
};

// 0x78 (0x78 - 0x0)
// ScriptStruct GameplayAbilities.GameplayEffectSpecForRPC
struct GameplayAbilities_GameplayEffectSpecForRPC
{
public:
	class UGameplayEffect*                       Def;                                               // 0x0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct GameplayAbilities_GameplayEffectModifiedAttribute> ModifiedAttributes;                                // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct GameplayAbilities_GameplayEffectContextHandle EffectContext;                                     // 0x18(0x18)(NativeAccessSpecifierPublic)
	struct GameplayTags_GameplayTagContainer     AggregatedSourceTags;                              // 0x30(0x20)(NativeAccessSpecifierPublic)
	struct GameplayTags_GameplayTagContainer     AggregatedTargetTags;                              // 0x50(0x20)(NativeAccessSpecifierPublic)
	float                                        Level;                                             // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AbilityLevel;                                      // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct GameplayAbilities.ServerAbilityRPCBatch
struct GameplayAbilities_ServerAbilityRPCBatch
{
public:
	struct GameplayAbilities_GameplayAbilitySpecHandle AbilitySpecHandle;                                 // 0x0(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23F1[0x4];                                     // Fixing Size After Last Property  
	struct GameplayAbilities_PredictionKey       PredictionKey;                                     // 0x8(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GameplayAbilities_GameplayAbilityTargetDataHandle TargetData;                                        // 0x20(0x28)(NativeAccessSpecifierPublic)
	bool                                         InputPressed;                                      // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Ended;                                             // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Started;                                           // 0x4A(0x1)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23F4[0x5];                                     // Fixing Size Of Struct 
};

// 0x1C (0x28 - 0xC)
// ScriptStruct GameplayAbilities.ReplicatedPredictionKeyItem
struct GameplayAbilities_ReplicatedPredictionKeyItem : public NetCore_FastArraySerializerItem
{
public:
	uint8                                        Pad_23F8[0x4];                                     // Fixing Size After Last Property  
	struct GameplayAbilities_PredictionKey       PredictionKey;                                     // 0x10(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x118 - 0x108)
// ScriptStruct GameplayAbilities.ReplicatedPredictionKeyMap
struct GameplayAbilities_ReplicatedPredictionKeyMap : public NetCore_FastArraySerializer
{
public:
	TArray<struct GameplayAbilities_ReplicatedPredictionKeyItem> PredictionKeys;                                    // 0x108(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct GameplayAbilities.MinimalReplicationTagCountMap
struct GameplayAbilities_MinimalReplicationTagCountMap
{
public:
	uint8                                        Pad_23FE[0x50];                                    // Fixing Size After Last Property  
	class UAbilitySystemComponent*               Owner;                                             // 0x50(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23FF[0x8];                                     // Fixing Size Of Struct 
};

// 0x104 (0x110 - 0xC)
// ScriptStruct GameplayAbilities.ActiveGameplayCue
struct GameplayAbilities_ActiveGameplayCue : public NetCore_FastArraySerializerItem
{
public:
	struct GameplayTags_GameplayTag              GameplayCueTag;                                    // 0xC(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_240A[0x4];                                     // Fixing Size After Last Property  
	struct GameplayAbilities_PredictionKey       PredictionKey;                                     // 0x18(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GameplayAbilities_GameplayCueParameters Parameters;                                        // 0x30(0xD8)(ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bPredictivelyRemoved;                              // 0x108(0x1)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_240B[0x7];                                     // Fixing Size Of Struct 
};

// 0x20 (0x128 - 0x108)
// ScriptStruct GameplayAbilities.ActiveGameplayCueContainer
struct GameplayAbilities_ActiveGameplayCueContainer : public NetCore_FastArraySerializer
{
public:
	TArray<struct GameplayAbilities_ActiveGameplayCue> GameplayCues;                                      // 0x108(0x10)(ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                        Pad_2411[0x8];                                     // Fixing Size After Last Property  
	class UAbilitySystemComponent*               Owner;                                             // 0x120(0x8)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x1F0 (0x2F8 - 0x108)
// ScriptStruct GameplayAbilities.ActiveGameplayEffectsContainer
struct GameplayAbilities_ActiveGameplayEffectsContainer : public NetCore_FastArraySerializer
{
public:
	uint8                                        Pad_2414[0x28];                                    // Fixing Size After Last Property  
	TArray<struct GameplayAbilities_ActiveGameplayEffect> GameplayEffects_Internal;                          // 0x130(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2415[0x1B8];                                   // Fixing Size Of Struct 
};

// 0x30 (0x30 - 0x0)
// ScriptStruct GameplayAbilities.GameplayAbilityLocalAnimMontage
struct GameplayAbilities_GameplayAbilityLocalAnimMontage
{
public:
	class UAnimMontage*                          AnimMontage;                                       // 0x0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        PlayInstanceId;                                    // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2417[0x7];                                     // Fixing Size After Last Property  
	struct GameplayAbilities_PredictionKey       PredictionKey;                                     // 0x10(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UGameplayAbility>       AnimatingAbility;                                  // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct GameplayAbilities.GameplayAbilityRepAnimMontage
struct GameplayAbilities_GameplayAbilityRepAnimMontage
{
public:
	class UAnimMontage*                          AnimMontage;                                       // 0x0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PlayRate;                                          // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Position;                                          // 0xC(0x4)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BlendTime;                                         // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        NextSectionID;                                     // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        PlayInstanceId;                                    // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bRepPosition : 1;                                  // Mask: 0x1, PropSize: 0x10x16(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        IsStopped : 1;                                     // Mask: 0x2, PropSize: 0x10x16(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        SkipPositionCorrection : 1;                        // Mask: 0x4, PropSize: 0x10x16(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSkipPlayRate : 1;                                 // Mask: 0x8, PropSize: 0x10x16(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_A5 : 4;                                     // Fixing Bit-Field Size  
	uint8                                        Pad_2431[0x1];                                     // Fixing Size After Last Property  
	struct GameplayAbilities_PredictionKey       PredictionKey;                                     // 0x18(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        SectionIdToPlay;                                   // 0x30(0x1)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2432[0x7];                                     // Fixing Size Of Struct 
};

// 0xEC (0xF8 - 0xC)
// ScriptStruct GameplayAbilities.GameplayAbilitySpec
struct GameplayAbilities_GameplayAbilitySpec : public NetCore_FastArraySerializerItem
{
public:
	struct GameplayAbilities_GameplayAbilitySpecHandle Handle;                                            // 0xC(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGameplayAbility*                      Ability;                                           // 0x10(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Level;                                             // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InputID;                                           // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UObject>                SourceObject;                                      // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        ActiveCount;                                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        InputPressed : 1;                                  // Mask: 0x1, PropSize: 0x10x29(0x1)(RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        RemoveAfterActivation : 1;                         // Mask: 0x2, PropSize: 0x10x29(0x1)(RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        PendingRemove : 1;                                 // Mask: 0x4, PropSize: 0x10x29(0x1)(RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bActivateOnce : 1;                                 // Mask: 0x8, PropSize: 0x10x29(0x1)(RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_A6 : 4;                                     // Fixing Bit-Field Size  
	uint8                                        Pad_2460[0x16];                                    // Fixing Size After Last Property  
	struct GameplayAbilities_GameplayAbilityActivationInfo ActivationInfo;                                    // 0x40(0x20)(RepSkip, NoDestructor, NativeAccessSpecifierPublic)
	struct GameplayTags_GameplayTagContainer     DynamicAbilityTags;                                // 0x60(0x20)(NativeAccessSpecifierPublic)
	TArray<class UGameplayAbility*>              NonReplicatedInstances;                            // 0x80(0x10)(ZeroConstructor, RepSkip, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<class UGameplayAbility*>              ReplicatedInstances;                               // 0x90(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	struct GameplayAbilities_ActiveGameplayEffectHandle GameplayEffectHandle;                              // 0xA0(0x8)(RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2469[0x50];                                    // Fixing Size Of Struct 
};

// 0x18 (0x120 - 0x108)
// ScriptStruct GameplayAbilities.GameplayAbilitySpecContainer
struct GameplayAbilities_GameplayAbilitySpecContainer : public NetCore_FastArraySerializer
{
public:
	TArray<struct GameplayAbilities_GameplayAbilitySpec> Items;                                             // 0x108(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	class UAbilitySystemComponent*               Owner;                                             // 0x118(0x8)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GameplayAbilities.AttributeDefaults
struct GameplayAbilities_AttributeDefaults
{
public:
	TSubclassOf<class UAttributeSet>             Attributes;                                        // 0x0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                            DefaultStartingTable;                              // 0x8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct GameplayAbilities.GameplayAbilitySpecConfig
struct GameplayAbilities_GameplayAbilitySpecConfig
{
public:
	TSubclassOf<class UGameplayAbility>          Ability;                                           // 0x0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GameplayAbilities_ScalableFloat       LevelScalableFloat;                                // 0x8(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	int32                                        InputID;                                           // 0x30(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGameplayEffectGrantedAbilityRemovePolicy RemovalPolicy;                                     // 0x34(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_24FE[0x3];                                     // Fixing Size Of Struct 
};

// 0x0 (0x10 - 0x10)
// ScriptStruct GameplayAbilities.GameplayAbilityTargetingLocationInfoNetSerializerConfig
struct GameplayAbilities_GameplayAbilityTargetingLocationInfoNetSerializerConfig : public IrisCore_NetSerializerConfig
{
public:
};

// 0x190 (0x190 - 0x0)
// ScriptStruct GameplayAbilities.GameplayCuePendingExecute
struct GameplayAbilities_GameplayCuePendingExecute
{
public:
	uint8                                        Pad_2504[0x18];                                    // Fixing Size After Last Property  
	struct GameplayAbilities_PredictionKey       PredictionKey;                                     // 0x18(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGameplayCuePayloadType           PayloadType;                                       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_250D[0x7];                                     // Fixing Size After Last Property  
	class UAbilitySystemComponent*               OwningComponent;                                   // 0x38(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GameplayAbilities_GameplayEffectSpecForRPC FromSpec;                                          // 0x40(0x78)(NativeAccessSpecifierPublic)
	struct GameplayAbilities_GameplayCueParameters CueParameters;                                     // 0xB8(0xD8)(ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GameplayAbilities.GameplayCueNotifyActorArray
struct GameplayAbilities_GameplayCueNotifyActorArray
{
public:
	TArray<class AGameplayCueNotify_Actor*>      Actors;                                            // 0x0(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct GameplayAbilities.PreallocationInfo
struct GameplayAbilities_PreallocationInfo
{
public:
	TMap<TSubclassOf<class UObject>, struct GameplayAbilities_GameplayCueNotifyActorArray> PreallocatedInstances;                             // 0x0(0x50)(Transient, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class AGameplayCueNotify_Actor>> ClassesNeedingPreallocation;                       // 0x50(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPublic)
	uint8                                        Pad_2522[0x8];                                     // Fixing Size Of Struct 
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GameplayAbilities.MinimalGameplayCueReplicationProxyForNetSerializer
struct GameplayAbilities_MinimalGameplayCueReplicationProxyForNetSerializer
{
public:
	TArray<struct GameplayTags_GameplayTag>      Tags;                                              // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct Engine_Vector_NetQuantize>     Locations;                                         // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GameplayAbilities.MinimalReplicationTagCountMapForNetSerializer
struct GameplayAbilities_MinimalReplicationTagCountMapForNetSerializer
{
public:
	TArray<struct GameplayTags_GameplayTag>      Tags;                                              // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
};

// 0xC (0xC - 0x0)
// ScriptStruct GameplayAbilities.AbilityTriggerData
struct GameplayAbilities_AbilityTriggerData
{
public:
	struct GameplayTags_GameplayTag              TriggerTag;                                        // 0x0(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGameplayAbilityTriggerSource     TriggerSource;                                     // 0x8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2537[0x3];                                     // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GameplayAbilities.GameplayAbilityBindInfo
struct GameplayAbilities_GameplayAbilityBindInfo
{
public:
	enum class EGameplayAbilityInputBinds        Command;                                           // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_253E[0x7];                                     // Fixing Size After Last Property  
	TSubclassOf<class UGameplayAbility>          GameplayAbilityClass;                              // 0x8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GameplayAbilities.GameplayTargetDataFilter
struct GameplayAbilities_GameplayTargetDataFilter
{
public:
	uint8                                        Pad_2544[0x8];                                     // Fixing Size After Last Property  
	class AActor*                                SelfActor;                                         // 0x8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class AActor>                    RequiredActorClass;                                // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETargetDataFilterSelf             SelfFilter;                                        // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReverseFilter;                                    // 0x19(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2553[0x6];                                     // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GameplayAbilities.WorldReticleParameters
struct GameplayAbilities_WorldReticleParameters
{
public:
	struct CoreUObject_Vector                    AOEScale;                                          // 0x0(0x18)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GameplayAbilities.NetSerializeScriptStructCache
struct GameplayAbilities_NetSerializeScriptStructCache
{
public:
	TArray<class UScriptStruct*>                 ScriptStructs;                                     // 0x0(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GameplayAbilities.GameplayAttributeData
struct GameplayAbilities_GameplayAttributeData
{
public:
	uint8                                        Pad_2561[0x8];                                     // Fixing Size After Last Property  
	float                                        BaseValue;                                         // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        CurrentValue;                                      // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct GameplayAbilities.AttributeMetaData
struct GameplayAbilities_AttributeMetaData : public Engine_TableRowBase
{
public:
	float                                        BaseValue;                                         // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinValue;                                          // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxValue;                                          // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2569[0x4];                                     // Fixing Size After Last Property  
	class FString                                DerivedAttributeInfo;                              // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanStack;                                         // 0x28(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_256B[0x7];                                     // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// ScriptStruct GameplayAbilities.GameplayAbilityTargetData
struct GameplayAbilities_GameplayAbilityTargetData
{
public:
	uint8                                        Pad_257E[0x8];                                     // Fixing Size Of Struct 
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct GameplayAbilities.GameplayAbilityTargetingLocationInfo
struct GameplayAbilities_GameplayAbilityTargetingLocationInfo
{
public:
	uint8                                        Pad_258A[0x10];                                    // Fixing Size After Last Property  
	enum class EGameplayAbilityTargetingLocationType LocationType;                                      // 0x10(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_258C[0xF];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 LiteralTransform;                                  // 0x20(0x60)(BlueprintVisible, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                SourceActor;                                       // 0x80(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMeshComponent*                        SourceComponent;                                   // 0x88(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGameplayAbility*                      SourceAbility;                                     // 0x90(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SourceSocketName;                                  // 0x98(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x148 (0x150 - 0x8)
// ScriptStruct GameplayAbilities.GameplayAbilityTargetData_LocationInfo
struct GameplayAbilities_GameplayAbilityTargetData_LocationInfo : public GameplayAbilities_GameplayAbilityTargetData
{
public:
	uint8                                        Pad_259C[0x8];                                     // Fixing Size After Last Property  
	struct GameplayAbilities_GameplayAbilityTargetingLocationInfo SourceLocation;                                    // 0x10(0xA0)(Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct GameplayAbilities_GameplayAbilityTargetingLocationInfo TargetLocation;                                    // 0xB0(0xA0)(Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0xB8 (0xC0 - 0x8)
// ScriptStruct GameplayAbilities.GameplayAbilityTargetData_ActorArray
struct GameplayAbilities_GameplayAbilityTargetData_ActorArray : public GameplayAbilities_GameplayAbilityTargetData
{
public:
	uint8                                        Pad_25A9[0x8];                                     // Fixing Size After Last Property  
	struct GameplayAbilities_GameplayAbilityTargetingLocationInfo SourceLocation;                                    // 0x10(0xA0)(Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<TWeakObjectPtr<class AActor>>         TargetActorArray;                                  // 0xB0(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0xF0 (0xF8 - 0x8)
// ScriptStruct GameplayAbilities.GameplayAbilityTargetData_SingleTargetHit
struct GameplayAbilities_GameplayAbilityTargetData_SingleTargetHit : public GameplayAbilities_GameplayAbilityTargetData
{
public:
	struct Engine_HitResult                      HitResult;                                         // 0x8(0xE8)(IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bHitReplaced;                                      // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_25B3[0x7];                                     // Fixing Size Of Struct 
};

// 0x48 (0x48 - 0x0)
// ScriptStruct GameplayAbilities.GameplayAbilityActorInfo
struct GameplayAbilities_GameplayAbilityActorInfo
{
public:
	uint8                                        Pad_25B7[0x8];                                     // Fixing Size After Last Property  
	TWeakObjectPtr<class AActor>                 OwnerActor;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class AActor>                 AvatarActor;                                       // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class APlayerController>      PlayerController;                                  // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UAbilitySystemComponent> AbilitySystemComponent;                            // 0x20(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class USkeletalMeshComponent> SkeletalMeshComponent;                             // 0x28(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UAnimInstance>          AnimInstance;                                      // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UMovementComponent>     MovementComponent;                                 // 0x38(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  AffectedAnimInstanceTag;                           // 0x40(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GameplayAbilities.AbilityEndedData
struct GameplayAbilities_AbilityEndedData
{
public:
	class UGameplayAbility*                      AbilityThatEnded;                                  // 0x0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GameplayAbilities_GameplayAbilitySpecHandle AbilitySpecHandle;                                 // 0x8(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReplicateEndAbility;                              // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWasCancelled;                                     // 0xD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWasRetriggered;                                   // 0xE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_25D4[0x1];                                     // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GameplayAbilities.AbilityTaskDebugMessage
struct GameplayAbilities_AbilityTaskDebugMessage
{
public:
	class UGameplayTask*                         FromTask;                                          // 0x0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Message;                                           // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct GameplayAbilities.GameplayAbilitySpecHandleAndPredictionKey
struct GameplayAbilities_GameplayAbilitySpecHandleAndPredictionKey
{
public:
	struct GameplayAbilities_GameplayAbilitySpecHandle AbilityHandle;                                     // 0x0(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PredictionKeyAtCreation;                           // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct GameplayAbilities.GameplayCueTag
struct GameplayAbilities_GameplayCueTag
{
public:
	struct GameplayTags_GameplayTag              GameplayCueTag;                                    // 0x0(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x350 (0x350 - 0x0)
// ScriptStruct GameplayAbilities.MinimalGameplayCueReplicationProxy
struct GameplayAbilities_MinimalGameplayCueReplicationProxy
{
public:
	uint8                                        Pad_25ED[0x340];                                   // Fixing Size After Last Property  
	class UAbilitySystemComponent*               Owner;                                             // 0x340(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_25EE[0x8];                                     // Fixing Size Of Struct 
};

// 0x50 (0x50 - 0x0)
// ScriptStruct GameplayAbilities.GameplayCueObjectLibrary
struct GameplayAbilities_GameplayCueObjectLibrary
{
public:
	TArray<class FString>                        Paths;                                             // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_2602[0x20];                                    // Fixing Size After Last Property  
	class UObjectLibrary*                        ActorObjectLibrary;                                // 0x30(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObjectLibrary*                        StaticObjectLibrary;                               // 0x38(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGameplayCueSet*                       CueSet;                                            // 0x40(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2607[0x4];                                     // Fixing Size After Last Property  
	bool                                         bShouldSyncScan;                                   // 0x4C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldAsyncLoad;                                  // 0x4D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldSyncLoad;                                   // 0x4E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasBeenInitialized;                               // 0x4F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct GameplayAbilities.GameplayCueNotify_SpawnCondition
struct GameplayAbilities_GameplayCueNotify_SpawnCondition
{
public:
	enum class EGameplayCueNotify_LocallyControlledSource LocallyControlledSource;                           // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGameplayCueNotify_LocallyControlledPolicy LocallyControlledPolicy;                           // 0x1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2610[0x2];                                     // Fixing Size After Last Property  
	float                                        ChanceToPlay;                                      // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<enum class EPhysicalSurface>          AllowedSurfaceTypes;                               // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	uint8                                        Pad_2624[0x8];                                     // Fixing Size After Last Property  
	TArray<enum class EPhysicalSurface>          RejectedSurfaceTypes;                              // 0x20(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	uint8                                        Pad_2625[0x8];                                     // Fixing Size Of Struct 
};

// 0x40 (0x40 - 0x0)
// ScriptStruct GameplayAbilities.GameplayCueNotify_PlacementInfo
struct GameplayAbilities_GameplayCueNotify_PlacementInfo
{
public:
	class FName                                  SocketName;                                        // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGameplayCueNotify_AttachPolicy   AttachPolicy;                                      // 0x8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAttachmentRule                   AttachmentRule;                                    // 0x9(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_265A[0x2];                                     // Fixing Size After Last Property  
	uint8                                        bOverrideRotation : 1;                             // Mask: 0x1, PropSize: 0x10xC(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideScale : 1;                                // Mask: 0x2, PropSize: 0x10xC(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_A9 : 6;                                     // Fixing Bit-Field Size  
	uint8                                        Pad_2663[0x3];                                     // Fixing Size After Last Property  
	struct CoreUObject_Rotator                   RotationOverride;                                  // 0x10(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    ScaleOverride;                                     // 0x28(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct GameplayAbilities.GameplayCueNotify_SpawnResult
struct GameplayAbilities_GameplayCueNotify_SpawnResult
{
public:
	TArray<class UFXSystemComponent*>            FxSystemComponents;                                // 0x0(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<class UAudioComponent*>               AudioComponents;                                   // 0x10(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<class UCameraShakeBase*>              CameraShakes;                                      // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TScriptInterface<class ICameraLensEffectInterface>> CameraLensEffects;                                 // 0x30(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPublic)
	class UForceFeedbackComponent*               ForceFeedbackComponent;                            // 0x40(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APlayerController*                     ForceFeedbackTargetPC;                             // 0x48(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDecalComponent*                       DecalComponent;                                    // 0x50(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x88 (0x88 - 0x0)
// ScriptStruct GameplayAbilities.GameplayCueNotify_ParticleInfo
struct GameplayAbilities_GameplayCueNotify_ParticleInfo
{
public:
	struct GameplayAbilities_GameplayCueNotify_SpawnCondition SpawnConditionOverride;                            // 0x0(0x38)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct GameplayAbilities_GameplayCueNotify_PlacementInfo PlacementInfoOverride;                             // 0x38(0x40)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	class UNiagaraSystem*                        NiagaraSystem;                                     // 0x78(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideSpawnCondition : 1;                       // Mask: 0x1, PropSize: 0x10x80(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverridePlacementInfo : 1;                        // Mask: 0x2, PropSize: 0x10x80(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCastShadow : 1;                                   // Mask: 0x4, PropSize: 0x10x80(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2686[0x7];                                     // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// ScriptStruct GameplayAbilities.GameplayCueNotify_SoundParameterInterfaceInfo
struct GameplayAbilities_GameplayCueNotify_SoundParameterInterfaceInfo
{
public:
	class FName                                  StopTriggerName;                                   // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct GameplayAbilities.GameplayCueNotify_SoundInfo
struct GameplayAbilities_GameplayCueNotify_SoundInfo
{
public:
	struct GameplayAbilities_GameplayCueNotify_SpawnCondition SpawnConditionOverride;                            // 0x0(0x38)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct GameplayAbilities_GameplayCueNotify_PlacementInfo PlacementInfoOverride;                             // 0x38(0x40)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	class USoundBase*                            Sound;                                             // 0x78(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                            SoundCue;                                          // 0x80(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LoopingFadeOutDuration;                            // 0x88(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LoopingFadeVolumeLevel;                            // 0x8C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GameplayAbilities_GameplayCueNotify_SoundParameterInterfaceInfo SoundParameterInterfaceInfo;                       // 0x90(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        bOverrideSpawnCondition : 1;                       // Mask: 0x1, PropSize: 0x10x98(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverridePlacementInfo : 1;                        // Mask: 0x2, PropSize: 0x10x98(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseSoundParameterInterface : 1;                   // Mask: 0x4, PropSize: 0x10x98(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_26AD[0x7];                                     // Fixing Size Of Struct 
};

// 0x98 (0x98 - 0x0)
// ScriptStruct GameplayAbilities.GameplayCueNotify_CameraShakeInfo
struct GameplayAbilities_GameplayCueNotify_CameraShakeInfo
{
public:
	struct GameplayAbilities_GameplayCueNotify_SpawnCondition SpawnConditionOverride;                            // 0x0(0x38)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct GameplayAbilities_GameplayCueNotify_PlacementInfo PlacementInfoOverride;                             // 0x38(0x40)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	TSubclassOf<class UCameraShakeBase>          CameraShake;                                       // 0x78(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ShakeScale;                                        // 0x80(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGameplayCueNotify_EffectPlaySpace PlaySpace;                                         // 0x84(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_26C1[0x3];                                     // Fixing Size After Last Property  
	uint8                                        bOverrideSpawnCondition : 1;                       // Mask: 0x1, PropSize: 0x10x88(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverridePlacementInfo : 1;                        // Mask: 0x2, PropSize: 0x10x88(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bPlayInWorld : 1;                                  // Mask: 0x4, PropSize: 0x10x88(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_AF : 5;                                     // Fixing Bit-Field Size  
	uint8                                        Pad_26DD[0x3];                                     // Fixing Size After Last Property  
	float                                        WorldInnerRadius;                                  // 0x8C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WorldOuterRadius;                                  // 0x90(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WorldFalloffExponent;                              // 0x94(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// ScriptStruct GameplayAbilities.GameplayCueNotify_CameraLensEffectInfo
struct GameplayAbilities_GameplayCueNotify_CameraLensEffectInfo
{
public:
	struct GameplayAbilities_GameplayCueNotify_SpawnCondition SpawnConditionOverride;                            // 0x0(0x38)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct GameplayAbilities_GameplayCueNotify_PlacementInfo PlacementInfoOverride;                             // 0x38(0x40)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	TSubclassOf<class AActor>                    CameraLensEffect;                                  // 0x78(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideSpawnCondition : 1;                       // Mask: 0x1, PropSize: 0x10x80(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverridePlacementInfo : 1;                        // Mask: 0x2, PropSize: 0x10x80(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bPlayInWorld : 1;                                  // Mask: 0x4, PropSize: 0x10x80(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_B1 : 5;                                     // Fixing Bit-Field Size  
	uint8                                        Pad_26F0[0x3];                                     // Fixing Size After Last Property  
	float                                        WorldInnerRadius;                                  // 0x84(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WorldOuterRadius;                                  // 0x88(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_26F4[0x4];                                     // Fixing Size Of Struct 
};

// 0x98 (0x98 - 0x0)
// ScriptStruct GameplayAbilities.GameplayCueNotify_ForceFeedbackInfo
struct GameplayAbilities_GameplayCueNotify_ForceFeedbackInfo
{
public:
	struct GameplayAbilities_GameplayCueNotify_SpawnCondition SpawnConditionOverride;                            // 0x0(0x38)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct GameplayAbilities_GameplayCueNotify_PlacementInfo PlacementInfoOverride;                             // 0x38(0x40)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	class UForceFeedbackEffect*                  ForceFeedbackEffect;                               // 0x78(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ForceFeedbackTag;                                  // 0x80(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsLooping : 1;                                    // Mask: 0x1, PropSize: 0x10x88(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideSpawnCondition : 1;                       // Mask: 0x2, PropSize: 0x10x88(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverridePlacementInfo : 1;                        // Mask: 0x4, PropSize: 0x10x88(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bPlayInWorld : 1;                                  // Mask: 0x8, PropSize: 0x10x88(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_B2 : 4;                                     // Fixing Bit-Field Size  
	uint8                                        Pad_270B[0x3];                                     // Fixing Size After Last Property  
	float                                        WorldIntensity;                                    // 0x8C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UForceFeedbackAttenuation*             WorldAttenuation;                                  // 0x90(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GameplayAbilities.GameplayCueNotify_InputDevicePropertyInfo
struct GameplayAbilities_GameplayCueNotify_InputDevicePropertyInfo
{
public:
	TArray<TSubclassOf<class UInputDeviceProperty>> DeviceProperties;                                  // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0xA8 (0xA8 - 0x0)
// ScriptStruct GameplayAbilities.GameplayCueNotify_DecalInfo
struct GameplayAbilities_GameplayCueNotify_DecalInfo
{
public:
	struct GameplayAbilities_GameplayCueNotify_SpawnCondition SpawnConditionOverride;                            // 0x0(0x38)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct GameplayAbilities_GameplayCueNotify_PlacementInfo PlacementInfoOverride;                             // 0x38(0x40)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    DecalMaterial;                                     // 0x78(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    DecalSize;                                         // 0x80(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideSpawnCondition : 1;                       // Mask: 0x1, PropSize: 0x10x98(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverridePlacementInfo : 1;                        // Mask: 0x2, PropSize: 0x10x98(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideFadeOut : 1;                              // Mask: 0x4, PropSize: 0x10x98(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_B7 : 5;                                     // Fixing Bit-Field Size  
	uint8                                        Pad_2751[0x3];                                     // Fixing Size After Last Property  
	float                                        FadeOutStartDelay;                                 // 0x9C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FadeOutDuration;                                   // 0xA0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2753[0x4];                                     // Fixing Size Of Struct 
};

// 0x298 (0x298 - 0x0)
// ScriptStruct GameplayAbilities.GameplayCueNotify_BurstEffects
struct GameplayAbilities_GameplayCueNotify_BurstEffects
{
public:
	TArray<struct GameplayAbilities_GameplayCueNotify_ParticleInfo> BurstParticles;                                    // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TArray<struct GameplayAbilities_GameplayCueNotify_SoundInfo> BurstSounds;                                       // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct GameplayAbilities_GameplayCueNotify_CameraShakeInfo BurstCameraShake;                                  // 0x20(0x98)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct GameplayAbilities_GameplayCueNotify_CameraLensEffectInfo BurstCameraLensEffect;                             // 0xB8(0x90)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct GameplayAbilities_GameplayCueNotify_ForceFeedbackInfo BurstForceFeedback;                                // 0x148(0x98)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct GameplayAbilities_GameplayCueNotify_InputDevicePropertyInfo BurstDevicePropertyEffect;                         // 0x1E0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct GameplayAbilities_GameplayCueNotify_DecalInfo BurstDecal;                                        // 0x1F0(0xA8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
};

// 0x1F0 (0x1F0 - 0x0)
// ScriptStruct GameplayAbilities.GameplayCueNotify_LoopingEffects
struct GameplayAbilities_GameplayCueNotify_LoopingEffects
{
public:
	TArray<struct GameplayAbilities_GameplayCueNotify_ParticleInfo> LoopingParticles;                                  // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TArray<struct GameplayAbilities_GameplayCueNotify_SoundInfo> LoopingSounds;                                     // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct GameplayAbilities_GameplayCueNotify_CameraShakeInfo LoopingCameraShake;                                // 0x20(0x98)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct GameplayAbilities_GameplayCueNotify_CameraLensEffectInfo LoopingCameraLensEffect;                           // 0xB8(0x90)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct GameplayAbilities_GameplayCueNotify_ForceFeedbackInfo LoopingForceFeedback;                              // 0x148(0x98)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct GameplayAbilities_GameplayCueNotify_InputDevicePropertyInfo LoopingInputDevicePropertyEffect;                  // 0x1E0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct GameplayAbilities.GameplayCueNotifyData
struct GameplayAbilities_GameplayCueNotifyData
{
public:
	struct GameplayTags_GameplayTag              GameplayCueTag;                                    // 0x0(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_SoftObjectPath            GameplayCueNotifyObj;                              // 0x8(0x20)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UObject>                   LoadedGameplayCueClass;                            // 0x28(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2785[0x8];                                     // Fixing Size Of Struct 
};

// 0x4 (0x4 - 0x0)
// ScriptStruct GameplayAbilities.GameplayCueTranslatorNodeIndex
struct GameplayAbilities_GameplayCueTranslatorNodeIndex
{
public:
	int32                                        Index;                                             // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GameplayAbilities.GameplayCueTranslationLink
struct GameplayAbilities_GameplayCueTranslationLink
{
public:
	class UGameplayCueTranslator*                RulesCDO;                                          // 0x0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2792[0x10];                                    // Fixing Size Of Struct 
};

// 0x78 (0x78 - 0x0)
// ScriptStruct GameplayAbilities.GameplayCueTranslatorNode
struct GameplayAbilities_GameplayCueTranslatorNode
{
public:
	TArray<struct GameplayAbilities_GameplayCueTranslationLink> Links;                                             // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct GameplayAbilities_GameplayCueTranslatorNodeIndex CachedIndex;                                       // 0x10(0x4)(NoDestructor, NativeAccessSpecifierPublic)
	struct GameplayTags_GameplayTag              CachedGameplayTag;                                 // 0x14(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  CachedGameplayTagName;                             // 0x1C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2796[0x54];                                    // Fixing Size Of Struct 
};

// 0x80 (0x80 - 0x0)
// ScriptStruct GameplayAbilities.GameplayCueTranslationManager
struct GameplayAbilities_GameplayCueTranslationManager
{
public:
	TArray<struct GameplayAbilities_GameplayCueTranslatorNode> TranslationLUT;                                    // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TMap<class FName, struct GameplayAbilities_GameplayCueTranslatorNodeIndex> TranslationNameToIndexMap;                         // 0x10(0x50)(NativeAccessSpecifierPrivate)
	class UGameplayTagsManager*                  TagManager;                                        // 0x60(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_27AE[0x18];                                    // Fixing Size Of Struct 
};

// 0x110 (0x110 - 0x0)
// ScriptStruct GameplayAbilities.AttributeBasedFloat
struct GameplayAbilities_AttributeBasedFloat
{
public:
	struct GameplayAbilities_ScalableFloat       Coefficient;                                       // 0x0(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct GameplayAbilities_ScalableFloat       PreMultiplyAdditiveValue;                          // 0x28(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct GameplayAbilities_ScalableFloat       PostMultiplyAdditiveValue;                         // 0x50(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct GameplayAbilities_GameplayEffectAttributeCaptureDefinition BackingAttribute;                                  // 0x78(0x40)(Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Engine_CurveTableRowHandle            AttributeCurve;                                    // 0xB8(0x10)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAttributeBasedFloatCalculationType AttributeCalculationType;                          // 0xC8(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGameplayModEvaluationChannel     FinalChannel;                                      // 0xC9(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27B9[0x6];                                     // Fixing Size After Last Property  
	struct GameplayTags_GameplayTagContainer     SourceTagFilter;                                   // 0xD0(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct GameplayTags_GameplayTagContainer     TargetTagFilter;                                   // 0xF0(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// ScriptStruct GameplayAbilities.CustomCalculationBasedFloat
struct GameplayAbilities_CustomCalculationBasedFloat
{
public:
	TSubclassOf<class UGameplayModMagnitudeCalculation> CalculationClassMagnitude;                         // 0x0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GameplayAbilities_ScalableFloat       Coefficient;                                       // 0x8(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct GameplayAbilities_ScalableFloat       PreMultiplyAdditiveValue;                          // 0x30(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct GameplayAbilities_ScalableFloat       PostMultiplyAdditiveValue;                         // 0x58(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct Engine_CurveTableRowHandle            FinalLookupCurve;                                  // 0x80(0x10)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GameplayAbilities.SetByCallerFloat
struct GameplayAbilities_SetByCallerFloat
{
public:
	class FName                                  DataName;                                          // 0x0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GameplayTags_GameplayTag              DataTag;                                           // 0x8(0x8)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1E0 (0x1E0 - 0x0)
// ScriptStruct GameplayAbilities.GameplayEffectModifierMagnitude
struct GameplayAbilities_GameplayEffectModifierMagnitude
{
public:
	enum class EGameplayEffectMagnitudeCalculation MagnitudeCalculationType;                          // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_27CB[0x7];                                     // Fixing Size After Last Property  
	struct GameplayAbilities_ScalableFloat       ScalableFloatMagnitude;                            // 0x8(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct GameplayAbilities_AttributeBasedFloat AttributeBasedMagnitude;                           // 0x30(0x110)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct GameplayAbilities_CustomCalculationBasedFloat CustomMagnitude;                                   // 0x140(0x90)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct GameplayAbilities_SetByCallerFloat    SetByCallerMagnitude;                              // 0x1D0(0x10)(Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct GameplayAbilities.GameplayModEvaluationChannelSettings
struct GameplayAbilities_GameplayModEvaluationChannelSettings
{
public:
	enum class EGameplayModEvaluationChannel     Channel;                                           // 0x0(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0x348 (0x348 - 0x0)
// ScriptStruct GameplayAbilities.GameplayEffectExecutionScopedModifierInfo
struct GameplayAbilities_GameplayEffectExecutionScopedModifierInfo
{
public:
	struct GameplayAbilities_GameplayEffectAttributeCaptureDefinition CapturedAttribute;                                 // 0x0(0x40)(Edit, DisableEditOnInstance, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GameplayTags_GameplayTag              TransientAggregatorIdentifier;                     // 0x40(0x8)(Edit, DisableEditOnInstance, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGameplayEffectScopedModifierAggregatorType AggregatorType;                                    // 0x48(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGameplayModOp                    ModifierOp;                                        // 0x49(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27F5[0x6];                                     // Fixing Size After Last Property  
	struct GameplayAbilities_GameplayEffectModifierMagnitude ModifierMagnitude;                                 // 0x50(0x1E0)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct GameplayAbilities_GameplayModEvaluationChannelSettings EvaluationChannelSettings;                         // 0x230(0x1)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_27F9[0x7];                                     // Fixing Size After Last Property  
	struct GameplayAbilities_GameplayTagRequirements SourceTags;                                        // 0x238(0x88)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct GameplayAbilities_GameplayTagRequirements TargetTags;                                        // 0x2C0(0x88)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct GameplayAbilities.ConditionalGameplayEffect
struct GameplayAbilities_ConditionalGameplayEffect
{
public:
	TSubclassOf<class UGameplayEffect>           EffectClass;                                       // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GameplayTags_GameplayTagContainer     RequiredSourceTags;                                // 0x8(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct GameplayAbilities.GameplayEffectExecutionDefinition
struct GameplayAbilities_GameplayEffectExecutionDefinition
{
public:
	TSubclassOf<class UGameplayEffectExecutionCalculation> CalculationClass;                                  // 0x0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GameplayTags_GameplayTagContainer     PassedInTags;                                      // 0x8(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct GameplayAbilities_GameplayEffectExecutionScopedModifierInfo> CalculationModifiers;                              // 0x28(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct GameplayAbilities_ConditionalGameplayEffect> ConditionalGameplayEffects;                        // 0x38(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x338 (0x338 - 0x0)
// ScriptStruct GameplayAbilities.GameplayModifierInfo
struct GameplayAbilities_GameplayModifierInfo
{
public:
	struct GameplayAbilities_GameplayAttribute   Attribute;                                         // 0x0(0x38)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGameplayModOp                    ModifierOp;                                        // 0x38(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_280C[0x7];                                     // Fixing Size After Last Property  
	struct GameplayAbilities_GameplayEffectModifierMagnitude ModifierMagnitude;                                 // 0x40(0x1E0)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct GameplayAbilities_GameplayModEvaluationChannelSettings EvaluationChannelSettings;                         // 0x220(0x1)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_2812[0x7];                                     // Fixing Size After Last Property  
	struct GameplayAbilities_GameplayTagRequirements SourceTags;                                        // 0x228(0x88)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct GameplayAbilities_GameplayTagRequirements TargetTags;                                        // 0x2B0(0x88)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct GameplayAbilities.GameplayEffectCue
struct GameplayAbilities_GameplayEffectCue
{
public:
	struct GameplayAbilities_GameplayAttribute   MagnitudeAttribute;                                // 0x0(0x38)(Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinLevel;                                          // 0x38(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxLevel;                                          // 0x3C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GameplayTags_GameplayTagContainer     GameplayCueTags;                                   // 0x40(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct GameplayAbilities.InheritedTagContainer
struct GameplayAbilities_InheritedTagContainer
{
public:
	struct GameplayTags_GameplayTagContainer     CombinedTags;                                      // 0x0(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic)
	struct GameplayTags_GameplayTagContainer     Added;                                             // 0x20(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct GameplayTags_GameplayTagContainer     Removed;                                           // 0x40(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x88 (0x88 - 0x0)
// ScriptStruct GameplayAbilities.ActiveGameplayEffectQuery
struct GameplayAbilities_ActiveGameplayEffectQuery
{
public:
	uint8                                        Pad_2826[0x88];                                    // Fixing Size Of Struct 
};

// 0x1 (0x1 - 0x0)
// ScriptStruct GameplayAbilities.GameplayEffectVersion
struct GameplayAbilities_GameplayEffectVersion
{
public:
	uint8                                        Pad_2829[0x1];                                     // Fixing Size Of Struct 
};

// 0xF8 (0xF8 - 0x0)
// ScriptStruct GameplayAbilities.GameplayEffectCustomExecutionParameters
struct GameplayAbilities_GameplayEffectCustomExecutionParameters
{
public:
	uint8                                        Pad_282D[0xF8];                                    // Fixing Size Of Struct 
};

// 0x50 (0x50 - 0x0)
// ScriptStruct GameplayAbilities.GameplayModifierEvaluatedData
struct GameplayAbilities_GameplayModifierEvaluatedData
{
public:
	struct GameplayAbilities_GameplayAttribute   Attribute;                                         // 0x0(0x38)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGameplayModOp                    ModifierOp;                                        // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2844[0x3];                                     // Fixing Size After Last Property  
	float                                        Magnitude;                                         // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GameplayAbilities_ActiveGameplayEffectHandle Handle;                                            // 0x40(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsValid;                                           // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2845[0x7];                                     // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GameplayAbilities.GameplayEffectCustomExecutionOutput
struct GameplayAbilities_GameplayEffectCustomExecutionOutput
{
public:
	TArray<struct GameplayAbilities_GameplayModifierEvaluatedData> OutputModifiers;                                   // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        bTriggerConditionalGameplayEffects : 1;            // Mask: 0x1, PropSize: 0x10x10(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bHandledStackCountManually : 1;                    // Mask: 0x2, PropSize: 0x10x10(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bHandledGameplayCuesManually : 1;                  // Mask: 0x4, PropSize: 0x10x10(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2851[0x7];                                     // Fixing Size Of Struct 
};

// 0x80 (0x80 - 0x0)
// ScriptStruct GameplayAbilities.GameplayEffectContext
struct GameplayAbilities_GameplayEffectContext
{
public:
	uint8                                        Pad_2855[0x8];                                     // Fixing Size After Last Property  
	TWeakObjectPtr<class AActor>                 Instigator;                                        // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class AActor>                 EffectCauser;                                      // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UGameplayAbility>       AbilityCDO;                                        // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UGameplayAbility>       AbilityInstanceNotReplicated;                      // 0x20(0x8)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        AbilityLevel;                                      // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UObject>                SourceObject;                                      // 0x2C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UAbilitySystemComponent> InstigatorAbilitySystemComponent;                  // 0x34(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_285A[0x4];                                     // Fixing Size After Last Property  
	TArray<TWeakObjectPtr<class AActor>>         Actors;                                            // 0x40(0x10)(ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_285D[0x10];                                    // Fixing Size After Last Property  
	struct CoreUObject_Vector                    WorldOrigin;                                       // 0x60(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bHasWorldOrigin : 1;                               // Mask: 0x1, PropSize: 0x10x78(0x1)(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bReplicateSourceObject : 1;                        // Mask: 0x2, PropSize: 0x10x78(0x1)(RepSkip, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bReplicateInstigator : 1;                          // Mask: 0x4, PropSize: 0x10x78(0x1)(RepSkip, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bReplicateEffectCauser : 1;                        // Mask: 0x8, PropSize: 0x10x78(0x1)(RepSkip, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2878[0x7];                                     // Fixing Size Of Struct 
};

// 0x48 (0x48 - 0x0)
// ScriptStruct GameplayAbilities.GameplayTagBlueprintPropertyMapping
struct GameplayAbilities_GameplayTagBlueprintPropertyMapping
{
public:
	struct GameplayTags_GameplayTag              TagToMap;                                          // 0x0(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FFieldPathProperty_                          PropertyToEdit;                                    // 0x8(0x20)(Edit, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  PropertyName;                                      // 0x28(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Guid                      PropertyGuid;                                      // 0x30(0x10)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2882[0x8];                                     // Fixing Size Of Struct 
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GameplayAbilities.GameplayTagBlueprintPropertyMap
struct GameplayAbilities_GameplayTagBlueprintPropertyMap
{
public:
	uint8                                        Pad_2886[0x10];                                    // Fixing Size After Last Property  
	TArray<struct GameplayAbilities_GameplayTagBlueprintPropertyMapping> PropertyMappings;                                  // 0x10(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct GameplayAbilities.GameplayTagReponsePair
struct GameplayAbilities_GameplayTagReponsePair
{
public:
	struct GameplayTags_GameplayTag              Tag;                                               // 0x0(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UGameplayEffect>           ResponseGameplayEffect;                            // 0x8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class UGameplayEffect>>   ResponseGameplayEffects;                           // 0x10(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	int32                                        SoftCountCap;                                      // 0x20(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2892[0x4];                                     // Fixing Size Of Struct 
};

// 0x50 (0x50 - 0x0)
// ScriptStruct GameplayAbilities.GameplayTagResponseTableEntry
struct GameplayAbilities_GameplayTagResponseTableEntry
{
public:
	struct GameplayAbilities_GameplayTagReponsePair Positive;                                          // 0x0(0x28)(Edit, NativeAccessSpecifierPublic)
	struct GameplayAbilities_GameplayTagReponsePair Negative;                                          // 0x28(0x28)(Edit, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// ScriptStruct GameplayAbilities.MovieSceneGameplayCueKey
struct GameplayAbilities_MovieSceneGameplayCueKey
{
public:
	struct GameplayAbilities_GameplayCueTag      Cue;                                               // 0x0(0x8)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Location;                                          // 0x8(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Normal;                                            // 0x20(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  AttachSocketName;                                  // 0x38(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NormalizedMagnitude;                               // 0x40(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct MovieScene_MovieSceneObjectBindingID  Instigator;                                        // 0x44(0x18)(Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct MovieScene_MovieSceneObjectBindingID  EffectCauser;                                      // 0x5C(0x18)(Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28A4[0x4];                                     // Fixing Size After Last Property  
	class UPhysicalMaterial*                     PhysicalMaterial;                                  // 0x78(0x8)(Edit, ZeroConstructor, NoDestructor, AdvancedDisplay, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        GameplayEffectLevel;                               // 0x80(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AbilityLevel;                                      // 0x84(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAttachToBinding;                                  // 0x88(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28AA[0x7];                                     // Fixing Size Of Struct 
};

// 0xA8 (0xF8 - 0x50)
// ScriptStruct GameplayAbilities.MovieSceneGameplayCueChannel
struct GameplayAbilities_MovieSceneGameplayCueChannel : public MovieScene_MovieSceneChannel
{
public:
	TArray<struct CoreUObject_FrameNumber>       KeyTimes;                                          // 0x50(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct GameplayAbilities_MovieSceneGameplayCueKey> KeyValues;                                         // 0x60(0x10)(ZeroConstructor, AssetRegistrySearchable, NativeAccessSpecifierPrivate)
	uint8                                        Pad_28AC[0x88];                                    // Fixing Size Of Struct 
};

// 0x0 (0x10 - 0x10)
// ScriptStruct GameplayAbilities.GameplayAbilityRepAnimMontageNetSerializerConfig
struct GameplayAbilities_GameplayAbilityRepAnimMontageNetSerializerConfig : public IrisCore_NetSerializerConfig
{
public:
};

// 0x0 (0x28 - 0x28)
// ScriptStruct GameplayAbilities.GameplayEffectContextHandleNetSerializerConfig
struct GameplayAbilities_GameplayEffectContextHandleNetSerializerConfig : public IrisCore_PolymorphicStructNetSerializerConfig
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct GameplayAbilities.GameplayEffectContextNetSerializerConfig
struct GameplayAbilities_GameplayEffectContextNetSerializerConfig : public IrisCore_NetSerializerConfig
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct GameplayAbilities.MinimalGameplayCueReplicationProxyNetSerializerConfig
struct GameplayAbilities_MinimalGameplayCueReplicationProxyNetSerializerConfig : public IrisCore_NetSerializerConfig
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct GameplayAbilities.MinimalReplicationTagCountMapNetSerializerConfig
struct GameplayAbilities_MinimalReplicationTagCountMapNetSerializerConfig : public IrisCore_NetSerializerConfig
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct GameplayAbilities.PredictionKeyNetSerializerConfig
struct GameplayAbilities_PredictionKeyNetSerializerConfig : public IrisCore_NetSerializerConfig
{
public:
};

}


