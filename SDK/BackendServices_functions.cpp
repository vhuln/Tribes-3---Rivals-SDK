#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class BackendServices.BackendService
// (None)

class UClass* UBackendService::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BackendService");

	return Clss;
}


// BackendService BackendServices.Default__BackendService
// (Public, ClassDefaultObject, ArchetypeObject)

class UBackendService* UBackendService::GetDefaultObj()
{
	static class UBackendService* Default = nullptr;

	if (!Default)
		Default = static_cast<UBackendService*>(UBackendService::StaticClass()->DefaultObject);

	return Default;
}


// Function BackendServices.BackendService.GetScriptingInterface
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UBSScripting*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UBSScripting* UBackendService::GetScriptingInterface()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BackendService", "GetScriptingInterface");

	Params::UBackendService_GetScriptingInterface_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function BackendServices.BackendService.GetPubSubInterface
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UBSPubSubInterface*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UBSPubSubInterface* UBackendService::GetPubSubInterface()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BackendService", "GetPubSubInterface");

	Params::UBackendService_GetPubSubInterface_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function BackendServices.BackendService.GetGameVersion
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UBackendService::GetGameVersion()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BackendService", "GetGameVersion");

	Params::UBackendService_GetGameVersion_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class BackendServices.BackendServiceOwner
// (None)

class UClass* IBackendServiceOwner::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BackendServiceOwner");

	return Clss;
}


// BackendServiceOwner BackendServices.Default__BackendServiceOwner
// (Public, ClassDefaultObject, ArchetypeObject)

class IBackendServiceOwner* IBackendServiceOwner::GetDefaultObj()
{
	static class IBackendServiceOwner* Default = nullptr;

	if (!Default)
		Default = static_cast<IBackendServiceOwner*>(IBackendServiceOwner::StaticClass()->DefaultObject);

	return Default;
}


// Class BackendServices.BSBlueprintFunctionLibrary
// (None)

class UClass* UBSBlueprintFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BSBlueprintFunctionLibrary");

	return Clss;
}


// BSBlueprintFunctionLibrary BackendServices.Default__BSBlueprintFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UBSBlueprintFunctionLibrary* UBSBlueprintFunctionLibrary::GetDefaultObj()
{
	static class UBSBlueprintFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UBSBlueprintFunctionLibrary*>(UBSBlueprintFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Class BackendServices.BSComponent
// (None)

class UClass* UBSComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BSComponent");

	return Clss;
}


// BSComponent BackendServices.Default__BSComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UBSComponent* UBSComponent::GetDefaultObj()
{
	static class UBSComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UBSComponent*>(UBSComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class BackendServices.BSInternalInterface
// (None)

class UClass* UBSInternalInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BSInternalInterface");

	return Clss;
}


// BSInternalInterface BackendServices.Default__BSInternalInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class UBSInternalInterface* UBSInternalInterface::GetDefaultObj()
{
	static class UBSInternalInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<UBSInternalInterface*>(UBSInternalInterface::StaticClass()->DefaultObject);

	return Default;
}


// Function BackendServices.BSInternalInterface.GetUnityProjectId
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UBSInternalInterface::GetUnityProjectId()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BSInternalInterface", "GetUnityProjectId");

	Params::UBSInternalInterface_GetUnityProjectId_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function BackendServices.BSInternalInterface.GetUnityEnvironmentName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UBSInternalInterface::GetUnityEnvironmentName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BSInternalInterface", "GetUnityEnvironmentName");

	Params::UBSInternalInterface_GetUnityEnvironmentName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function BackendServices.BSInternalInterface.GetUnityEnvironmentId
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UBSInternalInterface::GetUnityEnvironmentId()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BSInternalInterface", "GetUnityEnvironmentId");

	Params::UBSInternalInterface_GetUnityEnvironmentId_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function BackendServices.BSInternalInterface.GetMultiplayFleetId
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UBSInternalInterface::GetMultiplayFleetId()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BSInternalInterface", "GetMultiplayFleetId");

	Params::UBSInternalInterface_GetMultiplayFleetId_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function BackendServices.BSInternalInterface.GetClanforgeSecretKey
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UBSInternalInterface::GetClanforgeSecretKey()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BSInternalInterface", "GetClanforgeSecretKey");

	Params::UBSInternalInterface_GetClanforgeSecretKey_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function BackendServices.BSInternalInterface.GetClanforgeAccessKey
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UBSInternalInterface::GetClanforgeAccessKey()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BSInternalInterface", "GetClanforgeAccessKey");

	Params::UBSInternalInterface_GetClanforgeAccessKey_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class BackendServices.BSPubSubInterface
// (None)

class UClass* UBSPubSubInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BSPubSubInterface");

	return Clss;
}


// BSPubSubInterface BackendServices.Default__BSPubSubInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class UBSPubSubInterface* UBSPubSubInterface::GetDefaultObj()
{
	static class UBSPubSubInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<UBSPubSubInterface*>(UBSPubSubInterface::StaticClass()->DefaultObject);

	return Default;
}


// Function BackendServices.BSPubSubInterface.IsConnected
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UBSPubSubInterface::IsConnected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BSPubSubInterface", "IsConnected");

	Params::UBSPubSubInterface_IsConnected_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function BackendServices.BSPubSubInterface.InitiatePubSubConnect
// (Final, Native, Private)
// Parameters:

void UBSPubSubInterface::InitiatePubSubConnect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BSPubSubInterface", "InitiatePubSubConnect");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction BackendServices.BSPubSubInterface.BS_PubSubConnectStateUpdated__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// enum class EPubSubConnectState     NewState                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EPubSubDisconnectReason DisconnectReason                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBSPubSubInterface::BS_PubSubConnectStateUpdated__DelegateSignature(enum class EPubSubConnectState NewState, enum class EPubSubDisconnectReason DisconnectReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BSPubSubInterface", "BS_PubSubConnectStateUpdated__DelegateSignature");

	Params::UBSPubSubInterface_BS_PubSubConnectStateUpdated__DelegateSignature_Params Parms{};

	Parms.NewState = NewState;
	Parms.DisconnectReason = DisconnectReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Class BackendServices.BSScripting
// (None)

class UClass* UBSScripting::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BSScripting");

	return Clss;
}


// BSScripting BackendServices.Default__BSScripting
// (Public, ClassDefaultObject, ArchetypeObject)

class UBSScripting* UBSScripting::GetDefaultObj()
{
	static class UBSScripting* Default = nullptr;

	if (!Default)
		Default = static_cast<UBSScripting*>(UBSScripting::StaticClass()->DefaultObject);

	return Default;
}


// Function BackendServices.BSScripting.PostLoginHook
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      GameVersion                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 ResultDelegate                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UBSScripting::PostLoginHook(const class FString& GameVersion, FDelegateProperty_& ResultDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BSScripting", "PostLoginHook");

	Params::UBSScripting_PostLoginHook_Params Parms{};

	Parms.GameVersion = GameVersion;
	Parms.ResultDelegate = ResultDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// DelegateFunction BackendServices.BSScripting.OnPostLoginHookComplete__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// bool                               bSuccess                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct BackendServices_PostLoginHookResponseResponseData                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FText                        Error                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UBSScripting::OnPostLoginHookComplete__DelegateSignature(bool bSuccess, struct BackendServices_PostLoginHookResponse& ResponseData, class FText& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BSScripting", "OnPostLoginHookComplete__DelegateSignature");

	Params::UBSScripting_OnPostLoginHookComplete__DelegateSignature_Params Parms{};

	Parms.bSuccess = bSuccess;
	Parms.ResponseData = ResponseData;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}

}


