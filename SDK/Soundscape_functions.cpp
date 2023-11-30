#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class Soundscape.SoundscapeBPFunctionLibrary
// (None)

class UClass* USoundscapeBPFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SoundscapeBPFunctionLibrary");

	return Clss;
}


// SoundscapeBPFunctionLibrary Soundscape.Default__SoundscapeBPFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class USoundscapeBPFunctionLibrary* USoundscapeBPFunctionLibrary::GetDefaultObj()
{
	static class USoundscapeBPFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<USoundscapeBPFunctionLibrary*>(USoundscapeBPFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function Soundscape.SoundscapeBPFunctionLibrary.SpawnSoundscapePalette
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundscapePalette*          SoundscapePaletteIn                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActiveSoundscapePalette*    SoundscapePaletteAgentsOut                                       (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USoundscapeBPFunctionLibrary::SpawnSoundscapePalette(class UObject* WorldContextObject, class USoundscapePalette* SoundscapePaletteIn, class UActiveSoundscapePalette** SoundscapePaletteAgentsOut)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundscapeBPFunctionLibrary", "SpawnSoundscapePalette");

	Params::USoundscapeBPFunctionLibrary_SpawnSoundscapePalette_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.SoundscapePaletteIn = SoundscapePaletteIn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SoundscapePaletteAgentsOut != nullptr)
		*SoundscapePaletteAgentsOut = Parms.SoundscapePaletteAgentsOut;

	return Parms.ReturnValue;

}


// Function Soundscape.SoundscapeBPFunctionLibrary.SpawnSoundscapeColor
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundscapeColor*            SoundscapeColorIn                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActiveSoundscapeColor*      ActiveSoundscapeColor                                            (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USoundscapeBPFunctionLibrary::SpawnSoundscapeColor(class UObject* WorldContextObject, class USoundscapeColor* SoundscapeColorIn, class UActiveSoundscapeColor** ActiveSoundscapeColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundscapeBPFunctionLibrary", "SpawnSoundscapeColor");

	Params::USoundscapeBPFunctionLibrary_SpawnSoundscapeColor_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.SoundscapeColorIn = SoundscapeColorIn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ActiveSoundscapeColor != nullptr)
		*ActiveSoundscapeColor = Parms.ActiveSoundscapeColor;

	return Parms.ReturnValue;

}


// Class Soundscape.SoundscapeColor
// (None)

class UClass* USoundscapeColor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SoundscapeColor");

	return Clss;
}


// SoundscapeColor Soundscape.Default__SoundscapeColor
// (Public, ClassDefaultObject, ArchetypeObject)

class USoundscapeColor* USoundscapeColor::GetDefaultObj()
{
	static class USoundscapeColor* Default = nullptr;

	if (!Default)
		Default = static_cast<USoundscapeColor*>(USoundscapeColor::StaticClass()->DefaultObject);

	return Default;
}


// Class Soundscape.ActiveSoundscapeColorVoice
// (None)

class UClass* UActiveSoundscapeColorVoice::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ActiveSoundscapeColorVoice");

	return Clss;
}


// ActiveSoundscapeColorVoice Soundscape.Default__ActiveSoundscapeColorVoice
// (Public, ClassDefaultObject, ArchetypeObject)

class UActiveSoundscapeColorVoice* UActiveSoundscapeColorVoice::GetDefaultObj()
{
	static class UActiveSoundscapeColorVoice* Default = nullptr;

	if (!Default)
		Default = static_cast<UActiveSoundscapeColorVoice*>(UActiveSoundscapeColorVoice::StaticClass()->DefaultObject);

	return Default;
}


// Function Soundscape.ActiveSoundscapeColorVoice.StopLimitedDurationVoice
// (Final, Native, Public)
// Parameters:
// float                              FadeOutTime                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UActiveSoundscapeColorVoice::StopLimitedDurationVoice(float FadeOutTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActiveSoundscapeColorVoice", "StopLimitedDurationVoice");

	Params::UActiveSoundscapeColorVoice_StopLimitedDurationVoice_Params Parms{};

	Parms.FadeOutTime = FadeOutTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class Soundscape.ActiveSoundscapeColor
// (None)

class UClass* UActiveSoundscapeColor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ActiveSoundscapeColor");

	return Clss;
}


// ActiveSoundscapeColor Soundscape.Default__ActiveSoundscapeColor
// (Public, ClassDefaultObject, ArchetypeObject)

class UActiveSoundscapeColor* UActiveSoundscapeColor::GetDefaultObj()
{
	static class UActiveSoundscapeColor* Default = nullptr;

	if (!Default)
		Default = static_cast<UActiveSoundscapeColor*>(UActiveSoundscapeColor::StaticClass()->DefaultObject);

