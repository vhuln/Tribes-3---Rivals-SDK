#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EPubSubDisconnectReason : uint8
{
	Unknown                        = 0,
	OnlineStatusTimeout            = 1,
	DuplicatePlayerLogin           = 2,
	EPubSubDisconnectReason_MAX    = 3,
};

enum class EPubSubConnectState : uint8
{
	Disconnected                   = 0,
	Connecting                     = 1,
	Connected                      = 2,
	EPubSubConnectState_MAX        = 3,
};

enum class EVersionCheckResult : uint8
{
	UpToDate                       = 0,
	UpdateAvailable                = 1,
	UpdateRequired                 = 2,
	DowngradeRequired              = 3,
	EVersionCheckResult_MAX        = 4,
};

enum class EGameOnlineStatus : uint8
{
	Online                         = 0,
	Limited                        = 1,
	Offline                        = 2,
	EGameOnlineStatus_MAX          = 3,
};

enum class EBSLoginStatus : uint8
{
	Unknown                        = 0,
	NotLoggedIn                    = 1,
	LoggingOut                     = 2,
	LoggedIn                       = 3,
	LoggingIn                      = 4,
	EBSLoginStatus_MAX             = 5,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x18 - 0x0)
// ScriptStruct BackendServices.PubSubConnectData
struct BackendServices_PubSubConnectData
{
public:
	class FString                                URL;                                               // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SessionTimeoutMinutes;                             // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8F1[0x4];                                      // Fixing Size Of Struct 
};

// 0x28 (0x28 - 0x0)
// ScriptStruct BackendServices.PostLoginHookResponse
struct BackendServices_PostLoginHookResponse
{
public:
	bool                                         GameStatusCheckPassed;                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGameOnlineStatus                 GameStatus;                                        // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         VersionCheckPassed;                                // 0x2(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVersionCheckResult               VersionStatus;                                     // 0x3(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8F8[0x4];                                      // Fixing Size After Last Property  
	class FString                                CompatibleVersion;                                 // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CurrentVersion;                                    // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct BackendServices.GetPubSubConnectDataResult
struct BackendServices_GetPubSubConnectDataResult
{
public:
	bool                                         Success;                                           // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_900[0x7];                                      // Fixing Size After Last Property  
	class FString                                ErrorCode;                                         // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct BackendServices_PubSubConnectData     ConnectData;                                       // 0x18(0x18)(NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct BackendServices.PubSubSystemEvent
struct BackendServices_PubSubSystemEvent
{
public:
	class FString                                Event;                                             // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                UserId;                                            // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ConnectionId;                                      // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Message;                                           // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


