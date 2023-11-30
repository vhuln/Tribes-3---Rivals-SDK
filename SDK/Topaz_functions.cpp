#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class Topaz.TopActivityTracker_Accolade
// (None)

class UClass* UTopActivityTracker_Accolade::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TopActivityTracker_Accolade");

	return Clss;
}


// TopActivityTracker_Accolade Topaz.Default__TopActivityTracker_Accolade
// (Public, ClassDefaultObject, ArchetypeObject)

class UTopActivityTracker_Accolade* UTopActivityTracker_Accolade::GetDefaultObj()
{
	static class UTopActivityTracker_Accolade* Default = nullptr;

	if (!Default)
		Default = static_cast<UTopActivityTracker_Accolade*>(UTopActivityTracker_Accolade::StaticClass()->DefaultObject);

	return Default;
}


// Function Topaz.TopActivityTracker_Accolade.OnAccolade
// (Native, Protected)
// Parameters:
// enum class EAccoladeType           AccoladeType                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTopActivityTracker_Accolade::OnAccolade(enum class EAccoladeType AccoladeType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopActivityTracker_Accolade", "OnAccolade");

	Params::UTopActivityTracker_Accolade_OnAccolade_Params Parms{};

	Parms.AccoladeType = AccoladeType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class Topaz.TopActivityTracker_Sequence
// (None)

class UClass* UTopActivityTracker_Sequence::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TopActivityTracker_Sequence");

	return Clss;
}


// TopActivityTracker_Sequence Topaz.Default__TopActivityTracker_Sequence
// (Public, ClassDefaultObject, ArchetypeObject)

class UTopActivityTracker_Sequence* UTopActivityTracker_Sequence::GetDefaultObj()
{
	static class UTopActivityTracker_Sequence* Default = nullptr;

	if (!Default)
		Default = static_cast<UTopActivityTracker_Sequence*>(UTopActivityTracker_Sequence::StaticClass()->DefaultObject);

	return Default;
}


// Function Topaz.TopActivityTracker_Sequence.OnTrackerProgress
// (Native, Protected)
// Parameters:
// int32                              Count                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTopActivityTracker_Sequence::OnTrackerProgress(int32 Count)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopActivityTracker_Sequence", "OnTrackerProgress");

	Params::UTopActivityTracker_Sequence_OnTrackerProgress_Params Parms{};

	Parms.Count = Count;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopActivityTracker_Sequence.OnMissionTimeout
// (Native, Protected)
// Parameters:

void UTopActivityTracker_Sequence::OnMissionTimeout()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopActivityTracker_Sequence", "OnMissionTimeout");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopActivityTracker_Sequence.OnMissionProgress
// (Native, Protected)
// Parameters:

void UTopActivityTracker_Sequence::OnMissionProgress()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopActivityTracker_Sequence", "OnMissionProgress");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopActivityTracker_Sequence.GetTotalRequiredForSequenceElement
// (Native, Public, BlueprintCallable)
// Parameters:
// int32                              SequenceIndex                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UTopActivityTracker_Sequence::GetTotalRequiredForSequenceElement(int32 SequenceIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopActivityTracker_Sequence", "GetTotalRequiredForSequenceElement");

	Params::UTopActivityTracker_Sequence_GetTotalRequiredForSequenceElement_Params Parms{};

	Parms.SequenceIndex = SequenceIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Topaz.TopActivityTracker_Sequence.GetSequenceElementAtIndex
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct Valhalla_MissionSequenceElementSequenceElement                                                  (Parm, OutParm, NativeAccessSpecifierPublic)
// int32                              Index                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTopActivityTracker_Sequence::GetSequenceElementAtIndex(struct Valhalla_MissionSequenceElement* SequenceElement, int32& Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopActivityTracker_Sequence", "GetSequenceElementAtIndex");

	Params::UTopActivityTracker_Sequence_GetSequenceElementAtIndex_Params Parms{};

	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SequenceElement != nullptr)
		*SequenceElement = std::move(Parms.SequenceElement);

	return Parms.ReturnValue;

}


// Function Topaz.TopActivityTracker_Sequence.GetSequenceElementAtCount
// (Native, Public, BlueprintCallable)
// Parameters:
// int32                              ProgressCount                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UTopActivityTracker_Sequence::GetSequenceElementAtCount(int32 ProgressCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopActivityTracker_Sequence", "GetSequenceElementAtCount");

	Params::UTopActivityTracker_Sequence_GetSequenceElementAtCount_Params Parms{};

	Parms.ProgressCount = ProgressCount;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Topaz.TopActivityTracker_Sequence.GetProgressInCurrentSequence
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UTopActivityTracker_Sequence::GetProgressInCurrentSequence()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopActivityTracker_Sequence", "GetProgressInCurrentSequence");

	Params::UTopActivityTracker_Sequence_GetProgressInCurrentSequence_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Topaz.TopActivityTracker_Sequence.GetCurrentSequenceElement
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct Valhalla_MissionSequenceElementSequenceElement                                                  (Parm, OutParm, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTopActivityTracker_Sequence::GetCurrentSequenceElement(struct Valhalla_MissionSequenceElement* SequenceElement, int32* Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopActivityTracker_Sequence", "GetCurrentSequenceElement");

	Params::UTopActivityTracker_Sequence_GetCurrentSequenceElement_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SequenceElement != nullptr)
		*SequenceElement = std::move(Parms.SequenceElement);

	if (Index != nullptr)
		*Index = Parms.Index;

	return Parms.ReturnValue;

}


// Function Topaz.TopActivityTracker_Sequence.GetCachedProgress
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UTopActivityTracker_Sequence::GetCachedProgress()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopActivityTracker_Sequence", "GetCachedProgress");

	Params::UTopActivityTracker_Sequence_GetCachedProgress_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Topaz.TopActivityTracker_Custom
// (None)

class UClass* UTopActivityTracker_Custom::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TopActivityTracker_Custom");

	return Clss;
}


// TopActivityTracker_Custom Topaz.Default__TopActivityTracker_Custom
// (Public, ClassDefaultObject, ArchetypeObject)

class UTopActivityTracker_Custom* UTopActivityTracker_Custom::GetDefaultObj()
{
	static class UTopActivityTracker_Custom* Default = nullptr;

	if (!Default)
		Default = static_cast<UTopActivityTracker_Custom*>(UTopActivityTracker_Custom::StaticClass()->DefaultObject);

	return Default;
}


// Class Topaz.TopActivityTracker_Location
// (None)

class UClass* UTopActivityTracker_Location::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TopActivityTracker_Location");

	return Clss;
}


// TopActivityTracker_Location Topaz.Default__TopActivityTracker_Location
// (Public, ClassDefaultObject, ArchetypeObject)

class UTopActivityTracker_Location* UTopActivityTracker_Location::GetDefaultObj()
{
	static class UTopActivityTracker_Location* Default = nullptr;

	if (!Default)
		Default = static_cast<UTopActivityTracker_Location*>(UTopActivityTracker_Location::StaticClass()->DefaultObject);

	return Default;
}


// Function Topaz.TopActivityTracker_Location.OnTimeElapsed
// (Native, Protected)
// Parameters:

void UTopActivityTracker_Location::OnTimeElapsed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopActivityTracker_Location", "OnTimeElapsed");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopActivityTracker_Location.OnAreaExited
// (Native, Protected)
// Parameters:
// struct GameplayTags_GameplayTag    AreaTag                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTopActivityTracker_Location::OnAreaExited(const struct GameplayTags_GameplayTag& AreaTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopActivityTracker_Location", "OnAreaExited");

	Params::UTopActivityTracker_Location_OnAreaExited_Params Parms{};

	Parms.AreaTag = AreaTag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopActivityTracker_Location.OnAreaEntered
// (Native, Protected)
// Parameters:
// struct GameplayTags_GameplayTag    AreaTag                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTopActivityTracker_Location::OnAreaEntered(const struct GameplayTags_GameplayTag& AreaTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopActivityTracker_Location", "OnAreaEntered");

	Params::UTopActivityTracker_Location_OnAreaEntered_Params Parms{};

	Parms.AreaTag = AreaTag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class Topaz.TopBotSpawnVolume
// (Actor)

class UClass* ATopBotSpawnVolume::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TopBotSpawnVolume");

	return Clss;
}


// TopBotSpawnVolume Topaz.Default__TopBotSpawnVolume
// (Public, ClassDefaultObject, ArchetypeObject)

class ATopBotSpawnVolume* ATopBotSpawnVolume::GetDefaultObj()
{
	static class ATopBotSpawnVolume* Default = nullptr;

	if (!Default)
		Default = static_cast<ATopBotSpawnVolume*>(ATopBotSpawnVolume::StaticClass()->DefaultObject);

	return Default;
}


// Function Topaz.TopBotSpawnVolume.StartBotRefreshTimer
// (Final, Native, Protected)
// Parameters:

void ATopBotSpawnVolume::StartBotRefreshTimer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopBotSpawnVolume", "StartBotRefreshTimer");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopBotSpawnVolume.RefreshBots
// (Final, Native, Protected)
// Parameters:

void ATopBotSpawnVolume::RefreshBots()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopBotSpawnVolume", "RefreshBots");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopBotSpawnVolume.RefreshBot
// (Final, Native, Protected)
// Parameters:
// class UBotInitData*                BotToRefresh                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ATopBotSpawnVolume::RefreshBot(class UBotInitData* BotToRefresh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopBotSpawnVolume", "RefreshBot");

	Params::ATopBotSpawnVolume_RefreshBot_Params Parms{};

	Parms.BotToRefresh = BotToRefresh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopBotSpawnVolume.IsTimerActive
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct Valhalla_BotResetTimerData  Timer                                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ATopBotSpawnVolume::IsTimerActive(struct Valhalla_BotResetTimerData& Timer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopBotSpawnVolume", "IsTimerActive");

	Params::ATopBotSpawnVolume_IsTimerActive_Params Parms{};

	Parms.Timer = Timer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Topaz.TopBotSpawnVolume.GetTimeRemaining
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct Valhalla_BotResetTimerData  Timer                                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float ATopBotSpawnVolume::GetTimeRemaining(struct Valhalla_BotResetTimerData& Timer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopBotSpawnVolume", "GetTimeRemaining");

	Params::ATopBotSpawnVolume_GetTimeRemaining_Params Parms{};

	Parms.Timer = Timer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Topaz.TopBotSpawner
// (Actor)

class UClass* ATopBotSpawner::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TopBotSpawner");

	return Clss;
}


// TopBotSpawner Topaz.Default__TopBotSpawner
// (Public, ClassDefaultObject, ArchetypeObject)

class ATopBotSpawner* ATopBotSpawner::GetDefaultObj()
{
	static class ATopBotSpawner* Default = nullptr;

	if (!Default)
		Default = static_cast<ATopBotSpawner*>(ATopBotSpawner::StaticClass()->DefaultObject);

	return Default;
}


// Function Topaz.TopBotSpawner.Spawn
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UValBotData*                 ConfigData                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ATopBotSpawner::Spawn(class UValBotData* ConfigData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopBotSpawner", "Spawn");

	Params::ATopBotSpawner_Spawn_Params Parms{};

	Parms.ConfigData = ConfigData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Topaz.TopBotSpawner.OnBotDataAvailable
// (Native, Protected)
// Parameters:

void ATopBotSpawner::OnBotDataAvailable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopBotSpawner", "OnBotDataAvailable");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class Topaz.TopBTService_ResetValueOnDeactivate
// (None)

class UClass* UTopBTService_ResetValueOnDeactivate::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TopBTService_ResetValueOnDeactivate");

	return Clss;
}


// TopBTService_ResetValueOnDeactivate Topaz.Default__TopBTService_ResetValueOnDeactivate
// (Public, ClassDefaultObject, ArchetypeObject)

class UTopBTService_ResetValueOnDeactivate* UTopBTService_ResetValueOnDeactivate::GetDefaultObj()
{
	static class UTopBTService_ResetValueOnDeactivate* Default = nullptr;

	if (!Default)
		Default = static_cast<UTopBTService_ResetValueOnDeactivate*>(UTopBTService_ResetValueOnDeactivate::StaticClass()->DefaultObject);

	return Default;
}


// Class Topaz.TopCharacterBase
// (Actor, Pawn)

class UClass* ATopCharacterBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TopCharacterBase");

	return Clss;
}


// TopCharacterBase Topaz.Default__TopCharacterBase
// (Public, ClassDefaultObject, ArchetypeObject)

class ATopCharacterBase* ATopCharacterBase::GetDefaultObj()
{
	static class ATopCharacterBase* Default = nullptr;

	if (!Default)
		Default = static_cast<ATopCharacterBase*>(ATopCharacterBase::StaticClass()->DefaultObject);

	return Default;
}


// Class Topaz.TopCharacter
// (Actor, Pawn)

class UClass* ATopCharacter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TopCharacter");

	return Clss;
}


// TopCharacter Topaz.Default__TopCharacter
// (Public, ClassDefaultObject, ArchetypeObject)

class ATopCharacter* ATopCharacter::GetDefaultObj()
{
	static class ATopCharacter* Default = nullptr;

	if (!Default)
		Default = static_cast<ATopCharacter*>(ATopCharacter::StaticClass()->DefaultObject);

	return Default;
}


// Function Topaz.TopCharacter.ToggleThirdPerson
// (Native, Public, BlueprintCallable)
// Parameters:

void ATopCharacter::ToggleThirdPerson()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopCharacter", "ToggleThirdPerson");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopCharacter.RouteHistoryCheat
// (Event, Public, BlueprintEvent)
// Parameters:
// class FString                      Command                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ATopCharacter::RouteHistoryCheat(const class FString& Command)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopCharacter", "RouteHistoryCheat");

	Params::ATopCharacter_RouteHistoryCheat_Params Parms{};

	Parms.Command = Command;

	UObject::ProcessEvent(Func, &Parms);

}


// Class Topaz.TopCharacterOverlayComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UTopCharacterOverlayComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TopCharacterOverlayComponent");

	return Clss;
}


// TopCharacterOverlayComponent Topaz.Default__TopCharacterOverlayComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UTopCharacterOverlayComponent* UTopCharacterOverlayComponent::GetDefaultObj()
{
	static class UTopCharacterOverlayComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UTopCharacterOverlayComponent*>(UTopCharacterOverlayComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class Topaz.TopCharacterOverlay
// (None)

class UClass* UTopCharacterOverlay::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TopCharacterOverlay");

	return Clss;
}


// TopCharacterOverlay Topaz.Default__TopCharacterOverlay
// (Public, ClassDefaultObject, ArchetypeObject)

class UTopCharacterOverlay* UTopCharacterOverlay::GetDefaultObj()
{
	static class UTopCharacterOverlay* Default = nullptr;

	if (!Default)
		Default = static_cast<UTopCharacterOverlay*>(UTopCharacterOverlay::StaticClass()->DefaultObject);

	return Default;
}


// Class Topaz.TopCheatComponent
// (None)

class UClass* UTopCheatComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TopCheatComponent");

	return Clss;
}


