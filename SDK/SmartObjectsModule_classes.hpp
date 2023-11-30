#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x120 (0x170 - 0x50)
// Class SmartObjectsModule.EnvQueryGenerator_SmartObjects
class UEnvQueryGenerator_SmartObjects : public UEnvQueryGenerator
{
public:
	TSubclassOf<class UEnvQueryContext>          QueryOriginContext;                                // 0x50(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2E0[0x8];                                      // Fixing Size After Last Property  
	struct SmartObjectsModule_SmartObjectRequestFilter SmartObjectRequestFilter;                          // 0x60(0xF0)(Edit, Protected, NativeAccessSpecifierProtected)
	struct CoreUObject_Vector                    QueryBoxExtent;                                    // 0x150(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bOnlyClaimable;                                    // 0x168(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2E3[0x7];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UEnvQueryGenerator_SmartObjects* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class SmartObjectsModule.EnvQueryItemType_SmartObject
class UEnvQueryItemType_SmartObject : public UEnvQueryItemType_VectorBase
{
public:

	static class UClass* StaticClass();
	static class UEnvQueryItemType_SmartObject* GetDefaultObj();

};

// 0x10 (0x48 - 0x38)
// Class SmartObjectsModule.SmartObjectSettings
class USmartObjectSettings : public UDeveloperSettings
{
public:
	enum class ESmartObjectTagFilteringPolicy    DefaultUserTagsFilteringPolicy;                    // 0x38(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESmartObjectTagMergingPolicy      DefaultActivityTagsMergingPolicy;                  // 0x39(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_305[0x6];                                      // Fixing Size After Last Property  
	TSubclassOf<class USmartObjectWorldConditionSchema> DefaultWorldConditionSchemaClass;                  // 0x40(0x8)(Edit, ZeroConstructor, Config, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USmartObjectSettings* GetDefaultObj();

};

// 0x20 (0x50 - 0x30)
// Class SmartObjectsModule.BlackboardKeyType_SOClaimHandle
class UBlackboardKeyType_SOClaimHandle : public UBlackboardKeyType
{
public:
	struct SmartObjectsModule_SmartObjectClaimHandle Handle;                                            // 0x30(0x20)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UBlackboardKeyType_SOClaimHandle* GetDefaultObj();

};

// 0x8 (0x2A0 - 0x298)
// Class SmartObjectsModule.GenericSmartObject
class AGenericSmartObject : public AActor
{
public:
	class USmartObjectComponent*                 SOComponent;                                       // 0x298(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoClear, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class AGenericSmartObject* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class SmartObjectsModule.SmartObjectBlueprintFunctionLibrary
class USmartObjectBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class USmartObjectBlueprintFunctionLibrary* GetDefaultObj();

	void SetValueAsSOClaimHandle(class UBlackboardComponent* BlackboardComponent, class FName& KeyName, const struct SmartObjectsModule_SmartObjectClaimHandle& Value);
	bool SetSmartObjectEnabled(class AActor* SmartObjectActor, bool bEnabled);
	bool SetMultipleSmartObjectsEnabled(TArray<class AActor*>& SmartObjectActors, bool bEnabled);
	void SetBlackboardValueAsSOClaimHandle(class UBTNode* NodeOwner, struct AIModule_BlackboardKeySelector& Key, struct SmartObjectsModule_SmartObjectClaimHandle& Value);
	bool RemoveSmartObject(class AActor* SmartObjectActor);
	bool RemoveMultipleSmartObjects(TArray<class AActor*>& SmartObjectActors);
	class USmartObjectBehaviorDefinition* MarkSmartObjectSlotAsOccupied(class UObject* WorldContextObject, const struct SmartObjectsModule_SmartObjectClaimHandle& ClaimHandle, TSubclassOf<class USmartObjectBehaviorDefinition> DefinitionClass);
	bool MarkSmartObjectSlotAsFree(class UObject* WorldContextObject, const struct SmartObjectsModule_SmartObjectClaimHandle& ClaimHandle);
	struct SmartObjectsModule_SmartObjectClaimHandle MarkSmartObjectSlotAsClaimed(class UObject* WorldContextObject, const struct SmartObjectsModule_SmartObjectSlotHandle& SlotHandle, class AActor* UserActor);
	bool IsValidSmartObjectClaimHandle(const struct SmartObjectsModule_SmartObjectClaimHandle& Handle);
	struct SmartObjectsModule_SmartObjectClaimHandle GetValueAsSOClaimHandle(class UBlackboardComponent* BlackboardComponent, class FName& KeyName);
	struct SmartObjectsModule_SmartObjectClaimHandle GetBlackboardValueAsSOClaimHandle(class UBTNode* NodeOwner, struct AIModule_BlackboardKeySelector& Key);
	bool AddSmartObject(class AActor* SmartObjectActor);
	bool AddOrRemoveSmartObject(class AActor* SmartObject, bool bEnabled);
	bool AddOrRemoveMultipleSmartObjects(TArray<class AActor*>& SmartObjectActors, bool bAdd);
	bool AddMultipleSmartObjects(TArray<class AActor*>& SmartObjectActors);
};

// 0xB0 (0x348 - 0x298)
// Class SmartObjectsModule.SmartObjectCollection
class ASmartObjectCollection : public AActor
{
public:
	struct CoreUObject_Box                       Bounds;                                            // 0x298(0x38)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct SmartObjectsModule_SmartObjectCollectionEntry> CollectionEntries;                                 // 0x2D0(0x10)(Edit, ZeroConstructor, EditConst, Protected, NativeAccessSpecifierProtected)
	TMap<struct SmartObjectsModule_SmartObjectHandle, struct CoreUObject_SoftObjectPath> RegisteredIdToObjectMap;                           // 0x2E0(0x50)(Protected, NativeAccessSpecifierProtected)
	TArray<class USmartObjectDefinition*>        Definitions;                                       // 0x330(0x10)(Edit, ZeroConstructor, EditConst, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_6E5[0x8];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class ASmartObjectCollection* GetDefaultObj();

};

// 0x50 (0x2F0 - 0x2A0)
// Class SmartObjectsModule.SmartObjectComponent
class USmartObjectComponent : public USceneComponent
{
public:
	FMulticastInlineDelegateProperty_            OnSmartObjectEvent;                                // 0x2A0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_719[0x18];                                     // Fixing Size After Last Property  
	class USmartObjectDefinition*                DefinitionAsset;                                   // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct SmartObjectsModule_SmartObjectHandle  RegisteredHandle;                                  // 0x2D0(0x8)(Edit, Transient, EditConst, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_720[0x10];                                     // Fixing Size After Last Property  
	bool                                         bCanBePartOfCollection;                            // 0x2E8(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_722[0x7];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class USmartObjectComponent* GetDefaultObj();

