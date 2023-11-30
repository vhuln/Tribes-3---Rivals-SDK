#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x50 - 0x28)
// Class VoiceChatIntegration.VivoxVoiceChatManager
class UVivoxVoiceChatManager : public UObject
{
public:
	uint8                                        Pad_F43[0x1];                                      // Fixing Size After Last Property  
	bool                                         bIsPendingMatchVoipToken;                          // 0x29(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bIsPendingMatchTeamVoipToken;                      // 0x2A(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_F46[0x5];                                      // Fixing Size After Last Property  
	class FString                                CurrentPartyChannelName;                           // 0x30(0x10)(ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                CurrentTeamChannelName;                            // 0x40(0x10)(ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UVivoxVoiceChatManager* GetDefaultObj();

	void Uninitialize();
	void SetPlayerMuted(struct CoreUObject_Guid& PlayerId, bool bMutePlayer);
	void SetAudioOutputDeviceByID(const class FString& OutputDeviceId);
	void SetAudioInputDeviceByID(const class FString& InputDeviceId);
	bool IsPlayerFoundInAnyChannel();
	bool IsChatChannelNameTeamChat(const class FString& ChannelName);
	void Initialize();
	void GetPlayersFromMatchChannelToReport(TArray<struct CoreUObject_Guid>* PlayerIdsFromMatchChannel);
	bool GetLocalSafeVoiceConsentEnabled();
	bool GetIsVoiceChatActive();
	bool GetIsPlayerMuted(struct CoreUObject_Guid& PlayerId);
	void GetAllAvailableAudioOutputDevices(TArray<struct VoiceChatIntegration_AudioSoundDeviceData>* AllAvailableOutputDevices, struct VoiceChatIntegration_AudioSoundDeviceData* CurrentlySelectedDevice, bool bDefaultFirst);
	void GetAllAvailableAudioInputDevices(TArray<struct VoiceChatIntegration_AudioSoundDeviceData>* AvailableInputDevices, struct VoiceChatIntegration_AudioSoundDeviceData* CurrentlySelectedDevice, bool bDefaultFirst);
};

}


