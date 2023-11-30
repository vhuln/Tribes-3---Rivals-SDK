#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ESmartObjectChangeReason : uint8
{
	None                           = 0,
	OnEvent                        = 1,
	OnTagAdded                     = 2,
	OnTagRemoved                   = 3,
	OnClaimed                      = 4,
	OnOccupied                     = 5,
	OnReleased                     = 6,
	OnSlotEnabled                  = 7,
	OnSlotDisabled                 = 8,
	OnObjectEnabled                = 9,
	OnObjectDisabled               = 10,
	ESmartObjectChangeReason_MAX   = 11,
};

enum class ESmartObjectEntrancePriority : uint8
{
	Lowest                         = 0,
	Lower                          = 1,
	Low                            = 2,
	BelowNormal                    = 3,
	Normal                         = 4,
	AboveNormal                    = 5,
	High                           = 6,
	Higher                         = 7,
	Highest                        = 8,
	MIN                            = 0,
	MAX                            = 8,
};

enum class ESmartObjectSlotShape : uint8
{
	Circle                         = 0,
	Rectangle                      = 1,
	ESmartObjectSlotShape_MAX      = 2,
};

enum class ESmartObjectSlotState : uint8
{
	Invalid                        = 0,
	Free                           = 1,
	Claimed                        = 2,
	Occupied                       = 3,
	Disabled                       = 4,
	ESmartObjectSlotState_MAX      = 5,
};

enum class EFSmartObjectSlotEntrySelectionMethod : uint8
{
	First                          = 0,
	NearestToSearchLocation        = 1,
	FSmartObjectSlotEntrySelectionMethod_MAX = 2,
};

enum class ESmartObjectCollectionRegistrationResult : uint8
{
	Failed_InvalidCollection       = 0,
	Failed_AlreadyRegistered       = 1,
	Failed_NotFromPersistentLevel  = 2,
	Succeeded                      = 3,
	ESmartObjectCollectionRegistrationResult_MAX = 4,
};

enum class ESmartObjectUnregistrationMode : uint8
{
	KeepRuntimeInstanceActiveIfPartOfCollection = 0,
	DestroyRuntimeInstance         = 1,
	ESmartObjectUnregistrationMode_MAX = 2,
};

enum class ESmartObjectTagMergingPolicy : uint8
{
	Combine                        = 0,
	Override                       = 1,
	ESmartObjectTagMergingPolicy_MAX = 2,
};

enum class ESmartObjectTagFilteringPolicy : uint8
{
	NoFilter                       = 0,
	Combine                        = 1,
	Override                       = 2,
	ESmartObjectTagFilteringPolicy_MAX = 3,
};

enum class ESmartObjectSlotNavigationLocationType : uint8
{
	Entry                          = 0,
	Exit                           = 1,
	ESmartObjectSlotNavigationLocationType_MAX = 2,
};

enum class ESmartObjectTraceType : uint8
{
	ByChannel                      = 0,
	ByProfile                      = 1,
	ByObjectTypes                  = 2,
	ESmartObjectTraceType_MAX      = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x8 - 0x0)
