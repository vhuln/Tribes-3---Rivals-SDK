#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x548 (0x570 - 0x28)
// Class ReplicationGraph.ReplicationGraph
class UReplicationGraph : public UReplicationDriver
{
public:
	TSubclassOf<class UNetReplicationGraphConnection> ReplicationConnectionManagerClass;                 // 0x28(0x8)(ZeroConstructor, Config, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNetDriver*                            NetDriver;                                         // 0x30(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UNetReplicationGraphConnection*> Connections;                                       // 0x38(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<class UNetReplicationGraphConnection*> PendingConnections;                                // 0x48(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	uint8                                        Pad_DE1[0x40];                                     // Fixing Size After Last Property  
	TArray<class UReplicationGraphNode*>         GlobalGraphNodes;                                  // 0x98(0x10)(ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<class UReplicationGraphNode*>         PrepareForReplicationNodes;                        // 0xA8(0x10)(ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_DE4[0x4B8];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UReplicationGraph* GetDefaultObj();

};

// 0x30 (0x5A0 - 0x570)
// Class ReplicationGraph.BasicReplicationGraph
class UBasicReplicationGraph : public UReplicationGraph
{
public:
	class UReplicationGraphNode_GridSpatialization2D* GridNode;                                          // 0x570(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UReplicationGraphNode_ActorList*       AlwaysRelevantNode;                                // 0x578(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct ReplicationGraph_ConnectionAlwaysRelevantNodePair> AlwaysRelevantForConnectionList;                   // 0x580(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class AActor*>                        ActorsWithoutNetConnection;                        // 0x590(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UBasicReplicationGraph* GetDefaultObj();

};

// 0x28 (0x50 - 0x28)
// Class ReplicationGraph.ReplicationGraphNode
class UReplicationGraphNode : public UObject
{
public:
	TArray<class UReplicationGraphNode*>         AllChildNodes;                                     // 0x28(0x10)(ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_E6B[0x18];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UReplicationGraphNode* GetDefaultObj();

};

// 0x80 (0xD0 - 0x50)
// Class ReplicationGraph.ReplicationGraphNode_ActorList
class UReplicationGraphNode_ActorList : public UReplicationGraphNode
{
public:
	uint8                                        Pad_E86[0x80];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UReplicationGraphNode_ActorList* GetDefaultObj();

};

// 0xB8 (0x108 - 0x50)
// Class ReplicationGraph.ReplicationGraphNode_ActorListFrequencyBuckets
class UReplicationGraphNode_ActorListFrequencyBuckets : public UReplicationGraphNode
{
public:
	uint8                                        Pad_EC5[0xB8];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UReplicationGraphNode_ActorListFrequencyBuckets* GetDefaultObj();

};

// 0x30 (0x100 - 0xD0)
// Class ReplicationGraph.ReplicationGraphNode_DynamicSpatialFrequency
class UReplicationGraphNode_DynamicSpatialFrequency : public UReplicationGraphNode_ActorList
{
public:
	uint8                                        Pad_F01[0x30];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UReplicationGraphNode_DynamicSpatialFrequency* GetDefaultObj();

};

// 0x80 (0x150 - 0xD0)
// Class ReplicationGraph.ReplicationGraphNode_ConnectionDormancyNode
class UReplicationGraphNode_ConnectionDormancyNode : public UReplicationGraphNode_ActorList
{
public:
	uint8                                        Pad_F32[0x80];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UReplicationGraphNode_ConnectionDormancyNode* GetDefaultObj();

};

// 0x10 (0xE0 - 0xD0)
// Class ReplicationGraph.ReplicationGraphNode_DormancyNode
class UReplicationGraphNode_DormancyNode : public UReplicationGraphNode_ActorList
{
public:
	uint8                                        Pad_F5D[0x10];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UReplicationGraphNode_DormancyNode* GetDefaultObj();

};