	return Default;
}


// Function Soundscape.ActiveSoundscapeColor.UpdateSoundscapeColor
// (Final, Native, Public)
// Parameters:

void UActiveSoundscapeColor::UpdateSoundscapeColor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActiveSoundscapeColor", "UpdateSoundscapeColor");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Soundscape.ActiveSoundscapeColor.Stop
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              ColorFadeOutTime                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UActiveSoundscapeColor::Stop(float ColorFadeOutTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActiveSoundscapeColor", "Stop");

	Params::UActiveSoundscapeColor_Stop_Params Parms{};

	Parms.ColorFadeOutTime = ColorFadeOutTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Soundscape.ActiveSoundscapeColor.Play
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              ColorVolume                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ColorPitch                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ColorFadeInTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UActiveSoundscapeColor::Play(float ColorVolume, float ColorPitch, float ColorFadeInTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActiveSoundscapeColor", "Play");

	Params::UActiveSoundscapeColor_Play_Params Parms{};

	Parms.ColorVolume = ColorVolume;
	Parms.ColorPitch = ColorPitch;
	Parms.ColorFadeInTime = ColorFadeInTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Soundscape.ActiveSoundscapeColor.IsPlaying
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UActiveSoundscapeColor::IsPlaying()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActiveSoundscapeColor", "IsPlaying");

	Params::UActiveSoundscapeColor_IsPlaying_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Soundscape.SoundscapeColorPointComponent
// (None)

class UClass* USoundscapeColorPointComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SoundscapeColorPointComponent");

	return Clss;
}


// SoundscapeColorPointComponent Soundscape.Default__SoundscapeColorPointComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class USoundscapeColorPointComponent* USoundscapeColorPointComponent::GetDefaultObj()
{
	static class USoundscapeColorPointComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<USoundscapeColorPointComponent*>(USoundscapeColorPointComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class Soundscape.SoundscapePalette
// (None)

class UClass* USoundscapePalette::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SoundscapePalette");

	return Clss;
}


// SoundscapePalette Soundscape.Default__SoundscapePalette
// (Public, ClassDefaultObject, ArchetypeObject)

class USoundscapePalette* USoundscapePalette::GetDefaultObj()
{
	static class USoundscapePalette* Default = nullptr;

	if (!Default)
		Default = static_cast<USoundscapePalette*>(USoundscapePalette::StaticClass()->DefaultObject);

	return Default;
}


// Class Soundscape.ActiveSoundscapePalette
// (None)

class UClass* UActiveSoundscapePalette::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ActiveSoundscapePalette");

	return Clss;
}


// ActiveSoundscapePalette Soundscape.Default__ActiveSoundscapePalette
// (Public, ClassDefaultObject, ArchetypeObject)

class UActiveSoundscapePalette* UActiveSoundscapePalette::GetDefaultObj()
{
	static class UActiveSoundscapePalette* Default = nullptr;

	if (!Default)
		Default = static_cast<UActiveSoundscapePalette*>(UActiveSoundscapePalette::StaticClass()->DefaultObject);

	return Default;
}


// Function Soundscape.ActiveSoundscapePalette.Stop
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UActiveSoundscapePalette::Stop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActiveSoundscapePalette", "Stop");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Soundscape.ActiveSoundscapePalette.Play
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UActiveSoundscapePalette::Play()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActiveSoundscapePalette", "Play");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class Soundscape.SoundscapeSettings
// (None)

class UClass* USoundscapeSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SoundscapeSettings");

	return Clss;
}


// SoundscapeSettings Soundscape.Default__SoundscapeSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class USoundscapeSettings* USoundscapeSettings::GetDefaultObj()
{
	static class USoundscapeSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<USoundscapeSettings*>(USoundscapeSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class Soundscape.SoundscapeColorPointHashCellDensity
// (None)

class UClass* USoundscapeColorPointHashCellDensity::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SoundscapeColorPointHashCellDensity");

	return Clss;
}


// SoundscapeColorPointHashCellDensity Soundscape.Default__SoundscapeColorPointHashCellDensity
// (Public, ClassDefaultObject, ArchetypeObject)

class USoundscapeColorPointHashCellDensity* USoundscapeColorPointHashCellDensity::GetDefaultObj()
{
	static class USoundscapeColorPointHashCellDensity* Default = nullptr;

	if (!Default)
		Default = static_cast<USoundscapeColorPointHashCellDensity*>(USoundscapeColorPointHashCellDensity::StaticClass()->DefaultObject);

	return Default;
}


// Class Soundscape.SoundscapeColorPointHashMap
// (None)

class UClass* USoundscapeColorPointHashMap::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SoundscapeColorPointHashMap");

	return Clss;
}


