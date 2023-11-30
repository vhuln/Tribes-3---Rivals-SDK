#pragma once




#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x14 (0x14 - 0x0)
// Function DataRegistry.DataRegistrySubsystem.NotEqual_DataRegistryType
struct UDataRegistrySubsystem_NotEqual_DataRegistryType_Params
{
public:
	struct DataRegistry_DataRegistryType         A;                                                 // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct DataRegistry_DataRegistryType         B;                                                 // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B96[0x3];                                      // Fixing Size Of Struct 
};

// 0x24 (0x24 - 0x0)
// Function DataRegistry.DataRegistrySubsystem.NotEqual_DataRegistryId
struct UDataRegistrySubsystem_NotEqual_DataRegistryId_Params
{
public:
	struct DataRegistry_DataRegistryId           A;                                                 // 0x0(0x10)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct DataRegistry_DataRegistryId           B;                                                 // 0x10(0x10)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B9F[0x3];                                      // Fixing Size Of Struct 
};

// 0xC (0xC - 0x0)
// Function DataRegistry.DataRegistrySubsystem.IsValidDataRegistryType
struct UDataRegistrySubsystem_IsValidDataRegistryType_Params
{
public:
	struct DataRegistry_DataRegistryType         DataRegistryType;                                  // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BAB[0x3];                                      // Fixing Size Of Struct 
};

// 0x14 (0x14 - 0x0)
// Function DataRegistry.DataRegistrySubsystem.IsValidDataRegistryId
struct UDataRegistrySubsystem_IsValidDataRegistryId_Params
{
public:
	struct DataRegistry_DataRegistryId           DataRegistryId;                                    // 0x0(0x10)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BB6[0x3];                                      // Fixing Size Of Struct 
};

// 0x40 (0x40 - 0x0)
// Function DataRegistry.DataRegistrySubsystem.GetCachedItemFromLookupBP
struct UDataRegistrySubsystem_GetCachedItemFromLookupBP_Params
{
public:
	struct DataRegistry_DataRegistryId           ItemId;                                            // 0x0(0x10)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct DataRegistry_DataRegistryLookup       ResolvedLookup;                                    // 0x10(0x20)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Engine_TableRowBase                   OutItem;                                           // 0x30(0x8)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x38(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BCD[0x7];                                      // Fixing Size Of Struct 
};

// 0x20 (0x20 - 0x0)
// Function DataRegistry.DataRegistrySubsystem.GetCachedItemBP
struct UDataRegistrySubsystem_GetCachedItemBP_Params
{
public:
	struct DataRegistry_DataRegistryId           ItemId;                                            // 0x0(0x10)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Engine_TableRowBase                   OutItem;                                           // 0x10(0x8)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BDE[0x7];                                      // Fixing Size Of Struct 
};

// 0x20 (0x20 - 0x0)
// Function DataRegistry.DataRegistrySubsystem.FindCachedItemBP
struct UDataRegistrySubsystem_FindCachedItemBP_Params
{
public:
	struct DataRegistry_DataRegistryId           ItemId;                                            // 0x0(0x10)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDataRegistrySubsystemGetItemResult OutResult;                                         // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BEA[0x7];                                      // Fixing Size After Last Property  
	struct Engine_TableRowBase                   OutItem;                                           // 0x18(0x8)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function DataRegistry.DataRegistrySubsystem.EvaluateDataRegistryCurve
struct UDataRegistrySubsystem_EvaluateDataRegistryCurve_Params
{
public:
	struct DataRegistry_DataRegistryId           ItemId;                                            // 0x0(0x10)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InputValue;                                        // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DefaultValue;                                      // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDataRegistrySubsystemGetItemResult OutResult;                                         // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BFE[0x3];                                      // Fixing Size After Last Property  
	float                                        OutValue;                                          // 0x1C(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function DataRegistry.DataRegistrySubsystem.EqualEqual_DataRegistryType
struct UDataRegistrySubsystem_EqualEqual_DataRegistryType_Params
{
public:
	struct DataRegistry_DataRegistryType         A;                                                 // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct DataRegistry_DataRegistryType         B;                                                 // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C0B[0x3];                                      // Fixing Size Of Struct 
};

// 0x24 (0x24 - 0x0)
// Function DataRegistry.DataRegistrySubsystem.EqualEqual_DataRegistryId
struct UDataRegistrySubsystem_EqualEqual_DataRegistryId_Params
{
public:
	struct DataRegistry_DataRegistryId           A;                                                 // 0x0(0x10)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct DataRegistry_DataRegistryId           B;                                                 // 0x10(0x10)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C19[0x3];                                      // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// Function DataRegistry.DataRegistrySubsystem.Conv_DataRegistryTypeToString
struct UDataRegistrySubsystem_Conv_DataRegistryTypeToString_Params
{
public:
	struct DataRegistry_DataRegistryType         DataRegistryType;                                  // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function DataRegistry.DataRegistrySubsystem.Conv_DataRegistryIdToString
struct UDataRegistrySubsystem_Conv_DataRegistryIdToString_Params
{
public:
	struct DataRegistry_DataRegistryId           DataRegistryId;                                    // 0x0(0x10)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x24 (0x24 - 0x0)
// Function DataRegistry.DataRegistrySubsystem.AcquireItemBP
struct UDataRegistrySubsystem_AcquireItemBP_Params
{
public:
	struct DataRegistry_DataRegistryId           ItemId;                                            // 0x0(0x10)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           AcquireCallback;                                   // 0x10(0x10)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C33[0x3];                                      // Fixing Size Of Struct 
};

}
}


