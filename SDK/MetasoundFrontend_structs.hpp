#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ESetParamResult : uint8
{
	Succeeded                      = 0,
	Failed                         = 1,
	ESetParamResult_MAX            = 2,
};

enum class EMetasoundFrontendVertexAccessType : int32
{
	Reference                      = 0,
	Value                          = 1,
	Unset                          = 2,
	EMetasoundFrontendVertexAccessType_MAX = 3,
};

enum class EMetasoundFrontendClassType : uint8
{
	External                       = 0,
	Graph                          = 1,
	Input                          = 2,
	Output                         = 3,
	Literal                        = 4,
	Variable                       = 5,
	VariableDeferredAccessor       = 6,
	VariableAccessor               = 7,
	VariableMutator                = 8,
	Template                       = 9,
	Invalid                        = 10,
	EMetasoundFrontendClassType_MAX = 11,
};

enum class EMetasoundFrontendNodeStyleDisplayVisibility : uint8
{
	Visible                        = 0,
	Hidden                         = 1,
	EMetasoundFrontendNodeStyleDisplayVisibility_MAX = 2,
};

enum class EMetasoundFrontendLiteralType : uint8
{
	None                           = 0,
	Boolean                        = 1,
	Integer                        = 2,
	Float                          = 3,
	String                         = 4,
	UObject                        = 5,
	NoneArray                      = 6,
	BooleanArray                   = 7,
	IntegerArray                   = 8,
	FloatArray                     = 9,
	StringArray                    = 10,
	UObjectArray                   = 11,
	Invalid                        = 12,
	EMetasoundFrontendLiteralType_MAX = 13,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x8 - 0x0)
