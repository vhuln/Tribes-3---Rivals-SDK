#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xA8 - 0xA0)
// Class ChaosSolverEngine.ChaosDebugDrawComponent
class UChaosDebugDrawComponent : public UActorComponent
{
public:
	uint8                                        Pad_529[0x8];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UChaosDebugDrawComponent* GetDefaultObj();

};

// 0x8 (0xA8 - 0xA0)
// Class ChaosSolverEngine.ChaosEventListenerComponent
class UChaosEventListenerComponent : public UActorComponent
{
public:
	uint8                                        Pad_52F[0x8];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UChaosEventListenerComponent* GetDefaultObj();

};

// 0x210 (0x2B8 - 0xA8)
// Class ChaosSolverEngine.ChaosGameplayEventDispatcher
class UChaosGameplayEventDispatcher : public UChaosEventListenerComponent
{
public:
	uint8                                        Pad_53A[0xC0];                                     // Fixing Size After Last Property  
	TMap<class UPrimitiveComponent*, struct ChaosSolverEngine_ChaosHandlerSet> CollisionEventRegistrations;                       // 0x168(0x50)(ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TMap<class UPrimitiveComponent*, struct ChaosSolverEngine_BreakEventCallbackWrapper> BreakEventRegistrations;                           // 0x1B8(0x50)(ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TMap<class UPrimitiveComponent*, struct ChaosSolverEngine_RemovalEventCallbackWrapper> RemovalEventRegistrations;                         // 0x208(0x50)(ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TMap<class UPrimitiveComponent*, struct ChaosSolverEngine_CrumblingEventCallbackWrapper> CrumblingEventRegistrations;                       // 0x258(0x50)(ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_541[0x10];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UChaosGameplayEventDispatcher* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class ChaosSolverEngine.ChaosNotifyHandlerInterface
class IChaosNotifyHandlerInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IChaosNotifyHandlerInterface* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary
class UChaosSolverEngineBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UChaosSolverEngineBlueprintLibrary* GetDefaultObj();

	struct Engine_HitResult ConvertPhysicsCollisionToHitResult(struct ChaosSolverEngine_ChaosPhysicsCollisionInfo& PhysicsCollision);
};

// 0x0 (0x28 - 0x28)
// Class ChaosSolverEngine.ChaosSolver
class UChaosSolver : public UObject
{
public:

	static class UClass* StaticClass();
	static class UChaosSolver* GetDefaultObj();

};

// 0xF8 (0x390 - 0x298)
// Class ChaosSolverEngine.ChaosSolverActor
class AChaosSolverActor : public AActor
{
public:
	struct Chaos_ChaosSolverConfiguration        Properties;                                        // 0x298(0x68)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        TimeStepMultiplier;                                // 0x300(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CollisionIterations;                               // 0x304(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PushOutIterations;                                 // 0x308(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PushOutPairIterations;                             // 0x30C(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ClusterConnectionFactor;                           // 0x310(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EClusterConnectionTypeEnum        ClusterUnionConnectionType;                        // 0x314(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         DoGenerateCollisionData;                           // 0x315(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_595[0x2];                                      // Fixing Size After Last Property  
	struct Chaos_SolverCollisionFilterSettings   CollisionFilterSettings;                           // 0x318(0x10)(Deprecated, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         DoGenerateBreakingData;                            // 0x328(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_598[0x3];                                      // Fixing Size After Last Property  
	struct Chaos_SolverBreakingFilterSettings    BreakingFilterSettings;                            // 0x32C(0x10)(Deprecated, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         DoGenerateTrailingData;                            // 0x33C(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_59C[0x3];                                      // Fixing Size After Last Property  
	struct Chaos_SolverTrailingFilterSettings    TrailingFilterSettings;                            // 0x340(0x10)(Deprecated, NoDestructor, NativeAccessSpecifierPublic)
	float                                        MassScale;                                         // 0x350(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasFloor;                                         // 0x354(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5A1[0x3];                                      // Fixing Size After Last Property  
	float                                        FloorHeight;                                       // 0x358(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ChaosSolverEngine_ChaosDebugSubstepControl ChaosDebugSubstepControl;                          // 0x35C(0x3)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_5A6[0x1];                                      // Fixing Size After Last Property  
	class UBillboardComponent*                   SpriteComponent;                                   // 0x360(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5AC[0x18];                                     // Fixing Size After Last Property  
	class UChaosGameplayEventDispatcher*         GameplayEventDispatcherComponent;                  // 0x380(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_5AE[0x8];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class AChaosSolverActor* GetDefaultObj();

	void SetSolverActive(bool bActive);
	void SetAsCurrentWorldSolver();
};

// 0x28 (0x60 - 0x38)
// Class ChaosSolverEngine.ChaosSolverSettings
class UChaosSolverSettings : public UDeveloperSettings
{
public:
	uint8                                        Pad_5BE[0x8];                                      // Fixing Size After Last Property  
	struct CoreUObject_SoftClassPath             DefaultChaosSolverActorClass;                      // 0x40(0x20)(Edit, ZeroConstructor, Config, NoClear, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UChaosSolverSettings* GetDefaultObj();

};

}