// TopCheatComponent Topaz.Default__TopCheatComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UTopCheatComponent* UTopCheatComponent::GetDefaultObj()
{
	static class UTopCheatComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UTopCheatComponent*>(UTopCheatComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function Topaz.TopCheatComponent.StartDropshipEvac
// (Exec, Native, Public)
// Parameters:

void UTopCheatComponent::StartDropshipEvac()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopCheatComponent", "StartDropshipEvac");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopCheatComponent.StartDropshipDeploy
// (Exec, Native, Public)
// Parameters:
// float                              DropHeight                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTopCheatComponent::StartDropshipDeploy(float DropHeight)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopCheatComponent", "StartDropshipDeploy");

	Params::UTopCheatComponent_StartDropshipDeploy_Params Parms{};

	Parms.DropHeight = DropHeight;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopCheatComponent.SetClassSlotItem
// (Exec, Native, Public)
// Parameters:
// int32                              Type                                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              SlotId                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ItemId                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTopCheatComponent::SetClassSlotItem(int32 Type, int32 SlotId, int32 ItemId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopCheatComponent", "SetClassSlotItem");

	Params::UTopCheatComponent_SetClassSlotItem_Params Parms{};

	Parms.Type = Type;
	Parms.SlotId = SlotId;
	Parms.ItemId = ItemId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopCheatComponent.ServerStartDropshipEvac
// (Net, Native, Event, Public, NetServer, NetValidate)
// Parameters:

void UTopCheatComponent::ServerStartDropshipEvac()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopCheatComponent", "ServerStartDropshipEvac");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopCheatComponent.ServerStartDropshipDeploy
// (Net, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// float                              DropHeight                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTopCheatComponent::ServerStartDropshipDeploy(float DropHeight)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopCheatComponent", "ServerStartDropshipDeploy");

	Params::UTopCheatComponent_ServerStartDropshipDeploy_Params Parms{};

	Parms.DropHeight = DropHeight;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopCheatComponent.ServerSetClassSlotItem
// (Net, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// int32                              Type                                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              SlotId                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ItemId                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTopCheatComponent::ServerSetClassSlotItem(int32 Type, int32 SlotId, int32 ItemId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopCheatComponent", "ServerSetClassSlotItem");

	Params::UTopCheatComponent_ServerSetClassSlotItem_Params Parms{};

	Parms.Type = Type;
	Parms.SlotId = SlotId;
	Parms.ItemId = ItemId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopCheatComponent.ServerSelectPerkForSlot
// (Net, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct GameplayTags_GameplayTag    PerkSlot                                                         (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              PerkId                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTopCheatComponent::ServerSelectPerkForSlot(const struct GameplayTags_GameplayTag& PerkSlot, int32 PerkId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopCheatComponent", "ServerSelectPerkForSlot");

	Params::UTopCheatComponent_ServerSelectPerkForSlot_Params Parms{};

	Parms.PerkSlot = PerkSlot;
	Parms.PerkId = PerkId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopCheatComponent.ServerEndMatch
// (Net, Native, Event, Public, NetServer, NetValidate)
// Parameters:

void UTopCheatComponent::ServerEndMatch()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopCheatComponent", "ServerEndMatch");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopCheatComponent.ServerDisableEnergyRegen
// (Net, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// bool                               bDisabled                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTopCheatComponent::ServerDisableEnergyRegen(bool bDisabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopCheatComponent", "ServerDisableEnergyRegen");

	Params::UTopCheatComponent_ServerDisableEnergyRegen_Params Parms{};

	Parms.bDisabled = bDisabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopCheatComponent.ServerDisableEnergyDrain
// (Net, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// bool                               bValue                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTopCheatComponent::ServerDisableEnergyDrain(bool bValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopCheatComponent", "ServerDisableEnergyDrain");

	Params::UTopCheatComponent_ServerDisableEnergyDrain_Params Parms{};

	Parms.bValue = bValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopCheatComponent.ServerChangeCharacterClass
// (Net, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct GameplayTags_GameplayTag    CharacterTag                                                     (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTopCheatComponent::ServerChangeCharacterClass(const struct GameplayTags_GameplayTag& CharacterTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopCheatComponent", "ServerChangeCharacterClass");

	Params::UTopCheatComponent_ServerChangeCharacterClass_Params Parms{};

	Parms.CharacterTag = CharacterTag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopCheatComponent.ServerAddScoreToTeam
// (Net, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// int32                              ScoreToGive                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTopCheatComponent::ServerAddScoreToTeam(int32 ScoreToGive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopCheatComponent", "ServerAddScoreToTeam");

	Params::UTopCheatComponent_ServerAddScoreToTeam_Params Parms{};

	Parms.ScoreToGive = ScoreToGive;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopCheatComponent.ServerAddPerkUnlockSlot
// (Net, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct GameplayTags_GameplayTag    PerkSlot                                                         (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTopCheatComponent::ServerAddPerkUnlockSlot(const struct GameplayTags_GameplayTag& PerkSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopCheatComponent", "ServerAddPerkUnlockSlot");

	Params::UTopCheatComponent_ServerAddPerkUnlockSlot_Params Parms{};

	Parms.PerkSlot = PerkSlot;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopCheatComponent.SelectPerkForSlot
// (Final, Exec, Native, Public)
// Parameters:
// class FName                        PerkSlot                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              PerkId                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTopCheatComponent::SelectPerkForSlot(class FName PerkSlot, int32 PerkId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopCheatComponent", "SelectPerkForSlot");

	Params::UTopCheatComponent_SelectPerkForSlot_Params Parms{};

	Parms.PerkSlot = PerkSlot;
	Parms.PerkId = PerkId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopCheatComponent.RouteHistory
// (Exec, Native, Public)
// Parameters:
// class FString                      Command                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTopCheatComponent::RouteHistory(const class FString& Command)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopCheatComponent", "RouteHistory");

	Params::UTopCheatComponent_RouteHistory_Params Parms{};

	Parms.Command = Command;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopCheatComponent.EndMatch
// (Final, Exec, Native, Public)
// Parameters:

void UTopCheatComponent::EndMatch()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopCheatComponent", "EndMatch");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopCheatComponent.DisableEnergyRegen
// (Final, Exec, Native, Public)
// Parameters:
// bool                               bDisabled                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTopCheatComponent::DisableEnergyRegen(bool bDisabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopCheatComponent", "DisableEnergyRegen");

	Params::UTopCheatComponent_DisableEnergyRegen_Params Parms{};

	Parms.bDisabled = bDisabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopCheatComponent.DisableEnergyDrain
// (Exec, Native, Public)
// Parameters:
// bool                               bValue                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTopCheatComponent::DisableEnergyDrain(bool bValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopCheatComponent", "DisableEnergyDrain");

	Params::UTopCheatComponent_DisableEnergyDrain_Params Parms{};

	Parms.bValue = bValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopCheatComponent.ChangeCharacterClass
// (Final, Exec, Native, Public)
// Parameters:
// class FName                        ClassName                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTopCheatComponent::ChangeCharacterClass(class FName ClassName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopCheatComponent", "ChangeCharacterClass");

	Params::UTopCheatComponent_ChangeCharacterClass_Params Parms{};

	Parms.ClassName = ClassName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopCheatComponent.AddScoreToTeam
// (Exec, Native, Public)
// Parameters:
// int32                              ScoreToGive                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTopCheatComponent::AddScoreToTeam(int32 ScoreToGive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopCheatComponent", "AddScoreToTeam");

	Params::UTopCheatComponent_AddScoreToTeam_Params Parms{};

	Parms.ScoreToGive = ScoreToGive;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopCheatComponent.AddPerkUnlockSlot
// (Final, Exec, Native, Public)
// Parameters:
// class FName                        PerkSlot                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTopCheatComponent::AddPerkUnlockSlot(class FName PerkSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopCheatComponent", "AddPerkUnlockSlot");

	Params::UTopCheatComponent_AddPerkUnlockSlot_Params Parms{};

	Parms.PerkSlot = PerkSlot;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class Topaz.TopDropShip
// (Actor)

class UClass* ATopDropShip::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TopDropShip");

	return Clss;
}


// TopDropShip Topaz.Default__TopDropShip
// (Public, ClassDefaultObject, ArchetypeObject)

class ATopDropShip* ATopDropShip::GetDefaultObj()
{
	static class ATopDropShip* Default = nullptr;

	if (!Default)
		Default = static_cast<ATopDropShip*>(ATopDropShip::StaticClass()->DefaultObject);

	return Default;
}


// Function Topaz.TopDropShip.SetPlayerDropSpot
// (Final, Native, Public)
// Parameters:
// class AValPlayerStart*             NewPlayerDropSpotActor                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ATopDropShip::SetPlayerDropSpot(class AValPlayerStart* NewPlayerDropSpotActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopDropShip", "SetPlayerDropSpot");

	Params::ATopDropShip_SetPlayerDropSpot_Params Parms{};

	Parms.NewPlayerDropSpotActor = NewPlayerDropSpotActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopDropShip.OnTeamPhaseChangedEvent
// (Event, Public, BlueprintEvent)
// Parameters:
// struct GameplayTags_GameplayTag    NextPhase                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              EndTime                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ATopDropShip::OnTeamPhaseChangedEvent(const struct GameplayTags_GameplayTag& NextPhase, float EndTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopDropShip", "OnTeamPhaseChangedEvent");

	Params::ATopDropShip_OnTeamPhaseChangedEvent_Params Parms{};

	Parms.NextPhase = NextPhase;
	Parms.EndTime = EndTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Topaz.TopDropShip.OnTeamPhaseChanged
// (Final, Native, Public)
// Parameters:
// struct GameplayTags_GameplayTag    NextPhase                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              EndTime                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ATopDropShip::OnTeamPhaseChanged(const struct GameplayTags_GameplayTag& NextPhase, float EndTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopDropShip", "OnTeamPhaseChanged");

	Params::ATopDropShip_OnTeamPhaseChanged_Params Parms{};

	Parms.NextPhase = NextPhase;
	Parms.EndTime = EndTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopDropShip.OnTeamEmptyEvent
// (Event, Public, BlueprintEvent)
// Parameters:

void ATopDropShip::OnTeamEmptyEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopDropShip", "OnTeamEmptyEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Topaz.TopDropShip.OnTeamEmpty
// (Final, Native, Public)
// Parameters:
// class ATeamState*                  TeamState                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ATopDropShip::OnTeamEmpty(class ATeamState* TeamState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopDropShip", "OnTeamEmpty");

	Params::ATopDropShip_OnTeamEmpty_Params Parms{};

	Parms.TeamState = TeamState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopDropShip.GetPlayerDropSpotActor
// (Final, Native, Public, Const)
// Parameters:
// class AValPlayerStart*             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AValPlayerStart* ATopDropShip::GetPlayerDropSpotActor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopDropShip", "GetPlayerDropSpotActor");

	Params::ATopDropShip_GetPlayerDropSpotActor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Topaz.TopEnvQueryTest_Slope
// (None)

class UClass* UTopEnvQueryTest_Slope::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TopEnvQueryTest_Slope");

	return Clss;
}


// TopEnvQueryTest_Slope Topaz.Default__TopEnvQueryTest_Slope
// (Public, ClassDefaultObject, ArchetypeObject)

class UTopEnvQueryTest_Slope* UTopEnvQueryTest_Slope::GetDefaultObj()
{
	static class UTopEnvQueryTest_Slope* Default = nullptr;

	if (!Default)
		Default = static_cast<UTopEnvQueryTest_Slope*>(UTopEnvQueryTest_Slope::StaticClass()->DefaultObject);

	return Default;
}


// Class Topaz.TopEvacLandingSpot
// (Actor)

class UClass* ATopEvacLandingSpot::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TopEvacLandingSpot");

	return Clss;
}


// TopEvacLandingSpot Topaz.Default__TopEvacLandingSpot
// (Public, ClassDefaultObject, ArchetypeObject)

class ATopEvacLandingSpot* ATopEvacLandingSpot::GetDefaultObj()
{
	static class ATopEvacLandingSpot* Default = nullptr;

	if (!Default)
		Default = static_cast<ATopEvacLandingSpot*>(ATopEvacLandingSpot::StaticClass()->DefaultObject);

	return Default;
}


// Class Topaz.TopEvacTerminal
// (Actor)

class UClass* ATopEvacTerminal::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TopEvacTerminal");

	return Clss;
}


// TopEvacTerminal Topaz.Default__TopEvacTerminal
// (Public, ClassDefaultObject, ArchetypeObject)

class ATopEvacTerminal* ATopEvacTerminal::GetDefaultObj()
{
	static class ATopEvacTerminal* Default = nullptr;

	if (!Default)
		Default = static_cast<ATopEvacTerminal*>(ATopEvacTerminal::StaticClass()->DefaultObject);

	return Default;
}


// Class Topaz.TopFlagMovementComponent
// (None)

class UClass* UTopFlagMovementComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TopFlagMovementComponent");

	return Clss;
}


// TopFlagMovementComponent Topaz.Default__TopFlagMovementComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UTopFlagMovementComponent* UTopFlagMovementComponent::GetDefaultObj()
{
	static class UTopFlagMovementComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UTopFlagMovementComponent*>(UTopFlagMovementComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class Topaz.TopFunctionLibrary
// (None)

class UClass* UTopFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TopFunctionLibrary");

	return Clss;
}


// TopFunctionLibrary Topaz.Default__TopFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UTopFunctionLibrary* UTopFunctionLibrary::GetDefaultObj()
{
	static class UTopFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UTopFunctionLibrary*>(UTopFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function Topaz.TopFunctionLibrary.TestFunction
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UTopFunctionLibrary::TestFunction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopFunctionLibrary", "TestFunction");

	Params::UTopFunctionLibrary_TestFunction_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Topaz.TopFunctionLibrary.IsSequenceMission
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UValActivityPlayerInstance*  ActivityInstance                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTopFunctionLibrary::IsSequenceMission(class UValActivityPlayerInstance* ActivityInstance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopFunctionLibrary", "IsSequenceMission");

	Params::UTopFunctionLibrary_IsSequenceMission_Params Parms{};

	Parms.ActivityInstance = ActivityInstance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Topaz.TopFunctionLibrary.GetSpeedInKPH
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                              Speed                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UTopFunctionLibrary::GetSpeedInKPH(float Speed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopFunctionLibrary", "GetSpeedInKPH");

	Params::UTopFunctionLibrary_GetSpeedInKPH_Params Parms{};

	Parms.Speed = Speed;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Topaz.TopFunctionLibrary.GetProgressInSequence
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UValActivityPlayerInstance*  ActivityInstance                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              OutProgress                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTopFunctionLibrary::GetProgressInSequence(class UObject* WorldContextObject, class UValActivityPlayerInstance* ActivityInstance, int32* OutProgress)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopFunctionLibrary", "GetProgressInSequence");

	Params::UTopFunctionLibrary_GetProgressInSequence_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ActivityInstance = ActivityInstance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutProgress != nullptr)
		*OutProgress = Parms.OutProgress;

}


// Function Topaz.TopFunctionLibrary.GetMissionSequence
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UValActivityPlayerInstance*  ActivityInstance                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct Valhalla_MissionSequenceElement>OutSequence                                                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// int32                              OutIndex                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTopFunctionLibrary::GetMissionSequence(class UObject* WorldContextObject, class UValActivityPlayerInstance* ActivityInstance, TArray<struct Valhalla_MissionSequenceElement>* OutSequence, int32* OutIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopFunctionLibrary", "GetMissionSequence");

	Params::UTopFunctionLibrary_GetMissionSequence_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ActivityInstance = ActivityInstance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutSequence != nullptr)
		*OutSequence = std::move(Parms.OutSequence);

	if (OutIndex != nullptr)
		*OutIndex = Parms.OutIndex;

	return Parms.ReturnValue;

}


// Function Topaz.TopFunctionLibrary.GetMissionByTag
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GameplayTags_GameplayTag    TagToFind                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UValActivityPlayerInstance*  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UValActivityPlayerInstance* UTopFunctionLibrary::GetMissionByTag(class UObject* WorldContextObject, struct GameplayTags_GameplayTag& TagToFind)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopFunctionLibrary", "GetMissionByTag");

	Params::UTopFunctionLibrary_GetMissionByTag_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.TagToFind = TagToFind;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Topaz.TopFunctionLibrary.GetCurrentSequenceElement
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UValActivityPlayerInstance*  ActivityInstance                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Valhalla_MissionSequenceElementOutElement                                                       (Parm, OutParm, NativeAccessSpecifierPublic)
// int32                              OutIndex                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTopFunctionLibrary::GetCurrentSequenceElement(class UObject* WorldContextObject, class UValActivityPlayerInstance* ActivityInstance, struct Valhalla_MissionSequenceElement* OutElement, int32* OutIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopFunctionLibrary", "GetCurrentSequenceElement");

	Params::UTopFunctionLibrary_GetCurrentSequenceElement_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ActivityInstance = ActivityInstance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutElement != nullptr)
		*OutElement = std::move(Parms.OutElement);

	if (OutIndex != nullptr)
		*OutIndex = Parms.OutIndex;

	return Parms.ReturnValue;

}


// Class Topaz.TopGameMode
// (Actor)

class UClass* ATopGameMode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TopGameMode");

	return Clss;
}


// TopGameMode Topaz.Default__TopGameMode
// (Public, ClassDefaultObject, ArchetypeObject)

class ATopGameMode* ATopGameMode::GetDefaultObj()
{
	static class ATopGameMode* Default = nullptr;

	if (!Default)
		Default = static_cast<ATopGameMode*>(ATopGameMode::StaticClass()->DefaultObject);

	return Default;
}


// Function Topaz.TopGameMode.OnDungeonPortalEntered
// (Final, Native, Public)
// Parameters:
// class AValCharacter*               Character                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AValDungeonPortal*           DungeonPortal                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ATopGameMode::OnDungeonPortalEntered(class AValCharacter* Character, class AValDungeonPortal* DungeonPortal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopGameMode", "OnDungeonPortalEntered");

	Params::ATopGameMode_OnDungeonPortalEntered_Params Parms{};

	Parms.Character = Character;
	Parms.DungeonPortal = DungeonPortal;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopGameMode.OnDungeonPortalDestroyed
// (Final, Native, Protected)
// Parameters:
// class AValDungeonPortal*           DungeonPortal                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ATopGameMode::OnDungeonPortalDestroyed(class AValDungeonPortal* DungeonPortal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopGameMode", "OnDungeonPortalDestroyed");

	Params::ATopGameMode_OnDungeonPortalDestroyed_Params Parms{};

	Parms.DungeonPortal = DungeonPortal;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class Topaz.TopGameMode_Raid
// (Actor)

class UClass* ATopGameMode_Raid::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TopGameMode_Raid");

	return Clss;
}


// TopGameMode_Raid Topaz.Default__TopGameMode_Raid
// (Public, ClassDefaultObject, ArchetypeObject)

class ATopGameMode_Raid* ATopGameMode_Raid::GetDefaultObj()
{
	static class ATopGameMode_Raid* Default = nullptr;

	if (!Default)
		Default = static_cast<ATopGameMode_Raid*>(ATopGameMode_Raid::StaticClass()->DefaultObject);

	return Default;
}