	void ReceiveOnEvent(struct SmartObjectsModule_SmartObjectEventData& EventData, class AActor* Interactor);
};

// 0x0 (0x570 - 0x570)
// Class SmartObjectsModule.SmartObjectContainerRenderingComponent
class USmartObjectContainerRenderingComponent : public UPrimitiveComponent
{
public:

	static class UClass* StaticClass();
	static class USmartObjectContainerRenderingComponent* GetDefaultObj();

};

// 0x0 (0x5C0 - 0x5C0)
// Class SmartObjectsModule.SmartObjectDebugRenderingComponent
class USmartObjectDebugRenderingComponent : public UDebugDrawComponent
{
public:

	static class UClass* StaticClass();
	static class USmartObjectDebugRenderingComponent* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class SmartObjectsModule.SmartObjectBehaviorDefinition
class USmartObjectBehaviorDefinition : public UObject
{
public:

	static class UClass* StaticClass();
	static class USmartObjectBehaviorDefinition* GetDefaultObj();

};

// 0xB0 (0xE0 - 0x30)
// Class SmartObjectsModule.SmartObjectDefinition
class USmartObjectDefinition : public UDataAsset
{
public:
	TArray<struct SmartObjectsModule_SmartObjectSlotDefinition> Slots;                                             // 0x30(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<class USmartObjectBehaviorDefinition*> DefaultBehaviorDefinitions;                        // 0x40(0x10)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct GameplayTags_GameplayTagQuery         UserTagFilter;                                     // 0x50(0x48)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct WorldConditions_WorldConditionQueryDefinition Preconditions;                                     // 0x98(0x18)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct GameplayTags_GameplayTagContainer     ActivityTags;                                      // 0xB0(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	TSubclassOf<class USmartObjectWorldConditionSchema> WorldConditionSchemaClass;                         // 0xD0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, AdvancedDisplay, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class ESmartObjectTagMergingPolicy      ActivityTagsMergingPolicy;                         // 0xD8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class ESmartObjectTagFilteringPolicy    UserTagsFilteringPolicy;                           // 0xD9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_766[0x6];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class USmartObjectDefinition* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class SmartObjectsModule.SmartObjectSpacePartition
class USmartObjectSpacePartition : public UObject
{
public:

	static class UClass* StaticClass();
	static class USmartObjectSpacePartition* GetDefaultObj();

};

// 0xA8 (0xD0 - 0x28)
// Class SmartObjectsModule.SmartObjectHashGrid
class USmartObjectHashGrid : public USmartObjectSpacePartition
{
public:
	uint8                                        Pad_799[0xA8];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class USmartObjectHashGrid* GetDefaultObj();

};

// 0xC8 (0xF0 - 0x28)
// Class SmartObjectsModule.SmartObjectOctree
class USmartObjectOctree : public USmartObjectSpacePartition
{
public:
	uint8                                        Pad_7A0[0xC8];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class USmartObjectOctree* GetDefaultObj();

};

// 0xB8 (0x350 - 0x298)
// Class SmartObjectsModule.SmartObjectPersistentCollection
class ASmartObjectPersistentCollection : public AActor
{
public:
	struct SmartObjectsModule_SmartObjectContainer SmartObjectContainer;                              // 0x298(0xB0)(Edit, EditConst, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_7B3[0x8];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class ASmartObjectPersistentCollection* GetDefaultObj();

};

// 0x0 (0x570 - 0x570)
// Class SmartObjectsModule.SmartObjectRenderingComponent
class USmartObjectRenderingComponent : public UPrimitiveComponent
{
public:

	static class UClass* StaticClass();
	static class USmartObjectRenderingComponent* GetDefaultObj();

};

// 0x170 (0x1A0 - 0x30)
// Class SmartObjectsModule.SmartObjectSubsystem
class USmartObjectSubsystem : public UWorldSubsystem
{
public:
	struct CoreUObject_SoftClassPath             SpacePartitionClassName;                           // 0x30(0x20)(ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class USmartObjectSpacePartition> SpacePartitionClass;                               // 0x50(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USmartObjectSpacePartition*            SpacePartition;                                    // 0x58(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ASmartObjectSubsystemRenderingActor*   RenderingActor;                                    // 0x60(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct SmartObjectsModule_SmartObjectContainer SmartObjectContainer;                              // 0x68(0xB0)(Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_C0E[0x10];                                     // Fixing Size After Last Property  
	TMap<struct SmartObjectsModule_SmartObjectHandle, struct SmartObjectsModule_SmartObjectRuntime> RuntimeSmartObjects;                               // 0x128(0x50)(Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TArray<class USmartObjectComponent*>         RegisteredSOComponents;                            // 0x178(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<class USmartObjectComponent*>         PendingSmartObjectRegistration;                    // 0x188(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_C15[0x8];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class USmartObjectSubsystem* GetDefaultObj();

	class USmartObjectBehaviorDefinition* Use(struct SmartObjectsModule_SmartObjectClaimHandle& ClaimHandle, TSubclassOf<class USmartObjectBehaviorDefinition> DefinitionClass);
	bool SetSlotEnabled(const struct SmartObjectsModule_SmartObjectSlotHandle& SlotHandle, bool bEnabled);
	bool SetEnabled(const struct SmartObjectsModule_SmartObjectHandle& Handle, bool bEnabled);
	bool RemoveTagFromSlot(const struct SmartObjectsModule_SmartObjectSlotHandle& SlotHandle, struct GameplayTags_GameplayTag& Tag);
	void RemoveTagFromInstance(const struct SmartObjectsModule_SmartObjectHandle& Handle, struct GameplayTags_GameplayTag& Tag);
	bool Release(struct SmartObjectsModule_SmartObjectClaimHandle& ClaimHandle);
	class USmartObjectComponent* GetSmartObjectComponentByRequestResult(struct SmartObjectsModule_SmartObjectRequestResult& Result);
	class USmartObjectComponent* GetSmartObjectComponent(struct SmartObjectsModule_SmartObjectClaimHandle& ClaimHandle);
	bool GetSlotTransformFromRequestResult(struct SmartObjectsModule_SmartObjectRequestResult& RequestResult, struct CoreUObject_Transform* OutSlotTransform);
	bool GetSlotTransform(struct SmartObjectsModule_SmartObjectClaimHandle& ClaimHandle, struct CoreUObject_Transform* OutSlotTransform);
	struct GameplayTags_GameplayTagContainer GetSlotTags(const struct SmartObjectsModule_SmartObjectSlotHandle& SlotHandle);
	bool GetSlotLocation(struct SmartObjectsModule_SmartObjectClaimHandle& ClaimHandle, struct CoreUObject_Vector* OutSlotLocation);
	struct GameplayTags_GameplayTagContainer GetInstanceTags(const struct SmartObjectsModule_SmartObjectHandle& Handle);
	class USmartObjectBehaviorDefinition* GetBehaviorDefinitionByRequestResult(struct SmartObjectsModule_SmartObjectRequestResult& RequestResult, TSubclassOf<class USmartObjectBehaviorDefinition> DefinitionClass);
	class USmartObjectBehaviorDefinition* GetBehaviorDefinition(struct SmartObjectsModule_SmartObjectClaimHandle& ClaimHandle, TSubclassOf<class USmartObjectBehaviorDefinition> DefinitionClass);
	bool FindSmartObjects_BP(struct SmartObjectsModule_SmartObjectRequest& Request, TArray<struct SmartObjectsModule_SmartObjectRequestResult>* OutResults, class AActor* UserActor);
	bool FindSmartObjects(struct SmartObjectsModule_SmartObjectRequest& Request, TArray<struct SmartObjectsModule_SmartObjectRequestResult>* OutResults, class AActor* UserActor);
	struct SmartObjectsModule_SmartObjectRequestResult FindSmartObject(struct SmartObjectsModule_SmartObjectRequest& Request, class AActor* UserActor);
	struct SmartObjectsModule_SmartObjectClaimHandle Claim(struct SmartObjectsModule_SmartObjectRequestResult& RequestResult, class AActor* UserActor);
	void AddTagToSlot(const struct SmartObjectsModule_SmartObjectSlotHandle& SlotHandle, struct GameplayTags_GameplayTag& Tag);
	void AddTagToInstance(const struct SmartObjectsModule_SmartObjectHandle& Handle, struct GameplayTags_GameplayTag& Tag);
};

// 0x0 (0x5C0 - 0x5C0)
// Class SmartObjectsModule.SmartObjectSubsystemRenderingComponent
class USmartObjectSubsystemRenderingComponent : public USmartObjectDebugRenderingComponent
{
public:

	static class UClass* StaticClass();
	static class USmartObjectSubsystemRenderingComponent* GetDefaultObj();

};

// 0x8 (0x2A0 - 0x298)
// Class SmartObjectsModule.SmartObjectSubsystemRenderingActor
class ASmartObjectSubsystemRenderingActor : public AActor
{
public:
	class USmartObjectSubsystemRenderingComponent* RenderingComponent;                                // 0x298(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class ASmartObjectSubsystemRenderingActor* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class SmartObjectsModule.SmartObjectTest
class USmartObjectTest : public UObject
{
public:
	class ASmartObjectTestingActor*              SmartObjectTestingActor;                           // 0x28(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class USmartObjectTest* GetDefaultObj();

};

// 0x140 (0x170 - 0x30)
// Class SmartObjectsModule.SmartObjectSimpleQueryTest
class USmartObjectSimpleQueryTest : public USmartObjectTest
{
public:
	struct SmartObjectsModule_SmartObjectRequest Request;                                           // 0x30(0x130)(Edit, Protected, NativeAccessSpecifierProtected)
	TArray<struct SmartObjectsModule_SmartObjectRequestResult> Results;                                           // 0x160(0x10)(Edit, ZeroConstructor, Transient, EditConst, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class USmartObjectSimpleQueryTest* GetDefaultObj();

};

// 0x0 (0x5C0 - 0x5C0)
// Class SmartObjectsModule.SmartObjectTestRenderingComponent
class USmartObjectTestRenderingComponent : public USmartObjectDebugRenderingComponent
{
public:

	static class UClass* StaticClass();
	static class USmartObjectTestRenderingComponent* GetDefaultObj();

};

// 0x28 (0x2C0 - 0x298)
// Class SmartObjectsModule.SmartObjectTestingActor
class ASmartObjectTestingActor : public AActor
{
public:
	TArray<class USmartObjectTest*>              Tests;                                             // 0x298(0x10)(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	class USmartObjectTestRenderingComponent*    RenderingComponent;                                // 0x2A8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USmartObjectSubsystem*                 SmartObjectSubsystem;                              // 0x2B0(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bRunTestsEachFrame;                                // 0x2B8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_CC2[0x7];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class ASmartObjectTestingActor* GetDefaultObj();

	void RunTests();
	void ResetTests();
};

// 0x108 (0x130 - 0x28)
// Class SmartObjectsModule.SmartObjectSlotValidationFilter
class USmartObjectSlotValidationFilter : public UObject
{
public:
	struct SmartObjectsModule_SmartObjectSlotValidationParams EntryParameters;                                   // 0x28(0x80)(Edit, Protected, NativeAccessSpecifierProtected)
	bool                                         bUseEntryParametersForExit;                        // 0xA8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_CEB[0x7];                                      // Fixing Size After Last Property  
	struct SmartObjectsModule_SmartObjectSlotValidationParams ExitParameters;                                    // 0xB0(0x80)(Edit, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class USmartObjectSlotValidationFilter* GetDefaultObj();

};

// 0x8 (0xA8 - 0xA0)
// Class SmartObjectsModule.SmartObjectUserComponent
class USmartObjectUserComponent : public UActorComponent
{
public:
	TSubclassOf<class USmartObjectSlotValidationFilter> ValidationFilter;                                  // 0xA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class USmartObjectUserComponent* GetDefaultObj();

};

// 0x40 (0x78 - 0x38)
// Class SmartObjectsModule.SmartObjectWorldConditionSchema
class USmartObjectWorldConditionSchema : public UWorldConditionSchema
{
public:
	uint8                                        Pad_D25[0x40];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class USmartObjectWorldConditionSchema* GetDefaultObj();

};

}


