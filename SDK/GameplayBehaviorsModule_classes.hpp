#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x80 (0xE8 - 0x68)
// Class GameplayBehaviorsModule.BTDecorator_GameplayTagQuery
class UBTDecorator_GameplayTagQuery : public UBTDecorator
{
public:
	struct AIModule_BlackboardKeySelector        ActorForGameplayTagQuery;                          // 0x68(0x28)(Edit, Protected, NativeAccessSpecifierProtected)
	struct GameplayTags_GameplayTagQuery         GameplayTagQuery;                                  // 0x90(0x48)(Edit, Protected, NativeAccessSpecifierProtected)
	TArray<struct GameplayTags_GameplayTag>      QueryTags;                                         // 0xD8(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UBTDecorator_GameplayTagQuery* GetDefaultObj();

};

// 0x8 (0x78 - 0x70)
// Class GameplayBehaviorsModule.BTTask_StopGameplayBehavior
class UBTTask_StopGameplayBehavior : public UBTTaskNode
{
public:
	TSubclassOf<class UGameplayBehavior>         BehaviorToStop;                                    // 0x70(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UBTTask_StopGameplayBehavior* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class GameplayBehaviorsModule.GameplayBehaviorConfig
class UGameplayBehaviorConfig : public UObject
{
public:
	TSubclassOf<class UGameplayBehavior>         BehaviorClass;                                     // 0x28(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UGameplayBehaviorConfig* GetDefaultObj();

};

// 0x30 (0x60 - 0x30)
// Class GameplayBehaviorsModule.GameplayBehaviorConfig_BehaviorTree
class UGameplayBehaviorConfig_BehaviorTree : public UGameplayBehaviorConfig
{
public:
	TSoftObjectPtr<class UBehaviorTree>          BehaviorTree;                                      // 0x30(0x28)(Edit, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bRevertToPreviousBTOnFinish : 1;                   // Mask: 0x1, PropSize: 0x10x58(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_27B[0x7];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UGameplayBehaviorConfig_BehaviorTree* GetDefaultObj();

};

// 0x68 (0x90 - 0x28)
// Class GameplayBehaviorsModule.GameplayBehavior
class UGameplayBehavior : public UObject
{
public:
	uint8                                        Pad_2FA[0x14];                                     // Fixing Size After Last Property  
	struct GameplayTags_GameplayTag              ActionTag;                                         // 0x3C(0x8)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2FC[0x1C];                                     // Fixing Size After Last Property  
	TArray<class AActor*>                        RelevantActors;                                    // 0x60(0x10)(Edit, BlueprintVisible, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	class AActor*                                TransientSmartObjectOwner;                         // 0x70(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AActor*                                TransientAvatar;                                   // 0x78(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UGameplayTask*>                 ActiveTasks;                                       // 0x80(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UGameplayBehavior* GetDefaultObj();

	void K2_TriggerBehavior(class AActor* Avatar, class UGameplayBehaviorConfig* Config, class AActor* SmartObjectOwner);
	void K2_OnTriggeredPawn(class APawn* Avatar, class UGameplayBehaviorConfig* Config, class AActor* SmartObjectOwner);
	void K2_OnTriggeredCharacter(class ACharacter* Avatar, class UGameplayBehaviorConfig* Config, class AActor* SmartObjectOwner);
	void K2_OnTriggered(class AActor* Avatar, class UGameplayBehaviorConfig* Config, class AActor* SmartObjectOwner);
	void K2_OnFinishedPawn(class APawn* Avatar, bool bWasInterrupted);
	void K2_OnFinishedCharacter(class ACharacter* Avatar, bool bWasInterrupted);
	void K2_OnFinished(class AActor* Avatar, bool bWasInterrupted);
	int32 K2_GetNextActorIndexInSequence(int32 CurrentIndex);
	void K2_EndBehavior(class AActor* Avatar);
	void K2_AbortBehavior(class AActor* Avatar);
};

// 0x20 (0xB0 - 0x90)
// Class GameplayBehaviorsModule.GameplayBehavior_BehaviorTree
class UGameplayBehavior_BehaviorTree : public UGameplayBehavior
{
public:
	class UBehaviorTree*                         PreviousBT;                                        // 0x90(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AAIController*                         AIController;                                      // 0x98(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bSingleRun;                                        // 0xA0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_314[0xF];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UGameplayBehavior_BehaviorTree* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class GameplayBehaviorsModule.BlackboardKeyType_GameplayTag
class UBlackboardKeyType_GameplayTag : public UBlackboardKeyType
{
public:

	static class UClass* StaticClass();
	static class UBlackboardKeyType_GameplayTag* GetDefaultObj();

};

// 0x38 (0x68 - 0x30)
// Class GameplayBehaviorsModule.GameplayBehaviorConfig_Animation
class UGameplayBehaviorConfig_Animation : public UGameplayBehaviorConfig
{
public:
	TSoftObjectPtr<class UAnimMontage>           AnimMontage;                                       // 0x30(0x28)(Edit, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        PlayRate;                                          // 0x58(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  StartSectionName;                                  // 0x5C(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bLoop : 1;                                         // Mask: 0x1, PropSize: 0x10x64(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_32B[0x3];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UGameplayBehaviorConfig_Animation* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GameplayBehaviorsModule.GameplayBehaviorsBlueprintFunctionLibrary
class UGameplayBehaviorsBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGameplayBehaviorsBlueprintFunctionLibrary* GetDefaultObj();

	void SetValueAsGameplayTagForBlackboardComp(class UBlackboardComponent* BlackboardComp, class FName& KeyName, const struct GameplayTags_GameplayTagContainer& GameplayTagValue);
	void SetBlackboardValueAsGameplayTag(class UBTNode* NodeOwner, struct AIModule_BlackboardKeySelector& Key, const struct GameplayTags_GameplayTagContainer& Value);
	struct GameplayTags_GameplayTagContainer GetBlackboardValueAsGameplayTagFromBlackboardComp(class UBlackboardComponent* BlackboardComp, class FName& KeyName);
	struct GameplayTags_GameplayTagContainer GetBlackboardValueAsGameplayTag(class UBTNode* NodeOwner, struct AIModule_BlackboardKeySelector& Key);
	void AddGameplayTagFilterToBlackboardKeySelector(struct AIModule_BlackboardKeySelector* InSelector, class UObject* Owner, class FName PropertyName);
};

// 0x50 (0x80 - 0x30)
// Class GameplayBehaviorsModule.GameplayBehaviorSubsystem
class UGameplayBehaviorSubsystem : public UWorldSubsystem
{
public:
	TMap<class AActor*, struct GameplayBehaviorsModule_AgentGameplayBehaviors> AgentGameplayBehaviors;                            // 0x30(0x50)(Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UGameplayBehaviorSubsystem* GetDefaultObj();

};

// 0x10 (0xA0 - 0x90)
// Class GameplayBehaviorsModule.GameplayBehavior_AnimationBased
class UGameplayBehavior_AnimationBased : public UGameplayBehavior
{
public:
	TArray<struct GameplayBehaviorsModule_MontagePlaybackData> ActivePlayback;                                    // 0x90(0x10)(ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UGameplayBehavior_AnimationBased* GetDefaultObj();

	void OnMontageFinished(class UAnimMontage* Montage, bool bInterrupted, class AActor* InAvatar);
};

}


