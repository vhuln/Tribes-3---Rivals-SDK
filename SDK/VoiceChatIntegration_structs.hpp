#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x50 - 0x0)
// ScriptStruct VoiceChatIntegration.VivoxLoginAccessToken
struct VoiceChatIntegration_VivoxLoginAccessToken
{
public:
	class FString                                Server;                                            // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Issuer;                                            // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Domain;                                            // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayerId;                                          // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AccessToken;                                       // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct VoiceChatIntegration.VivoxLoginResponse
struct VoiceChatIntegration_VivoxLoginResponse
{
public:
	bool                                         Success;                                           // 0x0(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F56[0x7];                                      // Fixing Size After Last Property  
	class FString                                Error;                                             // 0x8(0x10)(ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct VoiceChatIntegration_VivoxLoginAccessToken AccessToken;                                       // 0x18(0x50)(Transient, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct VoiceChatIntegration.VivoxJoinRequest
struct VoiceChatIntegration_VivoxJoinRequest
{
public:
	bool                                         IsTeamChannel;                                     // 0x0(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F5F[0x7];                                      // Fixing Size After Last Property  
	class FString                                ChannelSessionId;                                  // 0x8(0x10)(ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct VoiceChatIntegration.VivoxJoinAccessTokenData
struct VoiceChatIntegration_VivoxJoinAccessTokenData
{
public:
	class FString                                Server;                                            // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Issuer;                                            // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Domain;                                            // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayerId;                                          // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ChannelName;                                       // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AccessToken;                                       // 0x50(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// ScriptStruct VoiceChatIntegration.VivoxJoinResponse
struct VoiceChatIntegration_VivoxJoinResponse
{
public:
	bool                                         Success;                                           // 0x0(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F69[0x7];                                      // Fixing Size After Last Property  
	class FString                                Error;                                             // 0x8(0x10)(ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct VoiceChatIntegration_VivoxJoinAccessTokenData AccessToken;                                       // 0x18(0x60)(Transient, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct VoiceChatIntegration.AudioSoundDeviceData
struct VoiceChatIntegration_AudioSoundDeviceData
{
public:
	class FString                                AudioDeviceId;                                     // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AudioDeviceName;                                   // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