// Function Topaz.TopGameMode_Raid.OnTeamStoppedSearching
// (Final, Native, Protected)
// Parameters:
// class UTopTeamPhaseManager_Raid*   TeamPhaseManager                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ATopGameMode_Raid::OnTeamStoppedSearching(class UTopTeamPhaseManager_Raid* TeamPhaseManager)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopGameMode_Raid", "OnTeamStoppedSearching");

	Params::ATopGameMode_Raid_OnTeamStoppedSearching_Params Parms{};

	Parms.TeamPhaseManager = TeamPhaseManager;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopGameMode_Raid.OnTeamMissionPhaseEntered
// (Final, Native, Protected)
// Parameters:
// class UTopTeamPhaseManager_Raid*   TeamPhaseManager                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ATopGameMode_Raid::OnTeamMissionPhaseEntered(class UTopTeamPhaseManager_Raid* TeamPhaseManager)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopGameMode_Raid", "OnTeamMissionPhaseEntered");

	Params::ATopGameMode_Raid_OnTeamMissionPhaseEntered_Params Parms{};

	Parms.TeamPhaseManager = TeamPhaseManager;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopGameMode_Raid.OnTeamInMatchPhaseBegun
// (Final, Native, Protected)
// Parameters:
// class UTopTeamPhaseManager_Raid*   TeamPhaseManager                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ATopGameMode_Raid::OnTeamInMatchPhaseBegun(class UTopTeamPhaseManager_Raid* TeamPhaseManager)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopGameMode_Raid", "OnTeamInMatchPhaseBegun");

	Params::ATopGameMode_Raid_OnTeamInMatchPhaseBegun_Params Parms{};

	Parms.TeamPhaseManager = TeamPhaseManager;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopGameMode_Raid.OnTeamEmpty
// (Final, Native, Protected)
// Parameters:
// class ATeamState*                  TeamState                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ATopGameMode_Raid::OnTeamEmpty(class ATeamState* TeamState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopGameMode_Raid", "OnTeamEmpty");

	Params::ATopGameMode_Raid_OnTeamEmpty_Params Parms{};

	Parms.TeamState = TeamState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopGameMode_Raid.OnStartDropshipEvac
// (Event, Public, HasDefaults, BlueprintEvent)
// Parameters:
// struct CoreUObject_Transform       EvacLocation                                                     (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APawn*                       OwningCharacter                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ATopGameMode_Raid::OnStartDropshipEvac(const struct CoreUObject_Transform& EvacLocation, class APawn* OwningCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopGameMode_Raid", "OnStartDropshipEvac");

	Params::ATopGameMode_Raid_OnStartDropshipEvac_Params Parms{};

	Parms.EvacLocation = EvacLocation;
	Parms.OwningCharacter = OwningCharacter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Topaz.TopGameMode_Raid.OnStartDropshipDeploy
// (Event, Public, HasDefaults, BlueprintEvent)
// Parameters:
// struct CoreUObject_Transform       DeployLocation                                                   (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APawn*                       OwningCharacter                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ATopGameMode_Raid::OnStartDropshipDeploy(const struct CoreUObject_Transform& DeployLocation, class APawn* OwningCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopGameMode_Raid", "OnStartDropshipDeploy");

	Params::ATopGameMode_Raid_OnStartDropshipDeploy_Params Parms{};

	Parms.DeployLocation = DeployLocation;
	Parms.OwningCharacter = OwningCharacter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Topaz.TopGameMode_Raid.OnPlayerVotedMission
// (Native, Public)
// Parameters:
// class AValPlayerController*        PlayerController                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ATopGameMode_Raid::OnPlayerVotedMission(class AValPlayerController* PlayerController, int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopGameMode_Raid", "OnPlayerVotedMission");

	Params::ATopGameMode_Raid_OnPlayerVotedMission_Params Parms{};

	Parms.PlayerController = PlayerController;
	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopGameMode_Raid.OnAllRoomsLoaded
// (Final, Native, Public)
// Parameters:

void ATopGameMode_Raid::OnAllRoomsLoaded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopGameMode_Raid", "OnAllRoomsLoaded");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopGameMode_Raid.GetBotRespawnTimer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EBuildingType           BuildingType                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 ATopGameMode_Raid::GetBotRespawnTimer(enum class EBuildingType BuildingType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopGameMode_Raid", "GetBotRespawnTimer");

	Params::ATopGameMode_Raid_GetBotRespawnTimer_Params Parms{};

	Parms.BuildingType = BuildingType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Topaz.TopGameMode_Raid.FindPlayerDropSpot
// (Final, Native, Protected)
// Parameters:
// class AController*                 Player                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      IncomingName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AValPlayerStart*             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AValPlayerStart* ATopGameMode_Raid::FindPlayerDropSpot(class AController* Player, const class FString& IncomingName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopGameMode_Raid", "FindPlayerDropSpot");

	Params::ATopGameMode_Raid_FindPlayerDropSpot_Params Parms{};

	Parms.Player = Player;
	Parms.IncomingName = IncomingName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Topaz.TopGenerator
// (Actor)

class UClass* ATopGenerator::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TopGenerator");

	return Clss;
}


// TopGenerator Topaz.Default__TopGenerator
// (Public, ClassDefaultObject, ArchetypeObject)

class ATopGenerator* ATopGenerator::GetDefaultObj()
{
	static class ATopGenerator* Default = nullptr;

	if (!Default)
		Default = static_cast<ATopGenerator*>(ATopGenerator::StaticClass()->DefaultObject);

	return Default;
}


// Class Topaz.TopGeneratorPowered
// (None)

class UClass* ITopGeneratorPowered::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TopGeneratorPowered");

	return Clss;
}


// TopGeneratorPowered Topaz.Default__TopGeneratorPowered
// (Public, ClassDefaultObject, ArchetypeObject)

class ITopGeneratorPowered* ITopGeneratorPowered::GetDefaultObj()
{
	static class ITopGeneratorPowered* Default = nullptr;

	if (!Default)
		Default = static_cast<ITopGeneratorPowered*>(ITopGeneratorPowered::StaticClass()->DefaultObject);

	return Default;
}


// Function Topaz.TopGeneratorPowered.TurnOnline
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ITopGeneratorPowered::TurnOnline()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopGeneratorPowered", "TurnOnline");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopGeneratorPowered.TurnOffline
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ITopGeneratorPowered::TurnOffline()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopGeneratorPowered", "TurnOffline");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class Topaz.TopHangarStation
// (Actor)

class UClass* ATopHangarStation::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TopHangarStation");

	return Clss;
}


// TopHangarStation Topaz.Default__TopHangarStation
// (Public, ClassDefaultObject, ArchetypeObject)

class ATopHangarStation* ATopHangarStation::GetDefaultObj()
{
	static class ATopHangarStation* Default = nullptr;

	if (!Default)
		Default = static_cast<ATopHangarStation*>(ATopHangarStation::StaticClass()->DefaultObject);

	return Default;
}


// Function Topaz.TopHangarStation.ServerOnInteracted
// (Event, Public, BlueprintEvent)
// Parameters:
// class AValCharacter*               Initiator                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ATopHangarStation::ServerOnInteracted(class AValCharacter* Initiator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopHangarStation", "ServerOnInteracted");

	Params::ATopHangarStation_ServerOnInteracted_Params Parms{};

	Parms.Initiator = Initiator;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Topaz.TopHangarStation.OnInteracted
// (Event, Public, BlueprintEvent)
// Parameters:
// class AValCharacter*               Initiator                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ATopHangarStation::OnInteracted(class AValCharacter* Initiator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopHangarStation", "OnInteracted");

	Params::ATopHangarStation_OnInteracted_Params Parms{};

	Parms.Initiator = Initiator;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Topaz.TopHangarStation.K2_CanInteract
// (Event, Public, BlueprintEvent)
// Parameters:
// class AValCharacter*               Initiator                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ATopHangarStation::K2_CanInteract(class AValCharacter* Initiator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopHangarStation", "K2_CanInteract");

	Params::ATopHangarStation_K2_CanInteract_Params Parms{};

	Parms.Initiator = Initiator;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Topaz.TopHangarStation.GetHangarStationType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EHangarStationType      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EHangarStationType ATopHangarStation::GetHangarStationType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopHangarStation", "GetHangarStationType");

	Params::ATopHangarStation_GetHangarStationType_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Topaz.TopHangarStation.ClientOnInteracted
// (Event, Public, BlueprintEvent)
// Parameters:
// class AValCharacter*               Initiator                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ATopHangarStation::ClientOnInteracted(class AValCharacter* Initiator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopHangarStation", "ClientOnInteracted");

	Params::ATopHangarStation_ClientOnInteracted_Params Parms{};

	Parms.Initiator = Initiator;

	UObject::ProcessEvent(Func, &Parms);

}


// Class Topaz.TopInventoryStation
// (Actor)

class UClass* ATopInventoryStation::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TopInventoryStation");

	return Clss;
}


// TopInventoryStation Topaz.Default__TopInventoryStation
// (Public, ClassDefaultObject, ArchetypeObject)

class ATopInventoryStation* ATopInventoryStation::GetDefaultObj()
{
	static class ATopInventoryStation* Default = nullptr;

	if (!Default)
		Default = static_cast<ATopInventoryStation*>(ATopInventoryStation::StaticClass()->DefaultObject);

	return Default;
}


// Function Topaz.TopInventoryStation.ReceiveOnBeginOverlap
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OtherActor                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ATopInventoryStation::ReceiveOnBeginOverlap(class AActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopInventoryStation", "ReceiveOnBeginOverlap");

	Params::ATopInventoryStation_ReceiveOnBeginOverlap_Params Parms{};

	Parms.OtherActor = OtherActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Topaz.TopInventoryStation.OnRep_TeamId
// (Final, Native, Private)
// Parameters:
// int32                              OldTeamId                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ATopInventoryStation::OnRep_TeamId(int32 OldTeamId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopInventoryStation", "OnRep_TeamId");

	Params::ATopInventoryStation_OnRep_TeamId_Params Parms{};

	Parms.OldTeamId = OldTeamId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopInventoryStation.OnHoldFinished
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AValCharacter*               TargetCharacter                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ATopInventoryStation::OnHoldFinished(class AValCharacter* TargetCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopInventoryStation", "OnHoldFinished");

	Params::ATopInventoryStation_OnHoldFinished_Params Parms{};

	Parms.TargetCharacter = TargetCharacter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Topaz.TopInventoryStation.OnBeginOverlap
// (Final, Native, Protected, HasOutParams)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      OtherActor                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         OtherComp                                                        (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              OtherBodyIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bFromSweep                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Engine_HitResult            SweepResult                                                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void ATopInventoryStation::OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct Engine_HitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopInventoryStation", "OnBeginOverlap");

	Params::ATopInventoryStation_OnBeginOverlap_Params Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = SweepResult;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopInventoryStation.BeginHoldTimer
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class AValCharacter*               TargetCharacter                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ATopInventoryStation::BeginHoldTimer(class AValCharacter* TargetCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopInventoryStation", "BeginHoldTimer");

	Params::ATopInventoryStation_BeginHoldTimer_Params Parms{};

	Parms.TargetCharacter = TargetCharacter;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopInventoryStation.ActivateInventoryStation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AValCharacter*               Character                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ATopInventoryStation::ActivateInventoryStation(class AValCharacter* Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopInventoryStation", "ActivateInventoryStation");

	Params::ATopInventoryStation_ActivateInventoryStation_Params Parms{};

	Parms.Character = Character;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class Topaz.TopPlayerController_City
// (Actor, PlayerController)

class UClass* ATopPlayerController_City::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TopPlayerController_City");

	return Clss;
}


// TopPlayerController_City Topaz.Default__TopPlayerController_City
// (Public, ClassDefaultObject, ArchetypeObject)

class ATopPlayerController_City* ATopPlayerController_City::GetDefaultObj()
{
	static class ATopPlayerController_City* Default = nullptr;

	if (!Default)
		Default = static_cast<ATopPlayerController_City*>(ATopPlayerController_City::StaticClass()->DefaultObject);

	return Default;
}


// Function Topaz.TopPlayerController_City.ShowHangarStation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ATopHangarStation*           HangarStation                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ATopPlayerController_City::ShowHangarStation(class ATopHangarStation* HangarStation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopPlayerController_City", "ShowHangarStation");

	Params::ATopPlayerController_City_ShowHangarStation_Params Parms{};

	Parms.HangarStation = HangarStation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopPlayerController_City.ClientShowHangarStation
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// class ATopHangarStation*           HangarStation                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ATopPlayerController_City::ClientShowHangarStation(class ATopHangarStation* HangarStation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopPlayerController_City", "ClientShowHangarStation");

	Params::ATopPlayerController_City_ClientShowHangarStation_Params Parms{};

	Parms.HangarStation = HangarStation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class Topaz.TopPlayerDropship
// (Actor)

class UClass* ATopPlayerDropship::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TopPlayerDropship");

	return Clss;
}


// TopPlayerDropship Topaz.Default__TopPlayerDropship
// (Public, ClassDefaultObject, ArchetypeObject)

class ATopPlayerDropship* ATopPlayerDropship::GetDefaultObj()
{
	static class ATopPlayerDropship* Default = nullptr;

	if (!Default)
		Default = static_cast<ATopPlayerDropship*>(ATopPlayerDropship::StaticClass()->DefaultObject);

	return Default;
}


// Function Topaz.TopPlayerDropship.SetCurrentPhase
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EDropshipPhase          NewPhase                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ATopPlayerDropship::SetCurrentPhase(enum class EDropshipPhase NewPhase)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopPlayerDropship", "SetCurrentPhase");

	Params::ATopPlayerDropship_SetCurrentPhase_Params Parms{};

	Parms.NewPhase = NewPhase;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopPlayerDropship.OnRep_CurrentPhase
// (Native, Protected)
// Parameters:

void ATopPlayerDropship::OnRep_CurrentPhase()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopPlayerDropship", "OnRep_CurrentPhase");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopPlayerDropship.OnInteracted
// (Event, Public, BlueprintEvent)
// Parameters:
// class AValCharacter*               Initiator                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ATopPlayerDropship::OnInteracted(class AValCharacter* Initiator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopPlayerDropship", "OnInteracted");

	Params::ATopPlayerDropship_OnInteracted_Params Parms{};

	Parms.Initiator = Initiator;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Topaz.TopPlayerDropship.OnCurrentPhaseUpdated
// (Event, Public, BlueprintEvent)
// Parameters:

void ATopPlayerDropship::OnCurrentPhaseUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopPlayerDropship", "OnCurrentPhaseUpdated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Topaz.TopPlayerDropship.K2_CanInteract
// (Event, Public, BlueprintEvent)
// Parameters:
// class AValCharacter*               Initiator                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ATopPlayerDropship::K2_CanInteract(class AValCharacter* Initiator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopPlayerDropship", "K2_CanInteract");

	Params::ATopPlayerDropship_K2_CanInteract_Params Parms{};

	Parms.Initiator = Initiator;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Topaz.TopPlayerDropship.GetCurrentPhase
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EDropshipPhase          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EDropshipPhase ATopPlayerDropship::GetCurrentPhase()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopPlayerDropship", "GetCurrentPhase");

	Params::ATopPlayerDropship_GetCurrentPhase_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Topaz.TopPlayerStart
// (Actor)

class UClass* ATopPlayerStart::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TopPlayerStart");

	return Clss;
}


// TopPlayerStart Topaz.Default__TopPlayerStart
// (Public, ClassDefaultObject, ArchetypeObject)

class ATopPlayerStart* ATopPlayerStart::GetDefaultObj()
{
	static class ATopPlayerStart* Default = nullptr;

	if (!Default)
		Default = static_cast<ATopPlayerStart*>(ATopPlayerStart::StaticClass()->DefaultObject);

	return Default;
}


// Class Topaz.TopPlayerStateBase
// (Actor)

class UClass* ATopPlayerStateBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TopPlayerStateBase");

	return Clss;
}


// TopPlayerStateBase Topaz.Default__TopPlayerStateBase
// (Public, ClassDefaultObject, ArchetypeObject)

class ATopPlayerStateBase* ATopPlayerStateBase::GetDefaultObj()
{
	static class ATopPlayerStateBase* Default = nullptr;

	if (!Default)
		Default = static_cast<ATopPlayerStateBase*>(ATopPlayerStateBase::StaticClass()->DefaultObject);

	return Default;
}


// Class Topaz.TopPlayerState
// (Actor)

class UClass* ATopPlayerState::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TopPlayerState");

	return Clss;
}


// TopPlayerState Topaz.Default__TopPlayerState
// (Public, ClassDefaultObject, ArchetypeObject)

class ATopPlayerState* ATopPlayerState::GetDefaultObj()
{
	static class ATopPlayerState* Default = nullptr;

	if (!Default)
		Default = static_cast<ATopPlayerState*>(ATopPlayerState::StaticClass()->DefaultObject);

	return Default;
}


// Function Topaz.TopPlayerState.SetDesiredPlayerStart
// (Final, Native, Public)
// Parameters:
// class ATopPlayerStart*             PlayerStart                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ATopPlayerState::SetDesiredPlayerStart(class ATopPlayerStart* PlayerStart)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopPlayerState", "SetDesiredPlayerStart");

	Params::ATopPlayerState_SetDesiredPlayerStart_Params Parms{};

	Parms.PlayerStart = PlayerStart;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopPlayerState.ServerSetVisible