// SoundscapeColorPointHashMap Soundscape.Default__SoundscapeColorPointHashMap
// (Public, ClassDefaultObject, ArchetypeObject)

class USoundscapeColorPointHashMap* USoundscapeColorPointHashMap::GetDefaultObj()
{
	static class USoundscapeColorPointHashMap* Default = nullptr;

	if (!Default)
		Default = static_cast<USoundscapeColorPointHashMap*>(USoundscapeColorPointHashMap::StaticClass()->DefaultObject);

	return Default;
}


// Function Soundscape.SoundscapeColorPointHashMap.SetGridCenterpoint
// (Final, Native, Public, HasOutParams, HasDefaults)
// Parameters:
// struct CoreUObject_Vector          Location                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USoundscapeColorPointHashMap::SetGridCenterpoint(struct CoreUObject_Vector& Location)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundscapeColorPointHashMap", "SetGridCenterpoint");

	Params::USoundscapeColorPointHashMap_SetGridCenterpoint_Params Parms{};

	Parms.Location = Location;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Soundscape.SoundscapeColorPointHashMap.NumColorPointsInCell
// (Final, Native, Public, HasOutParams, HasDefaults)
// Parameters:
// struct CoreUObject_Vector          Location                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GameplayTags_GameplayTag    ColorPoint                                                       (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 USoundscapeColorPointHashMap::NumColorPointsInCell(struct CoreUObject_Vector& Location, const struct GameplayTags_GameplayTag& ColorPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundscapeColorPointHashMap", "NumColorPointsInCell");

	Params::USoundscapeColorPointHashMap_NumColorPointsInCell_Params Parms{};

	Parms.Location = Location;
	Parms.ColorPoint = ColorPoint;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Soundscape.SoundscapeColorPointHashMap.InitializeHash
// (Final, Native, Public, HasDefaults)
// Parameters:
// float                              HashCellSizeIn                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector          GridCenterIn                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USoundscapeColorPointHashMap::InitializeHash(float HashCellSizeIn, const struct CoreUObject_Vector& GridCenterIn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundscapeColorPointHashMap", "InitializeHash");

	Params::USoundscapeColorPointHashMap_InitializeHash_Params Parms{};

	Parms.HashCellSizeIn = HashCellSizeIn;
	Parms.GridCenterIn = GridCenterIn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Soundscape.SoundscapeColorPointHashMap.ClearHash
// (Final, Native, Public)
// Parameters:

void USoundscapeColorPointHashMap::ClearHash()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundscapeColorPointHashMap", "ClearHash");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Soundscape.SoundscapeColorPointHashMap.CalculateHashIndex
// (Final, Native, Public, HasOutParams, HasDefaults)
// Parameters:
// struct CoreUObject_Vector          Location                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint64                             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

uint64 USoundscapeColorPointHashMap::CalculateHashIndex(struct CoreUObject_Vector& Location)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundscapeColorPointHashMap", "CalculateHashIndex");

	Params::USoundscapeColorPointHashMap_CalculateHashIndex_Params Parms{};

	Parms.Location = Location;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Soundscape.SoundscapeColorPointHashMap.AddColorPointToHash
// (Final, Native, Public, HasOutParams, HasDefaults)
// Parameters:
// struct CoreUObject_Vector          Location                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GameplayTags_GameplayTag    ColorPoint                                                       (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USoundscapeColorPointHashMap::AddColorPointToHash(struct CoreUObject_Vector& Location, const struct GameplayTags_GameplayTag& ColorPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundscapeColorPointHashMap", "AddColorPointToHash");

	Params::USoundscapeColorPointHashMap_AddColorPointToHash_Params Parms{};

	Parms.Location = Location;
	Parms.ColorPoint = ColorPoint;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Soundscape.SoundscapeColorPointHashMap.AddColorPointArrayToHash
// (Final, Native, Public, HasOutParams)
// Parameters:
// TArray<struct CoreUObject_Vector>  Locations                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct GameplayTags_GameplayTag    ColorPoint                                                       (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USoundscapeColorPointHashMap::AddColorPointArrayToHash(TArray<struct CoreUObject_Vector>& Locations, const struct GameplayTags_GameplayTag& ColorPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundscapeColorPointHashMap", "AddColorPointArrayToHash");

	Params::USoundscapeColorPointHashMap_AddColorPointArrayToHash_Params Parms{};

	Parms.Locations = Locations;
	Parms.ColorPoint = ColorPoint;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class Soundscape.SoundscapeColorPointHashMapCollection
// (None)

class UClass* USoundscapeColorPointHashMapCollection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SoundscapeColorPointHashMapCollection");

	return Clss;
}