// ScriptStruct MetasoundFrontend.MetasoundFrontendVersionNumber
struct MetasoundFrontend_MetasoundFrontendVersionNumber
{
public:
	int32                                        Major;                                             // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Minor;                                             // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MetasoundFrontend.MetasoundFrontendVersion
struct MetasoundFrontend_MetasoundFrontendVersion
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct MetasoundFrontend_MetasoundFrontendVersionNumber Number;                                            // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct MetasoundFrontend.MetasoundFrontendVertex
struct MetasoundFrontend_MetasoundFrontendVertex
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  TypeName;                                          // 0x8(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Guid                      VertexID;                                          // 0x10(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct MetasoundFrontend.MetasoundFrontendVertexHandle
struct MetasoundFrontend_MetasoundFrontendVertexHandle
{
public:
	struct CoreUObject_Guid                      NodeId;                                            // 0x0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Guid                      VertexID;                                          // 0x10(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct MetasoundFrontend.MetasoundFrontendLiteral
struct MetasoundFrontend_MetasoundFrontendLiteral
{
public:
	enum class EMetasoundFrontendLiteralType     Type;                                              // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_11D3[0x3];                                     // Fixing Size After Last Property  
	int32                                        AsNumDefault;                                      // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<bool>                                 AsBoolean;                                         // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<int32>                                AsInteger;                                         // 0x18(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<float>                                AsFloat;                                           // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<class FString>                        AsString;                                          // 0x38(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<class UObject*>                       AsUObject;                                         // 0x48(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct MetasoundFrontend.MetasoundFrontendVertexLiteral
struct MetasoundFrontend_MetasoundFrontendVertexLiteral
{
public:
	struct CoreUObject_Guid                      VertexID;                                          // 0x0(0x10)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct MetasoundFrontend_MetasoundFrontendLiteral Value;                                             // 0x10(0x58)(Edit, NativeAccessSpecifierPublic)
};

// 0xB8 (0xB8 - 0x0)
// ScriptStruct MetasoundFrontend.MetasoundFrontendVariable
struct MetasoundFrontend_MetasoundFrontendVariable
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  TypeName;                                          // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct MetasoundFrontend_MetasoundFrontendLiteral Literal;                                           // 0x10(0x58)(NativeAccessSpecifierPublic)
	struct CoreUObject_Guid                      ID;                                                // 0x68(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Guid                      VariableNodeID;                                    // 0x78(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Guid                      MutatorNodeID;                                     // 0x88(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct CoreUObject_Guid>              AccessorNodeIDs;                                   // 0x98(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct CoreUObject_Guid>              DeferredAccessorNodeIDs;                           // 0xA8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct MetasoundFrontend.MetasoundFrontendNodeInterface
struct MetasoundFrontend_MetasoundFrontendNodeInterface
{
public:
	TArray<struct MetasoundFrontend_MetasoundFrontendVertex> Inputs;                                            // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct MetasoundFrontend_MetasoundFrontendVertex> Outputs;                                           // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct MetasoundFrontend_MetasoundFrontendVertex> Environment;                                       // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct MetasoundFrontend.MetasoundFrontendNodeStyleDisplay
struct MetasoundFrontend_MetasoundFrontendNodeStyleDisplay
{
public:
	uint8                                        Pad_11F0[0x1];                                     // Fixing Size Of Struct 
};

// 0x1 (0x1 - 0x0)
// ScriptStruct MetasoundFrontend.MetasoundFrontendNodeStyle
struct MetasoundFrontend_MetasoundFrontendNodeStyle
{
public:
	uint8                                        Pad_11F1[0x1];                                     // Fixing Size Of Struct 
};

// 0x68 (0x68 - 0x0)
// ScriptStruct MetasoundFrontend.MetasoundFrontendNode
struct MetasoundFrontend_MetasoundFrontendNode
{
public:
	struct CoreUObject_Guid                      ID;                                                // 0x0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct CoreUObject_Guid                      ClassID;                                           // 0x10(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Name;                                              // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct MetasoundFrontend_MetasoundFrontendNodeInterface Interface;                                         // 0x28(0x30)(NativeAccessSpecifierPublic)
	TArray<struct MetasoundFrontend_MetasoundFrontendVertexLiteral> InputLiterals;                                     // 0x58(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct MetasoundFrontend.MetasoundFrontendEdge
struct MetasoundFrontend_MetasoundFrontendEdge
{
public:
	struct CoreUObject_Guid                      FromNodeID;                                        // 0x0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Guid                      FromVertexID;                                      // 0x10(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Guid                      ToNodeID;                                          // 0x20(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Guid                      ToVertexID;                                        // 0x30(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct MetasoundFrontend.MetasoundFrontendEdgeStyleLiteralColorPair
struct MetasoundFrontend_MetasoundFrontendEdgeStyleLiteralColorPair
{
public:
	struct MetasoundFrontend_MetasoundFrontendLiteral Value;                                             // 0x0(0x58)(NativeAccessSpecifierPublic)
	struct CoreUObject_LinearColor               Color;                                             // 0x58(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct MetasoundFrontend.MetasoundFrontendEdgeStyle
struct MetasoundFrontend_MetasoundFrontendEdgeStyle
{
public:
	struct CoreUObject_Guid                      NodeId;                                            // 0x0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  OutputName;                                        // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct MetasoundFrontend_MetasoundFrontendEdgeStyleLiteralColorPair> LiteralColorPairs;                                 // 0x18(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct MetasoundFrontend.MetasoundFrontendGraphStyle
struct MetasoundFrontend_MetasoundFrontendGraphStyle
{
public:
	bool                                         bIsGraphEditable;                                  // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_121F[0x7];                                     // Fixing Size After Last Property  
	TArray<struct MetasoundFrontend_MetasoundFrontendEdgeStyle> EdgeStyles;                                        // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct MetasoundFrontend.MetasoundFrontendGraph
struct MetasoundFrontend_MetasoundFrontendGraph
{
public:
	TArray<struct MetasoundFrontend_MetasoundFrontendNode> Nodes;                                             // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct MetasoundFrontend_MetasoundFrontendEdge> Edges;                                             // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct MetasoundFrontend_MetasoundFrontendVariable> Variables;                                         // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct MetasoundFrontend.MetasoundFrontendVertexMetadata
struct MetasoundFrontend_MetasoundFrontendVertexMetadata
{
public:
	uint8                                        Pad_1221[0x1];                                     // Fixing Size Of Struct 
};

// 0x14 (0x34 - 0x20)
// ScriptStruct MetasoundFrontend.MetasoundFrontendClassVertex
struct MetasoundFrontend_MetasoundFrontendClassVertex : public MetasoundFrontend_MetasoundFrontendVertex
{
public:
	struct CoreUObject_Guid                      NodeId;                                            // 0x20(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMetasoundFrontendVertexAccessType AccessType;                                        // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct MetasoundFrontend.MetasoundFrontendClassStyleDisplay
struct MetasoundFrontend_MetasoundFrontendClassStyleDisplay
{
public:
	uint8                                        Pad_1225[0x1];                                     // Fixing Size Of Struct 
};

// 0x5C (0x90 - 0x34)
// ScriptStruct MetasoundFrontend.MetasoundFrontendClassInput
struct MetasoundFrontend_MetasoundFrontendClassInput : public MetasoundFrontend_MetasoundFrontendClassVertex
{
public:
	uint8                                        Pad_123C[0x4];                                     // Fixing Size After Last Property  
	struct MetasoundFrontend_MetasoundFrontendLiteral DefaultLiteral;                                    // 0x38(0x58)(Edit, NativeAccessSpecifierPublic)
};

// 0x5C (0x90 - 0x34)
// ScriptStruct MetasoundFrontend.MetasoundFrontendClassVariable
struct MetasoundFrontend_MetasoundFrontendClassVariable : public MetasoundFrontend_MetasoundFrontendClassVertex
{
public:
	uint8                                        Pad_1247[0x4];                                     // Fixing Size After Last Property  
	struct MetasoundFrontend_MetasoundFrontendLiteral DefaultLiteral;                                    // 0x38(0x58)(Edit, NativeAccessSpecifierPublic)
};

// 0x0 (0x34 - 0x34)
// ScriptStruct MetasoundFrontend.MetasoundFrontendClassOutput
struct MetasoundFrontend_MetasoundFrontendClassOutput : public MetasoundFrontend_MetasoundFrontendClassVertex
{
public:
};

// 0x14 (0x14 - 0x0)
// ScriptStruct MetasoundFrontend.MetasoundFrontendClassEnvironmentVariable
struct MetasoundFrontend_MetasoundFrontendClassEnvironmentVariable
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  TypeName;                                          // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsRequired;                                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_124D[0x3];                                     // Fixing Size Of Struct 
};

// 0x1 (0x1 - 0x0)
// ScriptStruct MetasoundFrontend.MetasoundFrontendInterfaceStyle
struct MetasoundFrontend_MetasoundFrontendInterfaceStyle
{
public:
	uint8                                        Pad_124E[0x1];                                     // Fixing Size Of Struct 
};

// 0x40 (0x40 - 0x0)
// ScriptStruct MetasoundFrontend.MetasoundFrontendClassInterface
struct MetasoundFrontend_MetasoundFrontendClassInterface
{
public:
	TArray<struct MetasoundFrontend_MetasoundFrontendClassInput> Inputs;                                            // 0x0(0x10)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<struct MetasoundFrontend_MetasoundFrontendClassOutput> Outputs;                                           // 0x10(0x10)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<struct MetasoundFrontend_MetasoundFrontendClassEnvironmentVariable> Environment;                                       // 0x20(0x10)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	struct CoreUObject_Guid                      ChangeID;                                          // 0x30(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MetasoundFrontend.MetasoundFrontendInterfaceVertexBinding
struct MetasoundFrontend_MetasoundFrontendInterfaceVertexBinding
{
public:
	class FName                                  OutputName;                                        // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  InputName;                                         // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct MetasoundFrontend.MetasoundFrontendInterfaceBinding
struct MetasoundFrontend_MetasoundFrontendInterfaceBinding
{
public:
	struct MetasoundFrontend_MetasoundFrontendVersion OutputInterfaceVersion;                            // 0x0(0x10)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct MetasoundFrontend_MetasoundFrontendVersion InputInterfaceVersion;                             // 0x10(0x10)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BindingPriority;                                   // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_126A[0x4];                                     // Fixing Size After Last Property  
	TArray<struct MetasoundFrontend_MetasoundFrontendInterfaceVertexBinding> VertexBindings;                                    // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct MetasoundFrontend.MetasoundFrontendInterfaceUClassOptions
struct MetasoundFrontend_MetasoundFrontendInterfaceUClassOptions
{
public:
	struct CoreUObject_TopLevelAssetPath         ClassPath;                                         // 0x0(0x10)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsModifiable;                                     // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsDefault;                                        // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1270[0x2];                                     // Fixing Size Of Struct 
};

// 0x20 (0x60 - 0x40)
// ScriptStruct MetasoundFrontend.MetasoundFrontendInterface
struct MetasoundFrontend_MetasoundFrontendInterface : public MetasoundFrontend_MetasoundFrontendClassInterface
{
public:
	struct MetasoundFrontend_MetasoundFrontendVersion Version;                                           // 0x40(0x10)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct MetasoundFrontend_MetasoundFrontendInterfaceUClassOptions> UClassOptions;                                     // 0x50(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct MetasoundFrontend.MetasoundFrontendClassName
struct MetasoundFrontend_MetasoundFrontendClassName
{
public:
	class FName                                  Namespace;                                         // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Name;                                              // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Variant;                                           // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x34 (0x34 - 0x0)
// ScriptStruct MetasoundFrontend.MetasoundFrontendClassMetadata
struct MetasoundFrontend_MetasoundFrontendClassMetadata
{
public:
	struct MetasoundFrontend_MetasoundFrontendClassName ClassName;                                         // 0x0(0x18)(Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct MetasoundFrontend_MetasoundFrontendVersionNumber Version;                                           // 0x18(0x8)(Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EMetasoundFrontendClassType       Type;                                              // 0x20(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bIsDeprecated;                                     // 0x21(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bAutoUpdateManagesInterface;                       // 0x22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_128D[0x1];                                     // Fixing Size After Last Property  
	struct CoreUObject_Guid                      ChangeID;                                          // 0x24(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct MetasoundFrontend.MetasoundFrontendClassStyle
struct MetasoundFrontend_MetasoundFrontendClassStyle
{
public:
	uint8                                        Pad_1295[0x1];                                     // Fixing Size Of Struct 
};

// 0x90 (0x90 - 0x0)
// ScriptStruct MetasoundFrontend.MetasoundFrontendClass
struct MetasoundFrontend_MetasoundFrontendClass
{
public:
	uint8                                        Pad_1297[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Guid                      ID;                                                // 0x8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct MetasoundFrontend_MetasoundFrontendClassMetadata MetaData;                                          // 0x18(0x34)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1299[0x4];                                     // Fixing Size After Last Property  
	struct MetasoundFrontend_MetasoundFrontendClassInterface Interface;                                         // 0x50(0x40)(Edit, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct MetasoundFrontend.MetasoundFrontendGraphClassPresetOptions
struct MetasoundFrontend_MetasoundFrontendGraphClassPresetOptions
{
public:
	bool                                         bIsPreset;                                         // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_129B[0x7];                                     // Fixing Size After Last Property  
	TSet<class FName>                            InputsInheritingDefault;                           // 0x8(0x50)(NativeAccessSpecifierPublic)
};

// 0x88 (0x118 - 0x90)
// ScriptStruct MetasoundFrontend.MetasoundFrontendGraphClass
struct MetasoundFrontend_MetasoundFrontendGraphClass : public MetasoundFrontend_MetasoundFrontendClass
{
public:
	struct MetasoundFrontend_MetasoundFrontendGraph Graph;                                             // 0x90(0x30)(NativeAccessSpecifierPublic)
	struct MetasoundFrontend_MetasoundFrontendGraphClassPresetOptions PresetOptions;                                     // 0xC0(0x58)(NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MetasoundFrontend.MetasoundFrontendDocumentMetadata
struct MetasoundFrontend_MetasoundFrontendDocumentMetadata
{
public:
	struct MetasoundFrontend_MetasoundFrontendVersion Version;                                           // 0x0(0x10)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1C8 (0x1C8 - 0x0)
// ScriptStruct MetasoundFrontend.MetasoundFrontendDocument
struct MetasoundFrontend_MetasoundFrontendDocument
{
public:
	uint8                                        Pad_12AA[0x10];                                    // Fixing Size After Last Property  
	struct MetasoundFrontend_MetasoundFrontendDocumentMetadata MetaData;                                          // 0x10(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	TSet<struct MetasoundFrontend_MetasoundFrontendVersion> Interfaces;                                        // 0x20(0x50)(Edit, EditConst, NativeAccessSpecifierPublic)
	struct MetasoundFrontend_MetasoundFrontendGraphClass RootGraph;                                         // 0x70(0x118)(Edit, NativeAccessSpecifierPublic)
	TArray<struct MetasoundFrontend_MetasoundFrontendGraphClass> Subgraphs;                                         // 0x188(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct MetasoundFrontend_MetasoundFrontendClass> Dependencies;                                      // 0x198(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct MetasoundFrontend_MetasoundFrontendVersion ArchetypeVersion;                                  // 0x1A8(0x10)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct MetasoundFrontend_MetasoundFrontendVersion> InterfaceVersions;                                 // 0x1B8(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct MetasoundFrontend.MetaSoundFrontendDocumentBuilder
struct MetasoundFrontend_MetaSoundFrontendDocumentBuilder
{
public:
	TScriptInterface<class IMetaSoundDocumentInterface> DocumentInterface;                                 // 0x0(0x10)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_12B9[0x20];                                    // Fixing Size Of Struct 
};

}