// (Net, NetReliable, Native, Event, Public, NetServer)
// Parameters:
// bool                               Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ATopPlayerState::ServerSetVisible(bool Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopPlayerState", "ServerSetVisible");

	Params::ATopPlayerState_ServerSetVisible_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopPlayerState.OnRep_XP
// (Final, Native, Protected)
// Parameters:
// int32                              OldXP                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ATopPlayerState::OnRep_XP(int32 OldXP)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopPlayerState", "OnRep_XP");

	Params::ATopPlayerState_OnRep_XP_Params Parms{};

	Parms.OldXP = OldXP;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopPlayerState.OnRep_VisibleOnRadarSensor
// (Native, Protected)
// Parameters:

void ATopPlayerState::OnRep_VisibleOnRadarSensor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopPlayerState", "OnRep_VisibleOnRadarSensor");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopPlayerState.OnRadarSensorStatusChanged
// (Final, Native, Protected)
// Parameters:
// class ATopRadarSensor*             RadarSensor                                                      (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ATopPlayerState::OnRadarSensorStatusChanged(class ATopRadarSensor* RadarSensor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopPlayerState", "OnRadarSensorStatusChanged");

	Params::ATopPlayerState_OnRadarSensorStatusChanged_Params Parms{};

	Parms.RadarSensor = RadarSensor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopPlayerState.IsVisibleOnRadarSensor
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ATopPlayerState::IsVisibleOnRadarSensor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopPlayerState", "IsVisibleOnRadarSensor");

	Params::ATopPlayerState_IsVisibleOnRadarSensor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Topaz.TopPlayerState.IsAwaitingActiveLoadout
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ATopPlayerState::IsAwaitingActiveLoadout()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopPlayerState", "IsAwaitingActiveLoadout");

	Params::ATopPlayerState_IsAwaitingActiveLoadout_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Topaz.TopPlayerState.GetQueuedLoadoutClass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct GameplayTags_GameplayTag    ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct GameplayTags_GameplayTag ATopPlayerState::GetQueuedLoadoutClass()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopPlayerState", "GetQueuedLoadoutClass");

	Params::ATopPlayerState_GetQueuedLoadoutClass_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Topaz.TopPlayerState.GetPlayerXP
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 ATopPlayerState::GetPlayerXP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopPlayerState", "GetPlayerXP");

	Params::ATopPlayerState_GetPlayerXP_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Topaz.TopPlayerState.GetPlayerLevel
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 ATopPlayerState::GetPlayerLevel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopPlayerState", "GetPlayerLevel");

	Params::ATopPlayerState_GetPlayerLevel_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Topaz.TopPlayerState.GetDesiredPlayerStart
// (Final, Native, Public)
// Parameters:
// class ATopPlayerStart*             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ATopPlayerStart* ATopPlayerState::GetDesiredPlayerStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopPlayerState", "GetDesiredPlayerStart");

	Params::ATopPlayerState_GetDesiredPlayerStart_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Topaz.TopPlayerState.ClientOnAddXP
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// enum class EPlayerExperienceType   ExperienceType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Amount                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ATopPlayerState::ClientOnAddXP(enum class EPlayerExperienceType ExperienceType, int32 Amount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopPlayerState", "ClientOnAddXP");

	Params::ATopPlayerState_ClientOnAddXP_Params Parms{};

	Parms.ExperienceType = ExperienceType;
	Parms.Amount = Amount;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopPlayerState.CanQueueLoadoutClass
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct GameplayTags_GameplayTag    LoadoutClass                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ATopPlayerState::CanQueueLoadoutClass(struct GameplayTags_GameplayTag& LoadoutClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopPlayerState", "CanQueueLoadoutClass");

	Params::ATopPlayerState_CanQueueLoadoutClass_Params Parms{};

	Parms.LoadoutClass = LoadoutClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Topaz.TopPlayerState.CalculatePlayerLevel
// (Final, Native, Public)
// Parameters:
// int32                              Xp                                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 ATopPlayerState::CalculatePlayerLevel(int32 Xp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopPlayerState", "CalculatePlayerLevel");

	Params::ATopPlayerState_CalculatePlayerLevel_Params Parms{};

	Parms.Xp = Xp;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Topaz.TopPlayerState.AddXP
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EPlayerExperienceType   ExperienceType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Amount                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ATopPlayerState::AddXP(enum class EPlayerExperienceType ExperienceType, int32 Amount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopPlayerState", "AddXP");

	Params::ATopPlayerState_AddXP_Params Parms{};

	Parms.ExperienceType = ExperienceType;
	Parms.Amount = Amount;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class Topaz.TopPoweredComponent
// (None)

class UClass* UTopPoweredComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TopPoweredComponent");

	return Clss;
}


// TopPoweredComponent Topaz.Default__TopPoweredComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UTopPoweredComponent* UTopPoweredComponent::GetDefaultObj()
{
	static class UTopPoweredComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UTopPoweredComponent*>(UTopPoweredComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function Topaz.TopPoweredComponent.SetPowerOn
// (Native, Public, BlueprintCallable)
// Parameters:

void UTopPoweredComponent::SetPowerOn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopPoweredComponent", "SetPowerOn");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopPoweredComponent.SetPowerOff
// (Native, Public, BlueprintCallable)
// Parameters:

void UTopPoweredComponent::SetPowerOff()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopPoweredComponent", "SetPowerOff");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopPoweredComponent.SetOwnerNotDowned
// (Native, Public, BlueprintCallable)
// Parameters:

void UTopPoweredComponent::SetOwnerNotDowned()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopPoweredComponent", "SetOwnerNotDowned");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopPoweredComponent.SetOwnerDowned
// (Native, Public, BlueprintCallable)
// Parameters:

void UTopPoweredComponent::SetOwnerDowned()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopPoweredComponent", "SetOwnerDowned");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopPoweredComponent.OnRep_OwnerDowned
// (Final, Native, Public)
// Parameters:

void UTopPoweredComponent::OnRep_OwnerDowned()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopPoweredComponent", "OnRep_OwnerDowned");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopPoweredComponent.OnRep_GeneratorPowered
// (Final, Native, Public)
// Parameters:

void UTopPoweredComponent::OnRep_GeneratorPowered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopPoweredComponent", "OnRep_GeneratorPowered");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopPoweredComponent.OnOwnerHealthChanged
// (Final, Native, Public)
// Parameters:
// float                              PercentHealth                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTopPoweredComponent::OnOwnerHealthChanged(float PercentHealth)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopPoweredComponent", "OnOwnerHealthChanged");

	Params::UTopPoweredComponent_OnOwnerHealthChanged_Params Parms{};

	Parms.PercentHealth = PercentHealth;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopPoweredComponent.IsSystemOnline
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTopPoweredComponent::IsSystemOnline()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopPoweredComponent", "IsSystemOnline");

	Params::UTopPoweredComponent_IsSystemOnline_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Topaz.TopPoweredComponent.DebugDump
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UTopPoweredComponent::DebugDump()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopPoweredComponent", "DebugDump");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class Topaz.TopRadarSensor
// (Actor)

class UClass* ATopRadarSensor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TopRadarSensor");

	return Clss;
}


// TopRadarSensor Topaz.Default__TopRadarSensor
// (Public, ClassDefaultObject, ArchetypeObject)

class ATopRadarSensor* ATopRadarSensor::GetDefaultObj()
{
	static class ATopRadarSensor* Default = nullptr;

	if (!Default)
		Default = static_cast<ATopRadarSensor*>(ATopRadarSensor::StaticClass()->DefaultObject);

	return Default;
}


// Function Topaz.TopRadarSensor.OnGameStateSet
// (Final, Native, Public)
// Parameters:
// class AGameStateBase*              GameState                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ATopRadarSensor::OnGameStateSet(class AGameStateBase* GameState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopRadarSensor", "OnGameStateSet");

	Params::ATopRadarSensor_OnGameStateSet_Params Parms{};

	Parms.GameState = GameState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopRadarSensor.IsOnline
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ATopRadarSensor::IsOnline()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopRadarSensor", "IsOnline");

	Params::ATopRadarSensor_IsOnline_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Topaz.TopTeamCreationComponent
// (None)

class UClass* UTopTeamCreationComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TopTeamCreationComponent");

	return Clss;
}


// TopTeamCreationComponent Topaz.Default__TopTeamCreationComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UTopTeamCreationComponent* UTopTeamCreationComponent::GetDefaultObj()
{
	static class UTopTeamCreationComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UTopTeamCreationComponent*>(UTopTeamCreationComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class Topaz.TopTeamCreationComponent_Raid
// (None)

class UClass* UTopTeamCreationComponent_Raid::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TopTeamCreationComponent_Raid");

	return Clss;
}


// TopTeamCreationComponent_Raid Topaz.Default__TopTeamCreationComponent_Raid
// (Public, ClassDefaultObject, ArchetypeObject)

class UTopTeamCreationComponent_Raid* UTopTeamCreationComponent_Raid::GetDefaultObj()
{
	static class UTopTeamCreationComponent_Raid* Default = nullptr;

	if (!Default)
		Default = static_cast<UTopTeamCreationComponent_Raid*>(UTopTeamCreationComponent_Raid::StaticClass()->DefaultObject);

	return Default;
}


// Function Topaz.TopTeamCreationComponent_Raid.GetDungeonHazardsTeamDefinition
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName UTopTeamCreationComponent_Raid::GetDungeonHazardsTeamDefinition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopTeamCreationComponent_Raid", "GetDungeonHazardsTeamDefinition");

	Params::UTopTeamCreationComponent_Raid_GetDungeonHazardsTeamDefinition_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Topaz.TopTeamCreationComponent_CTF
// (None)

class UClass* UTopTeamCreationComponent_CTF::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TopTeamCreationComponent_CTF");

	return Clss;
}


// TopTeamCreationComponent_CTF Topaz.Default__TopTeamCreationComponent_CTF
// (Public, ClassDefaultObject, ArchetypeObject)

class UTopTeamCreationComponent_CTF* UTopTeamCreationComponent_CTF::GetDefaultObj()
{
	static class UTopTeamCreationComponent_CTF* Default = nullptr;

	if (!Default)
		Default = static_cast<UTopTeamCreationComponent_CTF*>(UTopTeamCreationComponent_CTF::StaticClass()->DefaultObject);

	return Default;
}


// Function Topaz.TopTeamCreationComponent_CTF.GetTeamBDefinition
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName UTopTeamCreationComponent_CTF::GetTeamBDefinition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopTeamCreationComponent_CTF", "GetTeamBDefinition");

	Params::UTopTeamCreationComponent_CTF_GetTeamBDefinition_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Topaz.TopTeamCreationComponent_CTF.GetTeamADefinition
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName UTopTeamCreationComponent_CTF::GetTeamADefinition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopTeamCreationComponent_CTF", "GetTeamADefinition");

	Params::UTopTeamCreationComponent_CTF_GetTeamADefinition_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Topaz.TopTeamPhaseManager
// (None)

class UClass* UTopTeamPhaseManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TopTeamPhaseManager");

	return Clss;
}


// TopTeamPhaseManager Topaz.Default__TopTeamPhaseManager
// (Public, ClassDefaultObject, ArchetypeObject)

class UTopTeamPhaseManager* UTopTeamPhaseManager::GetDefaultObj()
{
	static class UTopTeamPhaseManager* Default = nullptr;

	if (!Default)
		Default = static_cast<UTopTeamPhaseManager*>(UTopTeamPhaseManager::StaticClass()->DefaultObject);

	return Default;
}


// Function Topaz.TopTeamPhaseManager.SetTeamState
// (Final, Native, Public)
// Parameters:
// class ATeamState*                  NewTeam                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTopTeamPhaseManager::SetTeamState(class ATeamState* NewTeam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopTeamPhaseManager", "SetTeamState");

	Params::UTopTeamPhaseManager_SetTeamState_Params Parms{};

	Parms.NewTeam = NewTeam;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopTeamPhaseManager.OnTeamMembersUpdated
// (Final, Native, Public)
// Parameters:

void UTopTeamPhaseManager::OnTeamMembersUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopTeamPhaseManager", "OnTeamMembersUpdated");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopTeamPhaseManager.GetTeamState
// (Final, Native, Public, Const)
// Parameters:
// class ATeamState*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ATeamState* UTopTeamPhaseManager::GetTeamState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopTeamPhaseManager", "GetTeamState");

	Params::UTopTeamPhaseManager_GetTeamState_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Topaz.TopTeamPhaseManager.GetTeamNum
// (Final, Native, Public, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UTopTeamPhaseManager::GetTeamNum()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopTeamPhaseManager", "GetTeamNum");

	Params::UTopTeamPhaseManager_GetTeamNum_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Topaz.TopTeamPhaseManager.GetCurrentTeamPhaseEndTime
// (Final, Native, Public, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UTopTeamPhaseManager::GetCurrentTeamPhaseEndTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopTeamPhaseManager", "GetCurrentTeamPhaseEndTime");

	Params::UTopTeamPhaseManager_GetCurrentTeamPhaseEndTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Topaz.TopTeamPhaseManager.GetCurrentTeamPhase
// (Final, Native, Public, Const)
// Parameters:
// struct GameplayTags_GameplayTag    ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct GameplayTags_GameplayTag UTopTeamPhaseManager::GetCurrentTeamPhase()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopTeamPhaseManager", "GetCurrentTeamPhase");

	Params::UTopTeamPhaseManager_GetCurrentTeamPhase_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Topaz.TopTeamPhaseManager_Raid
// (None)

class UClass* UTopTeamPhaseManager_Raid::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TopTeamPhaseManager_Raid");

	return Clss;
}


// TopTeamPhaseManager_Raid Topaz.Default__TopTeamPhaseManager_Raid
// (Public, ClassDefaultObject, ArchetypeObject)

class UTopTeamPhaseManager_Raid* UTopTeamPhaseManager_Raid::GetDefaultObj()
{
	static class UTopTeamPhaseManager_Raid* Default = nullptr;

	if (!Default)
		Default = static_cast<UTopTeamPhaseManager_Raid*>(UTopTeamPhaseManager_Raid::StaticClass()->DefaultObject);

	return Default;
}


// Class Topaz.TopCameraActor
// (Actor)

class UClass* ATopCameraActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TopCameraActor");

	return Clss;
}


// TopCameraActor Topaz.Default__TopCameraActor
// (Public, ClassDefaultObject, ArchetypeObject)

class ATopCameraActor* ATopCameraActor::GetDefaultObj()
{
	static class ATopCameraActor* Default = nullptr;

	if (!Default)
		Default = static_cast<ATopCameraActor*>(ATopCameraActor::StaticClass()->DefaultObject);

	return Default;
}


// Class Topaz.TopPlayerCameraManager
// (Actor)

class UClass* ATopPlayerCameraManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TopPlayerCameraManager");

	return Clss;
}


// TopPlayerCameraManager Topaz.Default__TopPlayerCameraManager
// (Public, ClassDefaultObject, ArchetypeObject)

class ATopPlayerCameraManager* ATopPlayerCameraManager::GetDefaultObj()
{
	static class ATopPlayerCameraManager* Default = nullptr;

	if (!Default)
		Default = static_cast<ATopPlayerCameraManager*>(ATopPlayerCameraManager::StaticClass()->DefaultObject);

	return Default;
}


// Function Topaz.TopPlayerCameraManager.GetRandomMapCamera
// (Native, Protected)
// Parameters:
// class ATopCameraActor*             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ATopCameraActor* ATopPlayerCameraManager::GetRandomMapCamera()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopPlayerCameraManager", "GetRandomMapCamera");

	Params::ATopPlayerCameraManager_GetRandomMapCamera_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Topaz.TopPlayerCameraManager.GetMapCameraActors
// (Native, Protected)
// Parameters:
// TArray<class ATopCameraActor*>     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class ATopCameraActor*> ATopPlayerCameraManager::GetMapCameraActors()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopPlayerCameraManager", "GetMapCameraActors");

	Params::ATopPlayerCameraManager_GetMapCameraActors_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Topaz.TopGameMode_City
// (Actor)

class UClass* ATopGameMode_City::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TopGameMode_City");

	return Clss;
}


// TopGameMode_City Topaz.Default__TopGameMode_City
// (Public, ClassDefaultObject, ArchetypeObject)

class ATopGameMode_City* ATopGameMode_City::GetDefaultObj()
{
	static class ATopGameMode_City* Default = nullptr;

	if (!Default)
		Default = static_cast<ATopGameMode_City*>(ATopGameMode_City::StaticClass()->DefaultObject);

	return Default;
}


// Class Topaz.TopGameMode_Topaz
// (Actor)

class UClass* ATopGameMode_Topaz::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TopGameMode_Topaz");

	return Clss;
}


// TopGameMode_Topaz Topaz.Default__TopGameMode_Topaz
// (Public, ClassDefaultObject, ArchetypeObject)

class ATopGameMode_Topaz* ATopGameMode_Topaz::GetDefaultObj()
{
	static class ATopGameMode_Topaz* Default = nullptr;

	if (!Default)
		Default = static_cast<ATopGameMode_Topaz*>(ATopGameMode_Topaz::StaticClass()->DefaultObject);

	return Default;
}


