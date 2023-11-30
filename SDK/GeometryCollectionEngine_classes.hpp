#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class GeometryCollectionEngine.GeometryCollectionExternalRenderInterface
class IGeometryCollectionExternalRenderInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IGeometryCollectionExternalRenderInterface* GetDefaultObj();

};

// 0x8 (0x38 - 0x30)
// Class GeometryCollectionEngine.GeometryCollectionISMPoolSubSystem
class UGeometryCollectionISMPoolSubSystem : public UWorldSubsystem
{
public:
	class AGeometryCollectionISMPoolActor*       ISMPoolActor;                                      // 0x30(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UGeometryCollectionISMPoolSubSystem* GetDefaultObj();

};

// 0x2B0 (0x550 - 0x2A0)
// Class GeometryCollectionEngine.ChaosDestructionListener
class UChaosDestructionListener : public USceneComponent
{
public:
	uint8                                        bIsCollisionEventListeningEnabled : 1;             // Mask: 0x1, PropSize: 0x10x2A0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsBreakingEventListeningEnabled : 1;              // Mask: 0x2, PropSize: 0x10x2A0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsTrailingEventListeningEnabled : 1;              // Mask: 0x4, PropSize: 0x10x2A0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsRemovalEventListeningEnabled : 1;               // Mask: 0x8, PropSize: 0x10x2A0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_2D : 4;                                     // Fixing Bit-Field Size  
	uint8                                        Pad_684[0x3];                                      // Fixing Size After Last Property  
	struct GeometryCollectionEngine_ChaosCollisionEventRequestSettings CollisionEventRequestSettings;                     // 0x2A4(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct GeometryCollectionEngine_ChaosBreakingEventRequestSettings BreakingEventRequestSettings;                      // 0x2BC(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct GeometryCollectionEngine_ChaosTrailingEventRequestSettings TrailingEventRequestSettings;                      // 0x2D4(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct GeometryCollectionEngine_ChaosRemovalEventRequestSettings RemovalEventRequestSettings;                       // 0x2EC(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_68D[0x4];                                      // Fixing Size After Last Property  
	TSet<class AChaosSolverActor*>               ChaosSolverActors;                                 // 0x300(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, NativeAccessSpecifierPublic)
	TSet<class AGeometryCollectionActor*>        GeometryCollectionActors;                          // 0x350(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnCollisionEvents;                                 // 0x3A0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnBreakingEvents;                                  // 0x3B0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnTrailingEvents;                                  // 0x3C0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnRemovalEvents;                                   // 0x3D0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_694[0x170];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UChaosDestructionListener* GetDefaultObj();

	void SortTrailingEvents(TArray<struct GeometryCollectionEngine_ChaosTrailingEventData>& TrailingEvents, enum class EChaosTrailingSortMethod SortMethod);
	void SortRemovalEvents(TArray<struct GeometryCollectionEngine_ChaosRemovalEventData>& RemovalEvents, enum class EChaosRemovalSortMethod SortMethod);
	void SortCollisionEvents(TArray<struct GeometryCollectionEngine_ChaosCollisionEventData>& CollisionEvents, enum class EChaosCollisionSortMethod SortMethod);
	void SortBreakingEvents(TArray<struct GeometryCollectionEngine_ChaosBreakingEventData>& BreakingEvents, enum class EChaosBreakingSortMethod SortMethod);
	void SetTrailingEventRequestSettings(struct GeometryCollectionEngine_ChaosTrailingEventRequestSettings& InSettings);
	void SetTrailingEventEnabled(bool bIsEnabled);
	void SetRemovalEventRequestSettings(struct GeometryCollectionEngine_ChaosRemovalEventRequestSettings& InSettings);
	void SetRemovalEventEnabled(bool bIsEnabled);
	void SetCollisionEventRequestSettings(struct GeometryCollectionEngine_ChaosCollisionEventRequestSettings& InSettings);
	void SetCollisionEventEnabled(bool bIsEnabled);
	void SetBreakingEventRequestSettings(struct GeometryCollectionEngine_ChaosBreakingEventRequestSettings& InSettings);
	void SetBreakingEventEnabled(bool bIsEnabled);
	void RemoveGeometryCollectionActor(class AGeometryCollectionActor* GeometryCollectionActor);
	void RemoveChaosSolverActor(class AChaosSolverActor* ChaosSolverActor);
	bool IsEventListening();
	void AddGeometryCollectionActor(class AGeometryCollectionActor* GeometryCollectionActor);
	void AddChaosSolverActor(class AChaosSolverActor* ChaosSolverActor);
};