// ScriptStruct SmartObjectsModule.SmartObjectHandle
struct SmartObjectsModule_SmartObjectHandle
{
public:
	uint64                                       ID;                                                // 0x0(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct SmartObjectsModule.SmartObjectSlotHandle
struct SmartObjectsModule_SmartObjectSlotHandle
{
public:
	uint8                                        Pad_D3A[0x10];                                     // Fixing Size Of Struct 
};

// 0x38 (0x38 - 0x0)
// ScriptStruct SmartObjectsModule.SmartObjectEventData
struct SmartObjectsModule_SmartObjectEventData
{
public:
	struct SmartObjectsModule_SmartObjectHandle  SmartObjectHandle;                                 // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct SmartObjectsModule_SmartObjectSlotHandle SlotHandle;                                        // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESmartObjectChangeReason          Reason;                                            // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D54[0x3];                                      // Fixing Size After Last Property  
	struct GameplayTags_GameplayTag              Tag;                                               // 0x1C(0x8)(BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D57[0x14];                                     // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// ScriptStruct SmartObjectsModule.SmartObjectSlotDefinitionData
struct SmartObjectsModule_SmartObjectSlotDefinitionData
{
public:
	uint8                                        Pad_D9C[0x8];                                      // Fixing Size Of Struct 
};

// 0x0 (0x8 - 0x8)
// ScriptStruct SmartObjectsModule.SmartObjectSlotAnnotation
struct SmartObjectsModule_SmartObjectSlotAnnotation : public SmartObjectsModule_SmartObjectSlotDefinitionData
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct SmartObjectsModule.SmartObjectWorldConditionBase
struct SmartObjectsModule_SmartObjectWorldConditionBase : public WorldConditions_WorldConditionBase
{
public:
};

// 0xC (0xC - 0x0)
// ScriptStruct SmartObjectsModule.SmartObjectUserCapsuleParams
struct SmartObjectsModule_SmartObjectUserCapsuleParams
{
public:
	float                                        Radius;                                            // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Height;                                            // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StepHeight;                                        // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct SmartObjectsModule.SmartObjectAnnotation_SlotUserCollision
struct SmartObjectsModule_SmartObjectAnnotation_SlotUserCollision : public SmartObjectsModule_SmartObjectSlotAnnotation
{
public:
	bool                                         bUseUserCapsuleSize;                               // 0x8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DC8[0x3];                                      // Fixing Size After Last Property  
	struct SmartObjectsModule_SmartObjectUserCapsuleParams Capsule;                                           // 0xC(0xC)(Edit, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct SmartObjectsModule.SmartObjectSlotEntranceAnnotation
struct SmartObjectsModule_SmartObjectSlotEntranceAnnotation : public SmartObjectsModule_SmartObjectSlotAnnotation
{
public:
	struct CoreUObject_Vector3f                  Offset;                                            // 0x8(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Rotator3f                 Rotation;                                          // 0x14(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct GameplayTags_GameplayTagContainer     Tags;                                              // 0x20(0x20)(Edit, NativeAccessSpecifierPublic)
	uint8                                        bIsEntry : 1;                                      // Mask: 0x1, PropSize: 0x10x40(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsExit : 1;                                       // Mask: 0x2, PropSize: 0x10x40(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bTraceGroundLocation : 1;                          // Mask: 0x4, PropSize: 0x10x40(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCheckTransitionTrajectory : 1;                    // Mask: 0x8, PropSize: 0x10x40(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_4C : 4;                                     // Fixing Bit-Field Size  
	enum class ESmartObjectEntrancePriority      SelectionPriority;                                 // 0x41(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DF7[0x2];                                      // Fixing Size After Last Property  
	float                                        TrajectoryStartHeightOffset;                       // 0x44(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TrajectorySlotHeightOffset;                        // 0x48(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TransitionCheckRadius;                             // 0x4C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct SmartObjectsModule.SmartObjectSlotReference
struct SmartObjectsModule_SmartObjectSlotReference
{
public:
	uint8                                        Index;                                             // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct SmartObjectsModule.SmartObjectSlotLinkAnnotation
struct SmartObjectsModule_SmartObjectSlotLinkAnnotation : public SmartObjectsModule_SmartObjectSlotAnnotation
{
public:
	struct GameplayTags_GameplayTag              Tag;                                               // 0x8(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct SmartObjectsModule_SmartObjectSlotReference LinkedSlot;                                        // 0x10(0x1)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_E29[0x7];                                      // Fixing Size Of Struct 
};

// 0x8 (0x70 - 0x68)
// ScriptStruct SmartObjectsModule.SmartObjectComponentInstanceData
struct SmartObjectsModule_SmartObjectComponentInstanceData : public Engine_ActorComponentInstanceData
{
public:
	class USmartObjectDefinition*                DefinitionAsset;                                   // 0x68(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0xE0 (0xE0 - 0x0)
// ScriptStruct SmartObjectsModule.SmartObjectSlotDefinition
struct SmartObjectsModule_SmartObjectSlotDefinition
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E45[0x7];                                      // Fixing Size After Last Property  
	struct GameplayTags_GameplayTagContainer     RuntimeTags;                                       // 0x8(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct GameplayTags_GameplayTagQuery         UserTagFilter;                                     // 0x28(0x48)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct GameplayTags_GameplayTagContainer     ActivityTags;                                      // 0x70(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct WorldConditions_WorldConditionQueryDefinition SelectionPreconditions;                            // 0x90(0x18)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector3f                  Offset;                                            // 0xA8(0xC)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Rotator3f                 Rotation;                                          // 0xB4(0xC)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct StructUtils_InstancedStruct>   Data;                                              // 0xC0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<class USmartObjectBehaviorDefinition*> BehaviorDefinitions;                               // 0xD0(0x10)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// ScriptStruct SmartObjectsModule.SmartObjectDefinitionPreviewData
struct SmartObjectsModule_SmartObjectDefinitionPreviewData
{
public:
	TSoftClassPtr<class AActor>                  ObjectActorClass;                                  // 0x0(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_SoftObjectPath            ObjectMeshPath;                                    // 0x28(0x20)(Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class AActor>                  UserActorClass;                                    // 0x48(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class USmartObjectSlotValidationFilter> UserValidationFilterClass;                         // 0x70(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct SmartObjectsModule.SmartObjectSpatialEntryData
struct SmartObjectsModule_SmartObjectSpatialEntryData
{
public:
	uint8                                        Pad_E94[0x1];                                      // Fixing Size Of Struct 
};

// 0xB (0xC - 0x1)
// ScriptStruct SmartObjectsModule.SmartObjectHashGridEntryData
struct SmartObjectsModule_SmartObjectHashGridEntryData : public SmartObjectsModule_SmartObjectSpatialEntryData
{
public:
	uint8                                        Pad_E97[0xB];                                      // Fixing Size Of Struct 
};

// 0xF (0x10 - 0x1)
// ScriptStruct SmartObjectsModule.SmartObjectOctreeEntryData
struct SmartObjectsModule_SmartObjectOctreeEntryData : public SmartObjectsModule_SmartObjectSpatialEntryData
{
public:
	uint8                                        Pad_EA1[0xF];                                      // Fixing Size Of Struct 
};

// 0xF0 (0xF0 - 0x0)
// ScriptStruct SmartObjectsModule.SmartObjectCollectionEntry
struct SmartObjectsModule_SmartObjectCollectionEntry
{
public:
	struct GameplayTags_GameplayTagContainer     Tags;                                              // 0x0(0x20)(Edit, EditConst, Protected, NativeAccessSpecifierProtected)
	struct CoreUObject_SoftObjectPath            Path;                                              // 0x20(0x20)(ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct CoreUObject_Transform                 Transform;                                         // 0x40(0x60)(IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct CoreUObject_Box                       Bounds;                                            // 0xA0(0x38)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct SmartObjectsModule_SmartObjectHandle  Handle;                                            // 0xD8(0x8)(Edit, EditConst, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint32                                       DefinitionIdx;                                     // 0xE0(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_EDE[0xC];                                      // Fixing Size Of Struct 
};

// 0xB0 (0xB0 - 0x0)
// ScriptStruct SmartObjectsModule.SmartObjectContainer
struct SmartObjectsModule_SmartObjectContainer
{
public:
	struct CoreUObject_Box                       Bounds;                                            // 0x0(0x38)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct SmartObjectsModule_SmartObjectCollectionEntry> CollectionEntries;                                 // 0x38(0x10)(Edit, ZeroConstructor, EditConst, Protected, NativeAccessSpecifierProtected)
	TMap<struct SmartObjectsModule_SmartObjectHandle, struct CoreUObject_SoftObjectPath> RegisteredIdToObjectMap;                           // 0x48(0x50)(Protected, NativeAccessSpecifierProtected)
	TArray<class USmartObjectDefinition*>        Definitions;                                       // 0x98(0x10)(Edit, ZeroConstructor, EditConst, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	class UObject*                               Owner;                                             // 0xA8(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct SmartObjectsModule.SmartObjectUserHandle
struct SmartObjectsModule_SmartObjectUserHandle
{
public:
	uint32                                       ID;                                                // 0x0(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct SmartObjectsModule.SmartObjectClaimHandle
struct SmartObjectsModule_SmartObjectClaimHandle
{
public:
	struct SmartObjectsModule_SmartObjectHandle  SmartObjectHandle;                                 // 0x0(0x8)(Edit, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct SmartObjectsModule_SmartObjectSlotHandle SlotHandle;                                        // 0x8(0x10)(Edit, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct SmartObjectsModule_SmartObjectUserHandle UserHandle;                                        // 0x18(0x4)(Edit, Transient, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_F4B[0x4];                                      // Fixing Size Of Struct 
};

// 0x0 (0x0 - 0x0)
// ScriptStruct SmartObjectsModule.SmartObjectSlotStateData
struct SmartObjectsModule_SmartObjectSlotStateData
{
public:
};

// 0x60 (0x60 - 0x0)
// ScriptStruct SmartObjectsModule.SmartObjectSlotTransform
struct SmartObjectsModule_SmartObjectSlotTransform : public SmartObjectsModule_SmartObjectSlotStateData
{
public:
	struct CoreUObject_Transform                 Transform;                                         // 0x0(0x60)(Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0xA8 (0xA8 - 0x0)
// ScriptStruct SmartObjectsModule.SmartObjectRuntimeSlot
struct SmartObjectsModule_SmartObjectRuntimeSlot
{
public:
	uint8                                        Pad_F76[0x70];                                     // Fixing Size After Last Property  
	struct WorldConditions_WorldConditionQueryState PreconditionState;                                 // 0x70(0x30)(Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_F7A[0x8];                                      // Fixing Size Of Struct 
};

// 0x120 (0x120 - 0x0)
// ScriptStruct SmartObjectsModule.SmartObjectRuntime
struct SmartObjectsModule_SmartObjectRuntime
{
public:
	struct WorldConditions_WorldConditionQueryState PreconditionState;                                 // 0x0(0x30)(Transient, NativeAccessSpecifierPrivate)
	TArray<struct SmartObjectsModule_SmartObjectRuntimeSlot> Slots;                                             // 0x30(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	class USmartObjectDefinition*                Definition;                                        // 0x40(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TWeakObjectPtr<class USmartObjectComponent>  OwnerComponent;                                    // 0x48(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_FB8[0xB0];                                     // Fixing Size After Last Property  
	struct StructUtils_InstancedStruct           SpatialEntryData;                                  // 0x100(0x10)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	uint8                                        Pad_FBE[0x10];                                     // Fixing Size Of Struct 
};

// 0x20 (0x20 - 0x0)
// ScriptStruct SmartObjectsModule.SmartObjectSlotView
struct SmartObjectsModule_SmartObjectSlotView
{
public:
	uint8                                        Pad_FC8[0x20];                                     // Fixing Size Of Struct 
};

// 0xF0 (0xF0 - 0x0)
// ScriptStruct SmartObjectsModule.SmartObjectRequestFilter
struct SmartObjectsModule_SmartObjectRequestFilter
{
public:
	class AActor*                                UserActor;                                         // 0x0(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GameplayTags_GameplayTagContainer     UserTags;                                          // 0x8(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct GameplayTags_GameplayTagQuery         ActivityRequirements;                              // 0x28(0x48)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TSubclassOf<class USmartObjectBehaviorDefinition> BehaviorDefinitionClass;                           // 0x70(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class USmartObjectBehaviorDefinition>> BehaviorDefinitionClasses;                         // 0x78(0x10)(Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	bool                                         bShouldEvaluateConditions;                         // 0x88(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1008[0x67];                                    // Fixing Size Of Struct 
};

// 0x130 (0x130 - 0x0)
// ScriptStruct SmartObjectsModule.SmartObjectRequest
struct SmartObjectsModule_SmartObjectRequest
{
public:
	struct CoreUObject_Box                       QueryBox;                                          // 0x0(0x38)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1024[0x8];                                     // Fixing Size After Last Property  
	struct SmartObjectsModule_SmartObjectRequestFilter Filter;                                            // 0x40(0xF0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct SmartObjectsModule.SmartObjectRequestResult
struct SmartObjectsModule_SmartObjectRequestResult
{
public:
	struct SmartObjectsModule_SmartObjectHandle  SmartObjectHandle;                                 // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct SmartObjectsModule_SmartObjectSlotHandle SlotHandle;                                        // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct SmartObjectsModule.SmartObjectSlotEntranceHandle
struct SmartObjectsModule_SmartObjectSlotEntranceHandle
{
public:
	struct SmartObjectsModule_SmartObjectSlotHandle SlotHandle;                                        // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1075[0x8];                                     // Fixing Size Of Struct 
};

// 0x48 (0x48 - 0x0)
// ScriptStruct SmartObjectsModule.SmartObjectSlotEntranceLocationRequest
struct SmartObjectsModule_SmartObjectSlotEntranceLocationRequest
{
public:
	uint8                                        Pad_1097[0x48];                                    // Fixing Size Of Struct 
};

// 0x78 (0x78 - 0x0)
// ScriptStruct SmartObjectsModule.SmartObjectSlotEntranceLocationResult
struct SmartObjectsModule_SmartObjectSlotEntranceLocationResult
{
public:
	struct CoreUObject_Vector                    Location;                                          // 0x0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Rotator                   Rotation;                                          // 0x18(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_10CA[0x8];                                     // Fixing Size After Last Property  
	struct GameplayTags_GameplayTag              Tag;                                               // 0x38(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GameplayTags_GameplayTagContainer     Tags;                                              // 0x40(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic)
	struct SmartObjectsModule_SmartObjectSlotEntranceHandle EntranceHandle;                                    // 0x60(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct SmartObjectsModule.SmartObjectSlotIndex
struct SmartObjectsModule_SmartObjectSlotIndex
{
public:
	int32                                        Index;                                             // 0x0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct SmartObjectsModule.SmartObjectTraceParams
struct SmartObjectsModule_SmartObjectTraceParams
{
public:
	enum class ESmartObjectTraceType             Type;                                              // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETraceTypeQuery                   TraceChannel;                                      // 0x1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10FF[0x6];                                     // Fixing Size After Last Property  
	TArray<enum class EObjectTypeQuery>          ObjectTypes;                                       // 0x8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct Engine_CollisionProfileName           CollisionProfile;                                  // 0x18(0x8)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bTraceComplex;                                     // 0x20(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1119[0x7];                                     // Fixing Size Of Struct 
};

// 0x80 (0x80 - 0x0)
// ScriptStruct SmartObjectsModule.SmartObjectSlotValidationParams
struct SmartObjectsModule_SmartObjectSlotValidationParams
{
public:
	TSubclassOf<class UNavigationQueryFilter>    NavigationFilter;                                  // 0x0(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct CoreUObject_Vector                    SearchExtents;                                     // 0x8(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct SmartObjectsModule_SmartObjectTraceParams GroundTraceParameters;                             // 0x20(0x28)(Edit, Protected, NativeAccessSpecifierProtected)
	struct SmartObjectsModule_SmartObjectTraceParams TransitionTraceParameters;                         // 0x48(0x28)(Edit, Protected, NativeAccessSpecifierProtected)
	bool                                         bUseNavigationCapsuleSize;                         // 0x70(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_115E[0x3];                                     // Fixing Size After Last Property  
	struct SmartObjectsModule_SmartObjectUserCapsuleParams UserCapsule;                                       // 0x74(0xC)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct SmartObjectsModule.SmartObjectActorUserData
struct SmartObjectsModule_SmartObjectActorUserData
{
public:
	TWeakObjectPtr<class AActor>                 UserActor;                                         // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct SmartObjectsModule.SmartObjectWorldConditionObjectTagQueryState
struct SmartObjectsModule_SmartObjectWorldConditionObjectTagQueryState
{
public:
	uint8                                        Pad_1196[0x8];                                     // Fixing Size Of Struct 
};

// 0x60 (0x70 - 0x10)
// ScriptStruct SmartObjectsModule.SmartObjectWorldConditionObjectTagQuery
struct SmartObjectsModule_SmartObjectWorldConditionObjectTagQuery : public SmartObjectsModule_SmartObjectWorldConditionBase
{
public:
	uint8                                        Pad_11B2[0x18];                                    // Fixing Size After Last Property  
	struct GameplayTags_GameplayTagQuery         TagQuery;                                          // 0x28(0x48)(Edit, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct SmartObjectsModule.SmartObjectWorldConditionSlotTagQueryState
struct SmartObjectsModule_SmartObjectWorldConditionSlotTagQueryState
{
public:
	uint8                                        Pad_11C6[0x18];                                    // Fixing Size Of Struct 
};

// 0x60 (0x70 - 0x10)
// ScriptStruct SmartObjectsModule.SmartObjectWorldConditionSlotTagQuery
struct SmartObjectsModule_SmartObjectWorldConditionSlotTagQuery : public SmartObjectsModule_SmartObjectWorldConditionBase
{
public:
	uint8                                        Pad_11D5[0x18];                                    // Fixing Size After Last Property  
	struct GameplayTags_GameplayTagQuery         TagQuery;                                          // 0x28(0x48)(Edit, Protected, NativeAccessSpecifierProtected)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct SmartObjectsModule.WorldCondition_SmartObjectActorTagQueryState
struct SmartObjectsModule_WorldCondition_SmartObjectActorTagQueryState
{
public:
	uint8                                        Pad_11E7[0x8];                                     // Fixing Size Of Struct 
};

// 0x58 (0x68 - 0x10)
// ScriptStruct SmartObjectsModule.WorldCondition_SmartObjectActorTagQuery
struct SmartObjectsModule_WorldCondition_SmartObjectActorTagQuery : public SmartObjectsModule_SmartObjectWorldConditionBase
{
public:
	uint8                                        Pad_1212[0x10];                                    // Fixing Size After Last Property  
	struct GameplayTags_GameplayTagQuery         TagQuery;                                          // 0x20(0x48)(Edit, NativeAccessSpecifierPublic)
};

}


