#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class PlatformInterface.PlatformInterfaceCustomDataLibrary
// (None)

class UClass* UPlatformInterfaceCustomDataLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlatformInterfaceCustomDataLibrary");

	return Clss;
}


// PlatformInterfaceCustomDataLibrary PlatformInterface.Default__PlatformInterfaceCustomDataLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UPlatformInterfaceCustomDataLibrary* UPlatformInterfaceCustomDataLibrary::GetDefaultObj()
{
	static class UPlatformInterfaceCustomDataLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlatformInterfaceCustomDataLibrary*>(UPlatformInterfaceCustomDataLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Class PlatformInterface.PlatformInterfaceLibrary
// (None)

class UClass* UPlatformInterfaceLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlatformInterfaceLibrary");

	return Clss;
}


// PlatformInterfaceLibrary PlatformInterface.Default__PlatformInterfaceLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UPlatformInterfaceLibrary* UPlatformInterfaceLibrary::GetDefaultObj()
{
	static class UPlatformInterfaceLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlatformInterfaceLibrary*>(UPlatformInterfaceLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function PlatformInterface.PlatformInterfaceLibrary.GetPlayerUuidForPlayerState
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class APlayerState*                PlayerState                                                      (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Guid            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct CoreUObject_Guid UPlatformInterfaceLibrary::GetPlayerUuidForPlayerState(class APlayerState* PlayerState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlatformInterfaceLibrary", "GetPlayerUuidForPlayerState");

	Params::UPlatformInterfaceLibrary_GetPlayerUuidForPlayerState_Params Parms{};

	Parms.PlayerState = PlayerState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PlatformInterface.PlatformInterfaceLibrary.GetPlayerUuidForController
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class AController*                 Controller                                                       (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Guid            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct CoreUObject_Guid UPlatformInterfaceLibrary::GetPlayerUuidForController(class AController* Controller)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlatformInterfaceLibrary", "GetPlayerUuidForController");

	Params::UPlatformInterfaceLibrary_GetPlayerUuidForController_Params Parms{};

	Parms.Controller = Controller;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PlatformInterface.PlatformInterfaceLibrary.GetPlayerStateForController
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AController*                 Controller                                                       (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APlayerState*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class APlayerState* UPlatformInterfaceLibrary::GetPlayerStateForController(class AController* Controller)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlatformInterfaceLibrary", "GetPlayerStateForController");

	Params::UPlatformInterfaceLibrary_GetPlayerStateForController_Params Parms{};

	Parms.Controller = Controller;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PlatformInterface.PlatformInterfaceLibrary.GetNetPlayerForController
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AController*                 Controller                                                       (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPlayer*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UPlayer* UPlatformInterfaceLibrary::GetNetPlayerForController(class AController* Controller)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlatformInterfaceLibrary", "GetNetPlayerForController");

	Params::UPlatformInterfaceLibrary_GetNetPlayerForController_Params Parms{};

	Parms.Controller = Controller;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PlatformInterface.PlatformInterfaceLibrary.GetLocalPlayerController
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              PlayerIndex                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APlayerController*           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class APlayerController* UPlatformInterfaceLibrary::GetLocalPlayerController(class UObject* WorldContextObject, int32 PlayerIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlatformInterfaceLibrary", "GetLocalPlayerController");

	Params::UPlatformInterfaceLibrary_GetLocalPlayerController_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.PlayerIndex = PlayerIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PlatformInterface.PlatformInterfaceLibrary.GetInterfaceType
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EPlatformInterfaceType  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EPlatformInterfaceType UPlatformInterfaceLibrary::GetInterfaceType(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlatformInterfaceLibrary", "GetInterfaceType");

	Params::UPlatformInterfaceLibrary_GetInterfaceType_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class PlatformInterface.PlatformInterfaceDataAsset
// (None)

class UClass* UPlatformInterfaceDataAsset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlatformInterfaceDataAsset");

	return Clss;
}


// PlatformInterfaceDataAsset PlatformInterface.Default__PlatformInterfaceDataAsset
// (Public, ClassDefaultObject, ArchetypeObject)

class UPlatformInterfaceDataAsset* UPlatformInterfaceDataAsset::GetDefaultObj()
{
	static class UPlatformInterfaceDataAsset* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlatformInterfaceDataAsset*>(UPlatformInterfaceDataAsset::StaticClass()->DefaultObject);

	return Default;
}


// Class PlatformInterface.PlatformXPTable
// (None)

class UClass* UPlatformXPTable::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlatformXPTable");

	return Clss;
}


// PlatformXPTable PlatformInterface.Default__PlatformXPTable
// (Public, ClassDefaultObject, ArchetypeObject)

class UPlatformXPTable* UPlatformXPTable::GetDefaultObj()
{
	static class UPlatformXPTable* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlatformXPTable*>(UPlatformXPTable::StaticClass()->DefaultObject);

	return Default;
}


// Class PlatformInterface.PlatformInterfaceObject
// (None)

class UClass* UPlatformInterfaceObject::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlatformInterfaceObject");

	return Clss;
}


// PlatformInterfaceObject PlatformInterface.Default__PlatformInterfaceObject
// (Public, ClassDefaultObject, ArchetypeObject)

class UPlatformInterfaceObject* UPlatformInterfaceObject::GetDefaultObj()
{
	static class UPlatformInterfaceObject* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlatformInterfaceObject*>(UPlatformInterfaceObject::StaticClass()->DefaultObject);

	return Default;
}

}