// 0x10 (0x2A8 - 0x298)
// Class GeometryCollectionEngine.GeometryCollectionActor
class AGeometryCollectionActor : public AActor
{
public:
	class UGeometryCollectionComponent*          GeometryCollectionComponent;                       // 0x298(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGeometryCollectionDebugDrawComponent* GeometryCollectionDebugDrawComponent;              // 0x2A0(0x8)(ExportObject, ZeroConstructor, InstancedReference, Deprecated, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class AGeometryCollectionActor* GetDefaultObj();

	bool RaycastSingle(const struct CoreUObject_Vector& Start, const struct CoreUObject_Vector& End, struct Engine_HitResult* OutHit);
};

// 0x28 (0x50 - 0x28)
// Class GeometryCollectionEngine.GeometryCollectionCache
class UGeometryCollectionCache : public UObject
{
public:
	struct Chaos_RecordedTransformTrack          RecordedData;                                      // 0x28(0x10)(NativeAccessSpecifierPrivate)
	class UGeometryCollection*                   SupportedCollection;                               // 0x38(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct CoreUObject_Guid                      CompatibleCollectionState;                         // 0x40(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UGeometryCollectionCache* GetDefaultObj();

};

// 0x638 (0xBE0 - 0x5A8)
// Class GeometryCollectionEngine.GeometryCollectionComponent
class UGeometryCollectionComponent : public UMeshComponent
{
public:
	uint8                                        Pad_8AC[0x8];                                      // Fixing Size After Last Property  
	class AChaosSolverActor*                     ChaosSolverActor;                                  // 0x5B0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8AE[0xE8];                                     // Fixing Size After Last Property  
	class UGeometryCollection*                   RestCollection;                                    // 0x6A0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoClear, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AFieldSystemActor*>             InitializationFields;                              // 0x6A8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoClear, UObjectWrapper, NativeAccessSpecifierPublic)
	bool                                         Simulating;                                        // 0x6B8(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B2[0x1];                                      // Fixing Size After Last Property  
	enum class EObjectStateTypeEnum              ObjectType;                                        // 0x6BA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B5[0x1];                                      // Fixing Size After Last Property  
	int32                                        GravityGroupIndex;                                 // 0x6BC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForceMotionBlur;                                  // 0x6C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         EnableClustering;                                  // 0x6C1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8BA[0x2];                                      // Fixing Size After Last Property  
	int32                                        ClusterGroupIndex;                                 // 0x6C4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxClusterLevel;                                   // 0x6C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxSimulatedLevel;                                 // 0x6CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDamageModelTypeEnum              DamageModel;                                       // 0x6D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8BF[0x7];                                      // Fixing Size After Last Property  
	TArray<float>                                DamageThreshold;                                   // 0x6D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bUseSizeSpecificDamageThreshold;                   // 0x6E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8C1[0x3];                                      // Fixing Size After Last Property  
	struct GeometryCollectionEngine_GeometryCollectionDamagePropagationData DamagePropagationData;                             // 0x6EC(0xC)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bEnableDamageFromCollision;                        // 0x6F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowRemovalOnSleep;                              // 0x6F9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowRemovalOnBreak;                              // 0x6FA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EClusterConnectionTypeEnum        ClusterConnectionType;                             // 0x6FB(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CollisionGroup;                                    // 0x6FC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CollisionSampleFraction;                           // 0x700(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LinearEtherDrag;                                   // 0x704(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AngularEtherDrag;                                  // 0x708(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8C7[0x4];                                      // Fixing Size After Last Property  
	class UChaosPhysicalMaterial*                PhysicalMaterial;                                  // 0x710(0x8)(ZeroConstructor, Deprecated, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EInitialVelocityTypeEnum          InitialVelocityType;                               // 0x718(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8CD[0x7];                                      // Fixing Size After Last Property  
	struct CoreUObject_Vector                    InitialLinearVelocity;                             // 0x720(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    InitialAngularVelocity;                            // 0x738(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPhysicalMaterial*                     PhysicalMaterialOverride;                          // 0x750(0x8)(ZeroConstructor, Deprecated, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryCollectionEngine_GeomComponentCacheParameters CacheParameters;                                   // 0x758(0x50)(NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct CoreUObject_Transform>         RestTransforms;                                    // 0x7A8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            NotifyGeometryCollectionPhysicsStateChange;        // 0x7B8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            NotifyGeometryCollectionPhysicsLoadingStateChange; // 0x7C8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_8D2[0x18];                                     // Fixing Size After Last Property  
	FMulticastInlineDelegateProperty_            OnChaosBreakEvent;                                 // 0x7F0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnChaosRemovalEvent;                               // 0x800(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnChaosCrumblingEvent;                             // 0x810(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_8D5[0x10];                                     // Fixing Size After Last Property  
	float                                        DesiredCacheTime;                                  // 0x830(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, EditConst, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CachePlayback;                                     // 0x834(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8D6[0x3];                                      // Fixing Size After Last Property  
	FMulticastInlineDelegateProperty_            OnChaosPhysicsCollision;                           // 0x838(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                         bNotifyBreaks;                                     // 0x848(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNotifyCollisions;                                 // 0x849(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNotifyTrailing;                                   // 0x84A(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNotifyRemovals;                                   // 0x84B(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNotifyCrumblings;                                 // 0x84C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCrumblingEventIncludesChildren;                   // 0x84D(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNotifyGlobalBreaks;                               // 0x84E(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNotifyGlobalCollisions;                           // 0x84F(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNotifyGlobalRemovals;                             // 0x850(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNotifyGlobalCrumblings;                           // 0x851(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bGlobalCrumblingEventIncludesChildren;             // 0x852(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStoreVelocities;                                  // 0x853(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowBoneColors;                                   // 0x854(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bUseRootProxyForNavigation;                        // 0x855(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bUpdateNavigationInTick;                           // 0x856(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8EE[0x1];                                      // Fixing Size After Last Property  
	class AGeometryCollectionISMPoolActor*       ISMPool;                                           // 0x858(0x8)(ZeroConstructor, Deprecated, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bAutoAssignISMPool;                                // 0x860(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bOverrideCustomRenderer;                           // 0x861(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8F5[0x6];                                      // Fixing Size After Last Property  
	TSubclassOf<class UObject>                   CustomRendererType;                                // 0x868(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class IGeometryCollectionExternalRenderInterface* CustomRenderer;                                    // 0x870(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bEnableReplication;                                // 0x878(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bEnableAbandonAfterLevel;                          // 0x879(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8F9[0x2];                                      // Fixing Size After Last Property  
	class FName                                  AbandonedCollisionProfileName;                     // 0x87C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8FD[0x4];                                      // Fixing Size After Last Property  
	TArray<class FName>                          CollisionProfilePerLevel;                          // 0x888(0x10)(Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_8FF[0x10];                                     // Fixing Size After Last Property  
	int32                                        ReplicationAbandonClusterLevel;                    // 0x8A8(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        ReplicationAbandonAfterLevel;                      // 0x8AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        ReplicationMaxPositionAndVelocityCorrectionLevel;  // 0x8B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_905[0x4];                                      // Fixing Size After Last Property  
	struct GeometryCollectionEngine_GeometryCollectionRepData RepData;                                           // 0x8B8(0x38)(Net, RepNotify, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_906[0x2A8];                                    // Fixing Size After Last Property  
	class UBodySetup*                            DummyBodySetup;                                    // 0xB98(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UChaosGameplayEventDispatcher*         EventDispatcher;                                   // 0xBA0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UInstancedStaticMeshComponent*> EmbeddedGeometryComponents;                        // 0xBA8(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_908[0x28];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UGeometryCollectionComponent* GetDefaultObj();

