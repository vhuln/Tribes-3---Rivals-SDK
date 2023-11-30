#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EFloatArrayToIntArrayFunctionEnum : uint8
{
	Dataflow_FloatToInt_Function_Floor = 0,
	Dataflow_FloatToInt_Function_Ceil = 1,
	Dataflow_FloatToInt_Function_Round = 2,
	Dataflow_FloatToInt_Function_Truncate = 3,
	Dataflow_FloatToInt_NonZeroToIndex = 4,
	Dataflow_FloatToInt_ZeroToIndex = 5,
	Dataflow_Max                   = 6,
};

enum class ECompareOperation1Enum : uint8
{
	Dataflow_Compare_Equal         = 0,
	Dataflow_Compare_Smaller       = 1,
	Dataflow_Compare_SmallerOrEqual = 2,
	Dataflow_Compare_Greater       = 3,
	Dataflow_Compare_GreaterOrEqual = 4,
	Dataflow_Max                   = 5,
};

enum class EStatisticsOperationEnum : uint8
{
	Dataflow_EStatisticsOperationEnum_Min = 0,
	Dataflow_EStatisticsOperationEnum_Max = 1,
	Dataflow_EStatisticsOperationEnum_Mean = 2,
	Dataflow_EStatisticsOperationEnum_Median = 3,
	Dataflow_EStatisticsOperationEnum_Mode = 4,
	Dataflow_EStatisticsOperationEnum_Sum = 5,
	Dataflow_Max                   = 6,
};

enum class EDataflowFieldFalloffType : uint8
{
	Dataflow_FieldFalloffType_None = 0,
	Dataflow_FieldFalloffType_Linear = 1,
	Dataflow_FieldFalloffType_Inverse = 2,
	Dataflow_FieldFalloffType_Squared = 3,
	Dataflow_FieldFalloffType_Logarithmic = 4,
	Dataflow_Max                   = 5,
};

enum class EDataflowSetMaskConditionType : uint8
{
	Dataflow_SetMaskConditionType_Always = 0,
	Dataflow_SetMaskConditionType_IFF_NOT_Interior = 1,
	Dataflow_SetMaskConditionType_IFF_NOT_Exterior = 2,
	Dataflow_Max                   = 3,
};

enum class EDataflowWaveFunctionType : uint8
{
	Dataflow_WaveFunctionType_Cosine = 0,
	Dataflow_WaveFunctionType_Gaussian = 1,
	Dataflow_WaveFunctionType_Falloff = 2,
	Dataflow_WaveFunctionType_Decay = 3,
	Dataflow_Max                   = 4,
};

enum class EDataflowFloatFieldOperationType : uint8
{
	Dataflow_FloatFieldOperationType_Multiply = 0,
	Dataflow_FloatFieldFalloffType_Divide = 1,
	Dataflow_FloatFieldFalloffType_Add = 2,
	Dataflow_FloatFieldFalloffType_Substract = 3,
	Dataflow_FloatFieldFalloffType_Min = 4,
	Dataflow_FloatFieldFalloffType_Max = 5,
	Dataflow_Max                   = 6,
};

enum class EDataflowVectorFieldOperationType : uint8
{
	Dataflow_VectorFieldOperationType_Multiply = 0,
	Dataflow_VectorFieldFalloffType_Divide = 1,
	Dataflow_VectorFieldFalloffType_Add = 2,
	Dataflow_VectorFieldFalloffType_Substract = 3,
	Dataflow_VectorFieldFalloffType_CrossProduct = 4,
	Dataflow_Max                   = 5,
};

enum class ESetMaterialOperationTypeEnum : uint8
{
	Dataflow_SetMaterialOperationType_Add = 0,
	Dataflow_SetMaterialOperationType_Insert = 1,
	Dataflow_Max                   = 2,
};

enum class EConvexOverlapRemovalMethodEnum : uint8
{
	Dataflow_EConvexOverlapRemovalMethod_None = 0,
	Dataflow_EConvexOverlapRemovalMethod_All = 1,
	Dataflow_EConvexOverlapRemovalMethod_OnlyClusters = 2,
	Dataflow_EConvexOverlapRemovalMethod_OnlyClustersVsClusters = 3,
	Dataflow_Max                   = 4,
};

enum class EClusterSizeMethodEnum : uint8
{
	Dataflow_ClusterSizeMethod_ByNumber = 0,
	Dataflow_ClusterSizeMethod_ByFractionOfInput = 1,
	Dataflow_ClusterSizeMethod_BySize = 2,
	Dataflow_ClusterSizeMethod_ByGrid = 3,
	Dataflow_Max                   = 4,
};

enum class EFloatToIntFunctionEnum : uint8
{
	Dataflow_FloatToInt_Function_Floor = 0,
	Dataflow_FloatToInt_Function_Ceil = 1,
	Dataflow_FloatToInt_Function_Round = 2,
	Dataflow_FloatToInt_Function_Truncate = 3,
	Dataflow_Max                   = 4,
};

enum class EVisibiltyOptionsEnum : uint8
{
	Dataflow_VisibilityOptions_Visible = 0,
	Dataflow_VisibilityOptions_Invisible = 1,
	Dataflow_Max                   = 2,
};

enum class EMakeBoxDataTypeEnum : uint8
{
	Dataflow_MakeBox_DataType_MinMax = 0,
	Dataflow_MakeBox_DataType_CenterSize = 1,
	Dataflow_Max                   = 2,
};

enum class EMathConstantsEnum : uint8
{
	Dataflow_MathConstants_Pi      = 0,
	Dataflow_MathConstants_HalfPi  = 1,
	Dataflow_MathConstants_TwoPi   = 2,
	Dataflow_MathConstants_FourPi  = 3,
	Dataflow_MathConstants_InvPi   = 4,
	Dataflow_MathConstants_InvTwoPi = 5,
	Dataflow_MathConstants_Sqrt2   = 6,
	Dataflow_MathConstants_InvSqrt2 = 7,
	Dataflow_MathConstants_Sqrt3   = 8,
	Dataflow_MathConstants_InvSqrt3 = 9,
	Dataflow_FloatToInt_Function_E = 10,
	Dataflow_FloatToInt_Function_Gamma = 11,
	Dataflow_FloatToInt_Function_GoldenRatio = 12,
	Dataflow_FloatToInt_Function_ZeroTolerance = 13,
	Dataflow_Max                   = 14,
};

enum class EMeshBooleanOperationEnum : uint8
{
	Dataflow_MeshBoolean_Union     = 0,
	Dataflow_MeshBoolean_Intersect = 1,
	Dataflow_MeshBoolean_Difference = 2,
	Dataflow_Max                   = 3,
};

enum class EBoxLengthMeasurementMethod : uint8
{
	XAxis                          = 0,
	YAxis                          = 1,
	ZAxis                          = 2,
	ShortestAxis                   = 3,
	LongestAxis                    = 4,
	Diagonal                       = 5,
	EBoxLengthMeasurementMethod_MAX = 6,
};

enum class ERotationOrderEnum : uint8
{
	Dataflow_RotationOrder_XYZ     = 0,
	Dataflow_RotationOrder_YZX     = 1,
	Dataflow_RotationOrder_ZXY     = 2,
	Dataflow_RotationOrder_XZY     = 3,
	Dataflow_RotationOrder_YXZ     = 4,
	Dataflow_RotationOrder_ZYX     = 5,
	Dataflow_Max                   = 6,
};

enum class ECompareOperationEnum : uint8
{
	Dataflow_Compare_Equal         = 0,
	Dataflow_Compare_Smaller       = 1,
	Dataflow_Compare_SmallerOrEqual = 2,
	Dataflow_Compare_Greater       = 3,
	Dataflow_Compare_GreaterOrEqual = 4,
	Dataflow_Max                   = 5,
};

enum class EAnchorStateEnum : uint8
{
	Dataflow_AnchorState_Anchored  = 0,
	Dataflow_AnchorState_NotAnchored = 1,
	Dataflow_Max                   = 2,
};

enum class EProximityMethodEnum : uint8
{
	Dataflow_ProximityMethod_Precise = 0,
	Dataflow_ProximityMethod_ConvexHull = 1,
	Dataflow_Max                   = 2,
};

enum class EProximityContactFilteringMethodEnum : uint8
{
	Dataflow_ProximityContactFilteringMethod_ProjectedBoundsOverlap = 0,
	Dataflow_ProximityContactFilteringMethod_ConvexHullSharp = 1,
	Dataflow_ProximityContactFilteringMethod_ConvexHullArea = 2,
	Dataflow_Max                   = 3,
};

enum class EConnectionContactAreaMethodEnum : uint8
{
	Dataflow_ConnectionContactAreaMethod_None = 0,
	Dataflow_ProximityContactFilteringMethod_ConvexHullArea = 1,
	Dataflow_Max                   = 2,
};

enum class EStandardGroupNameEnum : uint8
{
	Dataflow_EStandardGroupNameEnum_Transform = 0,
	Dataflow_EStandardGroupNameEnum_Geometry = 1,
	Dataflow_EStandardGroupNameEnum_Faces = 2,
	Dataflow_EStandardGroupNameEnum_Vertices = 3,
	Dataflow_EStandardGroupNameEnum_Material = 4,
	Dataflow_EStandardGroupNameEnum_Breaking = 5,
	Dataflow_EStandardGroupNameEnum_Custom = 6,
	Dataflow_Max                   = 7,
};

enum class ECustomAttributeTypeEnum : uint8
{
	Dataflow_CustomAttributeType_UInt8 = 0,
	Dataflow_CustomAttributeType_Int32 = 1,
	Dataflow_CustomAttributeType_Float = 2,
	Dataflow_CustomAttributeType_Double = 3,
	Dataflow_CustomAttributeType_Bool = 4,
	Dataflow_CustomAttributeType_String = 5,
	Dataflow_CustomAttributeType_Vector2f = 6,
	Dataflow_CustomAttributeType_Vector3f = 7,
	Dataflow_CustomAttributeType_Vector3d = 8,
	Dataflow_CustomAttributeType_Vector4f = 9,
	Dataflow_CustomAttributeType_LinearColor = 10,
	Dataflow_CustomAttributeType_Transform = 11,
	Dataflow_CustomAttributeType_Quat4f = 12,
	Dataflow_CustomAttributeType_Box = 13,
	Dataflow_CustomAttributeType_Guid = 14,
	Dataflow_CustomAttributeType_Int32Set = 15,
	Dataflow_CustomAttributeType_Int32Array = 16,
	Dataflow_CustomAttributeType_IntVector = 17,
	Dataflow_CustomAttributeType_IntVector2 = 18,
	Dataflow_CustomAttributeType_IntVector4 = 19,
	Dataflow_CustomAttributeType_IntVector2Array = 20,
	Dataflow_CustomAttributeType_FloatArray = 21,
	Dataflow_CustomAttributeType_Vector2fArray = 22,
	Dataflow_CustomAttributeType_FVector3fArray = 23,
	Dataflow_Max                   = 24,
};

enum class ESetOperationEnum : uint8
{
	Dataflow_SetOperation_AND      = 0,
	Dataflow_SetOperation_OR       = 1,
	Dataflow_SetOperation_XOR      = 2,
	Dataflow_Max                   = 3,
};

enum class ERangeSettingEnum : uint8
{
	Dataflow_RangeSetting_InsideRange = 0,
	Dataflow_RangeSetting_OutsideRange = 1,
	Dataflow_Max                   = 2,
};

enum class ESelectSubjectTypeEnum : uint8
{
	Dataflow_SelectSubjectType_Vertices = 0,
	Dataflow_SelectSubjectType_BoundingBox = 1,
	Dataflow_SelectSubjectType_Centroid = 2,
	Dataflow_Max                   = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x108 - 0xE8)
// ScriptStruct GeometryCollectionNodes.GetFloatArrayElementDataflowNode
struct GeometryCollectionNodes_GetFloatArrayElementDataflowNode : public DataflowCore_DataflowNode
{
public:
	int32                                        Index;                                             // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C7C[0x4];                                     // Fixing Size After Last Property  
	TArray<float>                                FloatArray;                                        // 0xF0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        FloatValue;                                        // 0x100(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C7E[0x4];                                     // Fixing Size Of Struct 
};

