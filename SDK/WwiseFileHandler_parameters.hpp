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
// Function WwiseFileHandler.WwiseExternalSourceStatics.SetExternalSourceMediaWithIds
struct UWwiseExternalSourceStatics_SetExternalSourceMediaWithIds_Params
{
public:
	struct WwiseSoundEngine_AkUniqueID           ExternalSourceCookie;                              // 0x0(0x4)(ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        MediaId;                                           // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function WwiseFileHandler.WwiseExternalSourceStatics.SetExternalSourceMediaByName
struct UWwiseExternalSourceStatics_SetExternalSourceMediaByName_Params
{
public:
	class FString                                ExternalSourceName;                                // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                MediaName;                                         // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function WwiseFileHandler.WwiseExternalSourceStatics.SetExternalSourceMediaById
struct UWwiseExternalSourceStatics_SetExternalSourceMediaById_Params
{
public:
	class FString                                ExternalSourceName;                                // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MediaId;                                           // 0x10(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B83[0x4];                                      // Fixing Size Of Struct 
};

}
}


