#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EWorldConditionResultValue : uint8
{
	IsFalse                        = 0,
	IsTrue                         = 1,
	Invalid                        = 2,
	EWorldConditionResultValue_MAX = 3,
};

enum class EWorldConditionOperator : uint8
{
	And                            = 0,
	Or                             = 1,
	Copy                           = 2,
	EWorldConditionOperator_MAX    = 3,
};

enum class EWorldConditionContextDataType : uint8
{
	Dynamic                        = 0,
	Persistent                     = 1,
	EWorldConditionContextDataType_MAX = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// ScriptStruct WorldConditions.WorldConditionBase
struct WorldConditions_WorldConditionBase
{
public:
	uint8                                        Pad_3[0xB];                                        // Fixing Size After Last Property  
	uint8                                        BitPad_0 : 2;                                      // Fixing Bit-Field Size  
	uint8                                        bInvert : 1;                                       // Mask: 0x4, PropSize: 0x10xB(0x1)(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_1 : 5;                                      // Fixing Bit-Field Size  
	enum class EWorldConditionOperator           Operator;                                          // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        NextExpressionDepth;                               // 0xD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4[0x2];                                        // Fixing Size Of Struct 
};

// 0x0 (0x10 - 0x10)
// ScriptStruct WorldConditions.WorldConditionCommonBase
struct WorldConditions_WorldConditionCommonBase : public WorldConditions_WorldConditionBase
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct WorldConditions.WorldConditionCommonActorBase
struct WorldConditions_WorldConditionCommonActorBase : public WorldConditions_WorldConditionBase
{
public:
};

// 0x1 (0x1 - 0x0)
// ScriptStruct WorldConditions.WorldConditionEditable
struct WorldConditions_WorldConditionEditable
{
public:
	uint8                                        Pad_6[0x1];                                        // Fixing Size Of Struct 
};

// 0x28 (0x28 - 0x0)
// ScriptStruct WorldConditions.WorldConditionQuerySharedDefinition
struct WorldConditions_WorldConditionQuerySharedDefinition
{
public:
	struct StructUtils_InstancedStructContainer  Conditions;                                        // 0x0(0x10)(NativeAccessSpecifierPrivate)
	TSubclassOf<class UWorldConditionSchema>     SchemaClass;                                       // 0x10(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7[0x10];                                       // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// ScriptStruct WorldConditions.WorldConditionQueryDefinition
struct WorldConditions_WorldConditionQueryDefinition
{
public:
	uint8                                        Pad_8[0x10];                                       // Fixing Size After Last Property  
	TSubclassOf<class UWorldConditionSchema>     SchemaClass;                                       // 0x10(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x3 (0x3 - 0x0)
// ScriptStruct WorldConditions.WorldConditionItem
struct WorldConditions_WorldConditionItem
{
public:
	uint8                                        Pad_9[0x3];                                        // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// ScriptStruct WorldConditions.WorldConditionStateObject
struct WorldConditions_WorldConditionStateObject
{
public:
	class UObject*                               Object;                                            // 0x0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct WorldConditions.WorldConditionQueryState
struct WorldConditions_WorldConditionQueryState
{
public:
	uint8                                        Pad_A[0x28];                                       // Fixing Size After Last Property  
	class UObject*                               Owner;                                             // 0x28(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct WorldConditions.WorldConditionQuery
struct WorldConditions_WorldConditionQuery
{
public:
	struct WorldConditions_WorldConditionQueryDefinition QueryDefinition;                                   // 0x0(0x18)(Edit, Protected, NativeAccessSpecifierProtected)
	struct WorldConditions_WorldConditionQueryState QueryState;                                        // 0x18(0x30)(Transient, Protected, NativeAccessSpecifierProtected)
};

// 0x2 (0x2 - 0x0)
// ScriptStruct WorldConditions.WorldConditionResult
struct WorldConditions_WorldConditionResult
{
public:
	enum class EWorldConditionResultValue        Value;                                             // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanBeCached;                                      // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct WorldConditions.WorldConditionContextDataDesc
struct WorldConditions_WorldConditionContextDataDesc
{
public:
	class UStruct*                               Struct;                                            // 0x0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Name;                                              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWorldConditionContextDataType    Type;                                              // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D[0x7];                                        // Fixing Size Of Struct 
};

// 0xC (0xC - 0x0)
// ScriptStruct WorldConditions.WorldConditionContextDataRef
struct WorldConditions_WorldConditionContextDataRef
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Index;                                             // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_E[0x3];                                        // Fixing Size Of Struct 
};

}