// SoundscapeColorPointHashMapCollection Soundscape.Default__SoundscapeColorPointHashMapCollection
// (Public, ClassDefaultObject, ArchetypeObject)

class USoundscapeColorPointHashMapCollection* USoundscapeColorPointHashMapCollection::GetDefaultObj()
{
	static class USoundscapeColorPointHashMapCollection* Default = nullptr;

	if (!Default)
		Default = static_cast<USoundscapeColorPointHashMapCollection*>(USoundscapeColorPointHashMapCollection::StaticClass()->DefaultObject);

	return Default;
}


// Class Soundscape.SoundscapeSubsystem
// (None)

class UClass* USoundscapeSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SoundscapeSubsystem");

	return Clss;
}


// SoundscapeSubsystem Soundscape.Default__SoundscapeSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class USoundscapeSubsystem* USoundscapeSubsystem::GetDefaultObj()
{
	static class USoundscapeSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<USoundscapeSubsystem*>(USoundscapeSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Function Soundscape.SoundscapeSubsystem.SetState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct GameplayTags_GameplayTag    SoundscapeState                                                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USoundscapeSubsystem::SetState(const struct GameplayTags_GameplayTag& SoundscapeState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundscapeSubsystem", "SetState");

	Params::USoundscapeSubsystem_SetState_Params Parms{};

	Parms.SoundscapeState = SoundscapeState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Soundscape.SoundscapeSubsystem.RestartSoundscape
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USoundscapeSubsystem::RestartSoundscape()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundscapeSubsystem", "RestartSoundscape");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Soundscape.SoundscapeSubsystem.RemovePaletteCollection
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        PaletteCollectionName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USoundscapeSubsystem::RemovePaletteCollection(class FName PaletteCollectionName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundscapeSubsystem", "RemovePaletteCollection");

	Params::USoundscapeSubsystem_RemovePaletteCollection_Params Parms{};

	Parms.PaletteCollectionName = PaletteCollectionName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Soundscape.SoundscapeSubsystem.RemoveColorPointCollection
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        ColorPointCollectionName                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USoundscapeSubsystem::RemoveColorPointCollection(class FName ColorPointCollectionName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundscapeSubsystem", "RemoveColorPointCollection");

	Params::USoundscapeSubsystem_RemoveColorPointCollection_Params Parms{};

	Parms.ColorPointCollectionName = ColorPointCollectionName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Soundscape.SoundscapeSubsystem.ClearState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct GameplayTags_GameplayTag    SoundscapeState                                                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USoundscapeSubsystem::ClearState(const struct GameplayTags_GameplayTag& SoundscapeState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundscapeSubsystem", "ClearState");

	Params::USoundscapeSubsystem_ClearState_Params Parms{};

	Parms.SoundscapeState = SoundscapeState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Soundscape.SoundscapeSubsystem.CheckColorPointDensity
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct CoreUObject_Vector          Location                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GameplayTags_GameplayTag    ColorPoint                                                       (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 USoundscapeSubsystem::CheckColorPointDensity(const struct CoreUObject_Vector& Location, const struct GameplayTags_GameplayTag& ColorPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundscapeSubsystem", "CheckColorPointDensity");

	Params::USoundscapeSubsystem_CheckColorPointDensity_Params Parms{};

	Parms.Location = Location;
	Parms.ColorPoint = ColorPoint;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Soundscape.SoundscapeSubsystem.AddPaletteCollection
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        PaletteCollectionName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Soundscape_SoundscapePaletteCollectionPaletteCollection                                                (Parm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USoundscapeSubsystem::AddPaletteCollection(class FName PaletteCollectionName, const struct Soundscape_SoundscapePaletteCollection& PaletteCollection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundscapeSubsystem", "AddPaletteCollection");

	Params::USoundscapeSubsystem_AddPaletteCollection_Params Parms{};

	Parms.PaletteCollectionName = PaletteCollectionName;
	Parms.PaletteCollection = PaletteCollection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Soundscape.SoundscapeSubsystem.AddColorPointCollection
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        ColorPointCollectionName                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Soundscape_SoundscapeColorPointCollectionColorPointCollection                                             (Parm, NativeAccessSpecifierPublic)

void USoundscapeSubsystem::AddColorPointCollection(class FName ColorPointCollectionName, const struct Soundscape_SoundscapeColorPointCollection& ColorPointCollection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundscapeSubsystem", "AddColorPointCollection");

	Params::USoundscapeSubsystem_AddColorPointCollection_Params Parms{};

	Parms.ColorPointCollectionName = ColorPointCollectionName;
	Parms.ColorPointCollection = ColorPointCollection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


