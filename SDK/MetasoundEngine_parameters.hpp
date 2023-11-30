#pragma once




#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x2C (0x2C - 0x0)
// Function MetasoundEngine.MetasoundGeneratorHandle.WatchOutput
struct UMetasoundGeneratorHandle_WatchOutput_Params
{
public:
	class FName                                  OutputName;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnOutputValueChanged;                              // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  AnalyzerName;                                      // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  AnalyzerOutputName;                                // 0x20(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x28(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10B5[0x3];                                     // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// DelegateFunction MetasoundEngine.MetasoundGeneratorHandle.OnOutputValueChangedMulticast__DelegateSignature
struct UMetasoundGeneratorHandle_OnOutputValueChangedMulticast__DelegateSignature_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct MetasoundEngine_MetaSoundOutput       Output;                                            // 0x8(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MetasoundEngine.MetasoundGeneratorHandle.CreateMetaSoundGeneratorHandle
struct UMetasoundGeneratorHandle_CreateMetaSoundGeneratorHandle_Params
{
public:
	class UAudioComponent*                       OnComponent;                                       // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMetasoundGeneratorHandle*             ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MetasoundEngine.MetasoundGeneratorHandle.ApplyParameterPack
struct UMetasoundGeneratorHandle_ApplyParameterPack_Params
{
public:
	class UMetasoundParameterPack*               Pack;                                              // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10E9[0x7];                                     // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// Function MetasoundEngine.MetasoundOutputBlueprintAccess.IsTime
struct UMetasoundOutputBlueprintAccess_IsTime_Params
{
public:
	struct MetasoundEngine_MetaSoundOutput       Output;                                            // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10FE[0x7];                                     // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// Function MetasoundEngine.MetasoundOutputBlueprintAccess.IsString
struct UMetasoundOutputBlueprintAccess_IsString_Params
{
public:
	struct MetasoundEngine_MetaSoundOutput       Output;                                            // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_110E[0x7];                                     // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// Function MetasoundEngine.MetasoundOutputBlueprintAccess.IsInt32
struct UMetasoundOutputBlueprintAccess_IsInt32_Params
{
public:
	struct MetasoundEngine_MetaSoundOutput       Output;                                            // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1123[0x7];                                     // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// Function MetasoundEngine.MetasoundOutputBlueprintAccess.IsFloat
struct UMetasoundOutputBlueprintAccess_IsFloat_Params
{
public:
	struct MetasoundEngine_MetaSoundOutput       Output;                                            // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1131[0x7];                                     // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// Function MetasoundEngine.MetasoundOutputBlueprintAccess.IsBool
struct UMetasoundOutputBlueprintAccess_IsBool_Params
{
public:
	struct MetasoundEngine_MetaSoundOutput       Output;                                            // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1142[0x7];                                     // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// Function MetasoundEngine.MetasoundOutputBlueprintAccess.GetTimeSeconds
struct UMetasoundOutputBlueprintAccess_GetTimeSeconds_Params
{
public:
	struct MetasoundEngine_MetaSoundOutput       Output;                                            // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         Success;                                           // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1157[0x3];                                     // Fixing Size After Last Property  
	float                                        ReturnValue;                                       // 0x14(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function MetasoundEngine.MetasoundOutputBlueprintAccess.GetString
struct UMetasoundOutputBlueprintAccess_GetString_Params
{
public:
	struct MetasoundEngine_MetaSoundOutput       Output;                                            // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         Success;                                           // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_118B[0x7];                                     // Fixing Size After Last Property  
	class FString                                ReturnValue;                                       // 0x18(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function MetasoundEngine.MetasoundOutputBlueprintAccess.GetInt32
struct UMetasoundOutputBlueprintAccess_GetInt32_Params
{
public:
	struct MetasoundEngine_MetaSoundOutput       Output;                                            // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         Success;                                           // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11A4[0x3];                                     // Fixing Size After Last Property  
	int32                                        ReturnValue;                                       // 0x14(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function MetasoundEngine.MetasoundOutputBlueprintAccess.GetFloat
struct UMetasoundOutputBlueprintAccess_GetFloat_Params
{
public:
	struct MetasoundEngine_MetaSoundOutput       Output;                                            // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         Success;                                           // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11BB[0x3];                                     // Fixing Size After Last Property  
	float                                        ReturnValue;                                       // 0x14(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function MetasoundEngine.MetasoundOutputBlueprintAccess.GetBool
struct UMetasoundOutputBlueprintAccess_GetBool_Params
{
public:
	struct MetasoundEngine_MetaSoundOutput       Output;                                            // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         Success;                                           // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x11(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11CE[0x6];                                     // Fixing Size Of Struct 
};

// 0x38 (0x38 - 0x0)
// Function MetasoundEngine.MetaSoundOutputSubsystem.WatchOutput
struct UMetaSoundOutputSubsystem_WatchOutput_Params
{
public:
	class UAudioComponent*                       AudioComponent;                                    // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  OutputName;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnOutputValueChanged;                              // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  AnalyzerName;                                      // 0x20(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  AnalyzerOutputName;                                // 0x28(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x30(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_120D[0x7];                                     // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// Function MetasoundEngine.MetaSoundAssetSubsystem.UnregisterAssetClassesInDirectories
struct UMetaSoundAssetSubsystem_UnregisterAssetClassesInDirectories_Params
{
public:
	TArray<struct MetasoundEngine_MetaSoundAssetDirectory> Directories;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MetasoundEngine.MetaSoundAssetSubsystem.RegisterAssetClassesInDirectories
struct UMetaSoundAssetSubsystem_RegisterAssetClassesInDirectories_Params
{
public:
	TArray<struct MetasoundEngine_MetaSoundAssetDirectory> Directories;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// Function MetasoundEngine.MetaSoundBuilderBase.SetNodeInputDefault
struct UMetaSoundBuilderBase_SetNodeInputDefault_Params
{
public:
	struct MetasoundEngine_MetaSoundBuilderNodeInputHandle NodeInputHandle;                                   // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct MetasoundFrontend_MetasoundFrontendLiteral Literal;                                           // 0x20(0x58)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	enum class EMetaSoundBuilderResult           OutResult;                                         // 0x78(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_129A[0x7];                                     // Fixing Size Of Struct 
};

// 0x68 (0x68 - 0x0)
// Function MetasoundEngine.MetaSoundBuilderBase.SetGraphInputDefault
struct UMetaSoundBuilderBase_SetGraphInputDefault_Params
{
public:
	class FName                                  InputName;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct MetasoundFrontend_MetasoundFrontendLiteral Literal;                                           // 0x8(0x58)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	enum class EMetaSoundBuilderResult           OutResult;                                         // 0x60(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12B4[0x7];                                     // Fixing Size Of Struct 
};

// 0x24 (0x24 - 0x0)
// Function MetasoundEngine.MetaSoundBuilderBase.RemoveNodeInputDefault
struct UMetaSoundBuilderBase_RemoveNodeInputDefault_Params
{
public:
	struct MetasoundEngine_MetaSoundBuilderNodeInputHandle InputHandle;                                       // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMetaSoundBuilderResult           OutResult;                                         // 0x20(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12C4[0x3];                                     // Fixing Size Of Struct 
};

// 0x14 (0x14 - 0x0)
// Function MetasoundEngine.MetaSoundBuilderBase.RemoveNode
struct UMetaSoundBuilderBase_RemoveNode_Params
{
public:
	struct MetasoundEngine_MetaSoundNodeHandle   NodeHandle;                                        // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	enum class EMetaSoundBuilderResult           OutResult;                                         // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12D1[0x3];                                     // Fixing Size Of Struct 
};

// 0xC (0xC - 0x0)
// Function MetasoundEngine.MetaSoundBuilderBase.RemoveInterface
struct UMetaSoundBuilderBase_RemoveInterface_Params
{
public:
	class FName                                  InterfaceName;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMetaSoundBuilderResult           OutResult;                                         // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12DB[0x3];                                     // Fixing Size Of Struct 
};

// 0xC (0xC - 0x0)
// Function MetasoundEngine.MetaSoundBuilderBase.RemoveGraphOutput
struct UMetaSoundBuilderBase_RemoveGraphOutput_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMetaSoundBuilderResult           OutResult;                                         // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12E6[0x3];                                     // Fixing Size Of Struct 
};

// 0xC (0xC - 0x0)
// Function MetasoundEngine.MetaSoundBuilderBase.RemoveGraphInput
struct UMetaSoundBuilderBase_RemoveGraphInput_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMetaSoundBuilderResult           OutResult;                                         // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12F5[0x3];                                     // Fixing Size Of Struct 
};

// 0x44 (0x44 - 0x0)
// Function MetasoundEngine.MetaSoundBuilderBase.NodesAreConnected
struct UMetaSoundBuilderBase_NodesAreConnected_Params
{
public:
	struct MetasoundEngine_MetaSoundBuilderNodeOutputHandle OutputHandle;                                      // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct MetasoundEngine_MetaSoundBuilderNodeInputHandle InputHandle;                                       // 0x20(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x40(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_130C[0x3];                                     // Fixing Size Of Struct 
};

// 0x24 (0x24 - 0x0)
// Function MetasoundEngine.MetaSoundBuilderBase.NodeOutputIsConnected
struct UMetaSoundBuilderBase_NodeOutputIsConnected_Params
{
public:
	struct MetasoundEngine_MetaSoundBuilderNodeOutputHandle OutputHandle;                                      // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_131A[0x3];                                     // Fixing Size Of Struct 
};

// 0x24 (0x24 - 0x0)
// Function MetasoundEngine.MetaSoundBuilderBase.NodeInputIsConnected
struct UMetaSoundBuilderBase_NodeInputIsConnected_Params
{
public:
	struct MetasoundEngine_MetaSoundBuilderNodeInputHandle InputHandle;                                       // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1327[0x3];                                     // Fixing Size Of Struct 
};

// 0x1 (0x1 - 0x0)
// Function MetasoundEngine.MetaSoundBuilderBase.IsPreset
struct UMetaSoundBuilderBase_IsPreset_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function MetasoundEngine.MetaSoundBuilderBase.InterfaceIsDeclared
struct UMetaSoundBuilderBase_InterfaceIsDeclared_Params
{
public:
	class FName                                  InterfaceName;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1342[0x3];                                     // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// Function MetasoundEngine.MetaSoundBuilderBase.GetReferencedPresetAsset
struct UMetaSoundBuilderBase_GetReferencedPresetAsset_Params
{
public:
	class UObject*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x34 (0x34 - 0x0)
// Function MetasoundEngine.MetaSoundBuilderBase.GetNodeOutputData
struct UMetaSoundBuilderBase_GetNodeOutputData_Params
{
public:
	struct MetasoundEngine_MetaSoundBuilderNodeOutputHandle OutputHandle;                                      // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Name;                                              // 0x20(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  DataType;                                          // 0x28(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMetaSoundBuilderResult           OutResult;                                         // 0x30(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1360[0x3];                                     // Fixing Size Of Struct 
};

// 0x80 (0x80 - 0x0)
// Function MetasoundEngine.MetaSoundBuilderBase.GetNodeInputDefault
struct UMetaSoundBuilderBase_GetNodeInputDefault_Params
{
public:
	struct MetasoundEngine_MetaSoundBuilderNodeInputHandle InputHandle;                                       // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMetaSoundBuilderResult           OutResult;                                         // 0x20(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1376[0x7];                                     // Fixing Size After Last Property  
	struct MetasoundFrontend_MetasoundFrontendLiteral ReturnValue;                                       // 0x28(0x58)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x34 (0x34 - 0x0)
// Function MetasoundEngine.MetaSoundBuilderBase.GetNodeInputData
struct UMetaSoundBuilderBase_GetNodeInputData_Params
{
public:
	struct MetasoundEngine_MetaSoundBuilderNodeInputHandle InputHandle;                                       // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Name;                                              // 0x20(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  DataType;                                          // 0x28(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMetaSoundBuilderResult           OutResult;                                         // 0x30(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1387[0x3];                                     // Fixing Size Of Struct 
};

// 0x80 (0x80 - 0x0)
// Function MetasoundEngine.MetaSoundBuilderBase.GetNodeInputClassDefault
struct UMetaSoundBuilderBase_GetNodeInputClassDefault_Params
{
public:
	struct MetasoundEngine_MetaSoundBuilderNodeInputHandle InputHandle;                                       // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMetaSoundBuilderResult           OutResult;                                         // 0x20(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_139F[0x7];                                     // Fixing Size After Last Property  
	struct MetasoundFrontend_MetasoundFrontendLiteral ReturnValue;                                       // 0x28(0x58)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function MetasoundEngine.MetaSoundBuilderBase.FindNodeOutputsByDataType
struct UMetaSoundBuilderBase_FindNodeOutputsByDataType_Params
{
public:
	struct MetasoundEngine_MetaSoundNodeHandle   NodeHandle;                                        // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	enum class EMetaSoundBuilderResult           OutResult;                                         // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13B5[0x3];                                     // Fixing Size After Last Property  
	class FName                                  DataType;                                          // 0x14(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13B7[0x4];                                     // Fixing Size After Last Property  
	TArray<struct MetasoundEngine_MetaSoundBuilderNodeOutputHandle> ReturnValue;                                       // 0x20(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function MetasoundEngine.MetaSoundBuilderBase.FindNodeOutputs
struct UMetaSoundBuilderBase_FindNodeOutputs_Params
{
public:
	struct MetasoundEngine_MetaSoundNodeHandle   NodeHandle;                                        // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	enum class EMetaSoundBuilderResult           OutResult;                                         // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13D3[0x7];                                     // Fixing Size After Last Property  
	TArray<struct MetasoundEngine_MetaSoundBuilderNodeOutputHandle> ReturnValue;                                       // 0x18(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x34 (0x34 - 0x0)
// Function MetasoundEngine.MetaSoundBuilderBase.FindNodeOutputParent
struct UMetaSoundBuilderBase_FindNodeOutputParent_Params
{
public:
	struct MetasoundEngine_MetaSoundBuilderNodeOutputHandle OutputHandle;                                      // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMetaSoundBuilderResult           OutResult;                                         // 0x20(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13E9[0x3];                                     // Fixing Size After Last Property  
	struct MetasoundEngine_MetaSoundNodeHandle   ReturnValue;                                       // 0x24(0x10)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x3C (0x3C - 0x0)
// Function MetasoundEngine.MetaSoundBuilderBase.FindNodeOutputByName
struct UMetaSoundBuilderBase_FindNodeOutputByName_Params
{
public:
	struct MetasoundEngine_MetaSoundNodeHandle   NodeHandle;                                        // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	class FName                                  OutputName;                                        // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMetaSoundBuilderResult           OutResult;                                         // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13F4[0x3];                                     // Fixing Size After Last Property  
	struct MetasoundEngine_MetaSoundBuilderNodeOutputHandle ReturnValue;                                       // 0x1C(0x20)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function MetasoundEngine.MetaSoundBuilderBase.FindNodeInputsByDataType
struct UMetaSoundBuilderBase_FindNodeInputsByDataType_Params
{
public:
	struct MetasoundEngine_MetaSoundNodeHandle   NodeHandle;                                        // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	enum class EMetaSoundBuilderResult           OutResult;                                         // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1406[0x3];                                     // Fixing Size After Last Property  
	class FName                                  DataType;                                          // 0x14(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1408[0x4];                                     // Fixing Size After Last Property  
	TArray<struct MetasoundEngine_MetaSoundBuilderNodeInputHandle> ReturnValue;                                       // 0x20(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function MetasoundEngine.MetaSoundBuilderBase.FindNodeInputs
struct UMetaSoundBuilderBase_FindNodeInputs_Params
{
public:
	struct MetasoundEngine_MetaSoundNodeHandle   NodeHandle;                                        // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	enum class EMetaSoundBuilderResult           OutResult;                                         // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_141A[0x7];                                     // Fixing Size After Last Property  
	TArray<struct MetasoundEngine_MetaSoundBuilderNodeInputHandle> ReturnValue;                                       // 0x18(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x34 (0x34 - 0x0)
// Function MetasoundEngine.MetaSoundBuilderBase.FindNodeInputParent
struct UMetaSoundBuilderBase_FindNodeInputParent_Params
{
public:
	struct MetasoundEngine_MetaSoundBuilderNodeInputHandle InputHandle;                                       // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMetaSoundBuilderResult           OutResult;                                         // 0x20(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1426[0x3];                                     // Fixing Size After Last Property  
	struct MetasoundEngine_MetaSoundNodeHandle   ReturnValue;                                       // 0x24(0x10)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x3C (0x3C - 0x0)
// Function MetasoundEngine.MetaSoundBuilderBase.FindNodeInputByName
struct UMetaSoundBuilderBase_FindNodeInputByName_Params
{
public:
	struct MetasoundEngine_MetaSoundNodeHandle   NodeHandle;                                        // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	class FName                                  InputName;                                         // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMetaSoundBuilderResult           OutResult;                                         // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_143A[0x3];                                     // Fixing Size After Last Property  
	struct MetasoundEngine_MetaSoundBuilderNodeInputHandle ReturnValue;                                       // 0x1C(0x20)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x24 (0x24 - 0x0)
// Function MetasoundEngine.MetaSoundBuilderBase.FindNodeClassVersion
struct UMetaSoundBuilderBase_FindNodeClassVersion_Params
{
public:
	struct MetasoundEngine_MetaSoundNodeHandle   NodeHandle;                                        // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	enum class EMetaSoundBuilderResult           OutResult;                                         // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1442[0x3];                                     // Fixing Size After Last Property  
	struct MetasoundFrontend_MetasoundFrontendVersion ReturnValue;                                       // 0x14(0x10)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function MetasoundEngine.MetaSoundBuilderBase.FindInterfaceOutputNodes
struct UMetaSoundBuilderBase_FindInterfaceOutputNodes_Params
{
public:
	class FName                                  InterfaceName;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMetaSoundBuilderResult           OutResult;                                         // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1452[0x7];                                     // Fixing Size After Last Property  
	TArray<struct MetasoundEngine_MetaSoundNodeHandle> ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function MetasoundEngine.MetaSoundBuilderBase.FindInterfaceInputNodes
struct UMetaSoundBuilderBase_FindInterfaceInputNodes_Params
{
public:
	class FName                                  InterfaceName;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMetaSoundBuilderResult           OutResult;                                         // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_147F[0x7];                                     // Fixing Size After Last Property  
	TArray<struct MetasoundEngine_MetaSoundNodeHandle> ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// Function MetasoundEngine.MetaSoundBuilderBase.FindGraphOutputNode
struct UMetaSoundBuilderBase_FindGraphOutputNode_Params
{
public:
	class FName                                  OutputName;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMetaSoundBuilderResult           OutResult;                                         // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1494[0x3];                                     // Fixing Size After Last Property  
	struct MetasoundEngine_MetaSoundNodeHandle   ReturnValue;                                       // 0xC(0x10)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// Function MetasoundEngine.MetaSoundBuilderBase.FindGraphInputNode
struct UMetaSoundBuilderBase_FindGraphInputNode_Params
{
public:
	class FName                                  InputName;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMetaSoundBuilderResult           OutResult;                                         // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_149E[0x3];                                     // Fixing Size After Last Property  
	struct MetasoundEngine_MetaSoundNodeHandle   ReturnValue;                                       // 0xC(0x10)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x24 (0x24 - 0x0)
// Function MetasoundEngine.MetaSoundBuilderBase.DisconnectNodesByInterfaceBindings
struct UMetaSoundBuilderBase_DisconnectNodesByInterfaceBindings_Params
{
public:
	struct MetasoundEngine_MetaSoundNodeHandle   FromNodeHandle;                                    // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct MetasoundEngine_MetaSoundNodeHandle   ToNodeHandle;                                      // 0x10(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	enum class EMetaSoundBuilderResult           OutResult;                                         // 0x20(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14B1[0x3];                                     // Fixing Size Of Struct 
};

// 0x44 (0x44 - 0x0)
// Function MetasoundEngine.MetaSoundBuilderBase.DisconnectNodes
struct UMetaSoundBuilderBase_DisconnectNodes_Params
{
public:
	struct MetasoundEngine_MetaSoundBuilderNodeOutputHandle NodeOutputHandle;                                  // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct MetasoundEngine_MetaSoundBuilderNodeInputHandle NodeInputHandle;                                   // 0x20(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMetaSoundBuilderResult           OutResult;                                         // 0x40(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14C7[0x3];                                     // Fixing Size Of Struct 
};

// 0x24 (0x24 - 0x0)
// Function MetasoundEngine.MetaSoundBuilderBase.DisconnectNodeOutput
struct UMetaSoundBuilderBase_DisconnectNodeOutput_Params
{
public:
	struct MetasoundEngine_MetaSoundBuilderNodeOutputHandle NodeOutputHandle;                                  // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMetaSoundBuilderResult           OutResult;                                         // 0x20(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14DF[0x3];                                     // Fixing Size Of Struct 
};

// 0x24 (0x24 - 0x0)
// Function MetasoundEngine.MetaSoundBuilderBase.DisconnectNodeInput
struct UMetaSoundBuilderBase_DisconnectNodeInput_Params
{
public:
	struct MetasoundEngine_MetaSoundBuilderNodeInputHandle NodeInputHandle;                                   // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMetaSoundBuilderResult           OutResult;                                         // 0x20(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14F2[0x3];                                     // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// Function MetasoundEngine.MetaSoundBuilderBase.ConvertToPreset
struct UMetaSoundBuilderBase_ConvertToPreset_Params
{
public:
	TScriptInterface<class IMetaSoundDocumentInterface> ReferencedNodeClass;                               // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMetaSoundBuilderResult           OutResult;                                         // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14FA[0x7];                                     // Fixing Size Of Struct 
};

// 0x1 (0x1 - 0x0)
// Function MetasoundEngine.MetaSoundBuilderBase.ConvertFromPreset
struct UMetaSoundBuilderBase_ConvertFromPreset_Params
{
public:
	enum class EMetaSoundBuilderResult           OutResult;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x24 (0x24 - 0x0)
// Function MetasoundEngine.MetaSoundBuilderBase.ContainsNodeOutput
struct UMetaSoundBuilderBase_ContainsNodeOutput_Params
{
public:
	struct MetasoundEngine_MetaSoundBuilderNodeOutputHandle Output;                                            // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1511[0x3];                                     // Fixing Size Of Struct 
};

// 0x24 (0x24 - 0x0)
// Function MetasoundEngine.MetaSoundBuilderBase.ContainsNodeInput
struct UMetaSoundBuilderBase_ContainsNodeInput_Params
{
public:
	struct MetasoundEngine_MetaSoundBuilderNodeInputHandle Input;                                             // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_151A[0x3];                                     // Fixing Size Of Struct 
};

// 0x14 (0x14 - 0x0)
// Function MetasoundEngine.MetaSoundBuilderBase.ContainsNode
struct UMetaSoundBuilderBase_ContainsNode_Params
{
public:
	struct MetasoundEngine_MetaSoundNodeHandle   Node;                                              // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1524[0x3];                                     // Fixing Size Of Struct 
};

// 0x24 (0x24 - 0x0)
// Function MetasoundEngine.MetaSoundBuilderBase.ConnectNodesByInterfaceBindings
struct UMetaSoundBuilderBase_ConnectNodesByInterfaceBindings_Params
{
public:
	struct MetasoundEngine_MetaSoundNodeHandle   FromNodeHandle;                                    // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct MetasoundEngine_MetaSoundNodeHandle   ToNodeHandle;                                      // 0x10(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	enum class EMetaSoundBuilderResult           OutResult;                                         // 0x20(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1533[0x3];                                     // Fixing Size Of Struct 
};

// 0x44 (0x44 - 0x0)
// Function MetasoundEngine.MetaSoundBuilderBase.ConnectNodes
struct UMetaSoundBuilderBase_ConnectNodes_Params
{
public:
	struct MetasoundEngine_MetaSoundBuilderNodeOutputHandle NodeOutputHandle;                                  // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct MetasoundEngine_MetaSoundBuilderNodeInputHandle NodeInputHandle;                                   // 0x20(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMetaSoundBuilderResult           OutResult;                                         // 0x40(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1543[0x3];                                     // Fixing Size Of Struct 
};

// 0x2C (0x2C - 0x0)
// Function MetasoundEngine.MetaSoundBuilderBase.ConnectNodeOutputToGraphOutput
struct UMetaSoundBuilderBase_ConnectNodeOutputToGraphOutput_Params
{
public:
	class FName                                  GraphOutputName;                                   // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct MetasoundEngine_MetaSoundBuilderNodeOutputHandle NodeOutputHandle;                                  // 0x8(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMetaSoundBuilderResult           OutResult;                                         // 0x28(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_155A[0x3];                                     // Fixing Size Of Struct 
};

// 0x28 (0x28 - 0x0)
// Function MetasoundEngine.MetaSoundBuilderBase.ConnectNodeOutputsToMatchingGraphInterfaceOutputs
struct UMetaSoundBuilderBase_ConnectNodeOutputsToMatchingGraphInterfaceOutputs_Params
{
public:
	struct MetasoundEngine_MetaSoundNodeHandle   NodeHandle;                                        // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	enum class EMetaSoundBuilderResult           OutResult;                                         // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1568[0x7];                                     // Fixing Size After Last Property  
	TArray<struct MetasoundEngine_MetaSoundBuilderNodeInputHandle> ReturnValue;                                       // 0x18(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x2C (0x2C - 0x0)
// Function MetasoundEngine.MetaSoundBuilderBase.ConnectNodeInputToGraphInput
struct UMetaSoundBuilderBase_ConnectNodeInputToGraphInput_Params
{
public:
	class FName                                  GraphInputName;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct MetasoundEngine_MetaSoundBuilderNodeInputHandle NodeInputHandle;                                   // 0x8(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMetaSoundBuilderResult           OutResult;                                         // 0x28(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1587[0x3];                                     // Fixing Size Of Struct 
};

// 0x28 (0x28 - 0x0)
// Function MetasoundEngine.MetaSoundBuilderBase.ConnectNodeInputsToMatchingGraphInterfaceInputs
struct UMetaSoundBuilderBase_ConnectNodeInputsToMatchingGraphInterfaceInputs_Params
{
public:
	struct MetasoundEngine_MetaSoundNodeHandle   NodeHandle;                                        // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	enum class EMetaSoundBuilderResult           OutResult;                                         // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_159D[0x7];                                     // Fixing Size After Last Property  
	TArray<struct MetasoundEngine_MetaSoundBuilderNodeOutputHandle> ReturnValue;                                       // 0x18(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function MetasoundEngine.MetaSoundBuilderBase.AddNodeByClassName
struct UMetaSoundBuilderBase_AddNodeByClassName_Params
{
public:
	struct MetasoundFrontend_MetasoundFrontendClassName ClassName;                                         // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MajorVersion;                                      // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMetaSoundBuilderResult           OutResult;                                         // 0x1C(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15B6[0x3];                                     // Fixing Size After Last Property  
	struct MetasoundEngine_MetaSoundNodeHandle   ReturnValue;                                       // 0x20(0x10)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function MetasoundEngine.MetaSoundBuilderBase.AddNode
struct UMetaSoundBuilderBase_AddNode_Params
{
public:
	TScriptInterface<class IMetaSoundDocumentInterface> NodeClass;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMetaSoundBuilderResult           OutResult;                                         // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15D1[0x3];                                     // Fixing Size After Last Property  
	struct MetasoundEngine_MetaSoundNodeHandle   ReturnValue;                                       // 0x14(0x10)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_15D3[0x4];                                     // Fixing Size Of Struct 
};

// 0xC (0xC - 0x0)
// Function MetasoundEngine.MetaSoundBuilderBase.AddInterface
struct UMetaSoundBuilderBase_AddInterface_Params
{
public:
	class FName                                  InterfaceName;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMetaSoundBuilderResult           OutResult;                                         // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15F1[0x3];                                     // Fixing Size Of Struct 
};

// 0x90 (0x90 - 0x0)
// Function MetasoundEngine.MetaSoundBuilderBase.AddGraphOutputNode
struct UMetaSoundBuilderBase_AddGraphOutputNode_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  DataType;                                          // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct MetasoundFrontend_MetasoundFrontendLiteral DefaultValue;                                      // 0x10(0x58)(Parm, NativeAccessSpecifierPublic)
	enum class EMetaSoundBuilderResult           OutResult;                                         // 0x68(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsConstructorOutput;                              // 0x69(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1612[0x2];                                     // Fixing Size After Last Property  
	struct MetasoundEngine_MetaSoundBuilderNodeInputHandle ReturnValue;                                       // 0x6C(0x20)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_161F[0x4];                                     // Fixing Size Of Struct 
};

// 0x90 (0x90 - 0x0)
// Function MetasoundEngine.MetaSoundBuilderBase.AddGraphInputNode
struct UMetaSoundBuilderBase_AddGraphInputNode_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  DataType;                                          // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct MetasoundFrontend_MetasoundFrontendLiteral DefaultValue;                                      // 0x10(0x58)(Parm, NativeAccessSpecifierPublic)
	enum class EMetaSoundBuilderResult           OutResult;                                         // 0x68(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsConstructorInput;                               // 0x69(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1653[0x2];                                     // Fixing Size After Last Property  
	struct MetasoundEngine_MetaSoundBuilderNodeOutputHandle ReturnValue;                                       // 0x6C(0x20)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1655[0x4];                                     // Fixing Size Of Struct 
};

// 0x38 (0x38 - 0x0)
// Function MetasoundEngine.MetaSoundPatchBuilder.Build
struct UMetaSoundPatchBuilder_Build_Params
{
public:
	class UObject*                               Parent;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct MetasoundEngine_MetaSoundBuilderOptions Options;                                           // 0x8(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	TScriptInterface<class IMetaSoundDocumentInterface> ReturnValue;                                       // 0x28(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function MetasoundEngine.MetaSoundSourceBuilder.SetFormat
struct UMetaSoundSourceBuilder_SetFormat_Params
{
public:
	enum class EMetaSoundOutputAudioFormat       OutputFormat;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMetaSoundBuilderResult           OutResult;                                         // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MetasoundEngine.MetaSoundSourceBuilder.GetLiveUpdatesEnabled
struct UMetaSoundSourceBuilder_GetLiveUpdatesEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function MetasoundEngine.MetaSoundSourceBuilder.Build
struct UMetaSoundSourceBuilder_Build_Params
{
public:
	class UObject*                               Parent;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct MetasoundEngine_MetaSoundBuilderOptions Options;                                           // 0x8(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	TScriptInterface<class IMetaSoundDocumentInterface> ReturnValue;                                       // 0x28(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function MetasoundEngine.MetaSoundSourceBuilder.Audition
struct UMetaSoundSourceBuilder_Audition_Params
{
public:
	class UObject*                               Parent;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAudioComponent*                       AudioComponent;                                    // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnCreateGenerator;                                 // 0x10(0x10)(Parm, ZeroConstructor, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLiveUpdatesEnabled;                               // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_174C[0x7];                                     // Fixing Size Of Struct 
};

// 0xC (0xC - 0x0)
// Function MetasoundEngine.MetaSoundBuilderSubsystem.UnregisterSourceBuilder
struct UMetaSoundBuilderSubsystem_UnregisterSourceBuilder_Params
{
public:
	class FName                                  BuilderName;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_176B[0x3];                                     // Fixing Size Of Struct 
};

// 0xC (0xC - 0x0)
// Function MetasoundEngine.MetaSoundBuilderSubsystem.UnregisterPatchBuilder
struct UMetaSoundBuilderSubsystem_UnregisterPatchBuilder_Params
{
public:
	class FName                                  BuilderName;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_178E[0x3];                                     // Fixing Size Of Struct 
};

// 0xC (0xC - 0x0)
// Function MetasoundEngine.MetaSoundBuilderSubsystem.UnregisterBuilder
struct UMetaSoundBuilderSubsystem_UnregisterBuilder_Params
{
public:
	class FName                                  BuilderName;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_179D[0x3];                                     // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// Function MetasoundEngine.MetaSoundBuilderSubsystem.RegisterSourceBuilder
struct UMetaSoundBuilderSubsystem_RegisterSourceBuilder_Params
{
public:
	class FName                                  BuilderName;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMetaSoundSourceBuilder*               Builder;                                           // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MetasoundEngine.MetaSoundBuilderSubsystem.RegisterPatchBuilder
struct UMetaSoundBuilderSubsystem_RegisterPatchBuilder_Params
{
public:
	class FName                                  BuilderName;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMetaSoundPatchBuilder*                Builder;                                           // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MetasoundEngine.MetaSoundBuilderSubsystem.RegisterBuilder
struct UMetaSoundBuilderSubsystem_RegisterBuilder_Params
{
public:
	class FName                                  BuilderName;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMetaSoundBuilderBase*                 Builder;                                           // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function MetasoundEngine.MetaSoundBuilderSubsystem.IsInterfaceRegistered
struct UMetaSoundBuilderSubsystem_IsInterfaceRegistered_Params
{
public:
	class FName                                  InInterfaceName;                                   // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17E1[0x3];                                     // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// Function MetasoundEngine.MetaSoundBuilderSubsystem.FindSourceBuilder
struct UMetaSoundBuilderSubsystem_FindSourceBuilder_Params
{
public:
	class FName                                  BuilderName;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMetaSoundSourceBuilder*               ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MetasoundEngine.MetaSoundBuilderSubsystem.FindPatchBuilder
struct UMetaSoundBuilderSubsystem_FindPatchBuilder_Params
{
public:
	class FName                                  BuilderName;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMetaSoundPatchBuilder*                ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MetasoundEngine.MetaSoundBuilderSubsystem.FindBuilder
struct UMetaSoundBuilderSubsystem_FindBuilder_Params
{
public:
	class FName                                  BuilderName;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMetaSoundBuilderBase*                 ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// Function MetasoundEngine.MetaSoundBuilderSubsystem.CreateStringMetaSoundLiteral
struct UMetaSoundBuilderSubsystem_CreateStringMetaSoundLiteral_Params
{
public:
	class FString                                Value;                                             // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  DataType;                                          // 0x10(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct MetasoundFrontend_MetasoundFrontendLiteral ReturnValue;                                       // 0x18(0x58)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// Function MetasoundEngine.MetaSoundBuilderSubsystem.CreateStringArrayMetaSoundLiteral
struct UMetaSoundBuilderSubsystem_CreateStringArrayMetaSoundLiteral_Params
{
public:
	TArray<class FString>                        Value;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	class FName                                  DataType;                                          // 0x10(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct MetasoundFrontend_MetasoundFrontendLiteral ReturnValue;                                       // 0x18(0x58)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function MetasoundEngine.MetaSoundBuilderSubsystem.CreateSourcePresetBuilder
struct UMetaSoundBuilderSubsystem_CreateSourcePresetBuilder_Params
{
public:
	class FName                                  BuilderName;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TScriptInterface<class IMetaSoundDocumentInterface> ReferencedSourceClass;                             // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMetaSoundBuilderResult           OutResult;                                         // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1883[0x7];                                     // Fixing Size After Last Property  
	class UMetaSoundSourceBuilder*               ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// Function MetasoundEngine.MetaSoundBuilderSubsystem.CreateSourceBuilder
struct UMetaSoundBuilderSubsystem_CreateSourceBuilder_Params
{
public:
	class FName                                  BuilderName;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct MetasoundEngine_MetaSoundBuilderNodeOutputHandle OnPlayNodeOutput;                                  // 0x8(0x20)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct MetasoundEngine_MetaSoundBuilderNodeInputHandle OnFinishedNodeInput;                               // 0x28(0x20)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct MetasoundEngine_MetaSoundBuilderNodeInputHandle> AudioOutNodeInputs;                                // 0x48(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class EMetaSoundBuilderResult           OutResult;                                         // 0x58(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMetaSoundOutputAudioFormat       OutputFormat;                                      // 0x59(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsOneShot;                                        // 0x5A(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18BE[0x5];                                     // Fixing Size After Last Property  
	class UMetaSoundSourceBuilder*               ReturnValue;                                       // 0x60(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function MetasoundEngine.MetaSoundBuilderSubsystem.CreatePatchPresetBuilder
struct UMetaSoundBuilderSubsystem_CreatePatchPresetBuilder_Params
{
public:
	class FName                                  BuilderName;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TScriptInterface<class IMetaSoundDocumentInterface> ReferencedPatchClass;                              // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMetaSoundBuilderResult           OutResult;                                         // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18DD[0x7];                                     // Fixing Size After Last Property  
	class UMetaSoundPatchBuilder*                ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function MetasoundEngine.MetaSoundBuilderSubsystem.CreatePatchBuilder
struct UMetaSoundBuilderSubsystem_CreatePatchBuilder_Params
{
public:
	class FName                                  BuilderName;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMetaSoundBuilderResult           OutResult;                                         // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1901[0x7];                                     // Fixing Size After Last Property  
	class UMetaSoundPatchBuilder*                ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function MetasoundEngine.MetaSoundBuilderSubsystem.CreateObjectMetaSoundLiteral
struct UMetaSoundBuilderSubsystem_CreateObjectMetaSoundLiteral_Params
{
public:
	class UObject*                               Value;                                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct MetasoundFrontend_MetasoundFrontendLiteral ReturnValue;                                       // 0x8(0x58)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// Function MetasoundEngine.MetaSoundBuilderSubsystem.CreateObjectArrayMetaSoundLiteral
struct UMetaSoundBuilderSubsystem_CreateObjectArrayMetaSoundLiteral_Params
{
public:
	TArray<class UObject*>                       Value;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct MetasoundFrontend_MetasoundFrontendLiteral ReturnValue;                                       // 0x10(0x58)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0xF8 (0xF8 - 0x0)
// Function MetasoundEngine.MetaSoundBuilderSubsystem.CreateMetaSoundLiteralFromParam
struct UMetaSoundBuilderSubsystem_CreateMetaSoundLiteralFromParam_Params
{
public:
	struct AudioExtensions_AudioParameter        Param;                                             // 0x0(0xA0)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct MetasoundFrontend_MetasoundFrontendLiteral ReturnValue;                                       // 0xA0(0x58)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// Function MetasoundEngine.MetaSoundBuilderSubsystem.CreateIntMetaSoundLiteral
struct UMetaSoundBuilderSubsystem_CreateIntMetaSoundLiteral_Params
{
public:
	int32                                        Value;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  DataType;                                          // 0x4(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_195B[0x4];                                     // Fixing Size After Last Property  
	struct MetasoundFrontend_MetasoundFrontendLiteral ReturnValue;                                       // 0x10(0x58)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// Function MetasoundEngine.MetaSoundBuilderSubsystem.CreateIntArrayMetaSoundLiteral
struct UMetaSoundBuilderSubsystem_CreateIntArrayMetaSoundLiteral_Params
{
public:
	TArray<int32>                                Value;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	class FName                                  DataType;                                          // 0x10(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct MetasoundFrontend_MetasoundFrontendLiteral ReturnValue;                                       // 0x18(0x58)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// Function MetasoundEngine.MetaSoundBuilderSubsystem.CreateFloatMetaSoundLiteral
struct UMetaSoundBuilderSubsystem_CreateFloatMetaSoundLiteral_Params
{
public:
	float                                        Value;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  DataType;                                          // 0x4(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1977[0x4];                                     // Fixing Size After Last Property  
	struct MetasoundFrontend_MetasoundFrontendLiteral ReturnValue;                                       // 0x10(0x58)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// Function MetasoundEngine.MetaSoundBuilderSubsystem.CreateFloatArrayMetaSoundLiteral
struct UMetaSoundBuilderSubsystem_CreateFloatArrayMetaSoundLiteral_Params
{
public:
	TArray<float>                                Value;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	class FName                                  DataType;                                          // 0x10(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct MetasoundFrontend_MetasoundFrontendLiteral ReturnValue;                                       // 0x18(0x58)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// Function MetasoundEngine.MetaSoundBuilderSubsystem.CreateBoolMetaSoundLiteral
struct UMetaSoundBuilderSubsystem_CreateBoolMetaSoundLiteral_Params
{
public:
	bool                                         Value;                                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1999[0x3];                                     // Fixing Size After Last Property  
	class FName                                  DataType;                                          // 0x4(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_199D[0x4];                                     // Fixing Size After Last Property  
	struct MetasoundFrontend_MetasoundFrontendLiteral ReturnValue;                                       // 0x10(0x58)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// Function MetasoundEngine.MetaSoundBuilderSubsystem.CreateBoolArrayMetaSoundLiteral
struct UMetaSoundBuilderSubsystem_CreateBoolArrayMetaSoundLiteral_Params
{
public:
	TArray<bool>                                 Value;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	class FName                                  DataType;                                          // 0x10(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct MetasoundFrontend_MetasoundFrontendLiteral ReturnValue;                                       // 0x18(0x58)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

}
}


