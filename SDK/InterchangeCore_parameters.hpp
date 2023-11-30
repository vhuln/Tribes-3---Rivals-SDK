#pragma once




#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x8 - 0x0)
// Function InterchangeCore.InterchangeFactoryBase.GetFactoryClass
struct UInterchangeFactoryBase_GetFactoryClass_Params
{
public:
	class UClass*                                ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function InterchangeCore.InterchangeSourceData.SetFilename
struct UInterchangeSourceData_SetFilename_Params
{
public:
	class FString                                InFilename;                                        // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1871[0x7];                                     // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// Function InterchangeCore.InterchangeSourceData.GetFilename
struct UInterchangeSourceData_GetFilename_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function InterchangeCore.InterchangePipelineBase.ScriptedSetReimportSourceIndex
struct UInterchangePipelineBase_ScriptedSetReimportSourceIndex_Params
{
public:
	class UClass*                                ReimportObjectClass;                               // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SourceFileIndex;                                   // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_197C[0x4];                                     // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// Function InterchangeCore.InterchangePipelineBase.ScriptedExecutePreImportPipeline
struct UInterchangePipelineBase_ScriptedExecutePreImportPipeline_Params
{
public:
	class UInterchangeBaseNodeContainer*         BaseNodeContainer;                                 // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UInterchangeSourceData*>        SourceDatas;                                       // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function InterchangeCore.InterchangePipelineBase.ScriptedExecutePostImportPipeline
struct UInterchangePipelineBase_ScriptedExecutePostImportPipeline_Params
{
public:
	class UInterchangeBaseNodeContainer*         BaseNodeContainer;                                 // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FactoryNodeKey;                                    // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               CreatedAsset;                                      // 0x18(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsAReimport;                                      // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A95[0x7];                                     // Fixing Size Of Struct 
};

// 0x28 (0x28 - 0x0)
// Function InterchangeCore.InterchangePipelineBase.ScriptedExecutePostFactoryPipeline
struct UInterchangePipelineBase_ScriptedExecutePostFactoryPipeline_Params
{
public:
	class UInterchangeBaseNodeContainer*         BaseNodeContainer;                                 // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FactoryNodeKey;                                    // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               CreatedAsset;                                      // 0x18(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsAReimport;                                      // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B2B[0x7];                                     // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// Function InterchangeCore.InterchangePipelineBase.ScriptedExecutePipeline
struct UInterchangePipelineBase_ScriptedExecutePipeline_Params
{
public:
	class UInterchangeBaseNodeContainer*         BaseNodeContainer;                                 // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UInterchangeSourceData*>        SourceDatas;                                       // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function InterchangeCore.InterchangePipelineBase.ScriptedExecuteExportPipeline
struct UInterchangePipelineBase_ScriptedExecuteExportPipeline_Params
{
public:
	class UInterchangeBaseNodeContainer*         BaseNodeContainer;                                 // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function InterchangeCore.InterchangePipelineBase.ScriptedCanExecuteOnAnyThread
struct UInterchangePipelineBase_ScriptedCanExecuteOnAnyThread_Params
{
public:
	enum class EInterchangePipelineTask          PipelineTask;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function InterchangeCore.InterchangePipelineBase.FindOrAddPropertyStates
struct UInterchangePipelineBase_FindOrAddPropertyStates_Params
{
public:
	class FName                                  PropertyPath;                                      // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct InterchangeCore_InterchangePipelinePropertyStates ReturnValue;                                       // 0x8(0x3)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C4A[0x1];                                     // Fixing Size Of Struct 
};

// 0xC (0xC - 0x0)
// Function InterchangeCore.InterchangePipelineBase.DoesPropertyStatesExist
struct UInterchangePipelineBase_DoesPropertyStatesExist_Params
{
public:
	class FName                                  PropertyPath;                                      // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C90[0x3];                                     // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// Function InterchangeCore.InterchangeBaseNode.SetParentUid
struct UInterchangeBaseNode_SetParentUid_Params
{
public:
	class FString                                ParentUid;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2101[0x7];                                     // Fixing Size Of Struct 
};

// 0x2 (0x2 - 0x0)
// Function InterchangeCore.InterchangeBaseNode.SetEnabled
struct UInterchangeBaseNode_SetEnabled_Params
{
public:
	bool                                         bIsEnabled;                                        // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function InterchangeCore.InterchangeBaseNode.SetDisplayLabel
struct UInterchangeBaseNode_SetDisplayLabel_Params
{
public:
	class FString                                DisplayName;                                       // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21D1[0x7];                                     // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// Function InterchangeCore.InterchangeBaseNode.SetAssetName
struct UInterchangeBaseNode_SetAssetName_Params
{
public:
	class FString                                AssetName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_222B[0x7];                                     // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// Function InterchangeCore.InterchangeBaseNode.RemoveTargetNodeUid
struct UInterchangeBaseNode_RemoveTargetNodeUid_Params
{
public:
	class FString                                AssetUid;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_22A5[0x7];                                     // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// Function InterchangeCore.InterchangeBaseNode.RemoveAttribute
struct UInterchangeBaseNode_RemoveAttribute_Params
{
public:
	class FString                                NodeAttributeKey;                                  // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_230D[0x7];                                     // Fixing Size Of Struct 
};

// 0x1 (0x1 - 0x0)
// Function InterchangeCore.InterchangeBaseNode.IsEnabled
struct UInterchangeBaseNode_IsEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function InterchangeCore.InterchangeBaseNode.InitializeNode
struct UInterchangeBaseNode_InitializeNode_Params
{
public:
	class FString                                UniqueID;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DisplayLabel;                                      // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EInterchangeNodeContainerType     NodeContainerType;                                 // 0x20(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_240C[0x7];                                     // Fixing Size Of Struct 
};

// 0x20 (0x20 - 0x0)
// Function InterchangeCore.InterchangeBaseNode.GetVector2Attribute
struct UInterchangeBaseNode_GetVector2Attribute_Params
{
public:
	class FString                                NodeAttributeKey;                                  // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector2f                  OutValue;                                          // 0x10(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_24B6[0x7];                                     // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// Function InterchangeCore.InterchangeBaseNode.GetUniqueID
struct UInterchangeBaseNode_GetUniqueID_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function InterchangeCore.InterchangeBaseNode.GetTargetNodeUids
struct UInterchangeBaseNode_GetTargetNodeUids_Params
{
public:
	TArray<class FString>                        OutTargetAssets;                                   // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function InterchangeCore.InterchangeBaseNode.GetTargetNodeCount
struct UInterchangeBaseNode_GetTargetNodeCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function InterchangeCore.InterchangeBaseNode.GetStringAttribute
struct UInterchangeBaseNode_GetStringAttribute_Params
{
public:
	class FString                                NodeAttributeKey;                                  // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OutValue;                                          // 0x10(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_265F[0x7];                                     // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// Function InterchangeCore.InterchangeBaseNode.GetParentUid
struct UInterchangeBaseNode_GetParentUid_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function InterchangeCore.InterchangeBaseNode.GetNodeContainerType
struct UInterchangeBaseNode_GetNodeContainerType_Params
{
public:
	enum class EInterchangeNodeContainerType     ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function InterchangeCore.InterchangeBaseNode.GetLinearColorAttribute
struct UInterchangeBaseNode_GetLinearColorAttribute_Params
{
public:
	class FString                                NodeAttributeKey;                                  // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_LinearColor               OutValue;                                          // 0x10(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27A3[0x7];                                     // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// Function InterchangeCore.InterchangeBaseNode.GetInt32Attribute
struct UInterchangeBaseNode_GetInt32Attribute_Params
{
public:
	class FString                                NodeAttributeKey;                                  // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OutValue;                                          // 0x10(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x14(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_284D[0x3];                                     // Fixing Size Of Struct 
};

// 0x28 (0x28 - 0x0)
// Function InterchangeCore.InterchangeBaseNode.GetGuidAttribute
struct UInterchangeBaseNode_GetGuidAttribute_Params
{
public:
	class FString                                NodeAttributeKey;                                  // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Guid                      OutValue;                                          // 0x10(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_291B[0x7];                                     // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// Function InterchangeCore.InterchangeBaseNode.GetFloatAttribute
struct UInterchangeBaseNode_GetFloatAttribute_Params
{
public:
	class FString                                NodeAttributeKey;                                  // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OutValue;                                          // 0x10(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x14(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29A9[0x3];                                     // Fixing Size Of Struct 
};

// 0x20 (0x20 - 0x0)
// Function InterchangeCore.InterchangeBaseNode.GetDoubleAttribute
struct UInterchangeBaseNode_GetDoubleAttribute_Params
{
public:
	class FString                                NodeAttributeKey;                                  // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       OutValue;                                          // 0x10(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A48[0x7];                                     // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// Function InterchangeCore.InterchangeBaseNode.GetDisplayLabel
struct UInterchangeBaseNode_GetDisplayLabel_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function InterchangeCore.InterchangeBaseNode.GetBooleanAttribute
struct UInterchangeBaseNode_GetBooleanAttribute_Params
{
public:
	class FString                                NodeAttributeKey;                                  // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         OutValue;                                          // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x11(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B3E[0x6];                                     // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// Function InterchangeCore.InterchangeBaseNode.GetAssetName
struct UInterchangeBaseNode_GetAssetName_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function InterchangeCore.InterchangeBaseNode.AddVector2Attribute
struct UInterchangeBaseNode_AddVector2Attribute_Params
{
public:
	class FString                                NodeAttributeKey;                                  // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector2f                  Value;                                             // 0x10(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CE4[0x7];                                     // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// Function InterchangeCore.InterchangeBaseNode.AddTargetNodeUid
struct UInterchangeBaseNode_AddTargetNodeUid_Params
{
public:
	class FString                                AssetUid;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D66[0x7];                                     // Fixing Size Of Struct 
};

// 0x28 (0x28 - 0x0)
// Function InterchangeCore.InterchangeBaseNode.AddStringAttribute
struct UInterchangeBaseNode_AddStringAttribute_Params
{
public:
	class FString                                NodeAttributeKey;                                  // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Value;                                             // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2DE6[0x7];                                     // Fixing Size Of Struct 
};

// 0x28 (0x28 - 0x0)
// Function InterchangeCore.InterchangeBaseNode.AddLinearColorAttribute
struct UInterchangeBaseNode_AddLinearColorAttribute_Params
{
public:
	class FString                                NodeAttributeKey;                                  // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_LinearColor               Value;                                             // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2EBD[0x7];                                     // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// Function InterchangeCore.InterchangeBaseNode.AddInt32Attribute
struct UInterchangeBaseNode_AddInt32Attribute_Params
{
public:
	class FString                                NodeAttributeKey;                                  // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Value;                                             // 0x10(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x14(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2FB4[0x3];                                     // Fixing Size Of Struct 
};

// 0x28 (0x28 - 0x0)
// Function InterchangeCore.InterchangeBaseNode.AddGuidAttribute
struct UInterchangeBaseNode_AddGuidAttribute_Params
{
public:
	class FString                                NodeAttributeKey;                                  // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Guid                      Value;                                             // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_308C[0x7];                                     // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// Function InterchangeCore.InterchangeBaseNode.AddFloatAttribute
struct UInterchangeBaseNode_AddFloatAttribute_Params
{
public:
	class FString                                NodeAttributeKey;                                  // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Value;                                             // 0x10(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x14(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3145[0x3];                                     // Fixing Size Of Struct 
};

// 0x20 (0x20 - 0x0)
// Function InterchangeCore.InterchangeBaseNode.AddDoubleAttribute
struct UInterchangeBaseNode_AddDoubleAttribute_Params
{
public:
	class FString                                NodeAttributeKey;                                  // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       Value;                                             // 0x10(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_31F5[0x7];                                     // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// Function InterchangeCore.InterchangeBaseNode.AddBooleanAttribute
struct UInterchangeBaseNode_AddBooleanAttribute_Params
{
public:
	class FString                                NodeAttributeKey;                                  // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Value;                                             // 0x10(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x11(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32FB[0x6];                                     // Fixing Size Of Struct 
};

// 0x28 (0x28 - 0x0)
// Function InterchangeCore.InterchangeBaseNodeContainer.SetNodeParentUid
struct UInterchangeBaseNodeContainer_SetNodeParentUid_Params
{
public:
	class FString                                NodeUniqueID;                                      // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                NewParentNodeUid;                                  // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35C2[0x7];                                     // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// Function InterchangeCore.InterchangeBaseNodeContainer.SaveToFile
struct UInterchangeBaseNodeContainer_SaveToFile_Params
{
public:
	class FString                                Filename;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function InterchangeCore.InterchangeBaseNodeContainer.ReplaceNode
struct UInterchangeBaseNodeContainer_ReplaceNode_Params
{
public:
	class FString                                NodeUniqueID;                                      // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInterchangeFactoryBaseNode*           NewNode;                                           // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function InterchangeCore.InterchangeBaseNodeContainer.LoadFromFile
struct UInterchangeBaseNodeContainer_LoadFromFile_Params
{
public:
	class FString                                Filename;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function InterchangeCore.InterchangeBaseNodeContainer.IsNodeUidValid
struct UInterchangeBaseNodeContainer_IsNodeUidValid_Params
{
public:
	class FString                                NodeUniqueID;                                      // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_37C0[0x7];                                     // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// Function InterchangeCore.InterchangeBaseNodeContainer.GetRoots
struct UInterchangeBaseNodeContainer_GetRoots_Params
{
public:
	TArray<class FString>                        RootNodes;                                         // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function InterchangeCore.InterchangeBaseNodeContainer.GetNodes
struct UInterchangeBaseNodeContainer_GetNodes_Params
{
public:
	class UClass*                                ClassNode;                                         // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        OutNodes;                                          // 0x8(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function InterchangeCore.InterchangeBaseNodeContainer.GetNodeChildrenUids
struct UInterchangeBaseNodeContainer_GetNodeChildrenUids_Params
{
public:
	class FString                                NodeUniqueID;                                      // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function InterchangeCore.InterchangeBaseNodeContainer.GetNodeChildrenCount
struct UInterchangeBaseNodeContainer_GetNodeChildrenCount_Params
{
public:
	class FString                                NodeUniqueID;                                      // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A27[0x4];                                     // Fixing Size Of Struct 
};

// 0x20 (0x20 - 0x0)
// Function InterchangeCore.InterchangeBaseNodeContainer.GetNodeChildren
struct UInterchangeBaseNodeContainer_GetNodeChildren_Params
{
public:
	class FString                                NodeUniqueID;                                      // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ChildIndex;                                        // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AB4[0x4];                                     // Fixing Size After Last Property  
	class UInterchangeBaseNode*                  ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function InterchangeCore.InterchangeBaseNodeContainer.GetNode
struct UInterchangeBaseNodeContainer_GetNode_Params
{
public:
	class FString                                NodeUniqueID;                                      // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInterchangeBaseNode*                  ReturnValue;                                       // 0x10(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function InterchangeCore.InterchangeBaseNodeContainer.GetFactoryNode
struct UInterchangeBaseNodeContainer_GetFactoryNode_Params
{
public:
	class FString                                NodeUniqueID;                                      // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInterchangeFactoryBaseNode*           ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function InterchangeCore.InterchangeBaseNodeContainer.AddNode
struct UInterchangeBaseNodeContainer_AddNode_Params
{
public:
	class UInterchangeBaseNode*                  Node;                                              // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function InterchangeCore.InterchangeFactoryBaseNode.UnsetSkipNodeImport
struct UInterchangeFactoryBaseNode_UnsetSkipNodeImport_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function InterchangeCore.InterchangeFactoryBaseNode.UnsetForceNodeReimport
struct UInterchangeFactoryBaseNode_UnsetForceNodeReimport_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function InterchangeCore.InterchangeFactoryBaseNode.ShouldSkipNodeImport
struct UInterchangeFactoryBaseNode_ShouldSkipNodeImport_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function InterchangeCore.InterchangeFactoryBaseNode.ShouldForceNodeReimport
struct UInterchangeFactoryBaseNode_ShouldForceNodeReimport_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function InterchangeCore.InterchangeFactoryBaseNode.SetSkipNodeImport
struct UInterchangeFactoryBaseNode_SetSkipNodeImport_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function InterchangeCore.InterchangeFactoryBaseNode.SetReimportStrategyFlags
struct UInterchangeFactoryBaseNode_SetReimportStrategyFlags_Params
{
public:
	enum class EReimportStrategyFlags            ReimportStrategyFlags;                             // 0x0(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function InterchangeCore.InterchangeFactoryBaseNode.SetForceNodeReimport
struct UInterchangeFactoryBaseNode_SetForceNodeReimport_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function InterchangeCore.InterchangeFactoryBaseNode.SetCustomSubPath
struct UInterchangeFactoryBaseNode_SetCustomSubPath_Params
{
public:
	class FString                                AttributeValue;                                    // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3EFE[0x7];                                     // Fixing Size Of Struct 
};

// 0x28 (0x28 - 0x0)
// Function InterchangeCore.InterchangeFactoryBaseNode.SetCustomReferenceObject
struct UInterchangeFactoryBaseNode_SetCustomReferenceObject_Params
{
public:
	struct CoreUObject_SoftObjectPath            AttributeValue;                                    // 0x0(0x20)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F26[0x7];                                     // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// Function InterchangeCore.InterchangeFactoryBaseNode.RemoveFactoryDependencyUid
struct UInterchangeFactoryBaseNode_RemoveFactoryDependencyUid_Params
{
public:
	class FString                                DependencyUid;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F47[0x7];                                     // Fixing Size Of Struct 
};

// 0x1 (0x1 - 0x0)
// Function InterchangeCore.InterchangeFactoryBaseNode.GetReimportStrategyFlags
struct UInterchangeFactoryBaseNode_GetReimportStrategyFlags_Params
{
public:
	enum class EReimportStrategyFlags            ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function InterchangeCore.InterchangeFactoryBaseNode.GetFactoryDependency
struct UInterchangeFactoryBaseNode_GetFactoryDependency_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F78[0x4];                                     // Fixing Size After Last Property  
	class FString                                OutDependency;                                     // 0x8(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function InterchangeCore.InterchangeFactoryBaseNode.GetFactoryDependenciesCount
struct UInterchangeFactoryBaseNode_GetFactoryDependenciesCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function InterchangeCore.InterchangeFactoryBaseNode.GetFactoryDependencies
struct UInterchangeFactoryBaseNode_GetFactoryDependencies_Params
{
public:
	TArray<class FString>                        OutDependencies;                                   // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function InterchangeCore.InterchangeFactoryBaseNode.GetCustomSubPath
struct UInterchangeFactoryBaseNode_GetCustomSubPath_Params
{
public:
	class FString                                AttributeValue;                                    // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3FC4[0x7];                                     // Fixing Size Of Struct 
};

// 0x28 (0x28 - 0x0)
// Function InterchangeCore.InterchangeFactoryBaseNode.GetCustomReferenceObject
struct UInterchangeFactoryBaseNode_GetCustomReferenceObject_Params
{
public:
	struct CoreUObject_SoftObjectPath            AttributeValue;                                    // 0x0(0x20)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3FE6[0x7];                                     // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// Function InterchangeCore.InterchangeFactoryBaseNode.AddFactoryDependencyUid
struct UInterchangeFactoryBaseNode_AddFactoryDependencyUid_Params
{
public:
	class FString                                DependencyUid;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4001[0x7];                                     // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// Function InterchangeCore.InterchangeSourceNode.SetCustomSourceTimelineStart
struct UInterchangeSourceNode_SetCustomSourceTimelineStart_Params
{
public:
	double                                       AttributeValue;                                    // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_404E[0x7];                                     // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// Function InterchangeCore.InterchangeSourceNode.SetCustomSourceTimelineEnd
struct UInterchangeSourceNode_SetCustomSourceTimelineEnd_Params
{
public:
	double                                       AttributeValue;                                    // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4062[0x7];                                     // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// Function InterchangeCore.InterchangeSourceNode.SetCustomSourceFrameRateNumerator
struct UInterchangeSourceNode_SetCustomSourceFrameRateNumerator_Params
{
public:
	int32                                        AttributeValue;                                    // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_407E[0x3];                                     // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// Function InterchangeCore.InterchangeSourceNode.SetCustomSourceFrameRateDenominator
struct UInterchangeSourceNode_SetCustomSourceFrameRateDenominator_Params
{
public:
	int32                                        AttributeValue;                                    // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_409A[0x3];                                     // Fixing Size Of Struct 
};

// 0x2 (0x2 - 0x0)
// Function InterchangeCore.InterchangeSourceNode.SetCustomImportUnusedMaterial
struct UInterchangeSourceNode_SetCustomImportUnusedMaterial_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function InterchangeCore.InterchangeSourceNode.SetCustomAnimatedTimeStart
struct UInterchangeSourceNode_SetCustomAnimatedTimeStart_Params
{
public:
	double                                       AttributeValue;                                    // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_40BC[0x7];                                     // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// Function InterchangeCore.InterchangeSourceNode.SetCustomAnimatedTimeEnd
struct UInterchangeSourceNode_SetCustomAnimatedTimeEnd_Params
{
public:
	double                                       AttributeValue;                                    // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_40D5[0x7];                                     // Fixing Size Of Struct 
};

// 0x20 (0x20 - 0x0)
// Function InterchangeCore.InterchangeSourceNode.InitializeSourceNode
struct UInterchangeSourceNode_InitializeSourceNode_Params
{
public:
	class FString                                UniqueID;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DisplayLabel;                                      // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function InterchangeCore.InterchangeSourceNode.GetCustomSourceTimelineStart
struct UInterchangeSourceNode_GetCustomSourceTimelineStart_Params
{
public:
	double                                       AttributeValue;                                    // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_410D[0x7];                                     // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// Function InterchangeCore.InterchangeSourceNode.GetCustomSourceTimelineEnd
struct UInterchangeSourceNode_GetCustomSourceTimelineEnd_Params
{
public:
	double                                       AttributeValue;                                    // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_411B[0x7];                                     // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// Function InterchangeCore.InterchangeSourceNode.GetCustomSourceFrameRateNumerator
struct UInterchangeSourceNode_GetCustomSourceFrameRateNumerator_Params
{
public:
	int32                                        AttributeValue;                                    // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4137[0x3];                                     // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// Function InterchangeCore.InterchangeSourceNode.GetCustomSourceFrameRateDenominator
struct UInterchangeSourceNode_GetCustomSourceFrameRateDenominator_Params
{
public:
	int32                                        AttributeValue;                                    // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4154[0x3];                                     // Fixing Size Of Struct 
};

// 0x2 (0x2 - 0x0)
// Function InterchangeCore.InterchangeSourceNode.GetCustomImportUnusedMaterial
struct UInterchangeSourceNode_GetCustomImportUnusedMaterial_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function InterchangeCore.InterchangeSourceNode.GetCustomAnimatedTimeStart
struct UInterchangeSourceNode_GetCustomAnimatedTimeStart_Params
{
public:
	double                                       AttributeValue;                                    // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4176[0x7];                                     // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// Function InterchangeCore.InterchangeSourceNode.GetCustomAnimatedTimeEnd
struct UInterchangeSourceNode_GetCustomAnimatedTimeEnd_Params
{
public:
	double                                       AttributeValue;                                    // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4181[0x7];                                     // Fixing Size Of Struct 
};

// 0x20 (0x20 - 0x0)
// Function InterchangeCore.InterchangeUserDefinedAttributesAPI.RemoveUserDefinedAttribute
struct UInterchangeUserDefinedAttributesAPI_RemoveUserDefinedAttribute_Params
{
public:
	class UInterchangeBaseNode*                  InterchangeNode;                                   // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                UserDefinedAttributeName;                          // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_41A5[0x7];                                     // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// Function InterchangeCore.InterchangeUserDefinedAttributesAPI.GetUserDefinedAttributeInfos
struct UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttributeInfos_Params
{
public:
	class UInterchangeBaseNode*                  InterchangeNode;                                   // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct InterchangeCore_InterchangeUserDefinedAttributeInfo> UserDefinedAttributeInfos;                         // 0x8(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function InterchangeCore.InterchangeUserDefinedAttributesAPI.GetUserDefinedAttribute_Int32
struct UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Int32_Params
{
public:
	class UInterchangeBaseNode*                  InterchangeNode;                                   // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                UserDefinedAttributeName;                          // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OutValue;                                          // 0x18(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_41D6[0x4];                                     // Fixing Size After Last Property  
	class FString                                OutPayloadKey;                                     // 0x20(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x30(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_41DC[0x7];                                     // Fixing Size Of Struct 
};

// 0x40 (0x40 - 0x0)
// Function InterchangeCore.InterchangeUserDefinedAttributesAPI.GetUserDefinedAttribute_FString
struct UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_FString_Params
{
public:
	class UInterchangeBaseNode*                  InterchangeNode;                                   // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                UserDefinedAttributeName;                          // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OutValue;                                          // 0x18(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OutPayloadKey;                                     // 0x28(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x38(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_41FC[0x7];                                     // Fixing Size Of Struct 
};

// 0x38 (0x38 - 0x0)
// Function InterchangeCore.InterchangeUserDefinedAttributesAPI.GetUserDefinedAttribute_Float
struct UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Float_Params
{
public:
	class UInterchangeBaseNode*                  InterchangeNode;                                   // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                UserDefinedAttributeName;                          // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OutValue;                                          // 0x18(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_420F[0x4];                                     // Fixing Size After Last Property  
	class FString                                OutPayloadKey;                                     // 0x20(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x30(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4210[0x7];                                     // Fixing Size Of Struct 
};

// 0x38 (0x38 - 0x0)
// Function InterchangeCore.InterchangeUserDefinedAttributesAPI.GetUserDefinedAttribute_Double
struct UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Double_Params
{
public:
	class UInterchangeBaseNode*                  InterchangeNode;                                   // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                UserDefinedAttributeName;                          // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       OutValue;                                          // 0x18(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OutPayloadKey;                                     // 0x20(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x30(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4231[0x7];                                     // Fixing Size Of Struct 
};

// 0x38 (0x38 - 0x0)
// Function InterchangeCore.InterchangeUserDefinedAttributesAPI.GetUserDefinedAttribute_Boolean
struct UInterchangeUserDefinedAttributesAPI_GetUserDefinedAttribute_Boolean_Params
{
public:
	class UInterchangeBaseNode*                  InterchangeNode;                                   // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                UserDefinedAttributeName;                          // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         OutValue;                                          // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_424D[0x7];                                     // Fixing Size After Last Property  
	class FString                                OutPayloadKey;                                     // 0x20(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x30(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_424E[0x7];                                     // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// Function InterchangeCore.InterchangeUserDefinedAttributesAPI.DuplicateAllUserDefinedAttribute
struct UInterchangeUserDefinedAttributesAPI_DuplicateAllUserDefinedAttribute_Params
{
public:
	class UInterchangeBaseNode*                  InterchangeSourceNode;                             // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInterchangeBaseNode*                  InterchangeDestinationNode;                        // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddSourceNodeName;                                // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4262[0x7];                                     // Fixing Size Of Struct 
};

// 0x38 (0x38 - 0x0)
// Function InterchangeCore.InterchangeUserDefinedAttributesAPI.CreateUserDefinedAttribute_Int32
struct UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Int32_Params
{
public:
	class UInterchangeBaseNode*                  InterchangeNode;                                   // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                UserDefinedAttributeName;                          // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Value;                                             // 0x18(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4282[0x4];                                     // Fixing Size After Last Property  
	class FString                                PayloadKey;                                        // 0x20(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x30(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4283[0x7];                                     // Fixing Size Of Struct 
};

// 0x40 (0x40 - 0x0)
// Function InterchangeCore.InterchangeUserDefinedAttributesAPI.CreateUserDefinedAttribute_FString
struct UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_FString_Params
{
public:
	class UInterchangeBaseNode*                  InterchangeNode;                                   // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                UserDefinedAttributeName;                          // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Value;                                             // 0x18(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PayloadKey;                                        // 0x28(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x38(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_42A3[0x7];                                     // Fixing Size Of Struct 
};

// 0x38 (0x38 - 0x0)
// Function InterchangeCore.InterchangeUserDefinedAttributesAPI.CreateUserDefinedAttribute_Float
struct UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Float_Params
{
public:
	class UInterchangeBaseNode*                  InterchangeNode;                                   // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                UserDefinedAttributeName;                          // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Value;                                             // 0x18(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_42C1[0x4];                                     // Fixing Size After Last Property  
	class FString                                PayloadKey;                                        // 0x20(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x30(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_42C5[0x7];                                     // Fixing Size Of Struct 
};

// 0x38 (0x38 - 0x0)
// Function InterchangeCore.InterchangeUserDefinedAttributesAPI.CreateUserDefinedAttribute_Double
struct UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Double_Params
{
public:
	class UInterchangeBaseNode*                  InterchangeNode;                                   // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                UserDefinedAttributeName;                          // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       Value;                                             // 0x18(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PayloadKey;                                        // 0x20(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x30(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_42D7[0x7];                                     // Fixing Size Of Struct 
};

// 0x38 (0x38 - 0x0)
// Function InterchangeCore.InterchangeUserDefinedAttributesAPI.CreateUserDefinedAttribute_Boolean
struct UInterchangeUserDefinedAttributesAPI_CreateUserDefinedAttribute_Boolean_Params
{
public:
	class UInterchangeBaseNode*                  InterchangeNode;                                   // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                UserDefinedAttributeName;                          // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Value;                                             // 0x18(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_42E9[0x7];                                     // Fixing Size After Last Property  
	class FString                                PayloadKey;                                        // 0x20(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x30(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_42EB[0x7];                                     // Fixing Size Of Struct 
};

}
}