	void SetRestCollection(class UGeometryCollection* RestCollectionIn, bool bApplyAssetDefaults);
	void SetPerParticleCollisionProfileName(TArray<int32>& BoneIds, class FName ProfileName);
	void SetPerLevelCollisionProfileNames(TArray<class FName>& ProfileNames);
	void SetNotifyRemovals(bool bNewNotifyRemovals);
	void SetNotifyGlobalRemovals(bool bNewNotifyGlobalRemovals);
	void SetNotifyGlobalCrumblings(bool bNewNotifyGlobalCrumblings, bool bGlobalNewCrumblingEventIncludesChildren);
	void SetNotifyGlobalCollision(bool bNewNotifyGlobalCollisions);
	void SetNotifyGlobalBreaks(bool bNewNotifyGlobalBreaks);
	void SetNotifyCrumblings(bool bNewNotifyCrumblings, bool bNewCrumblingEventIncludesChildren);
	void SetNotifyBreaks(bool bNewNotifyBreaks);
	void SetLocalRestTransforms(TArray<struct CoreUObject_Transform>& Transforms, bool bOnlyLeaves);
	void SetEnableDamageFromCollision(bool bValue);
	void SetDamageThreshold(TArray<float>& InDamageThreshold);
	void SetAnchoredByTransformedBox(const struct CoreUObject_Box& Box, const struct CoreUObject_Transform& Transform, bool bAnchored, int32 MaxLevel);
	void SetAnchoredByIndex(int32 Index, bool bAnchored);
	void SetAnchoredByBox(const struct CoreUObject_Box& WorldSpaceBox, bool bAnchored, int32 MaxLevel);
	void SetAbandonedParticleCollisionProfileName(class FName CollisionProfile);
	void RemoveAllAnchors();
	void ReceivePhysicsCollision(struct ChaosSolverEngine_ChaosPhysicsCollisionInfo& CollisionInfo);
	void OnRep_RepData();
	void NotifyGeometryCollectionPhysicsStateChange__DelegateSignature(class UGeometryCollectionComponent* FracturedComponent);
	void NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature(class UGeometryCollectionComponent* FracturedComponent);
	bool IsRootBroken();
	struct CoreUObject_Transform GetRootInitialTransform();
	int32 GetRootIndex();
	struct CoreUObject_Transform GetRootCurrentTransform();
	void GetMassAndExtents(int32 ItemIndex, float* OutMass, struct CoreUObject_Box* OutExtents);
	struct CoreUObject_Box GetLocalBounds();
	TArray<struct CoreUObject_Transform> GetInitialLocalRestTransforms();
	int32 GetInitialLevel(int32 ItemIndex);
	class FString GetDebugInfo();
	TArray<float> GetDamageThreshold();
	void CrumbleCluster(int32 ItemIndex);
	void CrumbleActiveClusters();
	void ApplyPhysicsField(bool Enabled, enum class EGeometryCollectionPhysicsTypeEnum Target, class UFieldSystemMetaData* MetaData, class UFieldNodeBase* Field);
	void ApplyLinearVelocity(int32 ItemIndex, struct CoreUObject_Vector& LinearVelocity);
	void ApplyKinematicField(float Radius, const struct CoreUObject_Vector& Position);
	void ApplyInternalStrain(int32 ItemIndex, struct CoreUObject_Vector& Location, float Radius, int32 PropagationDepth, float PropagationFactor, float Strain);
	void ApplyExternalStrain(int32 ItemIndex, struct CoreUObject_Vector& Location, float Radius, int32 PropagationDepth, float PropagationFactor, float Strain);
	void ApplyBreakingLinearVelocity(int32 ItemIndex, struct CoreUObject_Vector& LinearVelocity);
	void ApplyBreakingAngularVelocity(int32 ItemIndex, struct CoreUObject_Vector& AngularVelocity);
	void ApplyAssetDefaults();
	void ApplyAngularVelocity(int32 ItemIndex, struct CoreUObject_Vector& AngularVelocity);
};

