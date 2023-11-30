#pragma once




#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x4C (0x4C - 0x0)
// Function WwiseResourceLoader.WwiseEventInfoLibrary.SetWwiseShortId
struct UWwiseEventInfoLibrary_SetWwiseShortId_Params
{
public:
	struct WwiseResourceLoader_WwiseEventInfo    Ref;                                               // 0x0(0x24)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        WwiseShortId;                                      // 0x24(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct WwiseResourceLoader_WwiseEventInfo    ReturnValue;                                       // 0x28(0x24)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function WwiseResourceLoader.WwiseEventInfoLibrary.SetWwiseName
struct UWwiseEventInfoLibrary_SetWwiseName_Params
{
public:
	struct WwiseResourceLoader_WwiseEventInfo    Ref;                                               // 0x0(0x24)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B8D[0x4];                                      // Fixing Size After Last Property  
	class FString                                WwiseName;                                         // 0x28(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct WwiseResourceLoader_WwiseEventInfo    ReturnValue;                                       // 0x38(0x24)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B8F[0x4];                                      // Fixing Size Of Struct 
};

// 0x58 (0x58 - 0x0)
// Function WwiseResourceLoader.WwiseEventInfoLibrary.SetWwiseGuid
struct UWwiseEventInfoLibrary_SetWwiseGuid_Params
{
public:
	struct WwiseResourceLoader_WwiseEventInfo    Ref;                                               // 0x0(0x24)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Guid                      WwiseGuid;                                         // 0x24(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct WwiseResourceLoader_WwiseEventInfo    ReturnValue;                                       // 0x34(0x24)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4C (0x4C - 0x0)
// Function WwiseResourceLoader.WwiseEventInfoLibrary.SetSwitchContainerLoading
struct UWwiseEventInfoLibrary_SetSwitchContainerLoading_Params
{
public:
	struct WwiseResourceLoader_WwiseEventInfo    Ref;                                               // 0x0(0x24)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWwiseEventSwitchContainerLoading SwitchContainerLoading;                            // 0x24(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BAC[0x3];                                      // Fixing Size After Last Property  
	struct WwiseResourceLoader_WwiseEventInfo    ReturnValue;                                       // 0x28(0x24)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4C (0x4C - 0x0)
// Function WwiseResourceLoader.WwiseEventInfoLibrary.SetHardCodedSoundBankShortId
struct UWwiseEventInfoLibrary_SetHardCodedSoundBankShortId_Params
{
public:
	struct WwiseResourceLoader_WwiseEventInfo    Ref;                                               // 0x0(0x24)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        HardCodedSoundBankShortId;                         // 0x24(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct WwiseResourceLoader_WwiseEventInfo    ReturnValue;                                       // 0x28(0x24)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4C (0x4C - 0x0)
// Function WwiseResourceLoader.WwiseEventInfoLibrary.SetDestroyOptions
struct UWwiseEventInfoLibrary_SetDestroyOptions_Params
{
public:
	struct WwiseResourceLoader_WwiseEventInfo    Ref;                                               // 0x0(0x24)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWwiseEventDestroyOptions         DestroyOptions;                                    // 0x24(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BD4[0x3];                                      // Fixing Size After Last Property  
	struct WwiseResourceLoader_WwiseEventInfo    ReturnValue;                                       // 0x28(0x24)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function WwiseResourceLoader.WwiseEventInfoLibrary.MakeStruct
struct UWwiseEventInfoLibrary_MakeStruct_Params
{
public:
	struct CoreUObject_Guid                      WwiseGuid;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        WwiseShortId;                                      // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BE8[0x4];                                      // Fixing Size After Last Property  
	class FString                                WwiseName;                                         // 0x18(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWwiseEventSwitchContainerLoading SwitchContainerLoading;                            // 0x28(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWwiseEventDestroyOptions         DestroyOptions;                                    // 0x29(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BEB[0x2];                                      // Fixing Size After Last Property  
	int32                                        HardCodedSoundBankShortId;                         // 0x2C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct WwiseResourceLoader_WwiseEventInfo    ReturnValue;                                       // 0x30(0x24)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BEC[0x4];                                      // Fixing Size Of Struct 
};

// 0x28 (0x28 - 0x0)
// Function WwiseResourceLoader.WwiseEventInfoLibrary.GetWwiseShortId
struct UWwiseEventInfoLibrary_GetWwiseShortId_Params
{
public:
	struct WwiseResourceLoader_WwiseEventInfo    Ref;                                               // 0x0(0x24)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x24(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function WwiseResourceLoader.WwiseEventInfoLibrary.GetWwiseName
struct UWwiseEventInfoLibrary_GetWwiseName_Params
{
public:
	struct WwiseResourceLoader_WwiseEventInfo    Ref;                                               // 0x0(0x24)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C0A[0x4];                                      // Fixing Size After Last Property  
	class FString                                ReturnValue;                                       // 0x28(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x34 (0x34 - 0x0)
// Function WwiseResourceLoader.WwiseEventInfoLibrary.GetWwiseGuid
struct UWwiseEventInfoLibrary_GetWwiseGuid_Params
{
public:
	struct WwiseResourceLoader_WwiseEventInfo    Ref;                                               // 0x0(0x24)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Guid                      ReturnValue;                                       // 0x24(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function WwiseResourceLoader.WwiseEventInfoLibrary.GetSwitchContainerLoading
struct UWwiseEventInfoLibrary_GetSwitchContainerLoading_Params
{
public:
	struct WwiseResourceLoader_WwiseEventInfo    Ref;                                               // 0x0(0x24)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWwiseEventSwitchContainerLoading ReturnValue;                                       // 0x24(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C1F[0x3];                                      // Fixing Size Of Struct 
};

// 0x28 (0x28 - 0x0)
// Function WwiseResourceLoader.WwiseEventInfoLibrary.GetHardCodedSoundBankShortId
struct UWwiseEventInfoLibrary_GetHardCodedSoundBankShortId_Params
{
public:
	struct WwiseResourceLoader_WwiseEventInfo    Ref;                                               // 0x0(0x24)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x24(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function WwiseResourceLoader.WwiseEventInfoLibrary.GetDestroyOptions
struct UWwiseEventInfoLibrary_GetDestroyOptions_Params
{
public:
	struct WwiseResourceLoader_WwiseEventInfo    Ref;                                               // 0x0(0x24)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWwiseEventDestroyOptions         ReturnValue;                                       // 0x24(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C32[0x3];                                      // Fixing Size Of Struct 
};

// 0x50 (0x50 - 0x0)
// Function WwiseResourceLoader.WwiseEventInfoLibrary.BreakStruct
struct UWwiseEventInfoLibrary_BreakStruct_Params
{
public:
	struct WwiseResourceLoader_WwiseEventInfo    Ref;                                               // 0x0(0x24)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Guid                      OutWwiseGuid;                                      // 0x24(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OutWwiseShortId;                                   // 0x34(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OutWwiseName;                                      // 0x38(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWwiseEventSwitchContainerLoading OutSwitchContainerLoading;                         // 0x48(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWwiseEventDestroyOptions         OutDestroyOptions;                                 // 0x49(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C41[0x2];                                      // Fixing Size After Last Property  
	int32                                        OutHardCodedSoundBankShortId;                      // 0x4C(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4C (0x4C - 0x0)
// Function WwiseResourceLoader.WwiseGroupValueInfoLibrary.SetWwiseShortId
struct UWwiseGroupValueInfoLibrary_SetWwiseShortId_Params
{
public:
	struct WwiseResourceLoader_WwiseGroupValueInfo Ref;                                               // 0x0(0x24)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        WwiseShortId;                                      // 0x24(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct WwiseResourceLoader_WwiseGroupValueInfo ReturnValue;                                       // 0x28(0x24)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function WwiseResourceLoader.WwiseGroupValueInfoLibrary.SetWwiseName
struct UWwiseGroupValueInfoLibrary_SetWwiseName_Params
{
public:
	struct WwiseResourceLoader_WwiseGroupValueInfo Ref;                                               // 0x0(0x24)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C71[0x4];                                      // Fixing Size After Last Property  
	class FString                                WwiseName;                                         // 0x28(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct WwiseResourceLoader_WwiseGroupValueInfo ReturnValue;                                       // 0x38(0x24)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C74[0x4];                                      // Fixing Size Of Struct 
};

// 0x4C (0x4C - 0x0)
// Function WwiseResourceLoader.WwiseGroupValueInfoLibrary.SetGroupShortId
struct UWwiseGroupValueInfoLibrary_SetGroupShortId_Params
{
public:
	struct WwiseResourceLoader_WwiseGroupValueInfo Ref;                                               // 0x0(0x24)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        GroupShortId;                                      // 0x24(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct WwiseResourceLoader_WwiseGroupValueInfo ReturnValue;                                       // 0x28(0x24)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function WwiseResourceLoader.WwiseGroupValueInfoLibrary.SetAssetGuid
struct UWwiseGroupValueInfoLibrary_SetAssetGuid_Params
{
public:
	struct WwiseResourceLoader_WwiseGroupValueInfo Ref;                                               // 0x0(0x24)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Guid                      AssetGuid;                                         // 0x24(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct WwiseResourceLoader_WwiseGroupValueInfo ReturnValue;                                       // 0x34(0x24)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function WwiseResourceLoader.WwiseGroupValueInfoLibrary.MakeStruct
struct UWwiseGroupValueInfoLibrary_MakeStruct_Params
{
public:
	struct CoreUObject_Guid                      AssetGuid;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        GroupShortId;                                      // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        WwiseShortId;                                      // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                WwiseName;                                         // 0x18(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct WwiseResourceLoader_WwiseGroupValueInfo ReturnValue;                                       // 0x28(0x24)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C98[0x4];                                      // Fixing Size Of Struct 
};

// 0x28 (0x28 - 0x0)
// Function WwiseResourceLoader.WwiseGroupValueInfoLibrary.GetWwiseShortId
struct UWwiseGroupValueInfoLibrary_GetWwiseShortId_Params
{
public:
	struct WwiseResourceLoader_WwiseGroupValueInfo Ref;                                               // 0x0(0x24)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x24(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function WwiseResourceLoader.WwiseGroupValueInfoLibrary.GetWwiseName
struct UWwiseGroupValueInfoLibrary_GetWwiseName_Params
{
public:
	struct WwiseResourceLoader_WwiseGroupValueInfo Ref;                                               // 0x0(0x24)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CA8[0x4];                                      // Fixing Size After Last Property  
	class FString                                ReturnValue;                                       // 0x28(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function WwiseResourceLoader.WwiseGroupValueInfoLibrary.GetGroupShortId
struct UWwiseGroupValueInfoLibrary_GetGroupShortId_Params
{
public:
	struct WwiseResourceLoader_WwiseGroupValueInfo Ref;                                               // 0x0(0x24)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x24(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x34 (0x34 - 0x0)
// Function WwiseResourceLoader.WwiseGroupValueInfoLibrary.GetAssetGuid
struct UWwiseGroupValueInfoLibrary_GetAssetGuid_Params
{
public:
	struct WwiseResourceLoader_WwiseGroupValueInfo Ref;                                               // 0x0(0x24)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Guid                      ReturnValue;                                       // 0x24(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function WwiseResourceLoader.WwiseGroupValueInfoLibrary.BreakStruct
struct UWwiseGroupValueInfoLibrary_BreakStruct_Params
{
public:
	struct WwiseResourceLoader_WwiseGroupValueInfo Ref;                                               // 0x0(0x24)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Guid                      OutAssetGuid;                                      // 0x24(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OutGroupShortId;                                   // 0x34(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OutWwiseShortId;                                   // 0x38(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CCE[0x4];                                      // Fixing Size After Last Property  
	class FString                                OutWwiseName;                                      // 0x40(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x44 (0x44 - 0x0)
// Function WwiseResourceLoader.WwiseObjectInfoLibrary.SetWwiseShortId
struct UWwiseObjectInfoLibrary_SetWwiseShortId_Params
{
public:
	struct WwiseResourceLoader_WwiseObjectInfo   Ref;                                               // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        WwiseShortId;                                      // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct WwiseResourceLoader_WwiseObjectInfo   ReturnValue;                                       // 0x24(0x20)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function WwiseResourceLoader.WwiseObjectInfoLibrary.SetWwiseName
struct UWwiseObjectInfoLibrary_SetWwiseName_Params
{
public:
	struct WwiseResourceLoader_WwiseObjectInfo   Ref;                                               // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                WwiseName;                                         // 0x20(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct WwiseResourceLoader_WwiseObjectInfo   ReturnValue;                                       // 0x30(0x20)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function WwiseResourceLoader.WwiseObjectInfoLibrary.SetWwiseGuid
struct UWwiseObjectInfoLibrary_SetWwiseGuid_Params
{
public:
	struct WwiseResourceLoader_WwiseObjectInfo   Ref;                                               // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Guid                      WwiseGuid;                                         // 0x20(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct WwiseResourceLoader_WwiseObjectInfo   ReturnValue;                                       // 0x30(0x20)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x44 (0x44 - 0x0)
// Function WwiseResourceLoader.WwiseObjectInfoLibrary.SetHardCodedSoundBankShortId
struct UWwiseObjectInfoLibrary_SetHardCodedSoundBankShortId_Params
{
public:
	struct WwiseResourceLoader_WwiseObjectInfo   Ref;                                               // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        HardCodedSoundBankShortId;                         // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct WwiseResourceLoader_WwiseObjectInfo   ReturnValue;                                       // 0x24(0x20)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function WwiseResourceLoader.WwiseObjectInfoLibrary.MakeStruct
struct UWwiseObjectInfoLibrary_MakeStruct_Params
{
public:
	struct CoreUObject_Guid                      WwiseGuid;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        WwiseShortId;                                      // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D2B[0x4];                                      // Fixing Size After Last Property  
	class FString                                WwiseName;                                         // 0x18(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        HardCodedSoundBankShortId;                         // 0x28(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct WwiseResourceLoader_WwiseObjectInfo   ReturnValue;                                       // 0x2C(0x20)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D30[0x4];                                      // Fixing Size Of Struct 
};

// 0x24 (0x24 - 0x0)
// Function WwiseResourceLoader.WwiseObjectInfoLibrary.GetWwiseShortId
struct UWwiseObjectInfoLibrary_GetWwiseShortId_Params
{
public:
	struct WwiseResourceLoader_WwiseObjectInfo   Ref;                                               // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x20(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function WwiseResourceLoader.WwiseObjectInfoLibrary.GetWwiseName
struct UWwiseObjectInfoLibrary_GetWwiseName_Params
{
public:
	struct WwiseResourceLoader_WwiseObjectInfo   Ref;                                               // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x20(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function WwiseResourceLoader.WwiseObjectInfoLibrary.GetWwiseGuid
struct UWwiseObjectInfoLibrary_GetWwiseGuid_Params
{
public:
	struct WwiseResourceLoader_WwiseObjectInfo   Ref;                                               // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Guid                      ReturnValue;                                       // 0x20(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x24 (0x24 - 0x0)
// Function WwiseResourceLoader.WwiseObjectInfoLibrary.GetHardCodedSoundBankShortId
struct UWwiseObjectInfoLibrary_GetHardCodedSoundBankShortId_Params
{
public:
	struct WwiseResourceLoader_WwiseObjectInfo   Ref;                                               // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x20(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function WwiseResourceLoader.WwiseObjectInfoLibrary.BreakStruct
struct UWwiseObjectInfoLibrary_BreakStruct_Params
{
public:
	struct WwiseResourceLoader_WwiseObjectInfo   Ref;                                               // 0x0(0x20)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Guid                      OutWwiseGuid;                                      // 0x20(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OutWwiseShortId;                                   // 0x30(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D77[0x4];                                      // Fixing Size After Last Property  
	class FString                                OutWwiseName;                                      // 0x38(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OutHardCodedSoundBankShortId;                      // 0x48(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D78[0x4];                                      // Fixing Size Of Struct 
};

}
}


