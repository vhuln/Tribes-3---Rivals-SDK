#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class WwiseResourceLoader.WwiseEventInfoLibrary
// (None)

class UClass* UWwiseEventInfoLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WwiseEventInfoLibrary");

	return Clss;
}


// WwiseEventInfoLibrary WwiseResourceLoader.Default__WwiseEventInfoLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UWwiseEventInfoLibrary* UWwiseEventInfoLibrary::GetDefaultObj()
{
	static class UWwiseEventInfoLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UWwiseEventInfoLibrary*>(UWwiseEventInfoLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function WwiseResourceLoader.WwiseEventInfoLibrary.SetWwiseShortId
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct WwiseResourceLoader_WwiseEventInfoRef                                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              WwiseShortId                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct WwiseResourceLoader_WwiseEventInfoReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct WwiseResourceLoader_WwiseEventInfo UWwiseEventInfoLibrary::SetWwiseShortId(struct WwiseResourceLoader_WwiseEventInfo& Ref, int32 WwiseShortId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WwiseEventInfoLibrary", "SetWwiseShortId");

	Params::UWwiseEventInfoLibrary_SetWwiseShortId_Params Parms{};

	Parms.Ref = Ref;
	Parms.WwiseShortId = WwiseShortId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function WwiseResourceLoader.WwiseEventInfoLibrary.SetWwiseName
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct WwiseResourceLoader_WwiseEventInfoRef                                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      WwiseName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct WwiseResourceLoader_WwiseEventInfoReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct WwiseResourceLoader_WwiseEventInfo UWwiseEventInfoLibrary::SetWwiseName(struct WwiseResourceLoader_WwiseEventInfo& Ref, const class FString& WwiseName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WwiseEventInfoLibrary", "SetWwiseName");

	Params::UWwiseEventInfoLibrary_SetWwiseName_Params Parms{};

	Parms.Ref = Ref;
	Parms.WwiseName = WwiseName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function WwiseResourceLoader.WwiseEventInfoLibrary.SetWwiseGuid
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct WwiseResourceLoader_WwiseEventInfoRef                                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Guid            WwiseGuid                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct WwiseResourceLoader_WwiseEventInfoReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct WwiseResourceLoader_WwiseEventInfo UWwiseEventInfoLibrary::SetWwiseGuid(struct WwiseResourceLoader_WwiseEventInfo& Ref, struct CoreUObject_Guid& WwiseGuid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WwiseEventInfoLibrary", "SetWwiseGuid");

	Params::UWwiseEventInfoLibrary_SetWwiseGuid_Params Parms{};

	Parms.Ref = Ref;
	Parms.WwiseGuid = WwiseGuid;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function WwiseResourceLoader.WwiseEventInfoLibrary.SetSwitchContainerLoading
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct WwiseResourceLoader_WwiseEventInfoRef                                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EWwiseEventSwitchContainerLoadingSwitchContainerLoading                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct WwiseResourceLoader_WwiseEventInfoReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct WwiseResourceLoader_WwiseEventInfo UWwiseEventInfoLibrary::SetSwitchContainerLoading(struct WwiseResourceLoader_WwiseEventInfo& Ref, enum class EWwiseEventSwitchContainerLoading& SwitchContainerLoading)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WwiseEventInfoLibrary", "SetSwitchContainerLoading");

	Params::UWwiseEventInfoLibrary_SetSwitchContainerLoading_Params Parms{};

	Parms.Ref = Ref;
	Parms.SwitchContainerLoading = SwitchContainerLoading;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function WwiseResourceLoader.WwiseEventInfoLibrary.SetHardCodedSoundBankShortId
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct WwiseResourceLoader_WwiseEventInfoRef                                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              HardCodedSoundBankShortId                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct WwiseResourceLoader_WwiseEventInfoReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct WwiseResourceLoader_WwiseEventInfo UWwiseEventInfoLibrary::SetHardCodedSoundBankShortId(struct WwiseResourceLoader_WwiseEventInfo& Ref, int32 HardCodedSoundBankShortId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WwiseEventInfoLibrary", "SetHardCodedSoundBankShortId");

	Params::UWwiseEventInfoLibrary_SetHardCodedSoundBankShortId_Params Parms{};

	Parms.Ref = Ref;
	Parms.HardCodedSoundBankShortId = HardCodedSoundBankShortId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function WwiseResourceLoader.WwiseEventInfoLibrary.SetDestroyOptions
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct WwiseResourceLoader_WwiseEventInfoRef                                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EWwiseEventDestroyOptionsDestroyOptions                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct WwiseResourceLoader_WwiseEventInfoReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct WwiseResourceLoader_WwiseEventInfo UWwiseEventInfoLibrary::SetDestroyOptions(struct WwiseResourceLoader_WwiseEventInfo& Ref, enum class EWwiseEventDestroyOptions& DestroyOptions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WwiseEventInfoLibrary", "SetDestroyOptions");

	Params::UWwiseEventInfoLibrary_SetDestroyOptions_Params Parms{};

	Parms.Ref = Ref;
	Parms.DestroyOptions = DestroyOptions;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function WwiseResourceLoader.WwiseEventInfoLibrary.MakeStruct
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct CoreUObject_Guid            WwiseGuid                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              WwiseShortId                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      WwiseName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EWwiseEventSwitchContainerLoadingSwitchContainerLoading                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EWwiseEventDestroyOptionsDestroyOptions                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              HardCodedSoundBankShortId                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct WwiseResourceLoader_WwiseEventInfoReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct WwiseResourceLoader_WwiseEventInfo UWwiseEventInfoLibrary::MakeStruct(struct CoreUObject_Guid& WwiseGuid, int32 WwiseShortId, const class FString& WwiseName, enum class EWwiseEventSwitchContainerLoading SwitchContainerLoading, enum class EWwiseEventDestroyOptions DestroyOptions, int32 HardCodedSoundBankShortId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WwiseEventInfoLibrary", "MakeStruct");

	Params::UWwiseEventInfoLibrary_MakeStruct_Params Parms{};

	Parms.WwiseGuid = WwiseGuid;
	Parms.WwiseShortId = WwiseShortId;
	Parms.WwiseName = WwiseName;
	Parms.SwitchContainerLoading = SwitchContainerLoading;
	Parms.DestroyOptions = DestroyOptions;
	Parms.HardCodedSoundBankShortId = HardCodedSoundBankShortId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function WwiseResourceLoader.WwiseEventInfoLibrary.GetWwiseShortId
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct WwiseResourceLoader_WwiseEventInfoRef                                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UWwiseEventInfoLibrary::GetWwiseShortId(struct WwiseResourceLoader_WwiseEventInfo& Ref)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WwiseEventInfoLibrary", "GetWwiseShortId");

	Params::UWwiseEventInfoLibrary_GetWwiseShortId_Params Parms{};

	Parms.Ref = Ref;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function WwiseResourceLoader.WwiseEventInfoLibrary.GetWwiseName
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct WwiseResourceLoader_WwiseEventInfoRef                                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UWwiseEventInfoLibrary::GetWwiseName(struct WwiseResourceLoader_WwiseEventInfo& Ref)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WwiseEventInfoLibrary", "GetWwiseName");

	Params::UWwiseEventInfoLibrary_GetWwiseName_Params Parms{};

	Parms.Ref = Ref;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function WwiseResourceLoader.WwiseEventInfoLibrary.GetWwiseGuid
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct WwiseResourceLoader_WwiseEventInfoRef                                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Guid            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct CoreUObject_Guid UWwiseEventInfoLibrary::GetWwiseGuid(struct WwiseResourceLoader_WwiseEventInfo& Ref)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WwiseEventInfoLibrary", "GetWwiseGuid");

	Params::UWwiseEventInfoLibrary_GetWwiseGuid_Params Parms{};

	Parms.Ref = Ref;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function WwiseResourceLoader.WwiseEventInfoLibrary.GetSwitchContainerLoading
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct WwiseResourceLoader_WwiseEventInfoRef                                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EWwiseEventSwitchContainerLoadingReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EWwiseEventSwitchContainerLoading UWwiseEventInfoLibrary::GetSwitchContainerLoading(struct WwiseResourceLoader_WwiseEventInfo& Ref)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WwiseEventInfoLibrary", "GetSwitchContainerLoading");

	Params::UWwiseEventInfoLibrary_GetSwitchContainerLoading_Params Parms{};

	Parms.Ref = Ref;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function WwiseResourceLoader.WwiseEventInfoLibrary.GetHardCodedSoundBankShortId
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct WwiseResourceLoader_WwiseEventInfoRef                                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UWwiseEventInfoLibrary::GetHardCodedSoundBankShortId(struct WwiseResourceLoader_WwiseEventInfo& Ref)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WwiseEventInfoLibrary", "GetHardCodedSoundBankShortId");

	Params::UWwiseEventInfoLibrary_GetHardCodedSoundBankShortId_Params Parms{};

	Parms.Ref = Ref;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function WwiseResourceLoader.WwiseEventInfoLibrary.GetDestroyOptions
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct WwiseResourceLoader_WwiseEventInfoRef                                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EWwiseEventDestroyOptionsReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EWwiseEventDestroyOptions UWwiseEventInfoLibrary::GetDestroyOptions(struct WwiseResourceLoader_WwiseEventInfo& Ref)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WwiseEventInfoLibrary", "GetDestroyOptions");

	Params::UWwiseEventInfoLibrary_GetDestroyOptions_Params Parms{};

	Parms.Ref = Ref;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function WwiseResourceLoader.WwiseEventInfoLibrary.BreakStruct
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct WwiseResourceLoader_WwiseEventInfoRef                                                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Guid            OutWwiseGuid                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              OutWwiseShortId                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OutWwiseName                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EWwiseEventSwitchContainerLoadingOutSwitchContainerLoading                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EWwiseEventDestroyOptionsOutDestroyOptions                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              OutHardCodedSoundBankShortId                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWwiseEventInfoLibrary::BreakStruct(const struct WwiseResourceLoader_WwiseEventInfo& Ref, struct CoreUObject_Guid* OutWwiseGuid, int32* OutWwiseShortId, class FString* OutWwiseName, enum class EWwiseEventSwitchContainerLoading* OutSwitchContainerLoading, enum class EWwiseEventDestroyOptions* OutDestroyOptions, int32* OutHardCodedSoundBankShortId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WwiseEventInfoLibrary", "BreakStruct");

	Params::UWwiseEventInfoLibrary_BreakStruct_Params Parms{};

	Parms.Ref = Ref;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutWwiseGuid != nullptr)
		*OutWwiseGuid = std::move(Parms.OutWwiseGuid);

	if (OutWwiseShortId != nullptr)
		*OutWwiseShortId = Parms.OutWwiseShortId;

	if (OutWwiseName != nullptr)
		*OutWwiseName = std::move(Parms.OutWwiseName);

	if (OutSwitchContainerLoading != nullptr)
		*OutSwitchContainerLoading = Parms.OutSwitchContainerLoading;

	if (OutDestroyOptions != nullptr)
		*OutDestroyOptions = Parms.OutDestroyOptions;

	if (OutHardCodedSoundBankShortId != nullptr)
		*OutHardCodedSoundBankShortId = Parms.OutHardCodedSoundBankShortId;

}


// Class WwiseResourceLoader.WwiseGroupValueInfoLibrary
// (None)

class UClass* UWwiseGroupValueInfoLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WwiseGroupValueInfoLibrary");

	return Clss;
}


// WwiseGroupValueInfoLibrary WwiseResourceLoader.Default__WwiseGroupValueInfoLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UWwiseGroupValueInfoLibrary* UWwiseGroupValueInfoLibrary::GetDefaultObj()
{
	static class UWwiseGroupValueInfoLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UWwiseGroupValueInfoLibrary*>(UWwiseGroupValueInfoLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function WwiseResourceLoader.WwiseGroupValueInfoLibrary.SetWwiseShortId
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct WwiseResourceLoader_WwiseGroupValueInfoRef                                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              WwiseShortId                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct WwiseResourceLoader_WwiseGroupValueInfoReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct WwiseResourceLoader_WwiseGroupValueInfo UWwiseGroupValueInfoLibrary::SetWwiseShortId(struct WwiseResourceLoader_WwiseGroupValueInfo& Ref, int32 WwiseShortId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WwiseGroupValueInfoLibrary", "SetWwiseShortId");

	Params::UWwiseGroupValueInfoLibrary_SetWwiseShortId_Params Parms{};

	Parms.Ref = Ref;
	Parms.WwiseShortId = WwiseShortId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function WwiseResourceLoader.WwiseGroupValueInfoLibrary.SetWwiseName
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct WwiseResourceLoader_WwiseGroupValueInfoRef                                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      WwiseName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct WwiseResourceLoader_WwiseGroupValueInfoReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct WwiseResourceLoader_WwiseGroupValueInfo UWwiseGroupValueInfoLibrary::SetWwiseName(struct WwiseResourceLoader_WwiseGroupValueInfo& Ref, const class FString& WwiseName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WwiseGroupValueInfoLibrary", "SetWwiseName");

	Params::UWwiseGroupValueInfoLibrary_SetWwiseName_Params Parms{};

	Parms.Ref = Ref;
	Parms.WwiseName = WwiseName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function WwiseResourceLoader.WwiseGroupValueInfoLibrary.SetGroupShortId
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct WwiseResourceLoader_WwiseGroupValueInfoRef                                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              GroupShortId                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct WwiseResourceLoader_WwiseGroupValueInfoReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct WwiseResourceLoader_WwiseGroupValueInfo UWwiseGroupValueInfoLibrary::SetGroupShortId(struct WwiseResourceLoader_WwiseGroupValueInfo& Ref, int32 GroupShortId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WwiseGroupValueInfoLibrary", "SetGroupShortId");

	Params::UWwiseGroupValueInfoLibrary_SetGroupShortId_Params Parms{};

	Parms.Ref = Ref;
	Parms.GroupShortId = GroupShortId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function WwiseResourceLoader.WwiseGroupValueInfoLibrary.SetAssetGuid
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct WwiseResourceLoader_WwiseGroupValueInfoRef                                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Guid            AssetGuid                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct WwiseResourceLoader_WwiseGroupValueInfoReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct WwiseResourceLoader_WwiseGroupValueInfo UWwiseGroupValueInfoLibrary::SetAssetGuid(struct WwiseResourceLoader_WwiseGroupValueInfo& Ref, struct CoreUObject_Guid& AssetGuid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WwiseGroupValueInfoLibrary", "SetAssetGuid");

	Params::UWwiseGroupValueInfoLibrary_SetAssetGuid_Params Parms{};

	Parms.Ref = Ref;
	Parms.AssetGuid = AssetGuid;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function WwiseResourceLoader.WwiseGroupValueInfoLibrary.MakeStruct
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct CoreUObject_Guid            AssetGuid                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              GroupShortId                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              WwiseShortId                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      WwiseName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct WwiseResourceLoader_WwiseGroupValueInfoReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct WwiseResourceLoader_WwiseGroupValueInfo UWwiseGroupValueInfoLibrary::MakeStruct(struct CoreUObject_Guid& AssetGuid, int32 GroupShortId, int32 WwiseShortId, const class FString& WwiseName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WwiseGroupValueInfoLibrary", "MakeStruct");

	Params::UWwiseGroupValueInfoLibrary_MakeStruct_Params Parms{};

	Parms.AssetGuid = AssetGuid;
	Parms.GroupShortId = GroupShortId;
	Parms.WwiseShortId = WwiseShortId;
	Parms.WwiseName = WwiseName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function WwiseResourceLoader.WwiseGroupValueInfoLibrary.GetWwiseShortId
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct WwiseResourceLoader_WwiseGroupValueInfoRef                                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UWwiseGroupValueInfoLibrary::GetWwiseShortId(struct WwiseResourceLoader_WwiseGroupValueInfo& Ref)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WwiseGroupValueInfoLibrary", "GetWwiseShortId");

	Params::UWwiseGroupValueInfoLibrary_GetWwiseShortId_Params Parms{};

	Parms.Ref = Ref;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function WwiseResourceLoader.WwiseGroupValueInfoLibrary.GetWwiseName
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct WwiseResourceLoader_WwiseGroupValueInfoRef                                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UWwiseGroupValueInfoLibrary::GetWwiseName(struct WwiseResourceLoader_WwiseGroupValueInfo& Ref)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WwiseGroupValueInfoLibrary", "GetWwiseName");

	Params::UWwiseGroupValueInfoLibrary_GetWwiseName_Params Parms{};

	Parms.Ref = Ref;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function WwiseResourceLoader.WwiseGroupValueInfoLibrary.GetGroupShortId
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct WwiseResourceLoader_WwiseGroupValueInfoRef                                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UWwiseGroupValueInfoLibrary::GetGroupShortId(struct WwiseResourceLoader_WwiseGroupValueInfo& Ref)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WwiseGroupValueInfoLibrary", "GetGroupShortId");

	Params::UWwiseGroupValueInfoLibrary_GetGroupShortId_Params Parms{};

	Parms.Ref = Ref;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function WwiseResourceLoader.WwiseGroupValueInfoLibrary.GetAssetGuid
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct WwiseResourceLoader_WwiseGroupValueInfoRef                                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Guid            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct CoreUObject_Guid UWwiseGroupValueInfoLibrary::GetAssetGuid(struct WwiseResourceLoader_WwiseGroupValueInfo& Ref)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WwiseGroupValueInfoLibrary", "GetAssetGuid");

	Params::UWwiseGroupValueInfoLibrary_GetAssetGuid_Params Parms{};

	Parms.Ref = Ref;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function WwiseResourceLoader.WwiseGroupValueInfoLibrary.BreakStruct
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct WwiseResourceLoader_WwiseGroupValueInfoRef                                                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Guid            OutAssetGuid                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              OutGroupShortId                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              OutWwiseShortId                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OutWwiseName                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWwiseGroupValueInfoLibrary::BreakStruct(const struct WwiseResourceLoader_WwiseGroupValueInfo& Ref, struct CoreUObject_Guid* OutAssetGuid, int32* OutGroupShortId, int32* OutWwiseShortId, class FString* OutWwiseName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WwiseGroupValueInfoLibrary", "BreakStruct");

	Params::UWwiseGroupValueInfoLibrary_BreakStruct_Params Parms{};

	Parms.Ref = Ref;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutAssetGuid != nullptr)
		*OutAssetGuid = std::move(Parms.OutAssetGuid);

	if (OutGroupShortId != nullptr)
		*OutGroupShortId = Parms.OutGroupShortId;

	if (OutWwiseShortId != nullptr)
		*OutWwiseShortId = Parms.OutWwiseShortId;

	if (OutWwiseName != nullptr)
		*OutWwiseName = std::move(Parms.OutWwiseName);

}


// Class WwiseResourceLoader.WwiseObjectInfoLibrary
// (None)

class UClass* UWwiseObjectInfoLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WwiseObjectInfoLibrary");

	return Clss;
}


// WwiseObjectInfoLibrary WwiseResourceLoader.Default__WwiseObjectInfoLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UWwiseObjectInfoLibrary* UWwiseObjectInfoLibrary::GetDefaultObj()
{
	static class UWwiseObjectInfoLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UWwiseObjectInfoLibrary*>(UWwiseObjectInfoLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function WwiseResourceLoader.WwiseObjectInfoLibrary.SetWwiseShortId
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct WwiseResourceLoader_WwiseObjectInfoRef                                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              WwiseShortId                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct WwiseResourceLoader_WwiseObjectInfoReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct WwiseResourceLoader_WwiseObjectInfo UWwiseObjectInfoLibrary::SetWwiseShortId(struct WwiseResourceLoader_WwiseObjectInfo& Ref, int32 WwiseShortId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WwiseObjectInfoLibrary", "SetWwiseShortId");

	Params::UWwiseObjectInfoLibrary_SetWwiseShortId_Params Parms{};

	Parms.Ref = Ref;
	Parms.WwiseShortId = WwiseShortId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function WwiseResourceLoader.WwiseObjectInfoLibrary.SetWwiseName
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct WwiseResourceLoader_WwiseObjectInfoRef                                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      WwiseName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct WwiseResourceLoader_WwiseObjectInfoReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct WwiseResourceLoader_WwiseObjectInfo UWwiseObjectInfoLibrary::SetWwiseName(struct WwiseResourceLoader_WwiseObjectInfo& Ref, const class FString& WwiseName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WwiseObjectInfoLibrary", "SetWwiseName");

	Params::UWwiseObjectInfoLibrary_SetWwiseName_Params Parms{};

	Parms.Ref = Ref;
	Parms.WwiseName = WwiseName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function WwiseResourceLoader.WwiseObjectInfoLibrary.SetWwiseGuid
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct WwiseResourceLoader_WwiseObjectInfoRef                                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Guid            WwiseGuid                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct WwiseResourceLoader_WwiseObjectInfoReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct WwiseResourceLoader_WwiseObjectInfo UWwiseObjectInfoLibrary::SetWwiseGuid(struct WwiseResourceLoader_WwiseObjectInfo& Ref, struct CoreUObject_Guid& WwiseGuid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WwiseObjectInfoLibrary", "SetWwiseGuid");

	Params::UWwiseObjectInfoLibrary_SetWwiseGuid_Params Parms{};

	Parms.Ref = Ref;
	Parms.WwiseGuid = WwiseGuid;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function WwiseResourceLoader.WwiseObjectInfoLibrary.SetHardCodedSoundBankShortId
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct WwiseResourceLoader_WwiseObjectInfoRef                                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              HardCodedSoundBankShortId                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct WwiseResourceLoader_WwiseObjectInfoReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct WwiseResourceLoader_WwiseObjectInfo UWwiseObjectInfoLibrary::SetHardCodedSoundBankShortId(struct WwiseResourceLoader_WwiseObjectInfo& Ref, int32 HardCodedSoundBankShortId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WwiseObjectInfoLibrary", "SetHardCodedSoundBankShortId");

	Params::UWwiseObjectInfoLibrary_SetHardCodedSoundBankShortId_Params Parms{};

	Parms.Ref = Ref;
	Parms.HardCodedSoundBankShortId = HardCodedSoundBankShortId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function WwiseResourceLoader.WwiseObjectInfoLibrary.MakeStruct
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct CoreUObject_Guid            WwiseGuid                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              WwiseShortId                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      WwiseName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              HardCodedSoundBankShortId                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct WwiseResourceLoader_WwiseObjectInfoReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct WwiseResourceLoader_WwiseObjectInfo UWwiseObjectInfoLibrary::MakeStruct(struct CoreUObject_Guid& WwiseGuid, int32 WwiseShortId, const class FString& WwiseName, int32 HardCodedSoundBankShortId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WwiseObjectInfoLibrary", "MakeStruct");

	Params::UWwiseObjectInfoLibrary_MakeStruct_Params Parms{};

	Parms.WwiseGuid = WwiseGuid;
	Parms.WwiseShortId = WwiseShortId;
	Parms.WwiseName = WwiseName;
	Parms.HardCodedSoundBankShortId = HardCodedSoundBankShortId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function WwiseResourceLoader.WwiseObjectInfoLibrary.GetWwiseShortId
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct WwiseResourceLoader_WwiseObjectInfoRef                                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UWwiseObjectInfoLibrary::GetWwiseShortId(struct WwiseResourceLoader_WwiseObjectInfo& Ref)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WwiseObjectInfoLibrary", "GetWwiseShortId");

	Params::UWwiseObjectInfoLibrary_GetWwiseShortId_Params Parms{};

	Parms.Ref = Ref;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function WwiseResourceLoader.WwiseObjectInfoLibrary.GetWwiseName
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct WwiseResourceLoader_WwiseObjectInfoRef                                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UWwiseObjectInfoLibrary::GetWwiseName(struct WwiseResourceLoader_WwiseObjectInfo& Ref)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WwiseObjectInfoLibrary", "GetWwiseName");

	Params::UWwiseObjectInfoLibrary_GetWwiseName_Params Parms{};

	Parms.Ref = Ref;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function WwiseResourceLoader.WwiseObjectInfoLibrary.GetWwiseGuid
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct WwiseResourceLoader_WwiseObjectInfoRef                                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Guid            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct CoreUObject_Guid UWwiseObjectInfoLibrary::GetWwiseGuid(struct WwiseResourceLoader_WwiseObjectInfo& Ref)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WwiseObjectInfoLibrary", "GetWwiseGuid");

	Params::UWwiseObjectInfoLibrary_GetWwiseGuid_Params Parms{};

	Parms.Ref = Ref;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function WwiseResourceLoader.WwiseObjectInfoLibrary.GetHardCodedSoundBankShortId
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct WwiseResourceLoader_WwiseObjectInfoRef                                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UWwiseObjectInfoLibrary::GetHardCodedSoundBankShortId(struct WwiseResourceLoader_WwiseObjectInfo& Ref)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WwiseObjectInfoLibrary", "GetHardCodedSoundBankShortId");

	Params::UWwiseObjectInfoLibrary_GetHardCodedSoundBankShortId_Params Parms{};

	Parms.Ref = Ref;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function WwiseResourceLoader.WwiseObjectInfoLibrary.BreakStruct
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct WwiseResourceLoader_WwiseObjectInfoRef                                                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Guid            OutWwiseGuid                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              OutWwiseShortId                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OutWwiseName                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              OutHardCodedSoundBankShortId                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWwiseObjectInfoLibrary::BreakStruct(const struct WwiseResourceLoader_WwiseObjectInfo& Ref, struct CoreUObject_Guid* OutWwiseGuid, int32* OutWwiseShortId, class FString* OutWwiseName, int32* OutHardCodedSoundBankShortId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WwiseObjectInfoLibrary", "BreakStruct");

	Params::UWwiseObjectInfoLibrary_BreakStruct_Params Parms{};

	Parms.Ref = Ref;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutWwiseGuid != nullptr)
		*OutWwiseGuid = std::move(Parms.OutWwiseGuid);

	if (OutWwiseShortId != nullptr)
		*OutWwiseShortId = Parms.OutWwiseShortId;

	if (OutWwiseName != nullptr)
		*OutWwiseName = std::move(Parms.OutWwiseName);

	if (OutHardCodedSoundBankShortId != nullptr)
		*OutHardCodedSoundBankShortId = Parms.OutHardCodedSoundBankShortId;

}

}