// 0xC0 (0x358 - 0x298)
// Class GeometryCollectionEngine.GeometryCollectionDebugDrawActor
class AGeometryCollectionDebugDrawActor : public AActor
{
public:
	struct GeometryCollectionEngine_GeometryCollectionDebugDrawWarningMessage WarningMessage;                                    // 0x298(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_92F[0x7];                                      // Fixing Size After Last Property  
	struct GeometryCollectionEngine_GeometryCollectionDebugDrawActorSelectedRigidBody SelectedRigidBody;                                 // 0x2A0(0x18)(Deprecated, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bDebugDrawWholeCollection;                         // 0x2B8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDebugDrawHierarchy;                               // 0x2B9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDebugDrawClustering;                              // 0x2BA(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGeometryCollectionDebugDrawActorHideGeometry HideGeometry;                                      // 0x2BB(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowRigidBodyId;                                  // 0x2BC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowRigidBodyCollision;                           // 0x2BD(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCollisionAtOrigin;                                // 0x2BE(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowRigidBodyTransform;                           // 0x2BF(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowRigidBodyInertia;                             // 0x2C0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowRigidBodyVelocity;                            // 0x2C1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowRigidBodyForce;                               // 0x2C2(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowRigidBodyInfos;                               // 0x2C3(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowTransformIndex;                               // 0x2C4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowTransform;                                    // 0x2C5(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowParent;                                       // 0x2C6(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowLevel;                                        // 0x2C7(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowConnectivityEdges;                            // 0x2C8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowGeometryIndex;                                // 0x2C9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowGeometryTransform;                            // 0x2CA(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowBoundingBox;                                  // 0x2CB(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowFaces;                                        // 0x2CC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowFaceIndices;                                  // 0x2CD(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowFaceNormals;                                  // 0x2CE(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowSingleFace;                                   // 0x2CF(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SingleFaceIndex;                                   // 0x2D0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowVertices;                                     // 0x2D4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowVertexIndices;                                // 0x2D5(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowVertexNormals;                                // 0x2D6(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseActiveVisualization;                           // 0x2D7(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PointThickness;                                    // 0x2D8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LineThickness;                                     // 0x2DC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTextShadow;                                       // 0x2E0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_947[0x3];                                      // Fixing Size After Last Property  
	float                                        TextScale;                                         // 0x2E4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NormalScale;                                       // 0x2E8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AxisScale;                                         // 0x2EC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ArrowScale;                                        // 0x2F0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Color                     RigidBodyIdColor;                                  // 0x2F4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RigidBodyTransformScale;                           // 0x2F8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Color                     RigidBodyCollisionColor;                           // 0x2FC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Color                     RigidBodyInertiaColor;                             // 0x300(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Color                     RigidBodyVelocityColor;                            // 0x304(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Color                     RigidBodyForceColor;                               // 0x308(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Color                     RigidBodyInfoColor;                                // 0x30C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Color                     TransformIndexColor;                               // 0x310(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TransformScale;                                    // 0x314(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Color                     LevelColor;                                        // 0x318(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Color                     ParentColor;                                       // 0x31C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ConnectivityEdgeThickness;                         // 0x320(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Color                     GeometryIndexColor;                                // 0x324(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GeometryTransformScale;                            // 0x328(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Color                     BoundingBoxColor;                                  // 0x32C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Color                     FaceColor;                                         // 0x330(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Color                     FaceIndexColor;                                    // 0x334(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Color                     FaceNormalColor;                                   // 0x338(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Color                     SingleFaceColor;                                   // 0x33C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Color                     VertexColor;                                       // 0x340(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Color                     VertexIndexColor;                                  // 0x344(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Color                     VertexNormalColor;                                 // 0x348(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_96D[0x4];                                      // Fixing Size After Last Property  
	class UBillboardComponent*                   SpriteComponent;                                   // 0x350(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class AGeometryCollectionDebugDrawActor* GetDefaultObj();

};

