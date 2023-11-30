#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EDataStreamSendStatus : uint8
{
	Send                           = 0,
	Pause                          = 1,
	EDataStreamSendStatus_MAX      = 2,
};

enum class ENetObjectCountLimiterMode : uint32
{
	RoundRobin                     = 0,
	Fill                           = 1,
	ENetObjectCountLimiterMode_MAX = 2,
};

enum class ENetFilterType : uint8
{
	PrePoll_Raw                    = 0,
	PostPoll_FragmentBased         = 1,
	ENetFilterType_MAX             = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x20 - 0x0)
// ScriptStruct IrisCore.DataStreamDefinition
struct IrisCore_DataStreamDefinition
{
public:
	class FName                                  DataStreamName;                                    // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ClassName;                                         // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UObject>                   Class;                                             // 0x10(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDataStreamSendStatus             DefaultSendStatus;                                 // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAutoCreate;                                       // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_551[0x6];                                      // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// ScriptStruct IrisCore.NetSerializerConfig
struct IrisCore_NetSerializerConfig
{
public:
	uint8                                        Pad_557[0x10];                                     // Fixing Size Of Struct 
};

// 0x0 (0x10 - 0x10)
// ScriptStruct IrisCore.DateTimeNetSerializerConfig
struct IrisCore_DateTimeNetSerializerConfig : public IrisCore_NetSerializerConfig
{
public:
};

// 0x10 (0x20 - 0x10)
// ScriptStruct IrisCore.EnumInt8NetSerializerConfig
struct IrisCore_EnumInt8NetSerializerConfig : public IrisCore_NetSerializerConfig
{
public:
	int8                                         LowerBound;                                        // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int8                                         UpperBound;                                        // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitCount;                                          // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_560[0xD];                                      // Fixing Size Of Struct 
};

// 0x10 (0x20 - 0x10)
// ScriptStruct IrisCore.EnumInt16NetSerializerConfig
struct IrisCore_EnumInt16NetSerializerConfig : public IrisCore_NetSerializerConfig
{
public:
	int16                                        LowerBound;                                        // 0x10(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int16                                        UpperBound;                                        // 0x12(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitCount;                                          // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_567[0xB];                                      // Fixing Size Of Struct 
};

// 0x18 (0x28 - 0x10)
// ScriptStruct IrisCore.EnumInt32NetSerializerConfig
struct IrisCore_EnumInt32NetSerializerConfig : public IrisCore_NetSerializerConfig
{
public:
	int32                                        LowerBound;                                        // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UpperBound;                                        // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitCount;                                          // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_56A[0xF];                                      // Fixing Size Of Struct 
};

// 0x20 (0x30 - 0x10)
// ScriptStruct IrisCore.EnumInt64NetSerializerConfig
struct IrisCore_EnumInt64NetSerializerConfig : public IrisCore_NetSerializerConfig
{
public:
	int64                                        LowerBound;                                        // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        UpperBound;                                        // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitCount;                                          // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_56F[0xF];                                      // Fixing Size Of Struct 
};

// 0x10 (0x20 - 0x10)
// ScriptStruct IrisCore.EnumUint8NetSerializerConfig
struct IrisCore_EnumUint8NetSerializerConfig : public IrisCore_NetSerializerConfig
{
public:
	uint8                                        LowerBound;                                        // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        UpperBound;                                        // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitCount;                                          // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_574[0xD];                                      // Fixing Size Of Struct 
};

// 0x10 (0x20 - 0x10)
// ScriptStruct IrisCore.EnumUint16NetSerializerConfig
struct IrisCore_EnumUint16NetSerializerConfig : public IrisCore_NetSerializerConfig
{
public:
	uint16                                       LowerBound;                                        // 0x10(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       UpperBound;                                        // 0x12(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitCount;                                          // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_57A[0xB];                                      // Fixing Size Of Struct 
};

// 0x18 (0x28 - 0x10)
// ScriptStruct IrisCore.EnumUint32NetSerializerConfig
struct IrisCore_EnumUint32NetSerializerConfig : public IrisCore_NetSerializerConfig
{
public:
	uint32                                       LowerBound;                                        // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       UpperBound;                                        // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitCount;                                          // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_580[0xF];                                      // Fixing Size Of Struct 
};

// 0x20 (0x30 - 0x10)
// ScriptStruct IrisCore.EnumUint64NetSerializerConfig
struct IrisCore_EnumUint64NetSerializerConfig : public IrisCore_NetSerializerConfig
{
public:
	uint64                                       LowerBound;                                        // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint64                                       UpperBound;                                        // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitCount;                                          // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_586[0xF];                                      // Fixing Size Of Struct 
};

// 0x0 (0x10 - 0x10)
// ScriptStruct IrisCore.FloatNetSerializerConfig
struct IrisCore_FloatNetSerializerConfig : public IrisCore_NetSerializerConfig
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct IrisCore.DoubleNetSerializerConfig
struct IrisCore_DoubleNetSerializerConfig : public IrisCore_NetSerializerConfig
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct IrisCore.GuidNetSerializerConfig
struct IrisCore_GuidNetSerializerConfig : public IrisCore_NetSerializerConfig
{
public:
};

// 0x8 (0x18 - 0x10)
// ScriptStruct IrisCore.BitfieldNetSerializerConfig
struct IrisCore_BitfieldNetSerializerConfig : public IrisCore_NetSerializerConfig
{
public:
	uint8                                        BitMask;                                           // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5A0[0x7];                                      // Fixing Size Of Struct 
};

// 0x30 (0x40 - 0x10)
// ScriptStruct IrisCore.ArrayPropertyNetSerializerConfig
struct IrisCore_ArrayPropertyNetSerializerConfig : public IrisCore_NetSerializerConfig
{
public:
	uint16                                       MaxElementCount;                                   // 0x10(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       ElementCountBitCount;                              // 0x12(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5A9[0x4];                                      // Fixing Size After Last Property  
	FFieldPathProperty_                          Property;                                          // 0x18(0x20)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5AB[0x8];                                      // Fixing Size Of Struct 
};

// 0x28 (0x38 - 0x10)
// ScriptStruct IrisCore.LastResortPropertyNetSerializerConfig
struct IrisCore_LastResortPropertyNetSerializerConfig : public IrisCore_NetSerializerConfig
{
public:
	FFieldPathProperty_                          Property;                                          // 0x10(0x20)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       MaxAllowedObjectReferences;                        // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5B2[0x4];                                      // Fixing Size Of Struct 
};

// 0x18 (0x28 - 0x10)
// ScriptStruct IrisCore.NetRoleNetSerializerConfig
struct IrisCore_NetRoleNetSerializerConfig : public IrisCore_NetSerializerConfig
{
public:
	int32                                        RelativeInternalOffsetToOtherRole;                 // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RelativeExternalOffsetToOtherRole;                 // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        LowerBound;                                        // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        UpperBound;                                        // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitCount;                                          // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        AutonomousProxyValue;                              // 0x1B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        SimulatedProxyValue;                               // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5BA[0xB];                                      // Fixing Size Of Struct 
};

// 0x20 (0x30 - 0x10)
// ScriptStruct IrisCore.FieldPathNetSerializerConfig
struct IrisCore_FieldPathNetSerializerConfig : public IrisCore_NetSerializerConfig
{
public:
	FFieldPathProperty_                          Property;                                          // 0x10(0x20)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct IrisCore.FieldPathNetSerializerSerializationHelper
struct IrisCore_FieldPathNetSerializerSerializationHelper
{
public:
	TWeakObjectPtr<class UStruct>                Owner;                                             // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          PropertyPath;                                      // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x18 - 0x10)
// ScriptStruct IrisCore.IntNetSerializerConfig
struct IrisCore_IntNetSerializerConfig : public IrisCore_NetSerializerConfig
{
public:
	uint8                                        BitCount;                                          // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5C7[0x7];                                      // Fixing Size Of Struct 
};

// 0x8 (0x18 - 0x10)
// ScriptStruct IrisCore.Int8RangeNetSerializerConfig
struct IrisCore_Int8RangeNetSerializerConfig : public IrisCore_NetSerializerConfig
{
public:
	int8                                         LowerBound;                                        // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int8                                         UpperBound;                                        // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitCount;                                          // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5CE[0x5];                                      // Fixing Size Of Struct 
};

// 0x8 (0x18 - 0x10)
// ScriptStruct IrisCore.Int16RangeNetSerializerConfig
struct IrisCore_Int16RangeNetSerializerConfig : public IrisCore_NetSerializerConfig
{
public:
	int16                                        LowerBound;                                        // 0x10(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int16                                        UpperBound;                                        // 0x12(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitCount;                                          // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5D2[0x3];                                      // Fixing Size Of Struct 
};

// 0x10 (0x20 - 0x10)
// ScriptStruct IrisCore.Int32RangeNetSerializerConfig
struct IrisCore_Int32RangeNetSerializerConfig : public IrisCore_NetSerializerConfig
{
public:
	int32                                        LowerBound;                                        // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UpperBound;                                        // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitCount;                                          // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5D4[0x7];                                      // Fixing Size Of Struct 
};

// 0x18 (0x28 - 0x10)
// ScriptStruct IrisCore.Int64RangeNetSerializerConfig
struct IrisCore_Int64RangeNetSerializerConfig : public IrisCore_NetSerializerConfig
{
public:
	int64                                        LowerBound;                                        // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        UpperBound;                                        // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitCount;                                          // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5DF[0x7];                                      // Fixing Size Of Struct 
};

// 0x18 (0x120 - 0x108)
// ScriptStruct IrisCore.IrisFastArraySerializer
struct IrisCore_IrisFastArraySerializer : public NetCore_FastArraySerializer
{
public:
	uint8                                        Pad_5E3[0x4];                                      // Fixing Size After Last Property  
	uint32                                       ChangeMaskStorage[0x4];                            // 0x10C(0x10)(ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_5E5[0x4];                                      // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// ScriptStruct IrisCore.NetBlobHandlerDefinition
struct IrisCore_NetBlobHandlerDefinition
{
public:
	class FName                                  ClassName;                                         // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct IrisCore.NetObjectFilterDefinition
struct IrisCore_NetObjectFilterDefinition
{
public:
	class FName                                  FilterName;                                        // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ClassName;                                         // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ConfigClassName;                                   // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct IrisCore.NetObjectPrioritizerDefinition
struct IrisCore_NetObjectPrioritizerDefinition
{
public:
	class FName                                  PrioritizerName;                                   // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ClassName;                                         // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UObject>                   Class;                                             // 0x10(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ConfigClassName;                                   // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UObject>                   ConfigClass;                                       // 0x20(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct IrisCore.BoolNetSerializerConfig
struct IrisCore_BoolNetSerializerConfig : public IrisCore_NetSerializerConfig
{
public:
};

// 0x8 (0x18 - 0x10)
// ScriptStruct IrisCore.StructNetSerializerConfig
struct IrisCore_StructNetSerializerConfig : public IrisCore_NetSerializerConfig
{
public:
	uint8                                        Pad_5FE[0x8];                                      // Fixing Size Of Struct 
};

// 0x0 (0x10 - 0x10)
// ScriptStruct IrisCore.NopNetSerializerConfig
struct IrisCore_NopNetSerializerConfig : public IrisCore_NetSerializerConfig
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct IrisCore.ObjectNetSerializerConfig
struct IrisCore_ObjectNetSerializerConfig : public IrisCore_NetSerializerConfig
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct IrisCore.WeakObjectNetSerializerConfig
struct IrisCore_WeakObjectNetSerializerConfig : public IrisCore_NetSerializerConfig
{
public:
};

// 0x8 (0x18 - 0x10)
// ScriptStruct IrisCore.ScriptInterfaceNetSerializerConfig
struct IrisCore_ScriptInterfaceNetSerializerConfig : public IrisCore_NetSerializerConfig
{
public:
	TSubclassOf<class UObject>                   InterfaceClass;                                    // 0x10(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct IrisCore.ObjectReplicationBridgePollConfig
struct IrisCore_ObjectReplicationBridgePollConfig
{
public:
	class FName                                  ClassName;                                         // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PollFrequency;                                     // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIncludeSubclasses;                                // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_60C[0x3];                                      // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// ScriptStruct IrisCore.ObjectReplicationBridgeFilterConfig
struct IrisCore_ObjectReplicationBridgeFilterConfig
{
public:
	class FName                                  ClassName;                                         // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  DynamicFilterName;                                 // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct IrisCore.ObjectReplicationBridgePrioritizerConfig
struct IrisCore_ObjectReplicationBridgePrioritizerConfig
{
public:
	class FName                                  ClassName;                                         // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  PrioritizerName;                                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForceEnableOnAllInstances;                        // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_617[0x3];                                      // Fixing Size Of Struct 
};

// 0xC (0xC - 0x0)
// ScriptStruct IrisCore.ObjectReplicationBridgeDeltaCompressionConfig
struct IrisCore_ObjectReplicationBridgeDeltaCompressionConfig
{
public:
	class FName                                  ClassName;                                         // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableDeltaCompression;                           // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_620[0x3];                                      // Fixing Size Of Struct 
};

// 0x0 (0x10 - 0x10)
// ScriptStruct IrisCore.PackedInt64NetSerializerConfig
struct IrisCore_PackedInt64NetSerializerConfig : public IrisCore_NetSerializerConfig
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct IrisCore.PackedUint64NetSerializerConfig
struct IrisCore_PackedUint64NetSerializerConfig : public IrisCore_NetSerializerConfig
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct IrisCore.PackedInt32NetSerializerConfig
struct IrisCore_PackedInt32NetSerializerConfig : public IrisCore_NetSerializerConfig
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct IrisCore.PackedUint32NetSerializerConfig
struct IrisCore_PackedUint32NetSerializerConfig : public IrisCore_NetSerializerConfig
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct IrisCore.VectorNetQuantizeNetSerializerConfig
struct IrisCore_VectorNetQuantizeNetSerializerConfig : public IrisCore_NetSerializerConfig
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct IrisCore.VectorNetQuantize10NetSerializerConfig
struct IrisCore_VectorNetQuantize10NetSerializerConfig : public IrisCore_NetSerializerConfig
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct IrisCore.VectorNetQuantize100NetSerializerConfig
struct IrisCore_VectorNetQuantize100NetSerializerConfig : public IrisCore_NetSerializerConfig
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct IrisCore.VectorNetQuantizeNormalNetSerializerConfig
struct IrisCore_VectorNetQuantizeNormalNetSerializerConfig : public IrisCore_NetSerializerConfig
{
public:
};

// 0x18 (0x28 - 0x10)
// ScriptStruct IrisCore.PolymorphicStructNetSerializerConfig
struct IrisCore_PolymorphicStructNetSerializerConfig : public IrisCore_NetSerializerConfig
{
public:
	uint8                                        Pad_63D[0x18];                                     // Fixing Size Of Struct 
};

// 0x0 (0x28 - 0x28)
// ScriptStruct IrisCore.PolymorphicArrayStructNetSerializerConfig
struct IrisCore_PolymorphicArrayStructNetSerializerConfig : public IrisCore_PolymorphicStructNetSerializerConfig
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct IrisCore.UnitQuatNetSerializerConfig
struct IrisCore_UnitQuatNetSerializerConfig : public IrisCore_NetSerializerConfig
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct IrisCore.UnitQuat4fNetSerializerConfig
struct IrisCore_UnitQuat4fNetSerializerConfig : public IrisCore_NetSerializerConfig
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct IrisCore.UnitQuat4dNetSerializerConfig
struct IrisCore_UnitQuat4dNetSerializerConfig : public IrisCore_NetSerializerConfig
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct IrisCore.RotatorNetSerializerConfig
struct IrisCore_RotatorNetSerializerConfig : public IrisCore_NetSerializerConfig
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct IrisCore.RotatorAsByteNetSerializerConfig
struct IrisCore_RotatorAsByteNetSerializerConfig : public IrisCore_NetSerializerConfig
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct IrisCore.RotatorAsShortNetSerializerConfig
struct IrisCore_RotatorAsShortNetSerializerConfig : public IrisCore_NetSerializerConfig
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct IrisCore.SoftObjectNetSerializerConfig
struct IrisCore_SoftObjectNetSerializerConfig : public IrisCore_NetSerializerConfig
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct IrisCore.SoftObjectPathNetSerializerConfig
struct IrisCore_SoftObjectPathNetSerializerConfig : public IrisCore_NetSerializerConfig
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct IrisCore.SoftClassPathNetSerializerConfig
struct IrisCore_SoftClassPathNetSerializerConfig : public IrisCore_NetSerializerConfig
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct IrisCore.NameNetSerializerConfig
struct IrisCore_NameNetSerializerConfig : public IrisCore_NetSerializerConfig
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct IrisCore.StringNetSerializerConfig
struct IrisCore_StringNetSerializerConfig : public IrisCore_NetSerializerConfig
{
public:
};

// 0x8 (0x18 - 0x10)
// ScriptStruct IrisCore.UintNetSerializerConfig
struct IrisCore_UintNetSerializerConfig : public IrisCore_NetSerializerConfig
{
public:
	uint8                                        BitCount;                                          // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_65D[0x7];                                      // Fixing Size Of Struct 
};

// 0x8 (0x18 - 0x10)
// ScriptStruct IrisCore.Uint8RangeNetSerializerConfig
struct IrisCore_Uint8RangeNetSerializerConfig : public IrisCore_NetSerializerConfig
{
public:
	uint8                                        LowerBound;                                        // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        UpperBound;                                        // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitCount;                                          // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_665[0x5];                                      // Fixing Size Of Struct 
};

// 0x8 (0x18 - 0x10)
// ScriptStruct IrisCore.Uint16RangeNetSerializerConfig
struct IrisCore_Uint16RangeNetSerializerConfig : public IrisCore_NetSerializerConfig
{
public:
	uint16                                       LowerBound;                                        // 0x10(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       UpperBound;                                        // 0x12(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitCount;                                          // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_66C[0x3];                                      // Fixing Size Of Struct 
};

// 0x10 (0x20 - 0x10)
// ScriptStruct IrisCore.Uint32RangeNetSerializerConfig
struct IrisCore_Uint32RangeNetSerializerConfig : public IrisCore_NetSerializerConfig
{
public:
	uint32                                       LowerBound;                                        // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       UpperBound;                                        // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitCount;                                          // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_670[0x7];                                      // Fixing Size Of Struct 
};

// 0x18 (0x28 - 0x10)
// ScriptStruct IrisCore.Uint64RangeNetSerializerConfig
struct IrisCore_Uint64RangeNetSerializerConfig : public IrisCore_NetSerializerConfig
{
public:
	uint64                                       LowerBound;                                        // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint64                                       UpperBound;                                        // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitCount;                                          // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_680[0x7];                                      // Fixing Size Of Struct 
};

// 0x0 (0x10 - 0x10)
// ScriptStruct IrisCore.VectorNetSerializerConfig
struct IrisCore_VectorNetSerializerConfig : public IrisCore_NetSerializerConfig
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct IrisCore.Vector3fNetSerializerConfig
struct IrisCore_Vector3fNetSerializerConfig : public IrisCore_NetSerializerConfig
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct IrisCore.Vector3dNetSerializerConfig
struct IrisCore_Vector3dNetSerializerConfig : public IrisCore_NetSerializerConfig
{
public:
};

// 0xC (0xC - 0x0)
// ScriptStruct IrisCore.SupportsStructNetSerializerConfig
struct IrisCore_SupportsStructNetSerializerConfig
{
public:
	class FName                                  StructName;                                        // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanUseStructNetSerializer;                        // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_68E[0x3];                                      // Fixing Size Of Struct 
};

}


