#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x30 - 0x28)
// Class GameplayBehaviorSmartObjectsModule.GameplayBehaviorSmartObjectBehaviorDefinition
class UGameplayBehaviorSmartObjectBehaviorDefinition : public USmartObjectBehaviorDefinition
{
public:
	class UGameplayBehaviorConfig*               GameplayBehaviorConfig;                            // 0x28(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGameplayBehaviorSmartObjectBehaviorDefinition* GetDefaultObj();

};

// 0x70 (0xE0 - 0x70)
// Class GameplayBehaviorSmartObjectsModule.AITask_UseGameplayBehaviorSmartObject
class UAITask_UseGameplayBehaviorSmartObject : public UAITask
{
public:
	FMulticastInlineDelegateProperty_            OnSucceeded;                                       // 0x70(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnFailed;                                          // 0x80(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnMoveToFailed;                                    // 0x90(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	class UAITask_MoveTo*                        MoveToTask;                                        // 0xA0(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGameplayBehavior*                     GameplayBehavior;                                  // 0xA8(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_C5F[0x30];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UAITask_UseGameplayBehaviorSmartObject* GetDefaultObj();

	class UAITask_UseGameplayBehaviorSmartObject* UseSmartObjectWithGameplayBehavior(class AAIController* Controller, const struct SmartObjectsModule_SmartObjectClaimHandle& ClaimHandle, bool bLockAILogic);
	class UAITask_UseGameplayBehaviorSmartObject* UseGameplayBehaviorSmartObject(class AAIController* Controller, class AActor* SmartObjectActor, class USmartObjectComponent* SmartObjectComponent, bool bLockAILogic);
	class UAITask_UseGameplayBehaviorSmartObject* MoveToAndUseSmartObjectWithGameplayBehavior(class AAIController* Controller, const struct SmartObjectsModule_SmartObjectClaimHandle& ClaimHandle, bool bLockAILogic);
};

// 0xA8 (0x118 - 0x70)
// Class GameplayBehaviorSmartObjectsModule.BTTask_FindAndUseGameplayBehaviorSmartObject
class UBTTask_FindAndUseGameplayBehaviorSmartObject : public UBTTaskNode
{
public:
	struct GameplayTags_GameplayTagQuery         ActivityRequirements;                              // 0x70(0x48)(Edit, Protected, NativeAccessSpecifierProtected)
	struct AIModule_EQSParametrizedQueryExecutionRequest EQSRequest;                                        // 0xB8(0x48)(Edit, Protected, NativeAccessSpecifierProtected)
	float                                        Radius;                                            // 0x100(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_C7F[0x14];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UBTTask_FindAndUseGameplayBehaviorSmartObject* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GameplayBehaviorSmartObjectsModule.GameplayBehaviorSmartObjectsBlueprintFunctionLibrary
class UGameplayBehaviorSmartObjectsBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGameplayBehaviorSmartObjectsBlueprintFunctionLibrary* GetDefaultObj();

	bool UseGameplayBehaviorSmartObject(class AActor* Avatar, class AActor* SmartObject);
};

}