// 0x50 (0x120 - 0xD0)
// Class ReplicationGraph.ReplicationGraphNode_GridCell
class UReplicationGraphNode_GridCell : public UReplicationGraphNode_ActorList
{
public:
	uint8                                        Pad_F92[0x40];                                     // Fixing Size After Last Property  
	class UReplicationGraphNode*                 DynamicNode;                                       // 0x110(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UReplicationGraphNode_DormancyNode*    DormancyNode;                                      // 0x118(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UReplicationGraphNode_GridCell* GetDefaultObj();

};

// 0x230 (0x280 - 0x50)
// Class ReplicationGraph.ReplicationGraphNode_GridSpatialization2D
class UReplicationGraphNode_GridSpatialization2D : public UReplicationGraphNode
{
public:
	uint8                                        Pad_FF9[0x230];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UReplicationGraphNode_GridSpatialization2D* GetDefaultObj();

};

// 0x18 (0x68 - 0x50)
// Class ReplicationGraph.ReplicationGraphNode_AlwaysRelevant
class UReplicationGraphNode_AlwaysRelevant : public UReplicationGraphNode
{
public:
	class UReplicationGraphNode*                 ChildNode;                                         // 0x50(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1034[0x10];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UReplicationGraphNode_AlwaysRelevant* GetDefaultObj();

};

// 0x70 (0x140 - 0xD0)
// Class ReplicationGraph.ReplicationGraphNode_AlwaysRelevant_ForConnection
class UReplicationGraphNode_AlwaysRelevant_ForConnection : public UReplicationGraphNode_ActorList
{
public:
	uint8                                        Pad_1080[0x10];                                    // Fixing Size After Last Property  
	TArray<struct ReplicationGraph_AlwaysRelevantActorInfo> PastRelevantActors;                                // 0xE0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1090[0x50];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UReplicationGraphNode_AlwaysRelevant_ForConnection* GetDefaultObj();

};

// 0x20 (0x70 - 0x50)
// Class ReplicationGraph.ReplicationGraphNode_TearOff_ForConnection
class UReplicationGraphNode_TearOff_ForConnection : public UReplicationGraphNode
{
public:
	TArray<struct ReplicationGraph_TearOffActorInfo> TearOffActors;                                     // 0x50(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_10E0[0x10];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UReplicationGraphNode_TearOff_ForConnection* GetDefaultObj();

};

// 0x350 (0x378 - 0x28)
// Class ReplicationGraph.NetReplicationGraphConnection
class UNetReplicationGraphConnection : public UReplicationConnectionDriver
{
public:
	class UNetConnection*                        NetConnection;                                     // 0x28(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1117[0x144];                                   // Fixing Size After Last Property  
	TWeakObjectPtr<class AReplicationGraphDebugActor> DebugActor;                                        // 0x174(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1121[0x4];                                     // Fixing Size After Last Property  
	TArray<struct ReplicationGraph_LastLocationGatherInfo> LastGatherLocations;                               // 0x180(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1127[0xB0];                                    // Fixing Size After Last Property  
	TArray<class UReplicationGraphNode*>         ConnectionGraphNodes;                              // 0x240(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	class UReplicationGraphNode_TearOff_ForConnection* TearOffNode;                                       // 0x250(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_113A[0x120];                                   // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UNetReplicationGraphConnection* GetDefaultObj();

};

// 0x10 (0x2A8 - 0x298)
// Class ReplicationGraph.ReplicationGraphDebugActor
class AReplicationGraphDebugActor : public AActor
{
public:
	class UReplicationGraph*                     ReplicationGraph;                                  // 0x298(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNetReplicationGraphConnection*        ConnectionManager;                                 // 0x2A0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class AReplicationGraphDebugActor* GetDefaultObj();

	void ServerStopDebugging();
	void ServerStartDebugging();
	void ServerSetPeriodFrameForClass(class UClass* Class, int32 PeriodFrame);
	void ServerSetCullDistanceForClass(class UClass* Class, float CullDistance);
	void ServerSetConditionalActorBreakpoint(class AActor* Actor);
	void ServerPrintCullDistances();
	void ServerPrintAllActorInfo(const class FString& Str);
	void ServerCellInfo();
	void ClientCellInfo(const struct CoreUObject_Vector& CellLocation, const struct CoreUObject_Vector& CellExtent, TArray<class AActor*>& Actors);
};

}