// Function Topaz.TopGameMode_Topaz.OnGameplayMatchTimerEnd
// (Final, Native, Public)
// Parameters:

void ATopGameMode_Topaz::OnGameplayMatchTimerEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopGameMode_Topaz", "OnGameplayMatchTimerEnd");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class Topaz.TopGameMode_TopazCTF
// (Actor)

class UClass* ATopGameMode_TopazCTF::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TopGameMode_TopazCTF");

	return Clss;
}


// TopGameMode_TopazCTF Topaz.Default__TopGameMode_TopazCTF
// (Public, ClassDefaultObject, ArchetypeObject)

class ATopGameMode_TopazCTF* ATopGameMode_TopazCTF::GetDefaultObj()
{
	static class ATopGameMode_TopazCTF* Default = nullptr;

	if (!Default)
		Default = static_cast<ATopGameMode_TopazCTF*>(ATopGameMode_TopazCTF::StaticClass()->DefaultObject);

	return Default;
}


// Function Topaz.TopGameMode_TopazCTF.SetUpBots
// (Native, Protected)
// Parameters:

void ATopGameMode_TopazCTF::SetUpBots()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopGameMode_TopazCTF", "SetUpBots");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopGameMode_TopazCTF.OnTurretDamaged
// (Native, Protected)
// Parameters:
// struct Valhalla_DamageData         DamageData                                                       (Parm, NativeAccessSpecifierPublic)

void ATopGameMode_TopazCTF::OnTurretDamaged(const struct Valhalla_DamageData& DamageData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopGameMode_TopazCTF", "OnTurretDamaged");

	Params::ATopGameMode_TopazCTF_OnTurretDamaged_Params Parms{};

	Parms.DamageData = DamageData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopGameMode_TopazCTF.OnStalemateTimerEnd
// (Native, Protected)
// Parameters:

void ATopGameMode_TopazCTF::OnStalemateTimerEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopGameMode_TopazCTF", "OnStalemateTimerEnd");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopGameMode_TopazCTF.OnGeneratorOnline
// (Native, Protected)
// Parameters:
// class ATopGenerator*               Generator                                                        (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ATopGameMode_TopazCTF::OnGeneratorOnline(class ATopGenerator* Generator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopGameMode_TopazCTF", "OnGeneratorOnline");

	Params::ATopGameMode_TopazCTF_OnGeneratorOnline_Params Parms{};

	Parms.Generator = Generator;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopGameMode_TopazCTF.OnGeneratorOffline
// (Native, Protected)
// Parameters:
// class ATopGenerator*               Generator                                                        (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ATopGameMode_TopazCTF::OnGeneratorOffline(class ATopGenerator* Generator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopGameMode_TopazCTF", "OnGeneratorOffline");

	Params::ATopGameMode_TopazCTF_OnGeneratorOffline_Params Parms{};

	Parms.Generator = Generator;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopGameMode_TopazCTF.OnFlagScored
// (Native, Protected)
// Parameters:
// class AValCharacter*               Character                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ATopPickup_Flag*             Flag                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ATopFlagStand*               FlagStand                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ATopGameMode_TopazCTF::OnFlagScored(class AValCharacter* Character, class ATopPickup_Flag* Flag, class ATopFlagStand* FlagStand)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopGameMode_TopazCTF", "OnFlagScored");

	Params::ATopGameMode_TopazCTF_OnFlagScored_Params Parms{};

	Parms.Character = Character;
	Parms.Flag = Flag;
	Parms.FlagStand = FlagStand;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopGameMode_TopazCTF.OnFlagReturned
// (Native, Protected)
// Parameters:
// class AValCharacter*               Character                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ATopPickup_Flag*             Flag                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ATopFlagStand*               FlagStand                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ATopGameMode_TopazCTF::OnFlagReturned(class AValCharacter* Character, class ATopPickup_Flag* Flag, class ATopFlagStand* FlagStand)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopGameMode_TopazCTF", "OnFlagReturned");

	Params::ATopGameMode_TopazCTF_OnFlagReturned_Params Parms{};

	Parms.Character = Character;
	Parms.Flag = Flag;
	Parms.FlagStand = FlagStand;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopGameMode_TopazCTF.OnFlagHeldChanged
// (Native, Protected, HasOutParams)
// Parameters:
// class ATopPickup_Flag*             PickupFlag                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Topaz_HolderInfo            HolderInfo                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct Topaz_HolderInfo            LastHolderInfo                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void ATopGameMode_TopazCTF::OnFlagHeldChanged(class ATopPickup_Flag* PickupFlag, struct Topaz_HolderInfo& HolderInfo, struct Topaz_HolderInfo& LastHolderInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopGameMode_TopazCTF", "OnFlagHeldChanged");

	Params::ATopGameMode_TopazCTF_OnFlagHeldChanged_Params Parms{};

	Parms.PickupFlag = PickupFlag;
	Parms.HolderInfo = HolderInfo;
	Parms.LastHolderInfo = LastHolderInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class Topaz.TopGameMode_TopazCTF_OneFlag
// (Actor)

class UClass* ATopGameMode_TopazCTF_OneFlag::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TopGameMode_TopazCTF_OneFlag");

	return Clss;
}


// TopGameMode_TopazCTF_OneFlag Topaz.Default__TopGameMode_TopazCTF_OneFlag
// (Public, ClassDefaultObject, ArchetypeObject)

class ATopGameMode_TopazCTF_OneFlag* ATopGameMode_TopazCTF_OneFlag::GetDefaultObj()
{
	static class ATopGameMode_TopazCTF_OneFlag* Default = nullptr;

	if (!Default)
		Default = static_cast<ATopGameMode_TopazCTF_OneFlag*>(ATopGameMode_TopazCTF_OneFlag::StaticClass()->DefaultObject);

	return Default;
}


// Function Topaz.TopGameMode_TopazCTF_OneFlag.AssignTeamRolesAndFlags
// (Native, Public)
// Parameters:
// bool                               bFirstAssignment                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ATopGameMode_TopazCTF_OneFlag::AssignTeamRolesAndFlags(bool bFirstAssignment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopGameMode_TopazCTF_OneFlag", "AssignTeamRolesAndFlags");

	Params::ATopGameMode_TopazCTF_OneFlag_AssignTeamRolesAndFlags_Params Parms{};

	Parms.bFirstAssignment = bFirstAssignment;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class Topaz.TopGameState
// (Actor)

class UClass* ATopGameState::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TopGameState");

	return Clss;
}


// TopGameState Topaz.Default__TopGameState
// (Public, ClassDefaultObject, ArchetypeObject)

class ATopGameState* ATopGameState::GetDefaultObj()
{
	static class ATopGameState* Default = nullptr;

	if (!Default)
		Default = static_cast<ATopGameState*>(ATopGameState::StaticClass()->DefaultObject);

	return Default;
}


// Function Topaz.TopGameState.ShouldUseMapCamera
// (Native, Public)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ATopGameState::ShouldUseMapCamera()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopGameState", "ShouldUseMapCamera");

	Params::ATopGameState_ShouldUseMapCamera_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Topaz.TopGameState.SetLevelingInfo
// (Final, Native, Public, HasOutParams)
// Parameters:
// int32                              MaxLevel                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GameplayAbilities_ScalableFloatLevelingInfo                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void ATopGameState::SetLevelingInfo(int32 MaxLevel, struct GameplayAbilities_ScalableFloat& LevelingInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopGameState", "SetLevelingInfo");

	Params::ATopGameState_SetLevelingInfo_Params Parms{};

	Parms.MaxLevel = MaxLevel;
	Parms.LevelingInfo = LevelingInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopGameState.SetIsInOvertime
// (Final, Native, Public)
// Parameters:
// bool                               bNewIsInOvertime                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ATopGameState::SetIsInOvertime(bool bNewIsInOvertime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopGameState", "SetIsInOvertime");

	Params::ATopGameState_SetIsInOvertime_Params Parms{};

	Parms.bNewIsInOvertime = bNewIsInOvertime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopGameState.QueueLoadoutClass
// (Native, Public, HasOutParams)
// Parameters:
// class ATopPlayerState*             PlayerState                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GameplayTags_GameplayTag    NewLoadoutClass                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ATopGameState::QueueLoadoutClass(class ATopPlayerState* PlayerState, struct GameplayTags_GameplayTag& NewLoadoutClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopGameState", "QueueLoadoutClass");

	Params::ATopGameState_QueueLoadoutClass_Params Parms{};

	Parms.PlayerState = PlayerState;
	Parms.NewLoadoutClass = NewLoadoutClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Topaz.TopGameState.OnRep_IsInOvertime
// (Final, Native, Public)
// Parameters:

void ATopGameState::OnRep_IsInOvertime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopGameState", "OnRep_IsInOvertime");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopGameState.GetIsInOvertime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ATopGameState::GetIsInOvertime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopGameState", "GetIsInOvertime");

	Params::ATopGameState_GetIsInOvertime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Topaz.TopGameState_TopazCTF
// (Actor)

class UClass* ATopGameState_TopazCTF::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TopGameState_TopazCTF");

	return Clss;
}


// TopGameState_TopazCTF Topaz.Default__TopGameState_TopazCTF
// (Public, ClassDefaultObject, ArchetypeObject)

class ATopGameState_TopazCTF* ATopGameState_TopazCTF::GetDefaultObj()
{
	static class ATopGameState_TopazCTF* Default = nullptr;

	if (!Default)
		Default = static_cast<ATopGameState_TopazCTF*>(ATopGameState_TopazCTF::StaticClass()->DefaultObject);

	return Default;
}


// Function Topaz.TopGameState_TopazCTF.OnRep_TeamOnOffense
// (Final, Native, Protected)
// Parameters:

void ATopGameState_TopazCTF::OnRep_TeamOnOffense()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopGameState_TopazCTF", "OnRep_TeamOnOffense");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopGameState_TopazCTF.OnRep_StalemateTime
// (Final, Native, Protected)
// Parameters:

void ATopGameState_TopazCTF::OnRep_StalemateTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopGameState_TopazCTF", "OnRep_StalemateTime");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopGameState_TopazCTF.OnRep_FlagStandDataUpdated
// (Final, Native, Protected)
// Parameters:

void ATopGameState_TopazCTF::OnRep_FlagStandDataUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopGameState_TopazCTF", "OnRep_FlagStandDataUpdated");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopGameState_TopazCTF.OnRep_CTFType
// (Final, Native, Protected)
// Parameters:

void ATopGameState_TopazCTF::OnRep_CTFType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopGameState_TopazCTF", "OnRep_CTFType");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopGameState_TopazCTF.OnPlayerScored
// (Native, Protected)
// Parameters:
// class AValPlayerState*             PlayerState                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ScoreAmount                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ATopGameState_TopazCTF::OnPlayerScored(class AValPlayerState* PlayerState, int32 ScoreAmount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopGameState_TopazCTF", "OnPlayerScored");

	Params::ATopGameState_TopazCTF_OnPlayerScored_Params Parms{};

	Parms.PlayerState = PlayerState;
	Parms.ScoreAmount = ScoreAmount;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopGameState_TopazCTF.OnPlayerReturnedFlag
// (Native, Protected)
// Parameters:
// class ATopPickup_Flag*             PickupFlag                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AValPlayerState*             PlayerState                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ATopGameState_TopazCTF::OnPlayerReturnedFlag(class ATopPickup_Flag* PickupFlag, class AValPlayerState* PlayerState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopGameState_TopazCTF", "OnPlayerReturnedFlag");

	Params::ATopGameState_TopazCTF_OnPlayerReturnedFlag_Params Parms{};

	Parms.PickupFlag = PickupFlag;
	Parms.PlayerState = PlayerState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopGameState_TopazCTF.OnFlagHeldChangedInternal
// (Native, Protected, HasOutParams)
// Parameters:
// class ATopPickup_Flag*             PickupFlag                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Topaz_HolderInfo            HolderInfo                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct Topaz_HolderInfo            LastHolderInfo                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void ATopGameState_TopazCTF::OnFlagHeldChangedInternal(class ATopPickup_Flag* PickupFlag, struct Topaz_HolderInfo& HolderInfo, struct Topaz_HolderInfo& LastHolderInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopGameState_TopazCTF", "OnFlagHeldChangedInternal");

	Params::ATopGameState_TopazCTF_OnFlagHeldChangedInternal_Params Parms{};

	Parms.PickupFlag = PickupFlag;
	Parms.HolderInfo = HolderInfo;
	Parms.LastHolderInfo = LastHolderInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopGameState_TopazCTF.OnFlagHeldChanged
// (Native, Protected, HasOutParams)
// Parameters:
// class ATopPickup_Flag*             PickupFlag                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Topaz_HolderInfo            HolderInfo                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct Topaz_HolderInfo            LastHolderInfo                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void ATopGameState_TopazCTF::OnFlagHeldChanged(class ATopPickup_Flag* PickupFlag, struct Topaz_HolderInfo& HolderInfo, struct Topaz_HolderInfo& LastHolderInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopGameState_TopazCTF", "OnFlagHeldChanged");

	Params::ATopGameState_TopazCTF_OnFlagHeldChanged_Params Parms{};

	Parms.PickupFlag = PickupFlag;
	Parms.HolderInfo = HolderInfo;
	Parms.LastHolderInfo = LastHolderInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopGameState_TopazCTF.NotifyPlayerScored
// (Native, Public)
// Parameters:
// class AValPlayerState*             PlayerState                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ScoreAmount                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ATopGameState_TopazCTF::NotifyPlayerScored(class AValPlayerState* PlayerState, int32 ScoreAmount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopGameState_TopazCTF", "NotifyPlayerScored");

	Params::ATopGameState_TopazCTF_NotifyPlayerScored_Params Parms{};

	Parms.PlayerState = PlayerState;
	Parms.ScoreAmount = ScoreAmount;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopGameState_TopazCTF.NotifyPlayerReturnedFlag
// (Native, Public)
// Parameters:
// class ATopPickup_Flag*             Flag                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AValPlayerState*             PlayerState                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ATopGameState_TopazCTF::NotifyPlayerReturnedFlag(class ATopPickup_Flag* Flag, class AValPlayerState* PlayerState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopGameState_TopazCTF", "NotifyPlayerReturnedFlag");

	Params::ATopGameState_TopazCTF_NotifyPlayerReturnedFlag_Params Parms{};

	Parms.Flag = Flag;
	Parms.PlayerState = PlayerState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopGameState_TopazCTF.NetMulticastOnPlayerScored
// (Net, NetReliable, Native, Event, NetMulticast, Protected)
// Parameters:
// class AValPlayerState*             PlayerState                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ScoreAmount                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ATopGameState_TopazCTF::NetMulticastOnPlayerScored(class AValPlayerState* PlayerState, int32 ScoreAmount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopGameState_TopazCTF", "NetMulticastOnPlayerScored");

	Params::ATopGameState_TopazCTF_NetMulticastOnPlayerScored_Params Parms{};

	Parms.PlayerState = PlayerState;
	Parms.ScoreAmount = ScoreAmount;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopGameState_TopazCTF.NetMulticastOnPlayerReturnedFlag
// (Net, NetReliable, Native, Event, NetMulticast, Protected)
// Parameters:
// class ATopPickup_Flag*             PickupFlag                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AValPlayerState*             PlayerState                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ATopGameState_TopazCTF::NetMulticastOnPlayerReturnedFlag(class ATopPickup_Flag* PickupFlag, class AValPlayerState* PlayerState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopGameState_TopazCTF", "NetMulticastOnPlayerReturnedFlag");

	Params::ATopGameState_TopazCTF_NetMulticastOnPlayerReturnedFlag_Params Parms{};

	Parms.PickupFlag = PickupFlag;
	Parms.PlayerState = PlayerState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopGameState_TopazCTF.NetMulticastOnFlagHeldChanged
// (Net, NetReliable, Native, Event, NetMulticast, Protected)
// Parameters:
// class ATopPickup_Flag*             PickupFlag                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Topaz_HolderInfo            HolderInfo                                                       (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct Topaz_HolderInfo            LastHolderInfo                                                   (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)