// 0x18 (0xB8 - 0xA0)
// Class GeometryCollectionEngine.GeometryCollectionDebugDrawComponent
class UGeometryCollectionDebugDrawComponent : public UActorComponent
{
public:
	class AGeometryCollectionDebugDrawActor*     GeometryCollectionDebugDrawActor;                  // 0xA0(0x8)(ZeroConstructor, Deprecated, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AGeometryCollectionRenderLevelSetActor* GeometryCollectionRenderLevelSetActor;             // 0xA8(0x8)(Edit, ZeroConstructor, NoDestructor, AdvancedDisplay, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_97D[0x8];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UGeometryCollectionDebugDrawComponent* GetDefaultObj();

};

// 0x10 (0x2A8 - 0x298)
// Class GeometryCollectionEngine.GeometryCollectionISMPoolActor
class AGeometryCollectionISMPoolActor : public AActor
{
public:
	class UGeometryCollectionISMPoolComponent*   ISMPoolComp;                                       // 0x298(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGeometryCollectionISMPoolDebugDrawComponent* ISMPoolDebugDrawComp;                              // 0x2A0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class AGeometryCollectionISMPoolActor* GetDefaultObj();

};

// 0xD0 (0x370 - 0x2A0)
// Class GeometryCollectionEngine.GeometryCollectionISMPoolComponent
class UGeometryCollectionISMPoolComponent : public USceneComponent
{
public:
	uint8                                        Pad_98D[0xD0];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UGeometryCollectionISMPoolComponent* GetDefaultObj();

};