// 0x28 (0x110 - 0xE8)
// ScriptStruct GeometryCollectionNodes.FloatArrayToIntArrayDataflowNode
struct GeometryCollectionNodes_FloatArrayToIntArrayDataflowNode : public DataflowCore_DataflowNode
{
public:
	enum class EFloatArrayToIntArrayFunctionEnum Function;                                          // 0xE8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C82[0x7];                                     // Fixing Size After Last Property  
	TArray<float>                                FloatArray;                                        // 0xF0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                IntArray;                                          // 0x100(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x118 - 0xE8)
// ScriptStruct GeometryCollectionNodes.GetArrayElementDataflowNode
struct GeometryCollectionNodes_GetArrayElementDataflowNode : public DataflowCore_DataflowNode
{
public:
	int32                                        Index;                                             // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C86[0x4];                                     // Fixing Size After Last Property  
	TArray<struct CoreUObject_Vector>            Points;                                            // 0xF0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Point;                                             // 0x100(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x130 - 0xE8)
// ScriptStruct GeometryCollectionNodes.GetNumArrayElementsDataflowNode
struct GeometryCollectionNodes_GetNumArrayElementsDataflowNode : public DataflowCore_DataflowNode
{
public:
	TArray<float>                                FloatArray;                                        // 0xE8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                IntArray;                                          // 0xF8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct CoreUObject_Vector>            Points;                                            // 0x108(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct CoreUObject_Vector3f>          Vector3fArray;                                     // 0x118(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        NumElements;                                       // 0x128(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C8D[0x4];                                     // Fixing Size Of Struct 
};

// 0x30 (0x118 - 0xE8)
// ScriptStruct GeometryCollectionNodes.BoolArrayToFaceSelectionDataflowNode
struct GeometryCollectionNodes_BoolArrayToFaceSelectionDataflowNode : public DataflowCore_DataflowNode
{
public:
	TArray<bool>                                 BoolAttributeData;                                 // 0xE8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct DataflowCore_DataflowFaceSelection    FaceSelection;                                     // 0xF8(0x20)(NativeAccessSpecifierPublic)
};

// 0x38 (0x120 - 0xE8)
// ScriptStruct GeometryCollectionNodes.FloatArrayToVertexSelectionDataflowNode
struct GeometryCollectionNodes_FloatArrayToVertexSelectionDataflowNode : public DataflowCore_DataflowNode
{
public:
	TArray<float>                                FloatArray;                                        // 0xE8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	enum class ECompareOperation1Enum            Operation;                                         // 0xF8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C97[0x3];                                     // Fixing Size After Last Property  
	float                                        Threshold;                                         // 0xFC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct DataflowCore_DataflowVertexSelection  VertexSelection;                                   // 0x100(0x20)(NativeAccessSpecifierPublic)
};

// 0x48 (0x130 - 0xE8)
// ScriptStruct GeometryCollectionNodes.FloatArrayNormalizeDataflowNode
struct GeometryCollectionNodes_FloatArrayNormalizeDataflowNode : public DataflowCore_DataflowNode
{
public:
	TArray<float>                                InFloatArray;                                      // 0xE8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct DataflowCore_DataflowVertexSelection  Selection;                                         // 0xF8(0x20)(NativeAccessSpecifierPublic)
	float                                        MinRange;                                          // 0x118(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxRange;                                          // 0x11C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<float>                                OutFloatArray;                                     // 0x120(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x48 (0x130 - 0xE8)
// ScriptStruct GeometryCollectionNodes.VectorArrayNormalizeDataflowNode
struct GeometryCollectionNodes_VectorArrayNormalizeDataflowNode : public DataflowCore_DataflowNode
{
public:
	TArray<struct CoreUObject_Vector>            InVectorArray;                                     // 0xE8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct DataflowCore_DataflowVertexSelection  Selection;                                         // 0xF8(0x20)(NativeAccessSpecifierPublic)
	float                                        Magnitude;                                         // 0x118(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CA8[0x4];                                     // Fixing Size After Last Property  
	TArray<struct CoreUObject_Vector>            OutVectorArray;                                    // 0x120(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x118 - 0xE8)
// ScriptStruct GeometryCollectionNodes.UnionIntArraysDataflowNode
struct GeometryCollectionNodes_UnionIntArraysDataflowNode : public DataflowCore_DataflowNode
{
public:
	TArray<int32>                                InArray1;                                          // 0xE8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                InArray2;                                          // 0xF8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                OutArray;                                          // 0x108(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x100 - 0xE8)
// ScriptStruct GeometryCollectionNodes.RemoveFloatArrayElementDataflowNode
struct GeometryCollectionNodes_RemoveFloatArrayElementDataflowNode : public DataflowCore_DataflowNode
{
public:
	int32                                        Index;                                             // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPreserveOrder;                                    // 0xEC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CB5[0x3];                                     // Fixing Size After Last Property  
	TArray<float>                                FloatArray;                                        // 0xF0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x48 (0x130 - 0xE8)
// ScriptStruct GeometryCollectionNodes.FloatArrayComputeStatisticsDataflowNode
struct GeometryCollectionNodes_FloatArrayComputeStatisticsDataflowNode : public DataflowCore_DataflowNode
{
public:
	TArray<float>                                FloatArray;                                        // 0xE8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct DataflowCore_DataflowTransformSelection TransformSelection;                                // 0xF8(0x20)(NativeAccessSpecifierPublic)
	enum class EStatisticsOperationEnum          OperationName;                                     // 0x118(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CC3[0x3];                                     // Fixing Size After Last Property  
	float                                        Value;                                             // 0x11C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                Indices;                                           // 0x120(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xD0 (0x1B8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.GeometryCollectionTerminalDataflowNode
struct GeometryCollectionNodes_GeometryCollectionTerminalDataflowNode : public DataflowCore_DataflowTerminalNode
{
public:
	struct Chaos_ManagedArrayCollection          Collection;                                        // 0xE8(0xB0)(NativeAccessSpecifierPublic)
	TArray<class UMaterial*>                     Materials;                                         // 0x198(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<struct GeometryCollectionEngine_GeometryCollectionAutoInstanceMesh> InstancedMeshes;                                   // 0x1A8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0xF0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.GetGeometryCollectionAssetDataflowNode
struct GeometryCollectionNodes_GetGeometryCollectionAssetDataflowNode : public DataflowCore_DataflowNode
{
public:
	class UGeometryCollection*                   Asset;                                             // 0xE8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x100 - 0xE8)
// ScriptStruct GeometryCollectionNodes.GetGeometryCollectionSourcesDataflowNode
struct GeometryCollectionNodes_GetGeometryCollectionSourcesDataflowNode : public DataflowCore_DataflowNode
{
public:
	class UGeometryCollection*                   Asset;                                             // 0xE8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct GeometryCollectionEngine_GeometryCollectionSource> Sources;                                           // 0xF0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xE0 (0x1C8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CreateGeometryCollectionFromSourcesDataflowNode
struct GeometryCollectionNodes_CreateGeometryCollectionFromSourcesDataflowNode : public DataflowCore_DataflowNode
{
public:
	TArray<struct GeometryCollectionEngine_GeometryCollectionSource> Sources;                                           // 0xE8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct Chaos_ManagedArrayCollection          Collection;                                        // 0xF8(0xB0)(NativeAccessSpecifierPublic)
	TArray<class UMaterial*>                     Materials;                                         // 0x1A8(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<struct GeometryCollectionEngine_GeometryCollectionAutoInstanceMesh> InstancedMeshes;                                   // 0x1B8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xC8 (0x1B0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.RadialFalloffFieldDataflowNode
struct GeometryCollectionNodes_RadialFalloffFieldDataflowNode : public DataflowCore_DataflowNode
{
public:
	TArray<struct CoreUObject_Vector3f>          SamplePositions;                                   // 0xE8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct DataflowCore_DataflowVertexSelection  SampleIndices;                                     // 0xF8(0x20)(NativeAccessSpecifierPublic)
	struct CoreUObject_Sphere                    Sphere;                                            // 0x118(0x20)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Translation;                                       // 0x138(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Magnitude;                                         // 0x150(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinRange;                                          // 0x154(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxRange;                                          // 0x158(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Default;                                           // 0x15C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDataflowFieldFalloffType         FalloffType;                                       // 0x160(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CF9[0x7];                                     // Fixing Size After Last Property  
	TArray<float>                                FieldFloatResult;                                  // 0x168(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                FieldRemap;                                        // 0x178(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct DataflowCore_DataflowVertexSelection  FieldSelectionMask;                                // 0x188(0x20)(NativeAccessSpecifierPublic)
	int32                                        NumSamplePositions;                                // 0x1A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CFD[0x4];                                     // Fixing Size Of Struct 
};

// 0x128 (0x210 - 0xE8)
// ScriptStruct GeometryCollectionNodes.BoxFalloffFieldDataflowNode
struct GeometryCollectionNodes_BoxFalloffFieldDataflowNode : public DataflowCore_DataflowNode
{
public:
	TArray<struct CoreUObject_Vector3f>          SamplePositions;                                   // 0xE8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct DataflowCore_DataflowVertexSelection  SampleIndices;                                     // 0xF8(0x20)(NativeAccessSpecifierPublic)
	struct CoreUObject_Box                       Box;                                               // 0x118(0x38)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct CoreUObject_Transform                 Transform;                                         // 0x150(0x60)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Magnitude;                                         // 0x1B0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinRange;                                          // 0x1B4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxRange;                                          // 0x1B8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Default;                                           // 0x1BC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDataflowFieldFalloffType         FalloffType;                                       // 0x1C0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D0B[0x7];                                     // Fixing Size After Last Property  
	TArray<float>                                FieldFloatResult;                                  // 0x1C8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                FieldRemap;                                        // 0x1D8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct DataflowCore_DataflowVertexSelection  FieldSelectionMask;                                // 0x1E8(0x20)(NativeAccessSpecifierPublic)
	int32                                        NumSamplePositions;                                // 0x208(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D0E[0x4];                                     // Fixing Size Of Struct 
};

// 0xE0 (0x1C8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.PlaneFalloffFieldDataflowNode
struct GeometryCollectionNodes_PlaneFalloffFieldDataflowNode : public DataflowCore_DataflowNode
{
public:
	TArray<struct CoreUObject_Vector3f>          SamplePositions;                                   // 0xE8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct DataflowCore_DataflowVertexSelection  SampleIndices;                                     // 0xF8(0x20)(NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Position;                                          // 0x118(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Normal;                                            // 0x130(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Distance;                                          // 0x148(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D20[0x4];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector                    Translation;                                       // 0x150(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Magnitude;                                         // 0x168(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinRange;                                          // 0x16C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxRange;                                          // 0x170(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Default;                                           // 0x174(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDataflowFieldFalloffType         FalloffType;                                       // 0x178(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D2E[0x7];                                     // Fixing Size After Last Property  
	TArray<float>                                FieldFloatResult;                                  // 0x180(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                FieldRemap;                                        // 0x190(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct DataflowCore_DataflowVertexSelection  FieldSelectionMask;                                // 0x1A0(0x20)(NativeAccessSpecifierPublic)
	int32                                        NumSamplePositions;                                // 0x1C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D35[0x4];                                     // Fixing Size Of Struct 
};

// 0xA0 (0x188 - 0xE8)
// ScriptStruct GeometryCollectionNodes.RadialIntMaskFieldDataflowNode
struct GeometryCollectionNodes_RadialIntMaskFieldDataflowNode : public DataflowCore_DataflowNode
{
public:
	TArray<struct CoreUObject_Vector3f>          SamplePositions;                                   // 0xE8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct DataflowCore_DataflowVertexSelection  SampleIndices;                                     // 0xF8(0x20)(NativeAccessSpecifierPublic)
	struct CoreUObject_Sphere                    Sphere;                                            // 0x118(0x20)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Translation;                                       // 0x138(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InteriorValue;                                     // 0x150(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ExteriorValue;                                     // 0x154(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDataflowSetMaskConditionType     SetMaskConditionType;                              // 0x158(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D48[0x7];                                     // Fixing Size After Last Property  
	TArray<int32>                                FieldIntResult;                                    // 0x160(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                FieldRemap;                                        // 0x170(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        NumSamplePositions;                                // 0x180(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D4B[0x4];                                     // Fixing Size Of Struct 
};

// 0x60 (0x148 - 0xE8)
// ScriptStruct GeometryCollectionNodes.UniformScalarFieldDataflowNode
struct GeometryCollectionNodes_UniformScalarFieldDataflowNode : public DataflowCore_DataflowNode
{
public:
	TArray<struct CoreUObject_Vector3f>          SamplePositions;                                   // 0xE8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct DataflowCore_DataflowVertexSelection  SampleIndices;                                     // 0xF8(0x20)(NativeAccessSpecifierPublic)
	float                                        Magnitude;                                         // 0x118(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D51[0x4];                                     // Fixing Size After Last Property  
	TArray<float>                                FieldFloatResult;                                  // 0x120(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                FieldRemap;                                        // 0x130(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        NumSamplePositions;                                // 0x140(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D54[0x4];                                     // Fixing Size Of Struct 
};

// 0x78 (0x160 - 0xE8)
// ScriptStruct GeometryCollectionNodes.UniformVectorFieldDataflowNode
struct GeometryCollectionNodes_UniformVectorFieldDataflowNode : public DataflowCore_DataflowNode
{
public:
	TArray<struct CoreUObject_Vector3f>          SamplePositions;                                   // 0xE8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct DataflowCore_DataflowVertexSelection  SampleIndices;                                     // 0xF8(0x20)(NativeAccessSpecifierPublic)
	float                                        Magnitude;                                         // 0x118(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D5A[0x4];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector                    Direction;                                         // 0x120(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct CoreUObject_Vector>            FieldVectorResult;                                 // 0x138(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                FieldRemap;                                        // 0x148(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        NumSamplePositions;                                // 0x158(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D61[0x4];                                     // Fixing Size Of Struct 
};

// 0x78 (0x160 - 0xE8)
// ScriptStruct GeometryCollectionNodes.RadialVectorFieldDataflowNode
struct GeometryCollectionNodes_RadialVectorFieldDataflowNode : public DataflowCore_DataflowNode
{
public:
	TArray<struct CoreUObject_Vector3f>          SamplePositions;                                   // 0xE8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct DataflowCore_DataflowVertexSelection  SampleIndices;                                     // 0xF8(0x20)(NativeAccessSpecifierPublic)
	float                                        Magnitude;                                         // 0x118(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D64[0x4];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector                    Position;                                          // 0x120(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct CoreUObject_Vector>            FieldVectorResult;                                 // 0x138(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                FieldRemap;                                        // 0x148(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        NumSamplePositions;                                // 0x158(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D69[0x4];                                     // Fixing Size Of Struct 
};

// 0x60 (0x148 - 0xE8)
// ScriptStruct GeometryCollectionNodes.RandomVectorFieldDataflowNode
struct GeometryCollectionNodes_RandomVectorFieldDataflowNode : public DataflowCore_DataflowNode
{
public:
	TArray<struct CoreUObject_Vector3f>          SamplePositions;                                   // 0xE8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct DataflowCore_DataflowVertexSelection  SampleIndices;                                     // 0xF8(0x20)(NativeAccessSpecifierPublic)
	float                                        Magnitude;                                         // 0x118(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D72[0x4];                                     // Fixing Size After Last Property  
	TArray<struct CoreUObject_Vector>            FieldVectorResult;                                 // 0x120(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                FieldRemap;                                        // 0x130(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        NumSamplePositions;                                // 0x140(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D78[0x4];                                     // Fixing Size Of Struct 
};

// 0xC8 (0x1B0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.NoiseFieldDataflowNode
struct GeometryCollectionNodes_NoiseFieldDataflowNode : public DataflowCore_DataflowNode
{
public:
	TArray<struct CoreUObject_Vector3f>          SamplePositions;                                   // 0xE8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct DataflowCore_DataflowVertexSelection  SampleIndices;                                     // 0xF8(0x20)(NativeAccessSpecifierPublic)
	float                                        MinRange;                                          // 0x118(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxRange;                                          // 0x11C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Transform                 Transform;                                         // 0x120(0x60)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<float>                                FieldFloatResult;                                  // 0x180(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                FieldRemap;                                        // 0x190(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        NumSamplePositions;                                // 0x1A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D81[0xC];                                     // Fixing Size Of Struct 
};

// 0x60 (0x148 - 0xE8)
// ScriptStruct GeometryCollectionNodes.UniformIntegerFieldDataflowNode
struct GeometryCollectionNodes_UniformIntegerFieldDataflowNode : public DataflowCore_DataflowNode
{
public:
	TArray<struct CoreUObject_Vector3f>          SamplePositions;                                   // 0xE8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct DataflowCore_DataflowVertexSelection  SampleIndices;                                     // 0xF8(0x20)(NativeAccessSpecifierPublic)
	int32                                        Magnitude;                                         // 0x118(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D85[0x4];                                     // Fixing Size After Last Property  
	TArray<int32>                                FieldIntResult;                                    // 0x120(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                FieldRemap;                                        // 0x130(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        NumSamplePositions;                                // 0x140(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D8D[0x4];                                     // Fixing Size Of Struct 
};

// 0xA0 (0x188 - 0xE8)
// ScriptStruct GeometryCollectionNodes.WaveScalarFieldDataflowNode
struct GeometryCollectionNodes_WaveScalarFieldDataflowNode : public DataflowCore_DataflowNode
{
public:
	TArray<struct CoreUObject_Vector3f>          SamplePositions;                                   // 0xE8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct DataflowCore_DataflowVertexSelection  SampleIndices;                                     // 0xF8(0x20)(NativeAccessSpecifierPublic)
	float                                        Magnitude;                                         // 0x118(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D92[0x4];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector                    Position;                                          // 0x120(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Translation;                                       // 0x138(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WaveLength;                                        // 0x150(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Period;                                            // 0x154(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDataflowWaveFunctionType         FunctionType;                                      // 0x158(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDataflowFieldFalloffType         FalloffType;                                       // 0x159(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D9F[0x6];                                     // Fixing Size After Last Property  
	TArray<float>                                FieldFloatResult;                                  // 0x160(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                FieldRemap;                                        // 0x170(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        NumSamplePositions;                                // 0x180(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DAB[0x4];                                     // Fixing Size Of Struct 
};

// 0x68 (0x150 - 0xE8)
// ScriptStruct GeometryCollectionNodes.SumScalarFieldDataflowNode
struct GeometryCollectionNodes_SumScalarFieldDataflowNode : public DataflowCore_DataflowNode
{
public:
	TArray<float>                                FieldFloatLeft;                                    // 0xE8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                FieldRemapLeft;                                    // 0xF8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                FieldFloatRight;                                   // 0x108(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                FieldRemapRight;                                   // 0x118(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        Magnitude;                                         // 0x128(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDataflowFloatFieldOperationType  Operation;                                         // 0x12C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSwapInputs;                                       // 0x12D(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DBB[0x2];                                     // Fixing Size After Last Property  
	TArray<float>                                FieldFloatResult;                                  // 0x130(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                FieldRemap;                                        // 0x140(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x88 (0x170 - 0xE8)
// ScriptStruct GeometryCollectionNodes.SumVectorFieldDataflowNode
struct GeometryCollectionNodes_SumVectorFieldDataflowNode : public DataflowCore_DataflowNode
{
public:
	TArray<float>                                FieldFloat;                                        // 0xE8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                FieldFloatRemap;                                   // 0xF8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct CoreUObject_Vector>            FieldVectorLeft;                                   // 0x108(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                FieldRemapLeft;                                    // 0x118(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct CoreUObject_Vector>            FieldVectorRight;                                  // 0x128(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                FieldRemapRight;                                   // 0x138(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        Magnitude;                                         // 0x148(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDataflowVectorFieldOperationType Operation;                                         // 0x14C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSwapVectorInputs;                                 // 0x14D(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DD4[0x2];                                     // Fixing Size After Last Property  
	TArray<struct CoreUObject_Vector>            FieldVectorResult;                                 // 0x150(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                FieldRemap;                                        // 0x160(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x38 (0x120 - 0xE8)
// ScriptStruct GeometryCollectionNodes.FieldMakeDenseFloatArrayDataflowNode
struct GeometryCollectionNodes_FieldMakeDenseFloatArrayDataflowNode : public DataflowCore_DataflowNode
{
public:
	TArray<float>                                FieldFloatInput;                                   // 0xE8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                FieldRemap;                                        // 0xF8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        NumSamplePositions;                                // 0x108(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Default;                                           // 0x10C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<float>                                FieldFloatResult;                                  // 0x110(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xF8 (0x1E0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.AddMaterialToCollectionDataflowNode
struct GeometryCollectionNodes_AddMaterialToCollectionDataflowNode : public DataflowCore_DataflowNode
{
public:
	struct Chaos_ManagedArrayCollection          Collection;                                        // 0xE8(0xB0)(NativeAccessSpecifierPublic)
	struct DataflowCore_DataflowFaceSelection    FaceSelection;                                     // 0x198(0x20)(NativeAccessSpecifierPublic)
	TArray<class UMaterial*>                     Materials;                                         // 0x1B8(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	class UMaterial*                             OutsideMaterial;                                   // 0x1C8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterial*                             InsideMaterial;                                    // 0x1D0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAssignOutsideMaterial;                            // 0x1D8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAssignInsideMaterial;                             // 0x1D9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DF4[0x6];                                     // Fixing Size Of Struct 
};

// 0xF0 (0x1D8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.ReAssignMaterialInCollectionDataflowNode
struct GeometryCollectionNodes_ReAssignMaterialInCollectionDataflowNode : public DataflowCore_DataflowNode
{
public:
	struct Chaos_ManagedArrayCollection          Collection;                                        // 0xE8(0xB0)(NativeAccessSpecifierPublic)
	struct DataflowCore_DataflowFaceSelection    FaceSelection;                                     // 0x198(0x20)(NativeAccessSpecifierPublic)
	TArray<class UMaterial*>                     Materials;                                         // 0x1B8(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	int32                                        OutsideMaterialIdx;                                // 0x1C8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InsideMaterialIdx;                                 // 0x1CC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAssignOutsideMaterial;                            // 0x1D0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAssignInsideMaterial;                             // 0x1D1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DFE[0x6];                                     // Fixing Size Of Struct 
};

// 0x20 (0x108 - 0xE8)
// ScriptStruct GeometryCollectionNodes.MaterialsInfoDataflowNode
struct GeometryCollectionNodes_MaterialsInfoDataflowNode : public DataflowCore_DataflowNode
{
public:
	TArray<class UMaterial*>                     Materials;                                         // 0xE8(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	class FString                                String;                                            // 0xF8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x108 - 0xE8)
// ScriptStruct GeometryCollectionNodes.GetMaterialFromMaterialsArrayDataflowNode
struct GeometryCollectionNodes_GetMaterialFromMaterialsArrayDataflowNode : public DataflowCore_DataflowNode
{
public:
	TArray<class UMaterial*>                     Materials;                                         // 0xE8(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	class UMaterial*                             Material;                                          // 0xF8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaterialIdx;                                       // 0x100(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E07[0x4];                                     // Fixing Size Of Struct 
};

// 0x20 (0x108 - 0xE8)
// ScriptStruct GeometryCollectionNodes.SetMaterialInMaterialsArrayDataflowNode
struct GeometryCollectionNodes_SetMaterialInMaterialsArrayDataflowNode : public DataflowCore_DataflowNode
{
public:
	TArray<class UMaterial*>                     Materials;                                         // 0xE8(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	class UMaterial*                             Material;                                          // 0xF8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESetMaterialOperationTypeEnum     Operation;                                         // 0x100(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E11[0x3];                                     // Fixing Size After Last Property  
	int32                                        MaterialIdx;                                       // 0x104(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0xF8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.MakeMaterialDataflowNode
struct GeometryCollectionNodes_MakeMaterialDataflowNode : public DataflowCore_DataflowNode
{
public:
	class UMaterial*                             InMaterial;                                        // 0xE8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterial*                             Material;                                          // 0xF0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0xF8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.MakeMaterialsArrayDataflowNode
struct GeometryCollectionNodes_MakeMaterialsArrayDataflowNode : public DataflowCore_DataflowNode
{
public:
	TArray<class UMaterial*>                     Materials;                                         // 0xE8(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0xB0 (0x198 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CloseGeometryOnCollectionDataflowNode
struct GeometryCollectionNodes_CloseGeometryOnCollectionDataflowNode : public DataflowCore_DataflowNode
{
public:
	struct Chaos_ManagedArrayCollection          Collection;                                        // 0xE8(0xB0)(NativeAccessSpecifierPublic)
};

// 0xB8 (0x1A0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.SkeletonToCollectionDataflowNode
struct GeometryCollectionNodes_SkeletonToCollectionDataflowNode : public DataflowCore_DataflowNode
{
public:
	class USkeleton*                             Skeleton;                                          // 0xE8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Chaos_ManagedArrayCollection          Collection;                                        // 0xF0(0xB0)(NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GeometryCollectionNodes.DataflowConvexDecompositionSettings
struct GeometryCollectionNodes_DataflowConvexDecompositionSettings
{
public:
	float                                        MinSizeToDecompose;                                // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxGeoToHullVolumeRatioToDecompose;                // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ErrorTolerance;                                    // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxHullsPerGeometry;                               // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinThicknessTolerance;                             // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumAdditionalSplits;                               // 0x14(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x118 - 0xE8)
// ScriptStruct GeometryCollectionNodes.MakeDataflowConvexDecompositionSettingsNode
struct GeometryCollectionNodes_MakeDataflowConvexDecompositionSettingsNode : public DataflowCore_DataflowNode
{
public:
	float                                        MinSizeToDecompose;                                // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxGeoToHullVolumeRatioToDecompose;                // 0xEC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ErrorTolerance;                                    // 0xF0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxHullsPerGeometry;                               // 0xF4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinThicknessTolerance;                             // 0xF8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumAdditionalSplits;                               // 0xFC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryCollectionNodes_DataflowConvexDecompositionSettings DecompositionSettings;                             // 0x100(0x18)(NoDestructor, NativeAccessSpecifierPublic)
};

// 0xF8 (0x1E0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CreateLeafConvexHullsDataflowNode
struct GeometryCollectionNodes_CreateLeafConvexHullsDataflowNode : public DataflowCore_DataflowNode
{
public:
	struct Chaos_ManagedArrayCollection          Collection;                                        // 0xE8(0xB0)(NativeAccessSpecifierPublic)
	struct DataflowCore_DataflowTransformSelection OptionalSelectionFilter;                           // 0x198(0x20)(NativeAccessSpecifierPublic)
	enum class EGenerateConvexMethod             GenerateMethod;                                    // 0x1B8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E52[0x3];                                     // Fixing Size After Last Property  
	float                                        IntersectIfComputedIsSmallerByFactor;              // 0x1BC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinExternalVolumeToIntersect;                      // 0x1C0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SimplificationDistanceThreshold;                   // 0x1C4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GeometryCollectionNodes_DataflowConvexDecompositionSettings ConvexDecompositionSettings;                       // 0x1C8(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
};

// 0xE8 (0x1D0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.SimplifyConvexHullsDataflowNode
struct GeometryCollectionNodes_SimplifyConvexHullsDataflowNode : public DataflowCore_DataflowNode
{
public:
	struct Chaos_ManagedArrayCollection          Collection;                                        // 0xE8(0xB0)(NativeAccessSpecifierPublic)
	struct DataflowCore_DataflowTransformSelection OptionalSelectionFilter;                           // 0x198(0x20)(NativeAccessSpecifierPublic)
	enum class EConvexHullSimplifyMethod         SimplifyMethod;                                    // 0x1B8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SimplificationAngleThreshold;                      // 0x1BC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SimplificationDistanceThreshold;                   // 0x1C0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinTargetTriangleCount;                            // 0x1C4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseExistingVertices;                              // 0x1C8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E8C[0x7];                                     // Fixing Size Of Struct 
};

// 0xC8 (0x1B0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CreateNonOverlappingConvexHullsDataflowNode
struct GeometryCollectionNodes_CreateNonOverlappingConvexHullsDataflowNode : public DataflowCore_DataflowNode
{
public:
	struct Chaos_ManagedArrayCollection          Collection;                                        // 0xE8(0xB0)(NativeAccessSpecifierPublic)
	float                                        CanExceedFraction;                                 // 0x198(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SimplificationDistanceThreshold;                   // 0x19C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EConvexOverlapRemovalMethodEnum   OverlapRemovalMethod;                              // 0x1A0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E95[0x3];                                     // Fixing Size After Last Property  
	float                                        OverlapRemovalShrinkPercent;                       // 0x1A4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CanRemoveFraction;                                 // 0x1A8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E98[0x4];                                     // Fixing Size Of Struct 
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GeometryCollectionNodes.DataflowSphereCovering
struct GeometryCollectionNodes_DataflowSphereCovering
{
public:
	uint8                                        Pad_1EA8[0x20];                                    // Fixing Size Of Struct 
};

// 0x128 (0x210 - 0xE8)
// ScriptStruct GeometryCollectionNodes.GenerateClusterConvexHullsFromLeafHullsDataflowNode
struct GeometryCollectionNodes_GenerateClusterConvexHullsFromLeafHullsDataflowNode : public DataflowCore_DataflowNode
{
public:
	struct Chaos_ManagedArrayCollection          Collection;                                        // 0xE8(0xB0)(NativeAccessSpecifierPublic)
	struct GeometryCollectionNodes_DataflowSphereCovering SphereCovering;                                    // 0x198(0x20)(NativeAccessSpecifierPublic)
	int32                                        ConvexCount;                                       // 0x1B8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EAC[0x4];                                     // Fixing Size After Last Property  
	double                                       ErrorTolerance;                                    // 0x1C0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPreferExternalCollisionShapes;                    // 0x1C8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAllowConvexMergeMethod           AllowMerges;                                       // 0x1C9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EB3[0x6];                                     // Fixing Size After Last Property  
	struct DataflowCore_DataflowTransformSelection OptionalSelectionFilter;                           // 0x1D0(0x20)(NativeAccessSpecifierPublic)
	bool                                         bProtectNegativeSpace;                             // 0x1F0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EB8[0x3];                                     // Fixing Size After Last Property  
	int32                                        TargetNumSamples;                                  // 0x1F4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       MinSampleSpacing;                                  // 0x1F8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       NegativeSpaceTolerance;                            // 0x200(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       MinRadius;                                         // 0x208(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x128 (0x210 - 0xE8)
// ScriptStruct GeometryCollectionNodes.GenerateClusterConvexHullsFromChildrenHullsDataflowNode
struct GeometryCollectionNodes_GenerateClusterConvexHullsFromChildrenHullsDataflowNode : public DataflowCore_DataflowNode
{
public:
	struct Chaos_ManagedArrayCollection          Collection;                                        // 0xE8(0xB0)(NativeAccessSpecifierPublic)
	struct GeometryCollectionNodes_DataflowSphereCovering SphereCovering;                                    // 0x198(0x20)(NativeAccessSpecifierPublic)
	int32                                        ConvexCount;                                       // 0x1B8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EC8[0x4];                                     // Fixing Size After Last Property  
	double                                       ErrorTolerance;                                    // 0x1C0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPreferExternalCollisionShapes;                    // 0x1C8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1ECE[0x7];                                     // Fixing Size After Last Property  
	struct DataflowCore_DataflowTransformSelection OptionalSelectionFilter;                           // 0x1D0(0x20)(NativeAccessSpecifierPublic)
	bool                                         bProtectNegativeSpace;                             // 0x1F0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1ED1[0x3];                                     // Fixing Size After Last Property  
	int32                                        TargetNumSamples;                                  // 0x1F4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       MinSampleSpacing;                                  // 0x1F8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       NegativeSpaceTolerance;                            // 0x200(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       MinRadius;                                         // 0x208(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x120 (0x208 - 0xE8)
// ScriptStruct GeometryCollectionNodes.MergeConvexHullsDataflowNode
struct GeometryCollectionNodes_MergeConvexHullsDataflowNode : public DataflowCore_DataflowNode
{
public:
	struct Chaos_ManagedArrayCollection          Collection;                                        // 0xE8(0xB0)(NativeAccessSpecifierPublic)
	struct GeometryCollectionNodes_DataflowSphereCovering SphereCovering;                                    // 0x198(0x20)(NativeAccessSpecifierPublic)
	int32                                        MaxConvexCount;                                    // 0x1B8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EDA[0x4];                                     // Fixing Size After Last Property  
	double                                       ErrorTolerance;                                    // 0x1C0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct DataflowCore_DataflowTransformSelection OptionalSelectionFilter;                           // 0x1C8(0x20)(NativeAccessSpecifierPublic)
	bool                                         bProtectNegativeSpace;                             // 0x1E8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EE2[0x3];                                     // Fixing Size After Last Property  
	int32                                        TargetNumSamples;                                  // 0x1EC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       MinSampleSpacing;                                  // 0x1F0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       NegativeSpaceTolerance;                            // 0x1F8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       MinRadius;                                         // 0x200(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB0 (0x198 - 0xE8)
// ScriptStruct GeometryCollectionNodes.UpdateVolumeAttributesDataflowNode
struct GeometryCollectionNodes_UpdateVolumeAttributesDataflowNode : public DataflowCore_DataflowNode
{
public:
	struct Chaos_ManagedArrayCollection          Collection;                                        // 0xE8(0xB0)(NativeAccessSpecifierPublic)
};

// 0xD8 (0x1C0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.GetConvexHullVolumeDataflowNode
struct GeometryCollectionNodes_GetConvexHullVolumeDataflowNode : public DataflowCore_DataflowNode
{
public:
	struct Chaos_ManagedArrayCollection          Collection;                                        // 0xE8(0xB0)(NativeAccessSpecifierPublic)
	struct DataflowCore_DataflowTransformSelection TransformSelection;                                // 0x198(0x20)(NativeAccessSpecifierPublic)
	float                                        Volume;                                            // 0x1B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSumChildrenForClustersWithoutHulls;               // 0x1BC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bVolumeOfUnion;                                    // 0x1BD(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EF6[0x2];                                     // Fixing Size Of Struct 
};

// 0xF8 (0x1E0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.AutoClusterDataflowNode
struct GeometryCollectionNodes_AutoClusterDataflowNode : public DataflowCore_DataflowNode
{
public:
	enum class EClusterSizeMethodEnum            ClusterSizeMethod;                                 // 0xE8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EFC[0x3];                                     // Fixing Size After Last Property  
	int32                                        ClusterSites;                                      // 0xEC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ClusterFraction;                                   // 0xF0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SiteSize;                                          // 0xF4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ClusterGridWidth;                                  // 0xF8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ClusterGridDepth;                                  // 0xFC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ClusterGridHeight;                                 // 0x100(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DriftIterations;                                   // 0x104(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinimumSize;                                       // 0x108(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AutoCluster;                                       // 0x10C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         EnforceSiteParameters;                             // 0x10D(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AvoidIsolated;                                     // 0x10E(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F0A[0x1];                                     // Fixing Size After Last Property  
	struct Chaos_ManagedArrayCollection          Collection;                                        // 0x110(0xB0)(NativeAccessSpecifierPublic)
	struct DataflowCore_DataflowTransformSelection TransformSelection;                                // 0x1C0(0x20)(NativeAccessSpecifierPublic)
};

// 0xB0 (0x198 - 0xE8)
// ScriptStruct GeometryCollectionNodes.ClusterFlattenDataflowNode
struct GeometryCollectionNodes_ClusterFlattenDataflowNode : public DataflowCore_DataflowNode
{
public:
	struct Chaos_ManagedArrayCollection          Collection;                                        // 0xE8(0xB0)(NativeAccessSpecifierPublic)
};

// 0xD0 (0x1B8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.ClusterUnclusterDataflowNode
struct GeometryCollectionNodes_ClusterUnclusterDataflowNode : public DataflowCore_DataflowNode
{
public:
	struct Chaos_ManagedArrayCollection          Collection;                                        // 0xE8(0xB0)(NativeAccessSpecifierPublic)
	struct DataflowCore_DataflowTransformSelection TransformSelection;                                // 0x198(0x20)(NativeAccessSpecifierPublic)
};

// 0xD0 (0x1B8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.ClusterDataflowNode
struct GeometryCollectionNodes_ClusterDataflowNode : public DataflowCore_DataflowNode
{
public:
	struct Chaos_ManagedArrayCollection          Collection;                                        // 0xE8(0xB0)(NativeAccessSpecifierPublic)
	struct DataflowCore_DataflowTransformSelection TransformSelection;                                // 0x198(0x20)(NativeAccessSpecifierPublic)
};

// 0xD0 (0x1B8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.ClusterMergeDataflowNode
struct GeometryCollectionNodes_ClusterMergeDataflowNode : public DataflowCore_DataflowNode
{
public:
	struct Chaos_ManagedArrayCollection          Collection;                                        // 0xE8(0xB0)(NativeAccessSpecifierPublic)
	struct DataflowCore_DataflowTransformSelection TransformSelection;                                // 0x198(0x20)(NativeAccessSpecifierPublic)
};

// 0x28 (0x110 - 0xE8)
// ScriptStruct GeometryCollectionNodes.VectorToStringDataflowNode
struct GeometryCollectionNodes_VectorToStringDataflowNode : public DataflowCore_DataflowNode
{
public:
	struct CoreUObject_Vector                    Vector;                                            // 0xE8(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                String;                                            // 0x100(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x100 - 0xE8)
// ScriptStruct GeometryCollectionNodes.FloatToStringDataflowNode
struct GeometryCollectionNodes_FloatToStringDataflowNode : public DataflowCore_DataflowNode
{
public:
	float                                        Float;                                             // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F50[0x4];                                     // Fixing Size After Last Property  
	class FString                                String;                                            // 0xF0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x100 - 0xE8)
// ScriptStruct GeometryCollectionNodes.IntToStringDataflowNode
struct GeometryCollectionNodes_IntToStringDataflowNode : public DataflowCore_DataflowNode
{
public:
	int32                                        Int;                                               // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F5A[0x4];                                     // Fixing Size After Last Property  
	class FString                                String;                                            // 0xF0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x100 - 0xE8)
// ScriptStruct GeometryCollectionNodes.BoolToStringDataflowNode
struct GeometryCollectionNodes_BoolToStringDataflowNode : public DataflowCore_DataflowNode
{
public:
	bool                                         Bool;                                              // 0xE8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F64[0x7];                                     // Fixing Size After Last Property  
	class FString                                String;                                            // 0xF0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0xF0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.IntToFloatDataflowNode
struct GeometryCollectionNodes_IntToFloatDataflowNode : public DataflowCore_DataflowNode
{
public:
	int32                                        Int;                                               // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Float;                                             // 0xEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0xF8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.IntToDoubleDataflowNode
struct GeometryCollectionNodes_IntToDoubleDataflowNode : public DataflowCore_DataflowNode
{
public:
	int32                                        Int;                                               // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F8D[0x4];                                     // Fixing Size After Last Property  
	double                                       Double;                                            // 0xF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0xF8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.FloatToDoubleDataflowNode
struct GeometryCollectionNodes_FloatToDoubleDataflowNode : public DataflowCore_DataflowNode
{
public:
	float                                        Float;                                             // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F93[0x4];                                     // Fixing Size After Last Property  
	double                                       Double;                                            // 0xF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0xF8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.FloatToIntDataflowNode
struct GeometryCollectionNodes_FloatToIntDataflowNode : public DataflowCore_DataflowNode
{
public:
	enum class EFloatToIntFunctionEnum           Function;                                          // 0xE8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F9F[0x3];                                     // Fixing Size After Last Property  
	float                                        Float;                                             // 0xEC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Int;                                               // 0xF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FA2[0x4];                                     // Fixing Size Of Struct 
};

// 0x8 (0xF0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.IntToBoolDataflowNode
struct GeometryCollectionNodes_IntToBoolDataflowNode : public DataflowCore_DataflowNode
{
public:
	int32                                        Int;                                               // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Bool;                                              // 0xEC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FCB[0x3];                                     // Fixing Size Of Struct 
};

// 0x8 (0xF0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.BoolToIntDataflowNode
struct GeometryCollectionNodes_BoolToIntDataflowNode : public DataflowCore_DataflowNode
{
public:
	bool                                         Bool;                                              // 0xE8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FD4[0x3];                                     // Fixing Size After Last Property  
	int32                                        Int;                                               // 0xEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xD8 (0x1C0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.ConvexHullToMeshDataflowNode
struct GeometryCollectionNodes_ConvexHullToMeshDataflowNode : public DataflowCore_DataflowNode
{
public:
	struct Chaos_ManagedArrayCollection          Collection;                                        // 0xE8(0xB0)(NativeAccessSpecifierPublic)
	struct DataflowCore_DataflowTransformSelection OptionalSelectionFilter;                           // 0x198(0x20)(NativeAccessSpecifierPublic)
	class UDynamicMesh*                          Mesh;                                              // 0x1B8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x118 - 0xE8)
// ScriptStruct GeometryCollectionNodes.SphereCoveringToMeshDataflowNode
struct GeometryCollectionNodes_SphereCoveringToMeshDataflowNode : public DataflowCore_DataflowNode
{
public:
	struct GeometryCollectionNodes_DataflowSphereCovering SphereCovering;                                    // 0xE8(0x20)(NativeAccessSpecifierPublic)
	int32                                        VerticesAlongEachSide;                             // 0x108(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FFF[0x4];                                     // Fixing Size After Last Property  
	class UDynamicMesh*                          Mesh;                                              // 0x110(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x108 - 0xE8)
// ScriptStruct GeometryCollectionNodes.MeshToOBJStringDebugDataflowNode
struct GeometryCollectionNodes_MeshToOBJStringDebugDataflowNode : public DataflowCore_DataflowNode
{
public:
	class UDynamicMesh*                          Mesh;                                              // 0xE8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInvertFaces;                                      // 0xF0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2007[0x7];                                     // Fixing Size After Last Property  
	class FString                                StringOBJ;                                         // 0xF8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x108 - 0xE8)
// ScriptStruct GeometryCollectionNodes.WriteStringToFile
struct GeometryCollectionNodes_WriteStringToFile : public DataflowCore_DataflowNode
{
public:
	class FString                                FilePath;                                          // 0xE8(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FileContents;                                      // 0xF8(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xD0 (0x1B8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.PruneInCollectionDataflowNode
struct GeometryCollectionNodes_PruneInCollectionDataflowNode : public DataflowCore_DataflowNode
{
public:
	struct Chaos_ManagedArrayCollection          Collection;                                        // 0xE8(0xB0)(NativeAccessSpecifierPublic)
	struct DataflowCore_DataflowTransformSelection TransformSelection;                                // 0x198(0x20)(NativeAccessSpecifierPublic)
};

// 0xF8 (0x1E0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.SetVisibilityInCollectionDataflowNode
struct GeometryCollectionNodes_SetVisibilityInCollectionDataflowNode : public DataflowCore_DataflowNode
{
public:
	enum class EVisibiltyOptionsEnum             Visibility;                                        // 0xE8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2019[0x7];                                     // Fixing Size After Last Property  
	struct Chaos_ManagedArrayCollection          Collection;                                        // 0xF0(0xB0)(NativeAccessSpecifierPublic)
	struct DataflowCore_DataflowTransformSelection TransformSelection;                                // 0x1A0(0x20)(NativeAccessSpecifierPublic)
	struct DataflowCore_DataflowFaceSelection    FaceSelection;                                     // 0x1C0(0x20)(NativeAccessSpecifierPublic)
};

// 0xD0 (0x1B8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.MergeInCollectionDataflowNode
struct GeometryCollectionNodes_MergeInCollectionDataflowNode : public DataflowCore_DataflowNode
{
public:
	struct Chaos_ManagedArrayCollection          Collection;                                        // 0xE8(0xB0)(NativeAccessSpecifierPublic)
	struct DataflowCore_DataflowTransformSelection TransformSelection;                                // 0x198(0x20)(NativeAccessSpecifierPublic)
};

// 0x58 (0x140 - 0xE8)
// ScriptStruct GeometryCollectionNodes.UniformScatterPointsDataflowNode
struct GeometryCollectionNodes_UniformScatterPointsDataflowNode : public DataflowCore_DataflowNode
{
public:
	int32                                        MinNumberOfPoints;                                 // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxNumberOfPoints;                                 // 0xEC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RandomSeed;                                        // 0xF0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_202F[0x4];                                     // Fixing Size After Last Property  
	struct CoreUObject_Box                       BoundingBox;                                       // 0xF8(0x38)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct CoreUObject_Vector>            Points;                                            // 0x130(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x58 (0x140 - 0xE8)
// ScriptStruct GeometryCollectionNodes.RadialScatterPointsDataflowNode
struct GeometryCollectionNodes_RadialScatterPointsDataflowNode : public DataflowCore_DataflowNode
{
public:
	struct CoreUObject_Vector                    Center;                                            // 0xE8(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Normal;                                            // 0x100(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Radius;                                            // 0x118(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AngularSteps;                                      // 0x11C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RadialSteps;                                       // 0x120(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AngleOffset;                                       // 0x124(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Variability;                                       // 0x128(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RandomSeed;                                        // 0x12C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct CoreUObject_Vector>            Points;                                            // 0x130(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x110 (0x1F8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.VoronoiFractureDataflowNode
struct GeometryCollectionNodes_VoronoiFractureDataflowNode : public DataflowCore_DataflowNode
{
public:
	struct Chaos_ManagedArrayCollection          Collection;                                        // 0xE8(0xB0)(NativeAccessSpecifierPublic)
	TArray<struct CoreUObject_Vector>            Points;                                            // 0x198(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct DataflowCore_DataflowTransformSelection TransformSelection;                                // 0x1A8(0x20)(NativeAccessSpecifierPublic)
	float                                        RandomSeed;                                        // 0x1C8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ChanceToFracture;                                  // 0x1CC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         GroupFracture;                                     // 0x1D0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_205D[0x3];                                     // Fixing Size After Last Property  
	float                                        Grout;                                             // 0x1D4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Amplitude;                                         // 0x1D8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Frequency;                                         // 0x1DC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Persistence;                                       // 0x1E0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Lacunarity;                                        // 0x1E4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OctaveNumber;                                      // 0x1E8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PointSpacing;                                      // 0x1EC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AddSamplesForCollision;                            // 0x1F0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2066[0x3];                                     // Fixing Size After Last Property  
	float                                        CollisionSampleSpacing;                            // 0x1F4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x138 (0x220 - 0xE8)
// ScriptStruct GeometryCollectionNodes.PlaneCutterDataflowNode
struct GeometryCollectionNodes_PlaneCutterDataflowNode : public DataflowCore_DataflowNode
{
public:
	struct Chaos_ManagedArrayCollection          Collection;                                        // 0xE8(0xB0)(NativeAccessSpecifierPublic)
	struct CoreUObject_Box                       BoundingBox;                                       // 0x198(0x38)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct DataflowCore_DataflowTransformSelection TransformSelection;                                // 0x1D0(0x20)(NativeAccessSpecifierPublic)
	int32                                        NumPlanes;                                         // 0x1F0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RandomSeed;                                        // 0x1F4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Grout;                                             // 0x1F8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Amplitude;                                         // 0x1FC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Frequency;                                         // 0x200(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Persistence;                                       // 0x204(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Lacunarity;                                        // 0x208(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OctaveNumber;                                      // 0x20C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PointSpacing;                                      // 0x210(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AddSamplesForCollision;                            // 0x214(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2088[0x3];                                     // Fixing Size After Last Property  
	float                                        CollisionSampleSpacing;                            // 0x218(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_208B[0x4];                                     // Fixing Size Of Struct 
};

// 0xD0 (0x1B8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.ExplodedViewDataflowNode
struct GeometryCollectionNodes_ExplodedViewDataflowNode : public DataflowCore_DataflowNode
{
public:
	struct Chaos_ManagedArrayCollection          Collection;                                        // 0xE8(0xB0)(NativeAccessSpecifierPublic)
	float                                        UniformScale;                                      // 0x198(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2094[0x4];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector                    Scale;                                             // 0x1A0(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x108 - 0xE8)
// ScriptStruct GeometryCollectionNodes.MakeLiteralStringDataflowNode
struct GeometryCollectionNodes_MakeLiteralStringDataflowNode : public DataflowCore_DataflowNode
{
public:
	class FString                                Value;                                             // 0xE8(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                String;                                            // 0xF8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x108 - 0xE8)
// ScriptStruct GeometryCollectionNodes.MakePointsDataflowNode
struct GeometryCollectionNodes_MakePointsDataflowNode : public DataflowCore_DataflowNode
{
public:
	TArray<struct CoreUObject_Vector>            Point;                                             // 0xE8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct CoreUObject_Vector>            Points;                                            // 0xF8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xA0 (0x188 - 0xE8)
// ScriptStruct GeometryCollectionNodes.MakeBoxDataflowNode
struct GeometryCollectionNodes_MakeBoxDataflowNode : public DataflowCore_DataflowNode
{
public:
	enum class EMakeBoxDataTypeEnum              DataType;                                          // 0xE8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20C0[0x7];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector                    Min;                                               // 0xF0(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Max;                                               // 0x108(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Center;                                            // 0x120(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Size;                                              // 0x138(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Box                       Box;                                               // 0x150(0x38)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x40 (0x128 - 0xE8)
// ScriptStruct GeometryCollectionNodes.MakeSphereDataflowNode
struct GeometryCollectionNodes_MakeSphereDataflowNode : public DataflowCore_DataflowNode
{
public:
	struct CoreUObject_Vector                    Center;                                            // 0xE8(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Radius;                                            // 0x100(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20D5[0x4];                                     // Fixing Size After Last Property  
	struct CoreUObject_Sphere                    Sphere;                                            // 0x108(0x20)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0xF0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.MakeLiteralFloatDataflowNode
struct GeometryCollectionNodes_MakeLiteralFloatDataflowNode : public DataflowCore_DataflowNode
{
public:
	float                                        Value;                                             // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Float;                                             // 0xEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0xF0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.MakeLiteralIntDataflowNode
struct GeometryCollectionNodes_MakeLiteralIntDataflowNode : public DataflowCore_DataflowNode
{
public:
	int32                                        Value;                                             // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Int;                                               // 0xEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0xF0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.MakeLiteralBoolDataflowNode
struct GeometryCollectionNodes_MakeLiteralBoolDataflowNode : public DataflowCore_DataflowNode
{
public:
	bool                                         Value;                                             // 0xE8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Bool;                                              // 0xE9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20F8[0x6];                                     // Fixing Size Of Struct 
};

// 0x28 (0x110 - 0xE8)
// ScriptStruct GeometryCollectionNodes.MakeLiteralVectorDataflowNode
struct GeometryCollectionNodes_MakeLiteralVectorDataflowNode : public DataflowCore_DataflowNode
{
public:
	float                                        X;                                                 // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Y;                                                 // 0xEC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Z;                                                 // 0xF0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_210A[0x4];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector                    Vector;                                            // 0xF8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA8 (0x190 - 0xE8)
// ScriptStruct GeometryCollectionNodes.MakeTransformDataflowNode
struct GeometryCollectionNodes_MakeTransformDataflowNode : public DataflowCore_DataflowNode
{
public:
	struct CoreUObject_Vector                    InTranslation;                                     // 0xE8(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    InRotation;                                        // 0x100(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    InScale;                                           // 0x118(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Transform                 OutTransform;                                      // 0x130(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x120 - 0xE8)
// ScriptStruct GeometryCollectionNodes.MakeQuaternionDataflowNode
struct GeometryCollectionNodes_MakeQuaternionDataflowNode : public DataflowCore_DataflowNode
{
public:
	float                                        X;                                                 // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Y;                                                 // 0xEC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Z;                                                 // 0xF0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        W;                                                 // 0xF4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2125[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Quat                      Quaternion;                                        // 0x100(0x20)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0xF8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.AddDataflowNode
struct GeometryCollectionNodes_AddDataflowNode : public DataflowCore_DataflowNode
{
public:
	float                                        FloatA;                                            // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FloatB;                                            // 0xEC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0xF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_212B[0x4];                                     // Fixing Size Of Struct 
};

// 0x10 (0xF8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.SubtractDataflowNode
struct GeometryCollectionNodes_SubtractDataflowNode : public DataflowCore_DataflowNode
{
public:
	float                                        FloatA;                                            // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FloatB;                                            // 0xEC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0xF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2138[0x4];                                     // Fixing Size Of Struct 
};

// 0x10 (0xF8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.MultiplyDataflowNode
struct GeometryCollectionNodes_MultiplyDataflowNode : public DataflowCore_DataflowNode
{
public:
	float                                        FloatA;                                            // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FloatB;                                            // 0xEC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0xF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2143[0x4];                                     // Fixing Size Of Struct 
};

// 0x10 (0xF8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.SafeDivideDataflowNode
struct GeometryCollectionNodes_SafeDivideDataflowNode : public DataflowCore_DataflowNode
{
public:
	float                                        FloatA;                                            // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FloatB;                                            // 0xEC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0xF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_214B[0x4];                                     // Fixing Size Of Struct 
};

// 0x0 (0xF8 - 0xF8)
// ScriptStruct GeometryCollectionNodes.DivideDataflowNode
struct GeometryCollectionNodes_DivideDataflowNode : public GeometryCollectionNodes_SafeDivideDataflowNode
{
public:
};

// 0x10 (0xF8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.DivisionDataflowNode
struct GeometryCollectionNodes_DivisionDataflowNode : public DataflowCore_DataflowNode
{
public:
	float                                        Dividend;                                          // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Divisor;                                           // 0xEC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Remainder;                                         // 0xF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0xF4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0xF0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.SafeReciprocalDataflowNode
struct GeometryCollectionNodes_SafeReciprocalDataflowNode : public DataflowCore_DataflowNode
{
public:
	float                                        Float;                                             // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0xEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0xF0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.SquareDataflowNode
struct GeometryCollectionNodes_SquareDataflowNode : public DataflowCore_DataflowNode
{
public:
	float                                        Float;                                             // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0xEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0xF0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.SquareRootDataflowNode
struct GeometryCollectionNodes_SquareRootDataflowNode : public DataflowCore_DataflowNode
{
public:
	float                                        Float;                                             // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0xEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0xF0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.InverseSqrtDataflowNode
struct GeometryCollectionNodes_InverseSqrtDataflowNode : public DataflowCore_DataflowNode
{
public:
	float                                        Float;                                             // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0xEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0xF0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CubeDataflowNode
struct GeometryCollectionNodes_CubeDataflowNode : public DataflowCore_DataflowNode
{
public:
	float                                        Float;                                             // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0xEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0xF0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.NegateDataflowNode
struct GeometryCollectionNodes_NegateDataflowNode : public DataflowCore_DataflowNode
{
public:
	float                                        Float;                                             // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0xEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0xF0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.AbsDataflowNode
struct GeometryCollectionNodes_AbsDataflowNode : public DataflowCore_DataflowNode
{
public:
	float                                        Float;                                             // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0xEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0xF0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.FloorDataflowNode
struct GeometryCollectionNodes_FloorDataflowNode : public DataflowCore_DataflowNode
{
public:
	float                                        Float;                                             // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0xEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0xF0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CeilDataflowNode
struct GeometryCollectionNodes_CeilDataflowNode : public DataflowCore_DataflowNode
{
public:
	float                                        Float;                                             // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0xEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0xF0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.RoundDataflowNode
struct GeometryCollectionNodes_RoundDataflowNode : public DataflowCore_DataflowNode
{
public:
	float                                        Float;                                             // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0xEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0xF0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.TruncDataflowNode
struct GeometryCollectionNodes_TruncDataflowNode : public DataflowCore_DataflowNode
{
public:
	float                                        Float;                                             // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0xEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0xF0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.FracDataflowNode
struct GeometryCollectionNodes_FracDataflowNode : public DataflowCore_DataflowNode
{
public:
	float                                        Float;                                             // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0xEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0xF8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.MinDataflowNode
struct GeometryCollectionNodes_MinDataflowNode : public DataflowCore_DataflowNode
{
public:
	float                                        FloatA;                                            // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FloatB;                                            // 0xEC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0xF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21B8[0x4];                                     // Fixing Size Of Struct 
};

// 0x10 (0xF8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.MaxDataflowNode
struct GeometryCollectionNodes_MaxDataflowNode : public DataflowCore_DataflowNode
{
public:
	float                                        FloatA;                                            // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FloatB;                                            // 0xEC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0xF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21BD[0x4];                                     // Fixing Size Of Struct 
};

// 0x10 (0xF8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.Min3DataflowNode
struct GeometryCollectionNodes_Min3DataflowNode : public DataflowCore_DataflowNode
{
public:
	float                                        FloatA;                                            // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FloatB;                                            // 0xEC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FloatC;                                            // 0xF0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0xF4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0xF8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.Max3DataflowNode
struct GeometryCollectionNodes_Max3DataflowNode : public DataflowCore_DataflowNode
{
public:
	float                                        FloatA;                                            // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FloatB;                                            // 0xEC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FloatC;                                            // 0xF0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0xF4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0xF0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.SignDataflowNode
struct GeometryCollectionNodes_SignDataflowNode : public DataflowCore_DataflowNode
{
public:
	float                                        Float;                                             // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0xEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0xF8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.ClampDataflowNode
struct GeometryCollectionNodes_ClampDataflowNode : public DataflowCore_DataflowNode
{
public:
	float                                        Float;                                             // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Min;                                               // 0xEC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Max;                                               // 0xF0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0xF4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x100 - 0xE8)
// ScriptStruct GeometryCollectionNodes.FitDataflowNode
struct GeometryCollectionNodes_FitDataflowNode : public DataflowCore_DataflowNode
{
public:
	float                                        Float;                                             // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OldMin;                                            // 0xEC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OldMax;                                            // 0xF0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NewMin;                                            // 0xF4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NewMax;                                            // 0xF8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0xFC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x100 - 0xE8)
// ScriptStruct GeometryCollectionNodes.EFitDataflowNode
struct GeometryCollectionNodes_EFitDataflowNode : public DataflowCore_DataflowNode
{
public:
	float                                        Float;                                             // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OldMin;                                            // 0xEC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OldMax;                                            // 0xF0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NewMin;                                            // 0xF4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NewMax;                                            // 0xF8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0xFC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0xF8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.PowDataflowNode
struct GeometryCollectionNodes_PowDataflowNode : public DataflowCore_DataflowNode
{
public:
	float                                        base;                                              // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Exp;                                               // 0xEC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0xF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21EC[0x4];                                     // Fixing Size Of Struct 
};

// 0x10 (0xF8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.LogDataflowNode
struct GeometryCollectionNodes_LogDataflowNode : public DataflowCore_DataflowNode
{
public:
	float                                        base;                                              // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        A;                                                 // 0xEC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0xF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21EF[0x4];                                     // Fixing Size Of Struct 
};

// 0x8 (0xF0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.LogeDataflowNode
struct GeometryCollectionNodes_LogeDataflowNode : public DataflowCore_DataflowNode
{
public:
	float                                        A;                                                 // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0xEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0xF8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.LerpDataflowNode
struct GeometryCollectionNodes_LerpDataflowNode : public DataflowCore_DataflowNode
{
public:
	float                                        A;                                                 // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        B;                                                 // 0xEC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Alpha;                                             // 0xF0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0xF4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0xF8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.WrapDataflowNode
struct GeometryCollectionNodes_WrapDataflowNode : public DataflowCore_DataflowNode
{
public:
	float                                        Float;                                             // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Min;                                               // 0xEC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Max;                                               // 0xF0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0xF4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0xF0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.ExpDataflowNode
struct GeometryCollectionNodes_ExpDataflowNode : public DataflowCore_DataflowNode
{
public:
	float                                        Float;                                             // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0xEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0xF0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.SinDataflowNode
struct GeometryCollectionNodes_SinDataflowNode : public DataflowCore_DataflowNode
{
public:
	float                                        Float;                                             // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0xEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0xF0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.ArcSinDataflowNode
struct GeometryCollectionNodes_ArcSinDataflowNode : public DataflowCore_DataflowNode
{
public:
	float                                        Float;                                             // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0xEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0xF0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CosDataflowNode
struct GeometryCollectionNodes_CosDataflowNode : public DataflowCore_DataflowNode
{
public:
	float                                        Float;                                             // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0xEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0xF0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.ArcCosDataflowNode
struct GeometryCollectionNodes_ArcCosDataflowNode : public DataflowCore_DataflowNode
{
public:
	float                                        Float;                                             // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0xEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0xF0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.TanDataflowNode
struct GeometryCollectionNodes_TanDataflowNode : public DataflowCore_DataflowNode
{
public:
	float                                        Float;                                             // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0xEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0xF0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.ArcTanDataflowNode
struct GeometryCollectionNodes_ArcTanDataflowNode : public DataflowCore_DataflowNode
{
public:
	float                                        Float;                                             // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0xEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0xF8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.ArcTan2DataflowNode
struct GeometryCollectionNodes_ArcTan2DataflowNode : public DataflowCore_DataflowNode
{
public:
	float                                        Y;                                                 // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        X;                                                 // 0xEC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0xF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2241[0x4];                                     // Fixing Size Of Struct 
};

// 0x10 (0xF8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.NormalizeToRangeDataflowNode
struct GeometryCollectionNodes_NormalizeToRangeDataflowNode : public DataflowCore_DataflowNode
{
public:
	float                                        Float;                                             // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RangeMin;                                          // 0xEC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RangeMax;                                          // 0xF0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0xF4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x120 - 0xE8)
// ScriptStruct GeometryCollectionNodes.ScaleVectorDataflowNode
struct GeometryCollectionNodes_ScaleVectorDataflowNode : public DataflowCore_DataflowNode
{
public:
	struct CoreUObject_Vector                    Vector;                                            // 0xE8(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x100(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_225A[0x4];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector                    ScaledVector;                                      // 0x108(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x120 - 0xE8)
// ScriptStruct GeometryCollectionNodes.DotProductDataflowNode
struct GeometryCollectionNodes_DotProductDataflowNode : public DataflowCore_DataflowNode
{
public:
	struct CoreUObject_Vector                    VectorA;                                           // 0xE8(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    VectorB;                                           // 0x100(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x118(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2263[0x4];                                     // Fixing Size Of Struct 
};

// 0x48 (0x130 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CrossProductDataflowNode
struct GeometryCollectionNodes_CrossProductDataflowNode : public DataflowCore_DataflowNode
{
public:
	struct CoreUObject_Vector                    VectorA;                                           // 0xE8(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    VectorB;                                           // 0x100(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    ReturnValue;                                       // 0x118(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x120 - 0xE8)
// ScriptStruct GeometryCollectionNodes.NormalizeDataflowNode
struct GeometryCollectionNodes_NormalizeDataflowNode : public DataflowCore_DataflowNode
{
public:
	struct CoreUObject_Vector                    VectorA;                                           // 0xE8(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Tolerance;                                         // 0x100(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2283[0x4];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector                    ReturnValue;                                       // 0x108(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x108 - 0xE8)
// ScriptStruct GeometryCollectionNodes.LengthDataflowNode
struct GeometryCollectionNodes_LengthDataflowNode : public DataflowCore_DataflowNode
{
public:
	struct CoreUObject_Vector                    Vector;                                            // 0xE8(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x100(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_228E[0x4];                                     // Fixing Size Of Struct 
};

// 0x38 (0x120 - 0xE8)
// ScriptStruct GeometryCollectionNodes.DistanceDataflowNode
struct GeometryCollectionNodes_DistanceDataflowNode : public DataflowCore_DataflowNode
{
public:
	struct CoreUObject_Vector                    PointA;                                            // 0xE8(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    PointB;                                            // 0x100(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x118(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_22AB[0x4];                                     // Fixing Size Of Struct 
};

// 0x8 (0xF0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.IsNearlyZeroDataflowNode
struct GeometryCollectionNodes_IsNearlyZeroDataflowNode : public DataflowCore_DataflowNode
{
public:
	float                                        Float;                                             // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xEC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_22B3[0x3];                                     // Fixing Size Of Struct 
};

// 0x10 (0xF8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.RandomFloatDataflowNode
struct GeometryCollectionNodes_RandomFloatDataflowNode : public DataflowCore_DataflowNode
{
public:
	bool                                         bDeterministic;                                    // 0xE8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_22B8[0x3];                                     // Fixing Size After Last Property  
	float                                        RandomSeed;                                        // 0xEC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0xF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_22BA[0x4];                                     // Fixing Size Of Struct 
};

// 0x18 (0x100 - 0xE8)
// ScriptStruct GeometryCollectionNodes.RandomFloatInRangeDataflowNode
struct GeometryCollectionNodes_RandomFloatInRangeDataflowNode : public DataflowCore_DataflowNode
{
public:
	bool                                         bDeterministic;                                    // 0xE8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_22BD[0x3];                                     // Fixing Size After Last Property  
	float                                        RandomSeed;                                        // 0xEC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Min;                                               // 0xF0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Max;                                               // 0xF4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0xF8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_22C0[0x4];                                     // Fixing Size Of Struct 
};

// 0x20 (0x108 - 0xE8)
// ScriptStruct GeometryCollectionNodes.RandomUnitVectorDataflowNode
struct GeometryCollectionNodes_RandomUnitVectorDataflowNode : public DataflowCore_DataflowNode
{
public:
	bool                                         bDeterministic;                                    // 0xE8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_22D9[0x3];                                     // Fixing Size After Last Property  
	float                                        RandomSeed;                                        // 0xEC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    ReturnValue;                                       // 0xF0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x128 - 0xE8)
// ScriptStruct GeometryCollectionNodes.RandomUnitVectorInConeDataflowNode
struct GeometryCollectionNodes_RandomUnitVectorInConeDataflowNode : public DataflowCore_DataflowNode
{
public:
	bool                                         bDeterministic;                                    // 0xE8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_22E9[0x3];                                     // Fixing Size After Last Property  
	float                                        RandomSeed;                                        // 0xEC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    ConeDirection;                                     // 0xF0(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ConeHalfAngle;                                     // 0x108(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_22F1[0x4];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector                    ReturnValue;                                       // 0x110(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0xF0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.RadiansToDegreesDataflowNode
struct GeometryCollectionNodes_RadiansToDegreesDataflowNode : public DataflowCore_DataflowNode
{
public:
	float                                        Radians;                                           // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Degrees;                                           // 0xEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0xF0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.DegreesToRadiansDataflowNode
struct GeometryCollectionNodes_DegreesToRadiansDataflowNode : public DataflowCore_DataflowNode
{
public:
	float                                        Degrees;                                           // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Radians;                                           // 0xEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0xF0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.MathConstantsDataflowNode
struct GeometryCollectionNodes_MathConstantsDataflowNode : public DataflowCore_DataflowNode
{
public:
	enum class EMathConstantsEnum                Constant;                                          // 0xE8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2308[0x3];                                     // Fixing Size After Last Property  
	float                                        ReturnValue;                                       // 0xEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x108 - 0xE8)
// ScriptStruct GeometryCollectionNodes.PointsToMeshDataflowNode
struct GeometryCollectionNodes_PointsToMeshDataflowNode : public DataflowCore_DataflowNode
{
public:
	TArray<struct CoreUObject_Vector>            Points;                                            // 0xE8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          Mesh;                                              // 0xF8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TriangleCount;                                     // 0x100(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2314[0x4];                                     // Fixing Size Of Struct 
};

// 0x48 (0x130 - 0xE8)
// ScriptStruct GeometryCollectionNodes.BoxToMeshDataflowNode
struct GeometryCollectionNodes_BoxToMeshDataflowNode : public DataflowCore_DataflowNode
{
public:
	struct CoreUObject_Box                       Box;                                               // 0xE8(0x38)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          Mesh;                                              // 0x120(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TriangleCount;                                     // 0x128(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2320[0x4];                                     // Fixing Size Of Struct 
};

// 0x18 (0x100 - 0xE8)
// ScriptStruct GeometryCollectionNodes.MeshInfoDataflowNode
struct GeometryCollectionNodes_MeshInfoDataflowNode : public DataflowCore_DataflowNode
{
public:
	class UDynamicMesh*                          Mesh;                                              // 0xE8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InfoString;                                        // 0xF0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB8 (0x1A0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.MeshToCollectionDataflowNode
struct GeometryCollectionNodes_MeshToCollectionDataflowNode : public DataflowCore_DataflowNode
{
public:
	class UDynamicMesh*                          Mesh;                                              // 0xE8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Chaos_ManagedArrayCollection          Collection;                                        // 0xF0(0xB0)(NativeAccessSpecifierPublic)
};

// 0xC0 (0x1A8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionToMeshDataflowNode
struct GeometryCollectionNodes_CollectionToMeshDataflowNode : public DataflowCore_DataflowNode
{
public:
	struct Chaos_ManagedArrayCollection          Collection;                                        // 0xE8(0xB0)(NativeAccessSpecifierPublic)
	bool                                         bCenterPivot;                                      // 0x198(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_233A[0x7];                                     // Fixing Size After Last Property  
	class UDynamicMesh*                          Mesh;                                              // 0x1A0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x100 - 0xE8)
// ScriptStruct GeometryCollectionNodes.StaticMeshToMeshDataflowNode
struct GeometryCollectionNodes_StaticMeshToMeshDataflowNode : public DataflowCore_DataflowNode
{
public:
	class UStaticMesh*                           StaticMesh;                                        // 0xE8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseHiRes;                                         // 0xF0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2343[0x3];                                     // Fixing Size After Last Property  
	int32                                        LODLevel;                                          // 0xF4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          Mesh;                                              // 0xF8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x100 - 0xE8)
// ScriptStruct GeometryCollectionNodes.MeshAppendDataflowNode
struct GeometryCollectionNodes_MeshAppendDataflowNode : public DataflowCore_DataflowNode
{
public:
	class UDynamicMesh*                          Mesh1;                                             // 0xE8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          Mesh2;                                             // 0xF0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          Mesh;                                              // 0xF8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x108 - 0xE8)
// ScriptStruct GeometryCollectionNodes.MeshBooleanDataflowNode
struct GeometryCollectionNodes_MeshBooleanDataflowNode : public DataflowCore_DataflowNode
{
public:
	enum class EMeshBooleanOperationEnum         Operation;                                         // 0xE8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2356[0x7];                                     // Fixing Size After Last Property  
	class UDynamicMesh*                          Mesh1;                                             // 0xF0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          Mesh2;                                             // 0xF8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          Mesh;                                              // 0x100(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x110 - 0xE8)
// ScriptStruct GeometryCollectionNodes.MeshCopyToPointsDataflowNode
struct GeometryCollectionNodes_MeshCopyToPointsDataflowNode : public DataflowCore_DataflowNode
{
public:
	TArray<struct CoreUObject_Vector>            Points;                                            // 0xE8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          MeshToCopy;                                        // 0xF8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x100(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2368[0x4];                                     // Fixing Size After Last Property  
	class UDynamicMesh*                          Mesh;                                              // 0x108(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x100 - 0xE8)
// ScriptStruct GeometryCollectionNodes.GetMeshDataDataflowNode
struct GeometryCollectionNodes_GetMeshDataDataflowNode : public DataflowCore_DataflowNode
{
public:
	class UDynamicMesh*                          Mesh;                                              // 0xE8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        VertexCount;                                       // 0xF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        EdgeCount;                                         // 0xF4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TriangleCount;                                     // 0xF8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_237C[0x4];                                     // Fixing Size Of Struct 
};

// 0xB8 (0x1A0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.GetCollectionFromAssetDataflowNode
struct GeometryCollectionNodes_GetCollectionFromAssetDataflowNode : public DataflowCore_DataflowNode
{
public:
	class UGeometryCollection*                   CollectionAsset;                                   // 0xE8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Chaos_ManagedArrayCollection          Collection;                                        // 0xF0(0xB0)(NativeAccessSpecifierPublic)
};

// 0x180 (0x268 - 0xE8)
// ScriptStruct GeometryCollectionNodes.AppendCollectionAssetsDataflowNode
struct GeometryCollectionNodes_AppendCollectionAssetsDataflowNode : public DataflowCore_DataflowNode
{
public:
	struct Chaos_ManagedArrayCollection          Collection1;                                       // 0xE8(0xB0)(NativeAccessSpecifierPublic)
	struct Chaos_ManagedArrayCollection          Collection2;                                       // 0x198(0xB0)(NativeAccessSpecifierPublic)
	TArray<class FString>                        GeometryGroupGuidsOut1;                            // 0x248(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        GeometryGroupGuidsOut2;                            // 0x258(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x108 - 0xE8)
// ScriptStruct GeometryCollectionNodes.PrintStringDataflowNode
struct GeometryCollectionNodes_PrintStringDataflowNode : public DataflowCore_DataflowNode
{
public:
	bool                                         bPrintToScreen;                                    // 0xE8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPrintToLog;                                       // 0xE9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2399[0x2];                                     // Fixing Size After Last Property  
	struct CoreUObject_Color                     Color;                                             // 0xEC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Duration;                                          // 0xF0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_239B[0x4];                                     // Fixing Size After Last Property  
	class FString                                String;                                            // 0xF8(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x100 - 0xE8)
// ScriptStruct GeometryCollectionNodes.LogStringDataflowNode
struct GeometryCollectionNodes_LogStringDataflowNode : public DataflowCore_DataflowNode
{
public:
	bool                                         bPrintToLog;                                       // 0xE8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_239F[0x7];                                     // Fixing Size After Last Property  
	class FString                                String;                                            // 0xF0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xE8 (0x1D0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.BoundingBoxDataflowNode
struct GeometryCollectionNodes_BoundingBoxDataflowNode : public DataflowCore_DataflowNode
{
public:
	struct Chaos_ManagedArrayCollection          Collection;                                        // 0xE8(0xB0)(NativeAccessSpecifierPublic)
	struct CoreUObject_Box                       BoundingBox;                                       // 0x198(0x38)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x110 - 0xE8)
// ScriptStruct GeometryCollectionNodes.GetBoxLengthsDataflowNode
struct GeometryCollectionNodes_GetBoxLengthsDataflowNode : public DataflowCore_DataflowNode
{
public:
	TArray<struct CoreUObject_Box>               Boxes;                                             // 0xE8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                Lengths;                                           // 0xF8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	enum class EBoxLengthMeasurementMethod       MeasurementMethod;                                 // 0x108(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23B0[0x7];                                     // Fixing Size Of Struct 
};

// 0xA0 (0x188 - 0xE8)
// ScriptStruct GeometryCollectionNodes.ExpandBoundingBoxDataflowNode
struct GeometryCollectionNodes_ExpandBoundingBoxDataflowNode : public DataflowCore_DataflowNode
{
public:
	struct CoreUObject_Box                       BoundingBox;                                       // 0xE8(0x38)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Min;                                               // 0x120(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Max;                                               // 0x138(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Center;                                            // 0x150(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    HalfExtents;                                       // 0x168(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Volume;                                            // 0x180(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23CA[0x4];                                     // Fixing Size Of Struct 
};

// 0x28 (0x110 - 0xE8)
// ScriptStruct GeometryCollectionNodes.ExpandVectorDataflowNode
struct GeometryCollectionNodes_ExpandVectorDataflowNode : public DataflowCore_DataflowNode
{
public:
	struct CoreUObject_Vector                    Vector;                                            // 0xE8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        X;                                                 // 0x100(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Y;                                                 // 0x104(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Z;                                                 // 0x108(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23E2[0x4];                                     // Fixing Size Of Struct 
};

// 0x30 (0x118 - 0xE8)
// ScriptStruct GeometryCollectionNodes.StringAppendDataflowNode
struct GeometryCollectionNodes_StringAppendDataflowNode : public DataflowCore_DataflowNode
{
public:
	class FString                                String1;                                           // 0xE8(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                String2;                                           // 0xF8(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                String;                                            // 0x108(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x100 - 0xE8)
// ScriptStruct GeometryCollectionNodes.HashStringDataflowNode
struct GeometryCollectionNodes_HashStringDataflowNode : public DataflowCore_DataflowNode
{
public:
	class FString                                String;                                            // 0xE8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Hash;                                              // 0xF8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23EE[0x4];                                     // Fixing Size Of Struct 
};

// 0x20 (0x108 - 0xE8)
// ScriptStruct GeometryCollectionNodes.HashVectorDataflowNode
struct GeometryCollectionNodes_HashVectorDataflowNode : public DataflowCore_DataflowNode
{
public:
	struct CoreUObject_Vector                    Vector;                                            // 0xE8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Hash;                                              // 0x100(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23F9[0x4];                                     // Fixing Size Of Struct 
};

// 0xE0 (0x1C8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.GetBoundingBoxesFromCollectionDataflowNode
struct GeometryCollectionNodes_GetBoundingBoxesFromCollectionDataflowNode : public DataflowCore_DataflowNode
{
public:
	struct Chaos_ManagedArrayCollection          Collection;                                        // 0xE8(0xB0)(NativeAccessSpecifierPublic)
	struct DataflowCore_DataflowTransformSelection TransformSelection;                                // 0x198(0x20)(NativeAccessSpecifierPublic)
	TArray<struct CoreUObject_Box>               BoundingBoxes;                                     // 0x1B8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xB8 (0x1A0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.GetRootIndexFromCollectionDataflowNode
struct GeometryCollectionNodes_GetRootIndexFromCollectionDataflowNode : public DataflowCore_DataflowNode
{
public:
	struct Chaos_ManagedArrayCollection          Collection;                                        // 0xE8(0xB0)(NativeAccessSpecifierPublic)
	int32                                        RootIndex;                                         // 0x198(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2408[0x4];                                     // Fixing Size Of Struct 
};

// 0xE0 (0x1C8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.GetCentroidsFromCollectionDataflowNode
struct GeometryCollectionNodes_GetCentroidsFromCollectionDataflowNode : public DataflowCore_DataflowNode
{
public:
	struct Chaos_ManagedArrayCollection          Collection;                                        // 0xE8(0xB0)(NativeAccessSpecifierPublic)
	struct DataflowCore_DataflowTransformSelection TransformSelection;                                // 0x198(0x20)(NativeAccessSpecifierPublic)
	TArray<struct CoreUObject_Vector>            Centroids;                                         // 0x1B8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x140 (0x228 - 0xE8)
// ScriptStruct GeometryCollectionNodes.TransformCollectionDataflowNode
struct GeometryCollectionNodes_TransformCollectionDataflowNode : public DataflowCore_DataflowNode
{
public:
	struct Chaos_ManagedArrayCollection          Collection;                                        // 0xE8(0xB0)(NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Translate;                                         // 0x198(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERotationOrderEnum                RotationOrder;                                     // 0x1B0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2416[0x7];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector                    Rotate;                                            // 0x1B8(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Scale;                                             // 0x1D0(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        UniformScale;                                      // 0x1E8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2418[0x4];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector                    RotatePivot;                                       // 0x1F0(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    ScalePivot;                                        // 0x208(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInvertTransformation;                             // 0x220(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_241B[0x7];                                     // Fixing Size Of Struct 
};

// 0xB0 (0x198 - 0xE8)
// ScriptStruct GeometryCollectionNodes.BakeTransformsInCollectionDataflowNode
struct GeometryCollectionNodes_BakeTransformsInCollectionDataflowNode : public DataflowCore_DataflowNode
{
public:
	struct Chaos_ManagedArrayCollection          Collection;                                        // 0xE8(0xB0)(NativeAccessSpecifierPublic)
};

// 0x98 (0x180 - 0xE8)
// ScriptStruct GeometryCollectionNodes.TransformMeshDataflowNode
struct GeometryCollectionNodes_TransformMeshDataflowNode : public DataflowCore_DataflowNode
{
public:
	class UDynamicMesh*                          Mesh;                                              // 0xE8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Translate;                                         // 0xF0(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERotationOrderEnum                RotationOrder;                                     // 0x108(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2435[0x7];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector                    Rotate;                                            // 0x110(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Scale;                                             // 0x128(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        UniformScale;                                      // 0x140(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2439[0x4];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector                    RotatePivot;                                       // 0x148(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    ScalePivot;                                        // 0x160(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInvertTransformation;                             // 0x178(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_243B[0x7];                                     // Fixing Size Of Struct 
};

// 0x10 (0xF8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CompareIntDataflowNode
struct GeometryCollectionNodes_CompareIntDataflowNode : public DataflowCore_DataflowNode
{
public:
	enum class ECompareOperationEnum             Operation;                                         // 0xE8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_243E[0x3];                                     // Fixing Size After Last Property  
	int32                                        IntA;                                              // 0xEC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        IntB;                                              // 0xF0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0xF4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2442[0x3];                                     // Fixing Size Of Struct 
};

// 0x10 (0xF8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CompareFloatDataflowNode
struct GeometryCollectionNodes_CompareFloatDataflowNode : public DataflowCore_DataflowNode
{
public:
	enum class ECompareOperationEnum             Operation;                                         // 0xE8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2444[0x3];                                     // Fixing Size After Last Property  
	float                                        FloatA;                                            // 0xEC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FloatB;                                            // 0xF0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0xF4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2445[0x3];                                     // Fixing Size Of Struct 
};

// 0x20 (0x108 - 0xE8)
// ScriptStruct GeometryCollectionNodes.BranchDataflowNode
struct GeometryCollectionNodes_BranchDataflowNode : public DataflowCore_DataflowNode
{
public:
	class UDynamicMesh*                          MeshA;                                             // 0xE8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicMesh*                          MeshB;                                             // 0xF0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCondition;                                        // 0xF8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_244D[0x7];                                     // Fixing Size After Last Property  
	class UDynamicMesh*                          Mesh;                                              // 0x100(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x218 (0x300 - 0xE8)
// ScriptStruct GeometryCollectionNodes.BranchCollectionDataflowNode
struct GeometryCollectionNodes_BranchCollectionDataflowNode : public DataflowCore_DataflowNode
{
public:
	struct Chaos_ManagedArrayCollection          TrueCollection;                                    // 0xE8(0xB0)(NativeAccessSpecifierPublic)
	struct Chaos_ManagedArrayCollection          FalseCollection;                                   // 0x198(0xB0)(NativeAccessSpecifierPublic)
	bool                                         bCondition;                                        // 0x248(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_245B[0x7];                                     // Fixing Size After Last Property  
	struct Chaos_ManagedArrayCollection          ChosenCollection;                                  // 0x250(0xB0)(NativeAccessSpecifierPublic)
};

// 0xC0 (0x1A8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.GetSchemaDataflowNode
struct GeometryCollectionNodes_GetSchemaDataflowNode : public DataflowCore_DataflowNode
{
public:
	struct Chaos_ManagedArrayCollection          Collection;                                        // 0xE8(0xB0)(NativeAccessSpecifierPublic)
	class FString                                String;                                            // 0x198(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xE8 (0x1D0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.RemoveOnBreakDataflowNode
struct GeometryCollectionNodes_RemoveOnBreakDataflowNode : public DataflowCore_DataflowNode
{
public:
	struct Chaos_ManagedArrayCollection          Collection;                                        // 0xE8(0xB0)(NativeAccessSpecifierPublic)
	struct DataflowCore_DataflowTransformSelection TransformSelection;                                // 0x198(0x20)(NativeAccessSpecifierPublic)
	bool                                         bEnabledRemoval;                                   // 0x1B8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2471[0x3];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector2f                  PostBreakTimer;                                    // 0x1BC(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector2f                  RemovalTimer;                                      // 0x1C4(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bClusterCrumbling;                                 // 0x1CC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2476[0x3];                                     // Fixing Size Of Struct 
};

// 0xD8 (0x1C0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.SetAnchorStateDataflowNode
struct GeometryCollectionNodes_SetAnchorStateDataflowNode : public DataflowCore_DataflowNode
{
public:
	enum class EAnchorStateEnum                  AnchorState;                                       // 0xE8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSetNotSelectedBonesToOppositeState;               // 0xE9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_247F[0x6];                                     // Fixing Size After Last Property  
	struct Chaos_ManagedArrayCollection          Collection;                                        // 0xF0(0xB0)(NativeAccessSpecifierPublic)
	struct DataflowCore_DataflowTransformSelection TransformSelection;                                // 0x1A0(0x20)(NativeAccessSpecifierPublic)
};

// 0xC0 (0x1A8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.ProximityDataflowNode
struct GeometryCollectionNodes_ProximityDataflowNode : public DataflowCore_DataflowNode
{
public:
	enum class EProximityMethodEnum              ProximityMethod;                                   // 0xE8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_248B[0x3];                                     // Fixing Size After Last Property  
	float                                        DistanceThreshold;                                 // 0xEC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ContactThreshold;                                  // 0xF0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EProximityContactFilteringMethodEnum FilterContactMethod;                               // 0xF4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseAsConnectionGraph;                             // 0xF5(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EConnectionContactAreaMethodEnum  ContactAreaMethod;                                 // 0xF6(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2498[0x1];                                     // Fixing Size After Last Property  
	struct Chaos_ManagedArrayCollection          Collection;                                        // 0xF8(0xB0)(NativeAccessSpecifierPublic)
};

// 0x118 (0x200 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionSetPivotDataflowNode
struct GeometryCollectionNodes_CollectionSetPivotDataflowNode : public DataflowCore_DataflowNode
{
public:
	struct Chaos_ManagedArrayCollection          Collection;                                        // 0xE8(0xB0)(NativeAccessSpecifierPublic)
	uint8                                        Pad_24A1[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 Transform;                                         // 0x1A0(0x60)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xE0 (0x1C8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.AddCustomCollectionAttributeDataflowNode
struct GeometryCollectionNodes_AddCustomCollectionAttributeDataflowNode : public DataflowCore_DataflowNode
{
public:
	struct Chaos_ManagedArrayCollection          Collection;                                        // 0xE8(0xB0)(NativeAccessSpecifierPublic)
	enum class EStandardGroupNameEnum            GroupName;                                         // 0x198(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_24AB[0x7];                                     // Fixing Size After Last Property  
	class FString                                CustomGroupName;                                   // 0x1A0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AttrName;                                          // 0x1B0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECustomAttributeTypeEnum          CustomAttributeType;                               // 0x1C0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_24B3[0x3];                                     // Fixing Size After Last Property  
	int32                                        NumElements;                                       // 0x1C4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xD0 (0x1B8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.GetNumElementsInCollectionGroupDataflowNode
struct GeometryCollectionNodes_GetNumElementsInCollectionGroupDataflowNode : public DataflowCore_DataflowNode
{
public:
	struct Chaos_ManagedArrayCollection          Collection;                                        // 0xE8(0xB0)(NativeAccessSpecifierPublic)
	enum class EStandardGroupNameEnum            GroupName;                                         // 0x198(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_24C7[0x7];                                     // Fixing Size After Last Property  
	class FString                                CustomGroupName;                                   // 0x1A0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumElements;                                       // 0x1B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_24CE[0x4];                                     // Fixing Size Of Struct 
};

// 0x148 (0x230 - 0xE8)
// ScriptStruct GeometryCollectionNodes.GetCollectionAttributeDataTypedDataflowNode
struct GeometryCollectionNodes_GetCollectionAttributeDataTypedDataflowNode : public DataflowCore_DataflowNode
{
public:
	struct Chaos_ManagedArrayCollection          Collection;                                        // 0xE8(0xB0)(NativeAccessSpecifierPublic)
	enum class EStandardGroupNameEnum            GroupName;                                         // 0x198(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_24D5[0x7];                                     // Fixing Size After Last Property  
	class FString                                CustomGroupName;                                   // 0x1A0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AttrName;                                          // 0x1B0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<bool>                                 BoolAttributeData;                                 // 0x1C0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                FloatAttributeData;                                // 0x1D0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<double>                               DoubleAttributeData;                               // 0x1E0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                Int32AttributeData;                                // 0x1F0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        StringAttributeData;                               // 0x200(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct CoreUObject_Vector3f>          Vector3fAttributeData;                             // 0x210(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct CoreUObject_Vector3d>          Vector3dAttributeData;                             // 0x220(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x148 (0x230 - 0xE8)
// ScriptStruct GeometryCollectionNodes.SetCollectionAttributeDataTypedDataflowNode
struct GeometryCollectionNodes_SetCollectionAttributeDataTypedDataflowNode : public DataflowCore_DataflowNode
{
public:
	struct Chaos_ManagedArrayCollection          Collection;                                        // 0xE8(0xB0)(NativeAccessSpecifierPublic)
	enum class EStandardGroupNameEnum            GroupName;                                         // 0x198(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_24EE[0x7];                                     // Fixing Size After Last Property  
	class FString                                CustomGroupName;                                   // 0x1A0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AttrName;                                          // 0x1B0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<bool>                                 BoolAttributeData;                                 // 0x1C0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                FloatAttributeData;                                // 0x1D0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<double>                               DoubleAttributeData;                               // 0x1E0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                Int32AttributeData;                                // 0x1F0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        StringAttributeData;                               // 0x200(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct CoreUObject_Vector3f>          Vector3fAttributeData;                             // 0x210(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct CoreUObject_Vector3d>          Vector3dAttributeData;                             // 0x220(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xF0 (0x1D8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.SetVertexColorInCollectionFromVertexSelectionDataflowNode
struct GeometryCollectionNodes_SetVertexColorInCollectionFromVertexSelectionDataflowNode : public DataflowCore_DataflowNode
{
public:
	struct Chaos_ManagedArrayCollection          Collection;                                        // 0xE8(0xB0)(NativeAccessSpecifierPublic)
	struct DataflowCore_DataflowVertexSelection  VertexSelection;                                   // 0x198(0x20)(NativeAccessSpecifierPublic)
	struct CoreUObject_LinearColor               SelectedColor;                                     // 0x1B8(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_LinearColor               NonSelectedColor;                                  // 0x1C8(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x118 - 0xE8)
// ScriptStruct GeometryCollectionNodes.SelectionToVertexListDataflowNode
struct GeometryCollectionNodes_SelectionToVertexListDataflowNode : public DataflowCore_DataflowNode
{
public:
	struct DataflowCore_DataflowVertexSelection  VertexSelection;                                   // 0xE8(0x20)(NativeAccessSpecifierPublic)
	TArray<int32>                                VertexList;                                        // 0x108(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xC8 (0x1B0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.SetVertexColorInCollectionFromFloatArrayDataflowNode
struct GeometryCollectionNodes_SetVertexColorInCollectionFromFloatArrayDataflowNode : public DataflowCore_DataflowNode
{
public:
	struct Chaos_ManagedArrayCollection          Collection;                                        // 0xE8(0xB0)(NativeAccessSpecifierPublic)
	TArray<float>                                FloatArray;                                        // 0x198(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x1A8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2525[0x4];                                     // Fixing Size Of Struct 
};

// 0x128 (0x210 - 0xE8)
// ScriptStruct GeometryCollectionNodes.MultiplyTransformDataflowNode
struct GeometryCollectionNodes_MultiplyTransformDataflowNode : public DataflowCore_DataflowNode
{
public:
	uint8                                        Pad_252A[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 InLeftTransform;                                   // 0xF0(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Transform                 InRightTransform;                                  // 0x150(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Transform                 OutTransform;                                      // 0x1B0(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC8 (0x1B0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.InvertTransformDataflowNode
struct GeometryCollectionNodes_InvertTransformDataflowNode : public DataflowCore_DataflowNode
{
public:
	uint8                                        Pad_2538[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 InTransform;                                       // 0xF0(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Transform                 OutTransform;                                      // 0x150(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x110 - 0x108)
// ScriptStruct GeometryCollectionNodes.GetFloatOverrideFromAssetDataflowNode
struct GeometryCollectionNodes_GetFloatOverrideFromAssetDataflowNode : public DataflowCore_DataflowOverrideNode
{
public:
	float                                        Float;                                             // 0x108(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FloatDefault;                                      // 0x10C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x110 - 0x108)
// ScriptStruct GeometryCollectionNodes.GetIntOverrideFromAssetDataflowNode
struct GeometryCollectionNodes_GetIntOverrideFromAssetDataflowNode : public DataflowCore_DataflowOverrideNode
{
public:
	int32                                        Int;                                               // 0x108(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        IntDefault;                                        // 0x10C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x110 - 0x108)
// ScriptStruct GeometryCollectionNodes.GetBoolOverrideFromAssetDataflowNode
struct GeometryCollectionNodes_GetBoolOverrideFromAssetDataflowNode : public DataflowCore_DataflowOverrideNode
{
public:
	bool                                         Bool;                                              // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         BoolDefault;                                       // 0x109(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_254F[0x6];                                     // Fixing Size Of Struct 
};

// 0x20 (0x128 - 0x108)
// ScriptStruct GeometryCollectionNodes.GetStringOverrideFromAssetDataflowNode
struct GeometryCollectionNodes_GetStringOverrideFromAssetDataflowNode : public DataflowCore_DataflowOverrideNode
{
public:
	class FString                                String;                                            // 0x108(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                StringDefault;                                     // 0x118(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xD0 (0x1B8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionAllDataflowNode
struct GeometryCollectionNodes_CollectionTransformSelectionAllDataflowNode : public DataflowCore_DataflowNode
{
public:
	struct Chaos_ManagedArrayCollection          Collection;                                        // 0xE8(0xB0)(NativeAccessSpecifierPublic)
	struct DataflowCore_DataflowTransformSelection TransformSelection;                                // 0x198(0x20)(NativeAccessSpecifierPublic)
};

// 0x68 (0x150 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionSetOperationDataflowNode
struct GeometryCollectionNodes_CollectionTransformSelectionSetOperationDataflowNode : public DataflowCore_DataflowNode
{
public:
	enum class ESetOperationEnum                 Operation;                                         // 0xE8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2557[0x7];                                     // Fixing Size After Last Property  
	struct DataflowCore_DataflowTransformSelection TransformSelectionA;                               // 0xF0(0x20)(NativeAccessSpecifierPublic)
	struct DataflowCore_DataflowTransformSelection TransformSelectionB;                               // 0x110(0x20)(NativeAccessSpecifierPublic)
	struct DataflowCore_DataflowTransformSelection TransformSelection;                                // 0x130(0x20)(NativeAccessSpecifierPublic)
};

// 0xE0 (0x1C8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionInfoDataflowNode
struct GeometryCollectionNodes_CollectionTransformSelectionInfoDataflowNode : public DataflowCore_DataflowNode
{
public:
	struct DataflowCore_DataflowTransformSelection TransformSelection;                                // 0xE8(0x20)(NativeAccessSpecifierPublic)
	struct Chaos_ManagedArrayCollection          Collection;                                        // 0x108(0xB0)(NativeAccessSpecifierPublic)
	class FString                                String;                                            // 0x1B8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xD0 (0x1B8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionNoneDataflowNode
struct GeometryCollectionNodes_CollectionTransformSelectionNoneDataflowNode : public DataflowCore_DataflowNode
{
public:
	struct Chaos_ManagedArrayCollection          Collection;                                        // 0xE8(0xB0)(NativeAccessSpecifierPublic)
	struct DataflowCore_DataflowTransformSelection TransformSelection;                                // 0x198(0x20)(NativeAccessSpecifierPublic)
};

// 0x20 (0x108 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionInvertDataflowNode
struct GeometryCollectionNodes_CollectionTransformSelectionInvertDataflowNode : public DataflowCore_DataflowNode
{
public:
	struct DataflowCore_DataflowTransformSelection TransformSelection;                                // 0xE8(0x20)(NativeAccessSpecifierPublic)
};

// 0xE0 (0x1C8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionRandomDataflowNode
struct GeometryCollectionNodes_CollectionTransformSelectionRandomDataflowNode : public DataflowCore_DataflowNode
{
public:
	bool                                         bDeterministic;                                    // 0xE8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2594[0x3];                                     // Fixing Size After Last Property  
	float                                        RandomSeed;                                        // 0xEC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RandomThreshold;                                   // 0xF0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2595[0x4];                                     // Fixing Size After Last Property  
	struct Chaos_ManagedArrayCollection          Collection;                                        // 0xF8(0xB0)(NativeAccessSpecifierPublic)
	struct DataflowCore_DataflowTransformSelection TransformSelection;                                // 0x1A8(0x20)(NativeAccessSpecifierPublic)
};

// 0xD0 (0x1B8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionRootDataflowNode
struct GeometryCollectionNodes_CollectionTransformSelectionRootDataflowNode : public DataflowCore_DataflowNode
{
public:
	struct Chaos_ManagedArrayCollection          Collection;                                        // 0xE8(0xB0)(NativeAccessSpecifierPublic)
	struct DataflowCore_DataflowTransformSelection TransformSelection;                                // 0x198(0x20)(NativeAccessSpecifierPublic)
};

// 0xE0 (0x1C8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionCustomDataflowNode
struct GeometryCollectionNodes_CollectionTransformSelectionCustomDataflowNode : public DataflowCore_DataflowNode
{
public:
	struct Chaos_ManagedArrayCollection          Collection;                                        // 0xE8(0xB0)(NativeAccessSpecifierPublic)
	class FString                                BoneIndicies;                                      // 0x198(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct DataflowCore_DataflowTransformSelection TransformSelection;                                // 0x1A8(0x20)(NativeAccessSpecifierPublic)
};

// 0xE0 (0x1C8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionFromIndexArrayDataflowNode
struct GeometryCollectionNodes_CollectionTransformSelectionFromIndexArrayDataflowNode : public DataflowCore_DataflowNode
{
public:
	struct Chaos_ManagedArrayCollection          Collection;                                        // 0xE8(0xB0)(NativeAccessSpecifierPublic)
	TArray<int32>                                BoneIndices;                                       // 0x198(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct DataflowCore_DataflowTransformSelection TransformSelection;                                // 0x1A8(0x20)(NativeAccessSpecifierPublic)
};

// 0xD0 (0x1B8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionParentDataflowNode
struct GeometryCollectionNodes_CollectionTransformSelectionParentDataflowNode : public DataflowCore_DataflowNode
{
public:
	struct DataflowCore_DataflowTransformSelection TransformSelection;                                // 0xE8(0x20)(NativeAccessSpecifierPublic)
	struct Chaos_ManagedArrayCollection          Collection;                                        // 0x108(0xB0)(NativeAccessSpecifierPublic)
};

// 0x30 (0x118 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionByPercentageDataflowNode
struct GeometryCollectionNodes_CollectionTransformSelectionByPercentageDataflowNode : public DataflowCore_DataflowNode
{
public:
	struct DataflowCore_DataflowTransformSelection TransformSelection;                                // 0xE8(0x20)(NativeAccessSpecifierPublic)
	int32                                        Percentage;                                        // 0x108(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDeterministic;                                    // 0x10C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_25C9[0x3];                                     // Fixing Size After Last Property  
	float                                        RandomSeed;                                        // 0x110(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_25CB[0x4];                                     // Fixing Size Of Struct 
};

// 0xD0 (0x1B8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionChildrenDataflowNode
struct GeometryCollectionNodes_CollectionTransformSelectionChildrenDataflowNode : public DataflowCore_DataflowNode
{
public:
	struct DataflowCore_DataflowTransformSelection TransformSelection;                                // 0xE8(0x20)(NativeAccessSpecifierPublic)
	struct Chaos_ManagedArrayCollection          Collection;                                        // 0x108(0xB0)(NativeAccessSpecifierPublic)
};

// 0xD0 (0x1B8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionSiblingsDataflowNode
struct GeometryCollectionNodes_CollectionTransformSelectionSiblingsDataflowNode : public DataflowCore_DataflowNode
{
public:
	struct DataflowCore_DataflowTransformSelection TransformSelection;                                // 0xE8(0x20)(NativeAccessSpecifierPublic)
	struct Chaos_ManagedArrayCollection          Collection;                                        // 0x108(0xB0)(NativeAccessSpecifierPublic)
};

// 0xD0 (0x1B8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionLevelDataflowNode
struct GeometryCollectionNodes_CollectionTransformSelectionLevelDataflowNode : public DataflowCore_DataflowNode
{
public:
	struct DataflowCore_DataflowTransformSelection TransformSelection;                                // 0xE8(0x20)(NativeAccessSpecifierPublic)
	struct Chaos_ManagedArrayCollection          Collection;                                        // 0x108(0xB0)(NativeAccessSpecifierPublic)
};

// 0xD8 (0x1C0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionTargetLevelDataflowNode
struct GeometryCollectionNodes_CollectionTransformSelectionTargetLevelDataflowNode : public DataflowCore_DataflowNode
{
public:
	struct Chaos_ManagedArrayCollection          Collection;                                        // 0xE8(0xB0)(NativeAccessSpecifierPublic)
	int32                                        TargetLevel;                                       // 0x198(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSkipEmbedded;                                     // 0x19C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_25F5[0x3];                                     // Fixing Size After Last Property  
	struct DataflowCore_DataflowTransformSelection TransformSelection;                                // 0x1A0(0x20)(NativeAccessSpecifierPublic)
};

// 0xD0 (0x1B8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionContactDataflowNode
struct GeometryCollectionNodes_CollectionTransformSelectionContactDataflowNode : public DataflowCore_DataflowNode
{
public:
	struct DataflowCore_DataflowTransformSelection TransformSelection;                                // 0xE8(0x20)(NativeAccessSpecifierPublic)
	struct Chaos_ManagedArrayCollection          Collection;                                        // 0x108(0xB0)(NativeAccessSpecifierPublic)
};

// 0xD0 (0x1B8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionLeafDataflowNode
struct GeometryCollectionNodes_CollectionTransformSelectionLeafDataflowNode : public DataflowCore_DataflowNode
{
public:
	struct Chaos_ManagedArrayCollection          Collection;                                        // 0xE8(0xB0)(NativeAccessSpecifierPublic)
	struct DataflowCore_DataflowTransformSelection TransformSelection;                                // 0x198(0x20)(NativeAccessSpecifierPublic)
};

// 0xD0 (0x1B8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionClusterDataflowNode
struct GeometryCollectionNodes_CollectionTransformSelectionClusterDataflowNode : public DataflowCore_DataflowNode
{
public:
	struct Chaos_ManagedArrayCollection          Collection;                                        // 0xE8(0xB0)(NativeAccessSpecifierPublic)
	struct DataflowCore_DataflowTransformSelection TransformSelection;                                // 0x198(0x20)(NativeAccessSpecifierPublic)
};

// 0x30 (0x118 - 0xE8)
// ScriptStruct GeometryCollectionNodes.SelectFloatArrayIndicesInRangeDataflowNode
struct GeometryCollectionNodes_SelectFloatArrayIndicesInRangeDataflowNode : public DataflowCore_DataflowNode
{
public:
	TArray<float>                                Values;                                            // 0xE8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        Min;                                               // 0xF8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Max;                                               // 0xFC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERangeSettingEnum                 RangeSetting;                                      // 0x100(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInclusive;                                        // 0x101(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2626[0x6];                                     // Fixing Size After Last Property  
	TArray<int32>                                Indices;                                           // 0x108(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xE0 (0x1C8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionBySizeDataflowNode
struct GeometryCollectionNodes_CollectionTransformSelectionBySizeDataflowNode : public DataflowCore_DataflowNode
{
public:
	struct Chaos_ManagedArrayCollection          Collection;                                        // 0xE8(0xB0)(NativeAccessSpecifierPublic)
	float                                        SizeMin;                                           // 0x198(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SizeMax;                                           // 0x19C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERangeSettingEnum                 RangeSetting;                                      // 0x1A0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInclusive;                                        // 0x1A1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseRelativeSize;                                  // 0x1A2(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2635[0x5];                                     // Fixing Size After Last Property  
	struct DataflowCore_DataflowTransformSelection TransformSelection;                                // 0x1A8(0x20)(NativeAccessSpecifierPublic)
};

// 0xE0 (0x1C8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionByVolumeDataflowNode
struct GeometryCollectionNodes_CollectionTransformSelectionByVolumeDataflowNode : public DataflowCore_DataflowNode
{
public:
	struct Chaos_ManagedArrayCollection          Collection;                                        // 0xE8(0xB0)(NativeAccessSpecifierPublic)
	float                                        VolumeMin;                                         // 0x198(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VolumeMax;                                         // 0x19C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERangeSettingEnum                 RangeSetting;                                      // 0x1A0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInclusive;                                        // 0x1A1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_263D[0x6];                                     // Fixing Size After Last Property  
	struct DataflowCore_DataflowTransformSelection TransformSelection;                                // 0x1A8(0x20)(NativeAccessSpecifierPublic)
};

// 0x178 (0x260 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionInBoxDataflowNode
struct GeometryCollectionNodes_CollectionTransformSelectionInBoxDataflowNode : public DataflowCore_DataflowNode
{
public:
	struct Chaos_ManagedArrayCollection          Collection;                                        // 0xE8(0xB0)(NativeAccessSpecifierPublic)
	struct CoreUObject_Box                       Box;                                               // 0x198(0x38)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct CoreUObject_Transform                 Transform;                                         // 0x1D0(0x60)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESelectSubjectTypeEnum            Type;                                              // 0x230(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllVerticesMustContainedInBox;                    // 0x231(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2661[0x6];                                     // Fixing Size After Last Property  
	struct DataflowCore_DataflowTransformSelection TransformSelection;                                // 0x238(0x20)(NativeAccessSpecifierPublic)
	uint8                                        Pad_2662[0x8];                                     // Fixing Size Of Struct 
};

// 0x168 (0x250 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionInSphereDataflowNode
struct GeometryCollectionNodes_CollectionTransformSelectionInSphereDataflowNode : public DataflowCore_DataflowNode
{
public:
	struct Chaos_ManagedArrayCollection          Collection;                                        // 0xE8(0xB0)(NativeAccessSpecifierPublic)
	struct CoreUObject_Sphere                    Sphere;                                            // 0x198(0x20)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_266E[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 Transform;                                         // 0x1C0(0x60)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESelectSubjectTypeEnum            Type;                                              // 0x220(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllVerticesMustContainedInSphere;                 // 0x221(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_267F[0x6];                                     // Fixing Size After Last Property  
	struct DataflowCore_DataflowTransformSelection TransformSelection;                                // 0x228(0x20)(NativeAccessSpecifierPublic)
	uint8                                        Pad_2680[0x8];                                     // Fixing Size Of Struct 
};

// 0x100 (0x1E8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionByFloatAttrDataflowNode
struct GeometryCollectionNodes_CollectionTransformSelectionByFloatAttrDataflowNode : public DataflowCore_DataflowNode
{
public:
	struct Chaos_ManagedArrayCollection          Collection;                                        // 0xE8(0xB0)(NativeAccessSpecifierPublic)
	class FString                                GroupName;                                         // 0x198(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AttrName;                                          // 0x1A8(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Min;                                               // 0x1B8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Max;                                               // 0x1BC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERangeSettingEnum                 RangeSetting;                                      // 0x1C0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInclusive;                                        // 0x1C1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_26B2[0x6];                                     // Fixing Size After Last Property  
	struct DataflowCore_DataflowTransformSelection TransformSelection;                                // 0x1C8(0x20)(NativeAccessSpecifierPublic)
};

// 0x100 (0x1E8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionByIntAttrDataflowNode
struct GeometryCollectionNodes_CollectionTransformSelectionByIntAttrDataflowNode : public DataflowCore_DataflowNode
{
public:
	struct Chaos_ManagedArrayCollection          Collection;                                        // 0xE8(0xB0)(NativeAccessSpecifierPublic)
	class FString                                GroupName;                                         // 0x198(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AttrName;                                          // 0x1A8(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Min;                                               // 0x1B8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Max;                                               // 0x1BC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERangeSettingEnum                 RangeSetting;                                      // 0x1C0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInclusive;                                        // 0x1C1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_26D0[0x6];                                     // Fixing Size After Last Property  
	struct DataflowCore_DataflowTransformSelection TransformSelection;                                // 0x1C8(0x20)(NativeAccessSpecifierPublic)
};

// 0xE0 (0x1C8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionVertexSelectionCustomDataflowNode
struct GeometryCollectionNodes_CollectionVertexSelectionCustomDataflowNode : public DataflowCore_DataflowNode
{
public:
	struct Chaos_ManagedArrayCollection          Collection;                                        // 0xE8(0xB0)(NativeAccessSpecifierPublic)
	class FString                                VertexIndicies;                                    // 0x198(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct DataflowCore_DataflowVertexSelection  VertexSelection;                                   // 0x1A8(0x20)(NativeAccessSpecifierPublic)
};

// 0xE0 (0x1C8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionFaceSelectionCustomDataflowNode
struct GeometryCollectionNodes_CollectionFaceSelectionCustomDataflowNode : public DataflowCore_DataflowNode
{
public:
	struct Chaos_ManagedArrayCollection          Collection;                                        // 0xE8(0xB0)(NativeAccessSpecifierPublic)
	class FString                                FaceIndicies;                                      // 0x198(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct DataflowCore_DataflowFaceSelection    FaceSelection;                                     // 0x1A8(0x20)(NativeAccessSpecifierPublic)
};

// 0x118 (0x200 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionSelectionConvertDataflowNode
struct GeometryCollectionNodes_CollectionSelectionConvertDataflowNode : public DataflowCore_DataflowNode
{
public:
	struct Chaos_ManagedArrayCollection          Collection;                                        // 0xE8(0xB0)(NativeAccessSpecifierPublic)
	struct DataflowCore_DataflowTransformSelection TransformSelection;                                // 0x198(0x20)(NativeAccessSpecifierPublic)
	struct DataflowCore_DataflowFaceSelection    FaceSelection;                                     // 0x1B8(0x20)(NativeAccessSpecifierPublic)
	struct DataflowCore_DataflowVertexSelection  VertexSelection;                                   // 0x1D8(0x20)(NativeAccessSpecifierPublic)
	bool                                         bAllElementsMustBeSelected;                        // 0x1F8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_26F5[0x7];                                     // Fixing Size Of Struct 
};

// 0x20 (0x108 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionFaceSelectionInvertDataflowNode
struct GeometryCollectionNodes_CollectionFaceSelectionInvertDataflowNode : public DataflowCore_DataflowNode
{
public:
	struct DataflowCore_DataflowFaceSelection    FaceSelection;                                     // 0xE8(0x20)(NativeAccessSpecifierPublic)
};

// 0x30 (0x118 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionVertexSelectionByPercentageDataflowNode
struct GeometryCollectionNodes_CollectionVertexSelectionByPercentageDataflowNode : public DataflowCore_DataflowNode
{
public:
	struct DataflowCore_DataflowVertexSelection  VertexSelection;                                   // 0xE8(0x20)(NativeAccessSpecifierPublic)
	int32                                        Percentage;                                        // 0x108(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDeterministic;                                    // 0x10C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2728[0x3];                                     // Fixing Size After Last Property  
	float                                        RandomSeed;                                        // 0x110(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2729[0x4];                                     // Fixing Size Of Struct 
};

// 0x68 (0x150 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionVertexSelectionSetOperationDataflowNode
struct GeometryCollectionNodes_CollectionVertexSelectionSetOperationDataflowNode : public DataflowCore_DataflowNode
{
public:
	enum class ESetOperationEnum                 Operation;                                         // 0xE8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2743[0x7];                                     // Fixing Size After Last Property  
	struct DataflowCore_DataflowVertexSelection  VertexSelectionA;                                  // 0xF0(0x20)(NativeAccessSpecifierPublic)
	struct DataflowCore_DataflowVertexSelection  VertexSelectionB;                                  // 0x110(0x20)(NativeAccessSpecifierPublic)
	struct DataflowCore_DataflowVertexSelection  VertexSelection;                                   // 0x130(0x20)(NativeAccessSpecifierPublic)
};

// 0x198 (0x280 - 0xE8)
// ScriptStruct GeometryCollectionNodes.TransformCollectionAttributeDataflowNode
struct GeometryCollectionNodes_TransformCollectionAttributeDataflowNode : public DataflowCore_DataflowNode
{
public:
	struct Chaos_ManagedArrayCollection          Collection;                                        // 0xE8(0xB0)(NativeAccessSpecifierPublic)
	uint8                                        Pad_2752[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 TransformIn;                                       // 0x1A0(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Transform                 LocalTransform;                                    // 0x200(0x60)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                GroupName;                                         // 0x260(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AttributeName;                                     // 0x270(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