void ATopGameState_TopazCTF::NetMulticastOnFlagHeldChanged(class ATopPickup_Flag* PickupFlag, const struct Topaz_HolderInfo& HolderInfo, const struct Topaz_HolderInfo& LastHolderInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopGameState_TopazCTF", "NetMulticastOnFlagHeldChanged");

	Params::ATopGameState_TopazCTF_NetMulticastOnFlagHeldChanged_Params Parms{};

	Parms.PickupFlag = PickupFlag;
	Parms.HolderInfo = HolderInfo;
	Parms.LastHolderInfo = LastHolderInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopGameState_TopazCTF.GetTeamOnOffense
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 ATopGameState_TopazCTF::GetTeamOnOffense()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopGameState_TopazCTF", "GetTeamOnOffense");

	Params::ATopGameState_TopazCTF_GetTeamOnOffense_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Topaz.TopGameState_TopazCTF.GetStalemateTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 ATopGameState_TopazCTF::GetStalemateTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopGameState_TopazCTF", "GetStalemateTime");

	Params::ATopGameState_TopazCTF_GetStalemateTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Topaz.TopGameState_TopazCTF.GetRadarSensorByTeamDefinition
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        TeamDefinition                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ATopRadarSensor*             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ATopRadarSensor* ATopGameState_TopazCTF::GetRadarSensorByTeamDefinition(class FName& TeamDefinition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopGameState_TopazCTF", "GetRadarSensorByTeamDefinition");

	Params::ATopGameState_TopazCTF_GetRadarSensorByTeamDefinition_Params Parms{};

	Parms.TeamDefinition = TeamDefinition;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Topaz.TopGameState_TopazCTF.GetIsInStalemate
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ATopGameState_TopazCTF::GetIsInStalemate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopGameState_TopazCTF", "GetIsInStalemate");

	Params::ATopGameState_TopazCTF_GetIsInStalemate_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Topaz.TopGameState_TopazCTF.GetFlagStandData
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct Topaz_FlagStandData> OutFlagStandData                                                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void ATopGameState_TopazCTF::GetFlagStandData(TArray<struct Topaz_FlagStandData>* OutFlagStandData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopGameState_TopazCTF", "GetFlagStandData");

	Params::ATopGameState_TopazCTF_GetFlagStandData_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutFlagStandData != nullptr)
		*OutFlagStandData = std::move(Parms.OutFlagStandData);

}


// Function Topaz.TopGameState_TopazCTF.GetFlagPickups
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<class ATopPickup_Flag*>     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class ATopPickup_Flag*> ATopGameState_TopazCTF::GetFlagPickups()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopGameState_TopazCTF", "GetFlagPickups");

	Params::ATopGameState_TopazCTF_GetFlagPickups_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Topaz.TopGameState_TopazCTF.GetFlagHolders
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TMap<class AValCharacter*, class ATopPickup_Flag*>ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

TMap<class AValCharacter*, class ATopPickup_Flag*> ATopGameState_TopazCTF::GetFlagHolders()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopGameState_TopazCTF", "GetFlagHolders");

	Params::ATopGameState_TopazCTF_GetFlagHolders_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Topaz.TopGameState_TopazCTF.GetFlagByTeamDefinition
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        TeamDefinition                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ATopPickup_Flag*             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ATopPickup_Flag* ATopGameState_TopazCTF::GetFlagByTeamDefinition(class FName& TeamDefinition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopGameState_TopazCTF", "GetFlagByTeamDefinition");

	Params::ATopGameState_TopazCTF_GetFlagByTeamDefinition_Params Parms{};

	Parms.TeamDefinition = TeamDefinition;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Topaz.TopGameState_TopazCTF.GetCTFType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ECTFType                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ECTFType ATopGameState_TopazCTF::GetCTFType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopGameState_TopazCTF", "GetCTFType");

	Params::ATopGameState_TopazCTF_GetCTFType_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Topaz.TopOverlayComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UTopOverlayComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TopOverlayComponent");

	return Clss;
}


// TopOverlayComponent Topaz.Default__TopOverlayComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UTopOverlayComponent* UTopOverlayComponent::GetDefaultObj()
{
	static class UTopOverlayComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UTopOverlayComponent*>(UTopOverlayComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class Topaz.TopOverlayConfig
// (None)

class UClass* UTopOverlayConfig::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TopOverlayConfig");

	return Clss;
}


// TopOverlayConfig Topaz.Default__TopOverlayConfig
// (Public, ClassDefaultObject, ArchetypeObject)

class UTopOverlayConfig* UTopOverlayConfig::GetDefaultObj()
{
	static class UTopOverlayConfig* Default = nullptr;

	if (!Default)
		Default = static_cast<UTopOverlayConfig*>(UTopOverlayConfig::StaticClass()->DefaultObject);

	return Default;
}


// Class Topaz.TopOverlayDamage
// (None)

class UClass* UTopOverlayDamage::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TopOverlayDamage");

	return Clss;
}


// TopOverlayDamage Topaz.Default__TopOverlayDamage
// (Public, ClassDefaultObject, ArchetypeObject)

class UTopOverlayDamage* UTopOverlayDamage::GetDefaultObj()
{
	static class UTopOverlayDamage* Default = nullptr;

	if (!Default)
		Default = static_cast<UTopOverlayDamage*>(UTopOverlayDamage::StaticClass()->DefaultObject);

	return Default;
}


// Function Topaz.TopOverlayDamage.SetDamageData
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct Valhalla_DamageData         DamageData                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UTopOverlayDamage::SetDamageData(struct Valhalla_DamageData& DamageData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopOverlayDamage", "SetDamageData");

	Params::UTopOverlayDamage_SetDamageData_Params Parms{};

	Parms.DamageData = DamageData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Topaz.TopOverlayDamage.OnAnimComplete
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UTopOverlayDamage::OnAnimComplete()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopOverlayDamage", "OnAnimComplete");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class Topaz.TopOverlayHealth
// (None)

class UClass* UTopOverlayHealth::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TopOverlayHealth");

	return Clss;
}


// TopOverlayHealth Topaz.Default__TopOverlayHealth
// (Public, ClassDefaultObject, ArchetypeObject)

class UTopOverlayHealth* UTopOverlayHealth::GetDefaultObj()
{
	static class UTopOverlayHealth* Default = nullptr;

	if (!Default)
		Default = static_cast<UTopOverlayHealth*>(UTopOverlayHealth::StaticClass()->DefaultObject);

	return Default;
}


// Function Topaz.TopOverlayHealth.UpdateHealthMax
// (Final, Native, Public)
// Parameters:
// int32                              HealthMax                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTopOverlayHealth::UpdateHealthMax(int32 HealthMax)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopOverlayHealth", "UpdateHealthMax");

	Params::UTopOverlayHealth_UpdateHealthMax_Params Parms{};

	Parms.HealthMax = HealthMax;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopOverlayHealth.UpdateHealth
// (Final, Native, Public)
// Parameters:
// int32                              Health                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTopOverlayHealth::UpdateHealth(int32 Health)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopOverlayHealth", "UpdateHealth");

	Params::UTopOverlayHealth_UpdateHealth_Params Parms{};

	Parms.Health = Health;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopOverlayHealth.UpdateAlive
// (Final, Native, Public)
// Parameters:
// bool                               Alive                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTopOverlayHealth::UpdateAlive(bool Alive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopOverlayHealth", "UpdateAlive");

	Params::UTopOverlayHealth_UpdateAlive_Params Parms{};

	Parms.Alive = Alive;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopOverlayHealth.OnHealthPercentChanged
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// float                              HealthPercent                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTopOverlayHealth::OnHealthPercentChanged(float HealthPercent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopOverlayHealth", "OnHealthPercentChanged");

	Params::UTopOverlayHealth_OnHealthPercentChanged_Params Parms{};

	Parms.HealthPercent = HealthPercent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopOverlayHealth.OnHealthMaxChanged
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// int32                              HealthMax                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTopOverlayHealth::OnHealthMaxChanged(int32 HealthMax)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopOverlayHealth", "OnHealthMaxChanged");

	Params::UTopOverlayHealth_OnHealthMaxChanged_Params Parms{};

	Parms.HealthMax = HealthMax;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopOverlayHealth.OnHealthChanged
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// int32                              Health                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTopOverlayHealth::OnHealthChanged(int32 Health)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopOverlayHealth", "OnHealthChanged");

	Params::UTopOverlayHealth_OnHealthChanged_Params Parms{};

	Parms.Health = Health;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopOverlayHealth.OnAliveChanged
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// bool                               Alive                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTopOverlayHealth::OnAliveChanged(bool Alive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopOverlayHealth", "OnAliveChanged");

	Params::UTopOverlayHealth_OnAliveChanged_Params Parms{};

	Parms.Alive = Alive;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class Topaz.TopOverlayWidgetBase
// (None)

class UClass* UTopOverlayWidgetBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TopOverlayWidgetBase");

	return Clss;
}


// TopOverlayWidgetBase Topaz.Default__TopOverlayWidgetBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UTopOverlayWidgetBase* UTopOverlayWidgetBase::GetDefaultObj()
{
	static class UTopOverlayWidgetBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UTopOverlayWidgetBase*>(UTopOverlayWidgetBase::StaticClass()->DefaultObject);

	return Default;
}


// Function Topaz.TopOverlayWidgetBase.OnWorldLocationChanged
// (Native, Event, Protected, HasOutParams, HasDefaults, BlueprintEvent)
// Parameters:
// struct CoreUObject_Vector          WorldLocation                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTopOverlayWidgetBase::OnWorldLocationChanged(struct CoreUObject_Vector& WorldLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopOverlayWidgetBase", "OnWorldLocationChanged");

	Params::UTopOverlayWidgetBase_OnWorldLocationChanged_Params Parms{};

	Parms.WorldLocation = WorldLocation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopOverlayWidgetBase.OnVisibleChanged
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// bool                               Visible                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTopOverlayWidgetBase::OnVisibleChanged(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopOverlayWidgetBase", "OnVisibleChanged");

	Params::UTopOverlayWidgetBase_OnVisibleChanged_Params Parms{};

	Parms.Visible = Visible;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopOverlayWidgetBase.OnViewTargetDealtDamage
// (Native, Protected)
// Parameters:
// struct Valhalla_DamageData         DamageData                                                       (Parm, NativeAccessSpecifierPublic)
// class AActor*                      Target                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTopOverlayWidgetBase::OnViewTargetDealtDamage(const struct Valhalla_DamageData& DamageData, class AActor* Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopOverlayWidgetBase", "OnViewTargetDealtDamage");

	Params::UTopOverlayWidgetBase_OnViewTargetDealtDamage_Params Parms{};

	Parms.DamageData = DamageData;
	Parms.Target = Target;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopOverlayWidgetBase.OnViewTargetDamagedOwner
// (Native, Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct Valhalla_DamageData         DamageData                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UTopOverlayWidgetBase::OnViewTargetDamagedOwner(struct Valhalla_DamageData& DamageData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopOverlayWidgetBase", "OnViewTargetDamagedOwner");

	Params::UTopOverlayWidgetBase_OnViewTargetDamagedOwner_Params Parms{};

	Parms.DamageData = DamageData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopOverlayWidgetBase.OnViewTargetChanged
// (Native, Protected)
// Parameters:
// class AActor*                      NewTarget                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTopOverlayWidgetBase::OnViewTargetChanged(class AActor* NewTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopOverlayWidgetBase", "OnViewTargetChanged");

	Params::UTopOverlayWidgetBase_OnViewTargetChanged_Params Parms{};

	Parms.NewTarget = NewTarget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopOverlayWidgetBase.OnUserSettingsChanged
// (Native, Protected)
// Parameters:

void UTopOverlayWidgetBase::OnUserSettingsChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopOverlayWidgetBase", "OnUserSettingsChanged");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopOverlayWidgetBase.OnUpdateInterface
// (Native, Protected)
// Parameters:

void UTopOverlayWidgetBase::OnUpdateInterface()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopOverlayWidgetBase", "OnUpdateInterface");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopOverlayWidgetBase.OnTrackedTargetChanged
// (Native, Protected)
// Parameters:
// class AValCharacter*               Target                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTopOverlayWidgetBase::OnTrackedTargetChanged(class AValCharacter* Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopOverlayWidgetBase", "OnTrackedTargetChanged");

	Params::UTopOverlayWidgetBase_OnTrackedTargetChanged_Params Parms{};

	Parms.Target = Target;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopOverlayWidgetBase.OnTeamRelationChanged
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// enum class ETeamRelation           Relation                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTopOverlayWidgetBase::OnTeamRelationChanged(enum class ETeamRelation Relation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopOverlayWidgetBase", "OnTeamRelationChanged");

	Params::UTopOverlayWidgetBase_OnTeamRelationChanged_Params Parms{};

	Parms.Relation = Relation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopOverlayWidgetBase.OnScreenPositionChanged
// (Native, Event, Protected, HasOutParams, HasDefaults, BlueprintEvent)
// Parameters:
// struct CoreUObject_Vector2D        ScreenPosition                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTopOverlayWidgetBase::OnScreenPositionChanged(struct CoreUObject_Vector2D& ScreenPosition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopOverlayWidgetBase", "OnScreenPositionChanged");

	Params::UTopOverlayWidgetBase_OnScreenPositionChanged_Params Parms{};

	Parms.ScreenPosition = ScreenPosition;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopOverlayWidgetBase.OnOwningStateReady
// (Native, Protected)
// Parameters:
// class AValPlayerStateBase*         PlayerState                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTopOverlayWidgetBase::OnOwningStateReady(class AValPlayerStateBase* PlayerState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopOverlayWidgetBase", "OnOwningStateReady");

	Params::UTopOverlayWidgetBase_OnOwningStateReady_Params Parms{};

	Parms.PlayerState = PlayerState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopOverlayWidgetBase.OnOwnerTeamChanged
// (Native, Protected)
// Parameters:
// int32                              OldTeam                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NewTeam                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTopOverlayWidgetBase::OnOwnerTeamChanged(int32 OldTeam, int32 NewTeam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopOverlayWidgetBase", "OnOwnerTeamChanged");

	Params::UTopOverlayWidgetBase_OnOwnerTeamChanged_Params Parms{};

	Parms.OldTeam = OldTeam;
	Parms.NewTeam = NewTeam;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopOverlayWidgetBase.OnOwnerHealthMaxChanged
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// int32                              HealthMax                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTopOverlayWidgetBase::OnOwnerHealthMaxChanged(int32 HealthMax)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopOverlayWidgetBase", "OnOwnerHealthMaxChanged");

	Params::UTopOverlayWidgetBase_OnOwnerHealthMaxChanged_Params Parms{};

	Parms.HealthMax = HealthMax;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopOverlayWidgetBase.OnOwnerHealthChanged
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// int32                              Health                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTopOverlayWidgetBase::OnOwnerHealthChanged(int32 Health)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopOverlayWidgetBase", "OnOwnerHealthChanged");

	Params::UTopOverlayWidgetBase_OnOwnerHealthChanged_Params Parms{};

	Parms.Health = Health;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopOverlayWidgetBase.OnOwnerAliveChanged
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// bool                               Alive                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTopOverlayWidgetBase::OnOwnerAliveChanged(bool Alive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopOverlayWidgetBase", "OnOwnerAliveChanged");

	Params::UTopOverlayWidgetBase_OnOwnerAliveChanged_Params Parms{};

	Parms.Alive = Alive;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopOverlayWidgetBase.OnOffScreenChanged
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// bool                               Offscreen                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTopOverlayWidgetBase::OnOffScreenChanged(bool Offscreen)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopOverlayWidgetBase", "OnOffScreenChanged");

	Params::UTopOverlayWidgetBase_OnOffScreenChanged_Params Parms{};

	Parms.Offscreen = Offscreen;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopOverlayWidgetBase.OnLocalTeamChanged
// (Native, Protected)
// Parameters:
// int32                              OldTeam                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NewTeam                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTopOverlayWidgetBase::OnLocalTeamChanged(int32 OldTeam, int32 NewTeam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopOverlayWidgetBase", "OnLocalTeamChanged");

	Params::UTopOverlayWidgetBase_OnLocalTeamChanged_Params Parms{};

	Parms.OldTeam = OldTeam;
	Parms.NewTeam = NewTeam;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopOverlayWidgetBase.OnHoveredChanged
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// bool                               Hovered                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTopOverlayWidgetBase::OnHoveredChanged(bool Hovered)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopOverlayWidgetBase", "OnHoveredChanged");

	Params::UTopOverlayWidgetBase_OnHoveredChanged_Params Parms{};

	Parms.Hovered = Hovered;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopOverlayWidgetBase.OnHideHUDChanged
// (Native, Protected)
// Parameters:
// bool                               HideHUD                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTopOverlayWidgetBase::OnHideHUDChanged(bool HideHUD)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopOverlayWidgetBase", "OnHideHUDChanged");

	Params::UTopOverlayWidgetBase_OnHideHUDChanged_Params Parms{};

	Parms.HideHUD = HideHUD;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopOverlayWidgetBase.OnHealthMaxChanged
// (Native, Protected)
// Parameters:
// int32                              OldValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTopOverlayWidgetBase::OnHealthMaxChanged(int32 OldValue, int32 NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopOverlayWidgetBase", "OnHealthMaxChanged");

	Params::UTopOverlayWidgetBase_OnHealthMaxChanged_Params Parms{};

	Parms.OldValue = OldValue;
	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopOverlayWidgetBase.OnHealthChanged
// (Native, Protected)
// Parameters:
// int32                              OldValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTopOverlayWidgetBase::OnHealthChanged(int32 OldValue, int32 NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopOverlayWidgetBase", "OnHealthChanged");

	Params::UTopOverlayWidgetBase_OnHealthChanged_Params Parms{};

	Parms.OldValue = OldValue;
	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopOverlayWidgetBase.OnDistanceChanged
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// float                              DistanceSq                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTopOverlayWidgetBase::OnDistanceChanged(float DistanceSq)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopOverlayWidgetBase", "OnDistanceChanged");

	Params::UTopOverlayWidgetBase_OnDistanceChanged_Params Parms{};

	Parms.DistanceSq = DistanceSq;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopOverlayWidgetBase.OnDisplayNameChanged
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// class FString                      DisplayName                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTopOverlayWidgetBase::OnDisplayNameChanged(const class FString& DisplayName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopOverlayWidgetBase", "OnDisplayNameChanged");

	Params::UTopOverlayWidgetBase_OnDisplayNameChanged_Params Parms{};

	Parms.DisplayName = DisplayName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopOverlayWidgetBase.OnDirectionChanged
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// float                              Direction                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTopOverlayWidgetBase::OnDirectionChanged(float Direction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopOverlayWidgetBase", "OnDirectionChanged");

	Params::UTopOverlayWidgetBase_OnDirectionChanged_Params Parms{};

	Parms.Direction = Direction;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopOverlayWidgetBase.OnAimingChanged
