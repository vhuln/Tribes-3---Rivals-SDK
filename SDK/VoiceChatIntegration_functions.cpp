#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class VoiceChatIntegration.VivoxVoiceChatManager
// (None)

class UClass* UVivoxVoiceChatManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VivoxVoiceChatManager");

	return Clss;
}


// VivoxVoiceChatManager VoiceChatIntegration.Default__VivoxVoiceChatManager
// (Public, ClassDefaultObject, ArchetypeObject)

class UVivoxVoiceChatManager* UVivoxVoiceChatManager::GetDefaultObj()
{
	static class UVivoxVoiceChatManager* Default = nullptr;

	if (!Default)
		Default = static_cast<UVivoxVoiceChatManager*>(UVivoxVoiceChatManager::StaticClass()->DefaultObject);

	return Default;
}


// Function VoiceChatIntegration.VivoxVoiceChatManager.Uninitialize
// (Final, Native, Public)
// Parameters:

void UVivoxVoiceChatManager::Uninitialize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VivoxVoiceChatManager", "Uninitialize");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function VoiceChatIntegration.VivoxVoiceChatManager.SetPlayerMuted
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct CoreUObject_Guid            PlayerId                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bMutePlayer                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVivoxVoiceChatManager::SetPlayerMuted(struct CoreUObject_Guid& PlayerId, bool bMutePlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VivoxVoiceChatManager", "SetPlayerMuted");

	Params::UVivoxVoiceChatManager_SetPlayerMuted_Params Parms{};

	Parms.PlayerId = PlayerId;
	Parms.bMutePlayer = bMutePlayer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VoiceChatIntegration.VivoxVoiceChatManager.SetAudioOutputDeviceByID
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      OutputDeviceId                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVivoxVoiceChatManager::SetAudioOutputDeviceByID(const class FString& OutputDeviceId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VivoxVoiceChatManager", "SetAudioOutputDeviceByID");

	Params::UVivoxVoiceChatManager_SetAudioOutputDeviceByID_Params Parms{};

	Parms.OutputDeviceId = OutputDeviceId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VoiceChatIntegration.VivoxVoiceChatManager.SetAudioInputDeviceByID
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      InputDeviceId                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVivoxVoiceChatManager::SetAudioInputDeviceByID(const class FString& InputDeviceId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VivoxVoiceChatManager", "SetAudioInputDeviceByID");

	Params::UVivoxVoiceChatManager_SetAudioInputDeviceByID_Params Parms{};

	Parms.InputDeviceId = InputDeviceId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VoiceChatIntegration.VivoxVoiceChatManager.IsPlayerFoundInAnyChannel
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVivoxVoiceChatManager::IsPlayerFoundInAnyChannel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VivoxVoiceChatManager", "IsPlayerFoundInAnyChannel");

	Params::UVivoxVoiceChatManager_IsPlayerFoundInAnyChannel_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VoiceChatIntegration.VivoxVoiceChatManager.IsChatChannelNameTeamChat
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      ChannelName                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVivoxVoiceChatManager::IsChatChannelNameTeamChat(const class FString& ChannelName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VivoxVoiceChatManager", "IsChatChannelNameTeamChat");

	Params::UVivoxVoiceChatManager_IsChatChannelNameTeamChat_Params Parms{};

	Parms.ChannelName = ChannelName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VoiceChatIntegration.VivoxVoiceChatManager.Initialize
// (Final, Native, Public)
// Parameters:

void UVivoxVoiceChatManager::Initialize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VivoxVoiceChatManager", "Initialize");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function VoiceChatIntegration.VivoxVoiceChatManager.GetPlayersFromMatchChannelToReport
// (Final, Native, Public, HasOutParams)
// Parameters:
// TArray<struct CoreUObject_Guid>    PlayerIdsFromMatchChannel                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UVivoxVoiceChatManager::GetPlayersFromMatchChannelToReport(TArray<struct CoreUObject_Guid>* PlayerIdsFromMatchChannel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VivoxVoiceChatManager", "GetPlayersFromMatchChannelToReport");

	Params::UVivoxVoiceChatManager_GetPlayersFromMatchChannelToReport_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PlayerIdsFromMatchChannel != nullptr)
		*PlayerIdsFromMatchChannel = std::move(Parms.PlayerIdsFromMatchChannel);

}


// Function VoiceChatIntegration.VivoxVoiceChatManager.GetLocalSafeVoiceConsentEnabled
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVivoxVoiceChatManager::GetLocalSafeVoiceConsentEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VivoxVoiceChatManager", "GetLocalSafeVoiceConsentEnabled");

	Params::UVivoxVoiceChatManager_GetLocalSafeVoiceConsentEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VoiceChatIntegration.VivoxVoiceChatManager.GetIsVoiceChatActive
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVivoxVoiceChatManager::GetIsVoiceChatActive()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VivoxVoiceChatManager", "GetIsVoiceChatActive");

	Params::UVivoxVoiceChatManager_GetIsVoiceChatActive_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VoiceChatIntegration.VivoxVoiceChatManager.GetIsPlayerMuted
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct CoreUObject_Guid            PlayerId                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVivoxVoiceChatManager::GetIsPlayerMuted(struct CoreUObject_Guid& PlayerId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VivoxVoiceChatManager", "GetIsPlayerMuted");

	Params::UVivoxVoiceChatManager_GetIsPlayerMuted_Params Parms{};

	Parms.PlayerId = PlayerId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VoiceChatIntegration.VivoxVoiceChatManager.GetAllAvailableAudioOutputDevices
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct VoiceChatIntegration_AudioSoundDeviceData>AllAvailableOutputDevices                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// struct VoiceChatIntegration_AudioSoundDeviceDataCurrentlySelectedDevice                                          (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               bDefaultFirst                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVivoxVoiceChatManager::GetAllAvailableAudioOutputDevices(TArray<struct VoiceChatIntegration_AudioSoundDeviceData>* AllAvailableOutputDevices, struct VoiceChatIntegration_AudioSoundDeviceData* CurrentlySelectedDevice, bool bDefaultFirst)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VivoxVoiceChatManager", "GetAllAvailableAudioOutputDevices");

	Params::UVivoxVoiceChatManager_GetAllAvailableAudioOutputDevices_Params Parms{};

	Parms.bDefaultFirst = bDefaultFirst;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AllAvailableOutputDevices != nullptr)
		*AllAvailableOutputDevices = std::move(Parms.AllAvailableOutputDevices);

	if (CurrentlySelectedDevice != nullptr)
		*CurrentlySelectedDevice = std::move(Parms.CurrentlySelectedDevice);

}


// Function VoiceChatIntegration.VivoxVoiceChatManager.GetAllAvailableAudioInputDevices
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct VoiceChatIntegration_AudioSoundDeviceData>AvailableInputDevices                                            (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// struct VoiceChatIntegration_AudioSoundDeviceDataCurrentlySelectedDevice                                          (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               bDefaultFirst                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVivoxVoiceChatManager::GetAllAvailableAudioInputDevices(TArray<struct VoiceChatIntegration_AudioSoundDeviceData>* AvailableInputDevices, struct VoiceChatIntegration_AudioSoundDeviceData* CurrentlySelectedDevice, bool bDefaultFirst)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VivoxVoiceChatManager", "GetAllAvailableAudioInputDevices");

	Params::UVivoxVoiceChatManager_GetAllAvailableAudioInputDevices_Params Parms{};

	Parms.bDefaultFirst = bDefaultFirst;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AvailableInputDevices != nullptr)
		*AvailableInputDevices = std::move(Parms.AvailableInputDevices);

	if (CurrentlySelectedDevice != nullptr)
		*CurrentlySelectedDevice = std::move(Parms.CurrentlySelectedDevice);

}

}


