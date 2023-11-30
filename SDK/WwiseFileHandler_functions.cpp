#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class WwiseFileHandler.WwiseExternalSourceStatics
// (None)

class UClass* UWwiseExternalSourceStatics::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WwiseExternalSourceStatics");

	return Clss;
}


// WwiseExternalSourceStatics WwiseFileHandler.Default__WwiseExternalSourceStatics
// (Public, ClassDefaultObject, ArchetypeObject)

class UWwiseExternalSourceStatics* UWwiseExternalSourceStatics::GetDefaultObj()
{
	static class UWwiseExternalSourceStatics* Default = nullptr;

	if (!Default)
		Default = static_cast<UWwiseExternalSourceStatics*>(UWwiseExternalSourceStatics::StaticClass()->DefaultObject);

	return Default;
}


// Function WwiseFileHandler.WwiseExternalSourceStatics.SetExternalSourceMediaWithIds
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct WwiseSoundEngine_AkUniqueID ExternalSourceCookie                                             (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
// int32                              MediaId                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWwiseExternalSourceStatics::SetExternalSourceMediaWithIds(const struct WwiseSoundEngine_AkUniqueID& ExternalSourceCookie, int32 MediaId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WwiseExternalSourceStatics", "SetExternalSourceMediaWithIds");

	Params::UWwiseExternalSourceStatics_SetExternalSourceMediaWithIds_Params Parms{};

	Parms.ExternalSourceCookie = ExternalSourceCookie;
	Parms.MediaId = MediaId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function WwiseFileHandler.WwiseExternalSourceStatics.SetExternalSourceMediaByName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      ExternalSourceName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      MediaName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWwiseExternalSourceStatics::SetExternalSourceMediaByName(const class FString& ExternalSourceName, const class FString& MediaName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WwiseExternalSourceStatics", "SetExternalSourceMediaByName");

	Params::UWwiseExternalSourceStatics_SetExternalSourceMediaByName_Params Parms{};

	Parms.ExternalSourceName = ExternalSourceName;
	Parms.MediaName = MediaName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function WwiseFileHandler.WwiseExternalSourceStatics.SetExternalSourceMediaById
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      ExternalSourceName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MediaId                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWwiseExternalSourceStatics::SetExternalSourceMediaById(const class FString& ExternalSourceName, int32 MediaId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WwiseExternalSourceStatics", "SetExternalSourceMediaById");

	Params::UWwiseExternalSourceStatics_SetExternalSourceMediaById_Params Parms{};

	Parms.ExternalSourceName = ExternalSourceName;
	Parms.MediaId = MediaId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