// (Native, Protected)
// Parameters:
// bool                               Aiming                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTopOverlayWidgetBase::OnAimingChanged(bool Aiming)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopOverlayWidgetBase", "OnAimingChanged");

	Params::UTopOverlayWidgetBase_OnAimingChanged_Params Parms{};

	Parms.Aiming = Aiming;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopOverlayWidgetBase.GetOwningPlayerState
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// class AValPlayerState*             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AValPlayerState* UTopOverlayWidgetBase::GetOwningPlayerState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopOverlayWidgetBase", "GetOwningPlayerState");

	Params::UTopOverlayWidgetBase_GetOwningPlayerState_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Topaz.TopOverlayWidgetBase.GetOwningActor
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AActor* UTopOverlayWidgetBase::GetOwningActor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopOverlayWidgetBase", "GetOwningActor");

	Params::UTopOverlayWidgetBase_GetOwningActor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Topaz.TopOverlayWidgetBase.GetLocalViewTarget
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// class AValCharacter*               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AValCharacter* UTopOverlayWidgetBase::GetLocalViewTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopOverlayWidgetBase", "GetLocalViewTarget");

	Params::UTopOverlayWidgetBase_GetLocalViewTarget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Topaz.TopOverlayWidgetBase.GetLocalPlayerController
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// class AValPlayerController*        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AValPlayerController* UTopOverlayWidgetBase::GetLocalPlayerController()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopOverlayWidgetBase", "GetLocalPlayerController");

	Params::UTopOverlayWidgetBase_GetLocalPlayerController_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Topaz.TopOverlayWidgetBase.GetLocalPlayer
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// class ULocalPlayer*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULocalPlayer* UTopOverlayWidgetBase::GetLocalPlayer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopOverlayWidgetBase", "GetLocalPlayer");

	Params::UTopOverlayWidgetBase_GetLocalPlayer_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Topaz.TopOverlayWidget
// (None)

class UClass* UTopOverlayWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TopOverlayWidget");

	return Clss;
}


// TopOverlayWidget Topaz.Default__TopOverlayWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UTopOverlayWidget* UTopOverlayWidget::GetDefaultObj()
{
	static class UTopOverlayWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UTopOverlayWidget*>(UTopOverlayWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function Topaz.TopOverlayWidget.OnDamageAnimationComplete
// (Native, Protected)
// Parameters:
// class UTopOverlayDamage*           DamageWidget                                                     (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTopOverlayWidget::OnDamageAnimationComplete(class UTopOverlayDamage* DamageWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopOverlayWidget", "OnDamageAnimationComplete");

	Params::UTopOverlayWidget_OnDamageAnimationComplete_Params Parms{};

	Parms.DamageWidget = DamageWidget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopOverlayWidget.GetPositionWidgetPanel
// (Final, Native, Protected)
// Parameters:
// class UCanvasPanelSlot*            ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCanvasPanelSlot* UTopOverlayWidget::GetPositionWidgetPanel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopOverlayWidget", "GetPositionWidgetPanel");

	Params::UTopOverlayWidget_GetPositionWidgetPanel_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Topaz.TopOverlayWidget_Character
// (None)

class UClass* UTopOverlayWidget_Character::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TopOverlayWidget_Character");

	return Clss;
}


// TopOverlayWidget_Character Topaz.Default__TopOverlayWidget_Character
// (Public, ClassDefaultObject, ArchetypeObject)

class UTopOverlayWidget_Character* UTopOverlayWidget_Character::GetDefaultObj()
{
	static class UTopOverlayWidget_Character* Default = nullptr;

	if (!Default)
		Default = static_cast<UTopOverlayWidget_Character*>(UTopOverlayWidget_Character::StaticClass()->DefaultObject);

	return Default;
}


// Function Topaz.TopOverlayWidget_Character.OnCharacterClassChanged
// (Native, Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct GameplayTags_GameplayTag    CharacterClass                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTopOverlayWidget_Character::OnCharacterClassChanged(struct GameplayTags_GameplayTag& CharacterClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopOverlayWidget_Character", "OnCharacterClassChanged");

	Params::UTopOverlayWidget_Character_OnCharacterClassChanged_Params Parms{};

	Parms.CharacterClass = CharacterClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class Topaz.TopOverlayWidget_Flag
// (None)

class UClass* UTopOverlayWidget_Flag::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TopOverlayWidget_Flag");

	return Clss;
}


// TopOverlayWidget_Flag Topaz.Default__TopOverlayWidget_Flag
// (Public, ClassDefaultObject, ArchetypeObject)

class UTopOverlayWidget_Flag* UTopOverlayWidget_Flag::GetDefaultObj()
{
	static class UTopOverlayWidget_Flag* Default = nullptr;

	if (!Default)
		Default = static_cast<UTopOverlayWidget_Flag*>(UTopOverlayWidget_Flag::StaticClass()->DefaultObject);

	return Default;
}


// Class Topaz.TopOverlayWidget_Turret
// (None)

class UClass* UTopOverlayWidget_Turret::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TopOverlayWidget_Turret");

	return Clss;
}


// TopOverlayWidget_Turret Topaz.Default__TopOverlayWidget_Turret
// (Public, ClassDefaultObject, ArchetypeObject)

class UTopOverlayWidget_Turret* UTopOverlayWidget_Turret::GetDefaultObj()
{
	static class UTopOverlayWidget_Turret* Default = nullptr;

	if (!Default)
		Default = static_cast<UTopOverlayWidget_Turret*>(UTopOverlayWidget_Turret::StaticClass()->DefaultObject);

	return Default;
}


// Class Topaz.TopPickup
// (Actor)

class UClass* ATopPickup::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TopPickup");

	return Clss;
}


// TopPickup Topaz.Default__TopPickup
// (Public, ClassDefaultObject, ArchetypeObject)

class ATopPickup* ATopPickup::GetDefaultObj()
{
	static class ATopPickup* Default = nullptr;

	if (!Default)
		Default = static_cast<ATopPickup*>(ATopPickup::StaticClass()->DefaultObject);

	return Default;
}


// Class Topaz.TopPickup_Flag
// (Actor)

class UClass* ATopPickup_Flag::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TopPickup_Flag");

	return Clss;
}


// TopPickup_Flag Topaz.Default__TopPickup_Flag
// (Public, ClassDefaultObject, ArchetypeObject)

class ATopPickup_Flag* ATopPickup_Flag::GetDefaultObj()
{
	static class ATopPickup_Flag* Default = nullptr;

	if (!Default)
		Default = static_cast<ATopPickup_Flag*>(ATopPickup_Flag::StaticClass()->DefaultObject);

	return Default;
}


// Function Topaz.TopPickup_Flag.UpdateTeamColor
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void ATopPickup_Flag::UpdateTeamColor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopPickup_Flag", "UpdateTeamColor");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopPickup_Flag.UpdateFriendlyOrEnemy
// (Native, Protected, BlueprintCallable)
// Parameters:
// class AActor*                      ViewTarget                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ATopPickup_Flag::UpdateFriendlyOrEnemy(class AActor* ViewTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopPickup_Flag", "UpdateFriendlyOrEnemy");

	Params::ATopPickup_Flag_UpdateFriendlyOrEnemy_Params Parms{};

	Parms.ViewTarget = ViewTarget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopPickup_Flag.SetResetTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewResetTime                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ATopPickup_Flag::SetResetTime(float NewResetTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopPickup_Flag", "SetResetTime");

	Params::ATopPickup_Flag_SetResetTime_Params Parms{};

	Parms.NewResetTime = NewResetTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopPickup_Flag.SetIsCapturable
// (Final, Native, Protected)
// Parameters:
// bool                               Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ATopPickup_Flag::SetIsCapturable(bool Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopPickup_Flag", "SetIsCapturable");

	Params::ATopPickup_Flag_SetIsCapturable_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopPickup_Flag.SetHeldBy
// (Final, Native, Public, HasOutParams)
// Parameters:
// struct Topaz_HolderInfo            Holder                                                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void ATopPickup_Flag::SetHeldBy(struct Topaz_HolderInfo& Holder)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopPickup_Flag", "SetHeldBy");

	Params::ATopPickup_Flag_SetHeldBy_Params Parms{};

	Parms.Holder = Holder;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopPickup_Flag.SetFlagHidden
// (Final, Native, Public)
// Parameters:
// bool                               bShouldHide                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ATopPickup_Flag::SetFlagHidden(bool bShouldHide)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopPickup_Flag", "SetFlagHidden");

	Params::ATopPickup_Flag_SetFlagHidden_Params Parms{};

	Parms.bShouldHide = bShouldHide;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopPickup_Flag.ReturnToStart
// (Native, Public, BlueprintCallable)
// Parameters:

void ATopPickup_Flag::ReturnToStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopPickup_Flag", "ReturnToStart");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopPickup_Flag.ResetTimerFinished
// (Final, Native, Protected)
// Parameters:

void ATopPickup_Flag::ResetTimerFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopPickup_Flag", "ResetTimerFinished");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopPickup_Flag.ResetLastFlagHolder
// (Final, Native, Protected)
// Parameters:
// bool                               bOverlapCheck                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ATopPickup_Flag::ResetLastFlagHolder(bool bOverlapCheck)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopPickup_Flag", "ResetLastFlagHolder");

	Params::ATopPickup_Flag_ResetLastFlagHolder_Params Parms{};

	Parms.bOverlapCheck = bOverlapCheck;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopPickup_Flag.OnViewTargetTeamChanged
// (Native, Protected)
// Parameters:
// int32                              OldTeam                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NewTeam                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ATopPickup_Flag::OnViewTargetTeamChanged(int32 OldTeam, int32 NewTeam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopPickup_Flag", "OnViewTargetTeamChanged");

	Params::ATopPickup_Flag_OnViewTargetTeamChanged_Params Parms{};

	Parms.OldTeam = OldTeam;
	Parms.NewTeam = NewTeam;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopPickup_Flag.OnViewTargetChanged
// (Native, Protected)
// Parameters:
// class AActor*                      NewViewTarget                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ATopPickup_Flag::OnViewTargetChanged(class AActor* NewViewTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopPickup_Flag", "OnViewTargetChanged");

	Params::ATopPickup_Flag_OnViewTargetChanged_Params Parms{};

	Parms.NewViewTarget = NewViewTarget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopPickup_Flag.OnTeamRegistered
// (Final, Native, Protected)
// Parameters:
// int32                              TeamId                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ATeamState*                  TeamState                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ATopPickup_Flag::OnTeamRegistered(int32 TeamId, class ATeamState* TeamState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopPickup_Flag", "OnTeamRegistered");

	Params::ATopPickup_Flag_OnTeamRegistered_Params Parms{};

	Parms.TeamId = TeamId;
	Parms.TeamState = TeamState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopPickup_Flag.OnRep_TeamId
// (Final, Native, Private)
// Parameters:
// int32                              OldTeamId                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ATopPickup_Flag::OnRep_TeamId(int32 OldTeamId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopPickup_Flag", "OnRep_TeamId");

	Params::ATopPickup_Flag_OnRep_TeamId_Params Parms{};

	Parms.OldTeamId = OldTeamId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopPickup_Flag.OnRep_ResetTime
// (Final, Native, Protected)
// Parameters:

void ATopPickup_Flag::OnRep_ResetTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopPickup_Flag", "OnRep_ResetTime");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopPickup_Flag.OnRep_HeldBy
// (Final, Native, Protected)
// Parameters:
// struct Topaz_HolderInfo            LastHolderInfo                                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)

void ATopPickup_Flag::OnRep_HeldBy(const struct Topaz_HolderInfo& LastHolderInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopPickup_Flag", "OnRep_HeldBy");

	Params::ATopPickup_Flag_OnRep_HeldBy_Params Parms{};

	Parms.LastHolderInfo = LastHolderInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopPickup_Flag.OnRep_CapturableInfo
// (Final, Native, Protected)
// Parameters:

void ATopPickup_Flag::OnRep_CapturableInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopPickup_Flag", "OnRep_CapturableInfo");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopPickup_Flag.OnPawnControllerChanged
// (Native, Protected)
// Parameters:
// class APawn*                       Pawn                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AController*                 Controller                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ATopPickup_Flag::OnPawnControllerChanged(class APawn* Pawn, class AController* Controller)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopPickup_Flag", "OnPawnControllerChanged");

	Params::ATopPickup_Flag_OnPawnControllerChanged_Params Parms{};

	Parms.Pawn = Pawn;
	Parms.Controller = Controller;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopPickup_Flag.OnHolderForcedToDropFlag
// (Final, Native, Protected, HasDefaults)
// Parameters:
// struct CoreUObject_Vector          Velocity                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ATopPickup_Flag::OnHolderForcedToDropFlag(const struct CoreUObject_Vector& Velocity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopPickup_Flag", "OnHolderForcedToDropFlag");

	Params::ATopPickup_Flag_OnHolderForcedToDropFlag_Params Parms{};

	Parms.Velocity = Velocity;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopPickup_Flag.OnHolderEndPlay
// (Final, Native, Protected)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EEndPlayReason          EndReason                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ATopPickup_Flag::OnHolderEndPlay(class AActor* Actor, enum class EEndPlayReason EndReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopPickup_Flag", "OnHolderEndPlay");

	Params::ATopPickup_Flag_OnHolderEndPlay_Params Parms{};

	Parms.Actor = Actor;
	Parms.EndReason = EndReason;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopPickup_Flag.OnHolderDied
// (Final, Native, Protected)
// Parameters:
// float                              TimeToRespawn                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AValCharacter*               ValCharacter                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ATopPickup_Flag::OnHolderDied(float TimeToRespawn, class AValCharacter* ValCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopPickup_Flag", "OnHolderDied");

	Params::ATopPickup_Flag_OnHolderDied_Params Parms{};

	Parms.TimeToRespawn = TimeToRespawn;
	Parms.ValCharacter = ValCharacter;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopPickup_Flag.OnGameStateSet
// (Final, Native, Public)
// Parameters:
// class AGameStateBase*              GameState                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ATopPickup_Flag::OnGameStateSet(class AGameStateBase* GameState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopPickup_Flag", "OnGameStateSet");

	Params::ATopPickup_Flag_OnGameStateSet_Params Parms{};

	Parms.GameState = GameState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopPickup_Flag.OnBeginOverlap
// (Native, Public, HasOutParams)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      OtherActor                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         OtherComp                                                        (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              OtherBodyIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bFromSweep                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Engine_HitResult            SweepResult                                                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void ATopPickup_Flag::OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct Engine_HitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopPickup_Flag", "OnBeginOverlap");

	Params::ATopPickup_Flag_OnBeginOverlap_Params Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = SweepResult;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopPickup_Flag.MulticastFlagReset
// (Net, NetReliable, Native, Event, NetMulticast, Protected)
// Parameters:

void ATopPickup_Flag::MulticastFlagReset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopPickup_Flag", "MulticastFlagReset");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopPickup_Flag.IsCapturable
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ATopPickup_Flag::IsCapturable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopPickup_Flag", "IsCapturable");

	Params::ATopPickup_Flag_IsCapturable_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Topaz.TopPickup_Flag.IsAllowedToPickup
// (Native, Protected)
// Parameters:
// class AValCharacter*               ValCharacter                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ATopPickup_Flag::IsAllowedToPickup(class AValCharacter* ValCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopPickup_Flag", "IsAllowedToPickup");

	Params::ATopPickup_Flag_IsAllowedToPickup_Params Parms{};

	Parms.ValCharacter = ValCharacter;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Topaz.TopPickup_Flag.GrantFlagAccolade
// (Final, Native, Protected)
// Parameters:
// class AValCharacter*               Character                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EAccoladeType           AccoladeType                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ATopPickup_Flag::GrantFlagAccolade(class AValCharacter* Character, enum class EAccoladeType AccoladeType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopPickup_Flag", "GrantFlagAccolade");

	Params::ATopPickup_Flag_GrantFlagAccolade_Params Parms{};

	Parms.Character = Character;
	Parms.AccoladeType = AccoladeType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopPickup_Flag.GetResetTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float ATopPickup_Flag::GetResetTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopPickup_Flag", "GetResetTime");

	Params::ATopPickup_Flag_GetResetTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Topaz.TopPickup_Flag.GetHeldBy
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct Topaz_HolderInfo            ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct Topaz_HolderInfo ATopPickup_Flag::GetHeldBy()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopPickup_Flag", "GetHeldBy");

	Params::ATopPickup_Flag_GetHeldBy_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Topaz.TopPickup_Flag.ForceReturnFlag
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AValCharacter*               ReturningCharacter                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ATopPickup_Flag::ForceReturnFlag(class AValCharacter* ReturningCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopPickup_Flag", "ForceReturnFlag");

	Params::ATopPickup_Flag_ForceReturnFlag_Params Parms{};

	Parms.ReturningCharacter = ReturningCharacter;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopPickup_Flag.FailsafeCheck
// (Final, Native, Public)
// Parameters:

void ATopPickup_Flag::FailsafeCheck()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopPickup_Flag", "FailsafeCheck");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopPickup_Flag.EventUpdateFriendlyOrEnemy
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bFriendly                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ATopPickup_Flag::EventUpdateFriendlyOrEnemy(bool bFriendly)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopPickup_Flag", "EventUpdateFriendlyOrEnemy");

	Params::ATopPickup_Flag_EventUpdateFriendlyOrEnemy_Params Parms{};

	Parms.bFriendly = bFriendly;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Topaz.TopPickup_Flag.EventOnDropped
// (Event, Protected, BlueprintEvent)
// Parameters:

void ATopPickup_Flag::EventOnDropped()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopPickup_Flag", "EventOnDropped");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Topaz.TopPickup_Flag.EventHeldBy
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct Topaz_HolderInfo            NewHolderInfo                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct Topaz_HolderInfo            LastHolderInfo                                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)

void ATopPickup_Flag::EventHeldBy(const struct Topaz_HolderInfo& NewHolderInfo, const struct Topaz_HolderInfo& LastHolderInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopPickup_Flag", "EventHeldBy");

	Params::ATopPickup_Flag_EventHeldBy_Params Parms{};

	Parms.NewHolderInfo = NewHolderInfo;
	Parms.LastHolderInfo = LastHolderInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Topaz.TopPickup_Flag.Drop
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               bScored                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInheritVelocity                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bForceReturnToStart                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ATopPickup_Flag::Drop(bool bScored, bool bInheritVelocity, bool bForceReturnToStart)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopPickup_Flag", "Drop");

	Params::ATopPickup_Flag_Drop_Params Parms{};

	Parms.bScored = bScored;
	Parms.bInheritVelocity = bInheritVelocity;
	Parms.bForceReturnToStart = bForceReturnToStart;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopPickup_Flag.CancelResetTimer
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void ATopPickup_Flag::CancelResetTimer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopPickup_Flag", "CancelResetTimer");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class Topaz.TopPickup_RefillNugget
// (Actor)

class UClass* ATopPickup_RefillNugget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TopPickup_RefillNugget");

	return Clss;
}


// TopPickup_RefillNugget Topaz.Default__TopPickup_RefillNugget
// (Public, ClassDefaultObject, ArchetypeObject)

class ATopPickup_RefillNugget* ATopPickup_RefillNugget::GetDefaultObj()
{
	static class ATopPickup_RefillNugget* Default = nullptr;

	if (!Default)
		Default = static_cast<ATopPickup_RefillNugget*>(ATopPickup_RefillNugget::StaticClass()->DefaultObject);

	return Default;
}


// Function Topaz.TopPickup_RefillNugget.ReceiveOnNuggetSetHidden
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasHidden                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ATopPickup_RefillNugget::ReceiveOnNuggetSetHidden(bool bWasHidden)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopPickup_RefillNugget", "ReceiveOnNuggetSetHidden");

	Params::ATopPickup_RefillNugget_ReceiveOnNuggetSetHidden_Params Parms{};

	Parms.bWasHidden = bWasHidden;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Topaz.TopPickup_RefillNugget.ReceiveOnDestroy
// (Event, Protected, BlueprintEvent)
// Parameters:

void ATopPickup_RefillNugget::ReceiveOnDestroy()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopPickup_RefillNugget", "ReceiveOnDestroy");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Topaz.TopPickup_RefillNugget.OnBeginOverlap
// (Native, Public, HasOutParams)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      OtherActor                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         OtherComp                                                        (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              OtherBodyIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bFromSweep                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Engine_HitResult            SweepResult                                                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void ATopPickup_RefillNugget::OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct Engine_HitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopPickup_RefillNugget", "OnBeginOverlap");

	Params::ATopPickup_RefillNugget_OnBeginOverlap_Params Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = SweepResult;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopPickup_RefillNugget.NetMulticastOnNuggetSetHidden
// (Net, NetReliable, Native, Event, NetMulticast, Protected)
// Parameters:
// bool                               bWasHidden                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ATopPickup_RefillNugget::NetMulticastOnNuggetSetHidden(bool bWasHidden)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopPickup_RefillNugget", "NetMulticastOnNuggetSetHidden");

	Params::ATopPickup_RefillNugget_NetMulticastOnNuggetSetHidden_Params Parms{};

	Parms.bWasHidden = bWasHidden;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopPickup_RefillNugget.NetMulticastDestroyNugget
// (Net, NetReliable, Native, Event, NetMulticast, Protected)
// Parameters:

void ATopPickup_RefillNugget::NetMulticastDestroyNugget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopPickup_RefillNugget", "NetMulticastDestroyNugget");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class Topaz.TopPlayerControllerBase
// (Actor, PlayerController)

class UClass* ATopPlayerControllerBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TopPlayerControllerBase");

	return Clss;
}


// TopPlayerControllerBase Topaz.Default__TopPlayerControllerBase
// (Public, ClassDefaultObject, ArchetypeObject)

class ATopPlayerControllerBase* ATopPlayerControllerBase::GetDefaultObj()
{
	static class ATopPlayerControllerBase* Default = nullptr;

	if (!Default)
		Default = static_cast<ATopPlayerControllerBase*>(ATopPlayerControllerBase::StaticClass()->DefaultObject);

	return Default;
}


// Class Topaz.TopPlayerController
// (Actor, PlayerController)

class UClass* ATopPlayerController::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TopPlayerController");

	return Clss;
}