// 0xA8 (0xD0 - 0x28)
// Class GeometryCollectionEngine.GeometryCollectionISMPoolRenderer
class UGeometryCollectionISMPoolRenderer : public UObject
{
public:
	uint8                                        Pad_994[0x8];                                      // Fixing Size After Last Property  
	class AGeometryCollectionISMPoolActor*       ISMPoolActor;                                      // 0x30(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_995[0x98];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UGeometryCollectionISMPoolRenderer* GetDefaultObj();

};

// 0x1C0 (0x1E8 - 0x28)
// Class GeometryCollectionEngine.GeometryCollection
class UGeometryCollection : public UObject
{
public:
	uint8                                        Pad_9AE[0x10];                                     // Fixing Size After Last Property  
	bool                                         EnableClustering;                                  // 0x38(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9AF[0x3];                                      // Fixing Size After Last Property  
	int32                                        ClusterGroupIndex;                                 // 0x3C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxClusterLevel;                                   // 0x40(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDamageModelTypeEnum              DamageModel;                                       // 0x44(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9B0[0x3];                                      // Fixing Size After Last Property  
	TArray<float>                                DamageThreshold;                                   // 0x48(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bUseSizeSpecificDamageThreshold;                   // 0x58(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         PerClusterOnlyDamageThreshold;                     // 0x59(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9B2[0x2];                                      // Fixing Size After Last Property  
	struct GeometryCollectionEngine_GeometryCollectionDamagePropagationData DamagePropagationData;                             // 0x5C(0xC)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	enum class EClusterConnectionTypeEnum        ClusterConnectionType;                             // 0x68(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9B9[0x3];                                      // Fixing Size After Last Property  
	float                                        ConnectionGraphBoundsFilteringMargin;              // 0x6C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UMaterialInterface*>            Materials;                                         // 0x70(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<struct GeometryCollectionEngine_GeometryCollectionEmbeddedExemplar> EmbeddedGeometryExemplar;                          // 0x80(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bUseFullPrecisionUVs;                              // 0x90(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStripOnCook;                                      // 0x91(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStripRenderDataOnCook;                            // 0x92(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9C2[0x5];                                      // Fixing Size After Last Property  
	TSubclassOf<class UObject>                   CustomRendererType;                                // 0x98(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryCollectionEngine_GeometryCollectionProxyMeshData RootProxyData;                                     // 0xA0(0x10)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<struct GeometryCollectionEngine_GeometryCollectionAutoInstanceMesh> AutoInstanceMeshes;                                // 0xB0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         EnableNanite;                                      // 0xC0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bConvertVertexColorsToSRGB;                        // 0xC1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9CA[0x6];                                      // Fixing Size After Last Property  
	class UPhysicalMaterial*                     PhysicsMaterial;                                   // 0xC8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDensityFromPhysicsMaterial;                       // 0xD0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMassAsDensity;                                    // 0xD1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9CF[0x2];                                      // Fixing Size After Last Property  
	float                                        Mass;                                              // 0xD4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinimumMassClamp;                                  // 0xD8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bImportCollisionFromSource;                        // 0xDC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bScaleOnRemoval;                                   // 0xDD(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRemoveOnMaxSleep;                                 // 0xDE(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9D2[0x1];                                      // Fixing Size After Last Property  
	struct CoreUObject_Vector2D                  MaximumSleepTime;                                  // 0xE0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector2D                  RemovalDuration;                                   // 0xF0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSlowMovingAsSleeping;                             // 0x100(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9D6[0x3];                                      // Fixing Size After Last Property  
	float                                        SlowMovingVelocityThreshold;                       // 0x104(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct GeometryCollectionEngine_GeometryCollectionSizeSpecificData> SizeSpecificData;                                  // 0x108(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         EnableRemovePiecesOnFracture;                      // 0x118(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9D9[0x7];                                      // Fixing Size After Last Property  
	TArray<class UMaterialInterface*>            RemoveOnFractureMaterials;                         // 0x120(0x10)(ZeroConstructor, Deprecated, UObjectWrapper, NativeAccessSpecifierPublic)
	class UDataflow*                             DataflowAsset;                                     // 0x130(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DataflowTerminal;                                  // 0x138(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, class FString>           Overrides;                                         // 0x148(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct CoreUObject_Guid                      PersistentGuid;                                    // 0x198(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct CoreUObject_Guid                      StateGuid;                                         // 0x1A8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        RootIndex;                                         // 0x1B8(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        BoneSelectedMaterialIndex;                         // 0x1BC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMaterialInterface*                    BoneSelectedMaterial;                              // 0x1C0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_9E3[0x10];                                     // Fixing Size After Last Property  
	TArray<class UAssetUserData*>                AssetUserData;                                     // 0x1D8(0x10)(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, AdvancedDisplay, UObjectWrapper, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UGeometryCollection* GetDefaultObj();

