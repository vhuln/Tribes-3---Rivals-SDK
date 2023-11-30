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
// Function VoiceChatIntegration.VivoxVoiceChatManager.SetPlayerMuted
struct UVivoxVoiceChatManager_SetPlayerMuted_Params
{
public:
	struct CoreUObject_Guid                      PlayerId;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMutePlayer;                                       // 0x10(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E89[0x3];                                      // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// Function VoiceChatIntegration.VivoxVoiceChatManager.SetAudioOutputDeviceByID
struct UVivoxVoiceChatManager_SetAudioOutputDeviceByID_Params
{
public:
	class FString                                OutputDeviceId;                                    // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function VoiceChatIntegration.VivoxVoiceChatManager.SetAudioInputDeviceByID
struct UVivoxVoiceChatManager_SetAudioInputDeviceByID_Params
{
public:
	class FString                                InputDeviceId;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function VoiceChatIntegration.VivoxVoiceChatManager.IsPlayerFoundInAnyChannel
struct UVivoxVoiceChatManager_IsPlayerFoundInAnyChannel_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function VoiceChatIntegration.VivoxVoiceChatManager.IsChatChannelNameTeamChat
struct UVivoxVoiceChatManager_IsChatChannelNameTeamChat_Params
{
public:
	class FString                                ChannelName;                                       // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_ED8[0x7];                                      // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// Function VoiceChatIntegration.VivoxVoiceChatManager.GetPlayersFromMatchChannelToReport
struct UVivoxVoiceChatManager_GetPlayersFromMatchChannelToReport_Params
{
public:
	TArray<struct CoreUObject_Guid>              PlayerIdsFromMatchChannel;                         // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function VoiceChatIntegration.VivoxVoiceChatManager.GetLocalSafeVoiceConsentEnabled
struct UVivoxVoiceChatManager_GetLocalSafeVoiceConsentEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function VoiceChatIntegration.VivoxVoiceChatManager.GetIsVoiceChatActive
struct UVivoxVoiceChatManager_GetIsVoiceChatActive_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function VoiceChatIntegration.VivoxVoiceChatManager.GetIsPlayerMuted
struct UVivoxVoiceChatManager_GetIsPlayerMuted_Params
{
public:
	struct CoreUObject_Guid                      PlayerId;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F12[0x3];                                      // Fixing Size Of Struct 
};

// 0x38 (0x38 - 0x0)
// Function VoiceChatIntegration.VivoxVoiceChatManager.GetAllAvailableAudioOutputDevices
struct UVivoxVoiceChatManager_GetAllAvailableAudioOutputDevices_Params
{
public:
	TArray<struct VoiceChatIntegration_AudioSoundDeviceData> AllAvailableOutputDevices;                         // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	struct VoiceChatIntegration_AudioSoundDeviceData CurrentlySelectedDevice;                           // 0x10(0x20)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         bDefaultFirst;                                     // 0x30(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F25[0x7];                                      // Fixing Size Of Struct 
};

// 0x38 (0x38 - 0x0)
// Function VoiceChatIntegration.VivoxVoiceChatManager.GetAllAvailableAudioInputDevices
struct UVivoxVoiceChatManager_GetAllAvailableAudioInputDevices_Params
{
public:
	TArray<struct VoiceChatIntegration_AudioSoundDeviceData> AvailableInputDevices;                             // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	struct VoiceChatIntegration_AudioSoundDeviceData CurrentlySelectedDevice;                           // 0x10(0x20)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         bDefaultFirst;                                     // 0x30(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F40[0x7];                                      // Fixing Size Of Struct 
};

}
}