// TopPlayerController Topaz.Default__TopPlayerController
// (Public, ClassDefaultObject, ArchetypeObject)

class ATopPlayerController* ATopPlayerController::GetDefaultObj()
{
	static class ATopPlayerController* Default = nullptr;

	if (!Default)
		Default = static_cast<ATopPlayerController*>(ATopPlayerController::StaticClass()->DefaultObject);

	return Default;
}


// Function Topaz.TopPlayerController.ToggleThirdPerson
// (Native, Protected)
// Parameters:

void ATopPlayerController::ToggleThirdPerson()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopPlayerController", "ToggleThirdPerson");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopPlayerController.ServerSetPlayerVisible
// (Net, NetReliable, Native, Event, Public, NetServer)
// Parameters:
// class ATopPlayerState*             PlayerStateToSet                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bVisible                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ATopPlayerController::ServerSetPlayerVisible(class ATopPlayerState* PlayerStateToSet, bool bVisible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopPlayerController", "ServerSetPlayerVisible");

	Params::ATopPlayerController_ServerSetPlayerVisible_Params Parms{};

	Parms.PlayerStateToSet = PlayerStateToSet;
	Parms.bVisible = bVisible;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopPlayerController.ServerSelectPerkForSlot
// (Net, NetReliable, Native, Event, Public, NetServer)
// Parameters:
// int32                              PerkId                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GameplayTags_GameplayTag    SlotTag                                                          (ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ATopPlayerController::ServerSelectPerkForSlot(int32 PerkId, struct GameplayTags_GameplayTag& SlotTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopPlayerController", "ServerSelectPerkForSlot");

	Params::ATopPlayerController_ServerSelectPerkForSlot_Params Parms{};

	Parms.PerkId = PerkId;
	Parms.SlotTag = SlotTag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopPlayerController.SelectPerkForSlot
// (Final, Native, Protected, HasOutParams)
// Parameters:
// int32                              PerkId                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GameplayTags_GameplayTag    SlotTag                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ATopPlayerController::SelectPerkForSlot(int32& PerkId, struct GameplayTags_GameplayTag& SlotTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopPlayerController", "SelectPerkForSlot");

	Params::ATopPlayerController_SelectPerkForSlot_Params Parms{};

	Parms.PerkId = PerkId;
	Parms.SlotTag = SlotTag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Topaz.TopPlayerController.OnRep_AvailablePerkSlots
// (Native, Protected)
// Parameters:

void ATopPlayerController::OnRep_AvailablePerkSlots()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopPlayerController", "OnRep_AvailablePerkSlots");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction Topaz.TopPlayerController.OnPerkSlotsUpdated__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// struct GameplayTags_GameplayTagContainerAvailablePerkSlots                                               (Parm, NativeAccessSpecifierPublic)

void ATopPlayerController::OnPerkSlotsUpdated__DelegateSignature(const struct GameplayTags_GameplayTagContainer& AvailablePerkSlots)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopPlayerController", "OnPerkSlotsUpdated__DelegateSignature");

	Params::ATopPlayerController_OnPerkSlotsUpdated__DelegateSignature_Params Parms{};

	Parms.AvailablePerkSlots = AvailablePerkSlots;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Topaz.TopPlayerController.IsThirdPerson
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ATopPlayerController::IsThirdPerson()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopPlayerController", "IsThirdPerson");

	Params::ATopPlayerController_IsThirdPerson_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Topaz.TopPlayerController.GetAvailablePerkSlots
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct GameplayTags_GameplayTagContainerReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct GameplayTags_GameplayTagContainer ATopPlayerController::GetAvailablePerkSlots()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopPlayerController", "GetAvailablePerkSlots");

	Params::ATopPlayerController_GetAvailablePerkSlots_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Topaz.TopPlayerController.AddAvailablePerkSlot
// (Final, Native, Public)
// Parameters:
// struct GameplayTags_GameplayTag    PerkSlotToAdd                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ATopPlayerController::AddAvailablePerkSlot(const struct GameplayTags_GameplayTag& PerkSlotToAdd)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopPlayerController", "AddAvailablePerkSlot");

	Params::ATopPlayerController_AddAvailablePerkSlot_Params Parms{};

	Parms.PerkSlotToAdd = PerkSlotToAdd;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Topaz.TopPlayerInfo
// (None)

class UClass* UTopPlayerInfo::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TopPlayerInfo");

	return Clss;
}


// TopPlayerInfo Topaz.Default__TopPlayerInfo
// (Public, ClassDefaultObject, ArchetypeObject)

class UTopPlayerInfo* UTopPlayerInfo::GetDefaultObj()
{
	static class UTopPlayerInfo* Default = nullptr;

	if (!Default)
		Default = static_cast<UTopPlayerInfo*>(UTopPlayerInfo::StaticClass()->DefaultObject);

	return Default;
}


// Function Topaz.TopPlayerInfo.GetTopSettingsSubsystem
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UTopSettingsSubsystem*       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTopSettingsSubsystem* UTopPlayerInfo::GetTopSettingsSubsystem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopPlayerInfo", "GetTopSettingsSubsystem");

	Params::UTopPlayerInfo_GetTopSettingsSubsystem_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Topaz.TopPlayerInfoSubsystem
// (None)

class UClass* UTopPlayerInfoSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TopPlayerInfoSubsystem");

	return Clss;
}


// TopPlayerInfoSubsystem Topaz.Default__TopPlayerInfoSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UTopPlayerInfoSubsystem* UTopPlayerInfoSubsystem::GetDefaultObj()
{
	static class UTopPlayerInfoSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UTopPlayerInfoSubsystem*>(UTopPlayerInfoSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Class Topaz.TopSettingsSubsystem
// (None)

class UClass* UTopSettingsSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TopSettingsSubsystem");

	return Clss;
}


// TopSettingsSubsystem Topaz.Default__TopSettingsSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UTopSettingsSubsystem* UTopSettingsSubsystem::GetDefaultObj()
{
	static class UTopSettingsSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UTopSettingsSubsystem*>(UTopSettingsSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Class Topaz.TopFlagStand
// (Actor)

class UClass* ATopFlagStand::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TopFlagStand");

	return Clss;
}


// TopFlagStand Topaz.Default__TopFlagStand
// (Public, ClassDefaultObject, ArchetypeObject)

class ATopFlagStand* ATopFlagStand::GetDefaultObj()
{
	static class ATopFlagStand* Default = nullptr;

	if (!Default)
		Default = static_cast<ATopFlagStand*>(ATopFlagStand::StaticClass()->DefaultObject);

	return Default;
}


// Function Topaz.TopFlagStand.OnFlagReturned
// (Native, Public)
// Parameters:
// class AValCharacter*               ReturningChar                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ATopPickup_Flag*             PickupFlag                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ATopFlagStand::OnFlagReturned(class AValCharacter* ReturningChar, class ATopPickup_Flag* PickupFlag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopFlagStand", "OnFlagReturned");

	Params::ATopFlagStand_OnFlagReturned_Params Parms{};

	Parms.ReturningChar = ReturningChar;
	Parms.PickupFlag = PickupFlag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopFlagStand.OnFlagHeldByChanged
// (Native, Public, HasOutParams)
// Parameters:
// class ATopPickup_Flag*             PickupFlag                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Topaz_HolderInfo            HolderInfo                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct Topaz_HolderInfo            LastHolderInfo                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void ATopFlagStand::OnFlagHeldByChanged(class ATopPickup_Flag* PickupFlag, struct Topaz_HolderInfo& HolderInfo, struct Topaz_HolderInfo& LastHolderInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopFlagStand", "OnFlagHeldByChanged");

	Params::ATopFlagStand_OnFlagHeldByChanged_Params Parms{};

	Parms.PickupFlag = PickupFlag;
	Parms.HolderInfo = HolderInfo;
	Parms.LastHolderInfo = LastHolderInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopFlagStand.OnBeginOverlap
// (Native, Public, HasOutParams)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      OtherActor                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         OtherComp                                                        (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              OtherBodyIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bFromSweep                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Engine_HitResult            SweepResult                                                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void ATopFlagStand::OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct Engine_HitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopFlagStand", "OnBeginOverlap");

	Params::ATopFlagStand_OnBeginOverlap_Params Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = SweepResult;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopFlagStand.GetCollisionComp
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UBoxComponent*               ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UBoxComponent* ATopFlagStand::GetCollisionComp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopFlagStand", "GetCollisionComp");

	Params::ATopFlagStand_GetCollisionComp_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Topaz.TopFlagStand.CanTeamScore
// (Final, Native, Public, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ATopFlagStand::CanTeamScore()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopFlagStand", "CanTeamScore");

	Params::ATopFlagStand_CanTeamScore_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Topaz.TopLooseLootPickup
// (Actor)

class UClass* ATopLooseLootPickup::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TopLooseLootPickup");

	return Clss;
}


// TopLooseLootPickup Topaz.Default__TopLooseLootPickup
// (Public, ClassDefaultObject, ArchetypeObject)

class ATopLooseLootPickup* ATopLooseLootPickup::GetDefaultObj()
{
	static class ATopLooseLootPickup* Default = nullptr;

	if (!Default)
		Default = static_cast<ATopLooseLootPickup*>(ATopLooseLootPickup::StaticClass()->DefaultObject);

	return Default;
}


// Function Topaz.TopLooseLootPickup.SetLaunchVelocity
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct CoreUObject_Vector          Velocity                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ATopLooseLootPickup::SetLaunchVelocity(const struct CoreUObject_Vector& Velocity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopLooseLootPickup", "SetLaunchVelocity");

	Params::ATopLooseLootPickup_SetLaunchVelocity_Params Parms{};

	Parms.Velocity = Velocity;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopLooseLootPickup.SetCachedChanneler
// (Native, Public, BlueprintCallable)
// Parameters:
// class AValCharacter*               Initiator                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ATopLooseLootPickup::SetCachedChanneler(class AValCharacter* Initiator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopLooseLootPickup", "SetCachedChanneler");

	Params::ATopLooseLootPickup_SetCachedChanneler_Params Parms{};

	Parms.Initiator = Initiator;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopLooseLootPickup.OnRep_StoredInventoryItems
// (Native, Protected)
// Parameters:

void ATopLooseLootPickup::OnRep_StoredInventoryItems()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopLooseLootPickup", "OnRep_StoredInventoryItems");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Topaz.TopLooseLootPickup.OnLootGenerated
// (Event, Protected, BlueprintEvent)
// Parameters:

void ATopLooseLootPickup::OnLootGenerated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopLooseLootPickup", "OnLootGenerated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Topaz.TopLooseLootPickup.GetInteractComponent
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPrimitiveComponent*         ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UPrimitiveComponent* ATopLooseLootPickup::GetInteractComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopLooseLootPickup", "GetInteractComponent");

	Params::ATopLooseLootPickup_GetInteractComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Topaz.TopLooseLootPickup.GetCollisionComp
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UBoxComponent*               ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UBoxComponent* ATopLooseLootPickup::GetCollisionComp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopLooseLootPickup", "GetCollisionComp");

	Params::ATopLooseLootPickup_GetCollisionComp_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Topaz.TopLooseLootPickup.GetChannelTime
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AValCharacter*               Initiator                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float ATopLooseLootPickup::GetChannelTime(class AValCharacter* Initiator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopLooseLootPickup", "GetChannelTime");

	Params::ATopLooseLootPickup_GetChannelTime_Params Parms{};

	Parms.Initiator = Initiator;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Topaz.TopLooseLootPickup.GetCachedChanneler
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AValCharacter*               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AValCharacter* ATopLooseLootPickup::GetCachedChanneler()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopLooseLootPickup", "GetCachedChanneler");

	Params::ATopLooseLootPickup_GetCachedChanneler_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