	void SetEnableNanite(bool bValue);
	void SetConvertVertexColorsToSRGB(bool bValue);
};

// 0xF8 (0x390 - 0x298)
// Class GeometryCollectionEngine.GeometryCollectionRenderLevelSetActor
class AGeometryCollectionRenderLevelSetActor : public AActor
{
public:
	class UVolumeTexture*                        TargetVolumeTexture;                               // 0x298(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterial*                             RayMarchMaterial;                                  // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SurfaceTolerance;                                  // 0x2A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Isovalue;                                          // 0x2AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Enabled;                                           // 0x2B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         RenderVolumeBoundingBox;                           // 0x2B1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9F2[0xDE];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class AGeometryCollectionRenderLevelSetActor* GetDefaultObj();

};

// 0x20 (0x5E0 - 0x5C0)
// Class GeometryCollectionEngine.GeometryCollectionISMPoolDebugDrawComponent
class UGeometryCollectionISMPoolDebugDrawComponent : public UDebugDrawComponent
{
public:
	bool                                         bShowGlobalStats;                                  // 0x5C0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowStats;                                        // 0x5C1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowBounds;                                       // 0x5C2(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9FB[0x5];                                      // Fixing Size After Last Property  
	class UInstancedStaticMeshComponent*         SelectedComponent;                                 // 0x5C8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9FD[0x10];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UGeometryCollectionISMPoolDebugDrawComponent* GetDefaultObj();

};

}


