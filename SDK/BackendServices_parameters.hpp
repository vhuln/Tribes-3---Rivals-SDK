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
// Function BackendServices.BackendService.GetScriptingInterface
struct UBackendService_GetScriptingInterface_Params
{
public:
	class UBSScripting*                          ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function BackendServices.BackendService.GetPubSubInterface
struct UBackendService_GetPubSubInterface_Params
{
public:
	class UBSPubSubInterface*                    ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function BackendServices.BackendService.GetGameVersion
struct UBackendService_GetGameVersion_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function BackendServices.BSInternalInterface.GetUnityProjectId
struct UBSInternalInterface_GetUnityProjectId_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function BackendServices.BSInternalInterface.GetUnityEnvironmentName
struct UBSInternalInterface_GetUnityEnvironmentName_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function BackendServices.BSInternalInterface.GetUnityEnvironmentId
struct UBSInternalInterface_GetUnityEnvironmentId_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function BackendServices.BSInternalInterface.GetMultiplayFleetId
struct UBSInternalInterface_GetMultiplayFleetId_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function BackendServices.BSInternalInterface.GetClanforgeSecretKey
struct UBSInternalInterface_GetClanforgeSecretKey_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function BackendServices.BSInternalInterface.GetClanforgeAccessKey
struct UBSInternalInterface_GetClanforgeAccessKey_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function BackendServices.BSPubSubInterface.IsConnected
struct UBSPubSubInterface_IsConnected_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// DelegateFunction BackendServices.BSPubSubInterface.BS_PubSubConnectStateUpdated__DelegateSignature
struct UBSPubSubInterface_BS_PubSubConnectStateUpdated__DelegateSignature_Params
{
public:
	enum class EPubSubConnectState               NewState;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPubSubDisconnectReason           DisconnectReason;                                  // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function BackendServices.BSScripting.PostLoginHook
struct UBSScripting_PostLoginHook_Params
{
public:
	class FString                                GameVersion;                                       // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           ResultDelegate;                                    // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8CF[0x7];                                      // Fixing Size Of Struct 
};

// 0x48 (0x48 - 0x0)
// DelegateFunction BackendServices.BSScripting.OnPostLoginHookComplete__DelegateSignature
struct UBSScripting_OnPostLoginHookComplete__DelegateSignature_Params
{
public:
	bool                                         bSuccess;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8DC[0x7];                                      // Fixing Size After Last Property  
	struct BackendServices_PostLoginHookResponse ResponseData;                                      // 0x8(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                  Error;                                             // 0x30(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

}
}


