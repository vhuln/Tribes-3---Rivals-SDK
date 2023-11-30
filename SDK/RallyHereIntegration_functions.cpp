#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class RallyHereIntegration.RH_SubsystemPluginBase
// (None)

class UClass* URH_SubsystemPluginBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RH_SubsystemPluginBase");

	return Clss;
}


// RH_SubsystemPluginBase RallyHereIntegration.Default__RH_SubsystemPluginBase
// (Public, ClassDefaultObject, ArchetypeObject)

class URH_SubsystemPluginBase* URH_SubsystemPluginBase::GetDefaultObj()
{
	static class URH_SubsystemPluginBase* Default = nullptr;

	if (!Default)
		Default = static_cast<URH_SubsystemPluginBase*>(URH_SubsystemPluginBase::StaticClass()->DefaultObject);

	return Default;
}


// Class RallyHereIntegration.RH_LocalPlayerSubsystemPlugin
// (None)

class UClass* URH_LocalPlayerSubsystemPlugin::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RH_LocalPlayerSubsystemPlugin");

	return Clss;
}


// RH_LocalPlayerSubsystemPlugin RallyHereIntegration.Default__RH_LocalPlayerSubsystemPlugin
// (Public, ClassDefaultObject, ArchetypeObject)

class URH_LocalPlayerSubsystemPlugin* URH_LocalPlayerSubsystemPlugin::GetDefaultObj()
{
	static class URH_LocalPlayerSubsystemPlugin* Default = nullptr;

	if (!Default)
		Default = static_cast<URH_LocalPlayerSubsystemPlugin*>(URH_LocalPlayerSubsystemPlugin::StaticClass()->DefaultObject);

	return Default;
}


// Function RallyHereIntegration.RH_LocalPlayerSubsystemPlugin.GetLocalPlayerSubsystem
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class URH_LocalPlayerSubsystem*    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class URH_LocalPlayerSubsystem* URH_LocalPlayerSubsystemPlugin::GetLocalPlayerSubsystem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_LocalPlayerSubsystemPlugin", "GetLocalPlayerSubsystem");

	Params::URH_LocalPlayerSubsystemPlugin_GetLocalPlayerSubsystem_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_LocalPlayerSubsystemPlugin.GetGameInstanceSubsystem
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class URH_GameInstanceSubsystem*   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class URH_GameInstanceSubsystem* URH_LocalPlayerSubsystemPlugin::GetGameInstanceSubsystem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_LocalPlayerSubsystemPlugin", "GetGameInstanceSubsystem");

	Params::URH_LocalPlayerSubsystemPlugin_GetGameInstanceSubsystem_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class RallyHereIntegration.RH_AdSubsystem
// (None)

class UClass* URH_AdSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RH_AdSubsystem");

	return Clss;
}


// RH_AdSubsystem RallyHereIntegration.Default__RH_AdSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class URH_AdSubsystem* URH_AdSubsystem::GetDefaultObj()
{
	static class URH_AdSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<URH_AdSubsystem*>(URH_AdSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Function RallyHereIntegration.RH_AdSubsystem.GetCodesFromLocale
// (Final, Native, Static, Public, HasOutParams)
// Parameters:
// class FString                      OutLangCode                                                      (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OutCountryCode                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URH_AdSubsystem::GetCodesFromLocale(class FString* OutLangCode, class FString* OutCountryCode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_AdSubsystem", "GetCodesFromLocale");

	Params::URH_AdSubsystem_GetCodesFromLocale_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutLangCode != nullptr)
		*OutLangCode = std::move(Parms.OutLangCode);

	if (OutCountryCode != nullptr)
		*OutCountryCode = std::move(Parms.OutCountryCode);

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_AdSubsystem.GetAdApiToken
// (Final, Native, Public, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString URH_AdSubsystem::GetAdApiToken()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_AdSubsystem", "GetAdApiToken");

	Params::URH_AdSubsystem_GetAdApiToken_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class RallyHereIntegration.RH_OnlineBeaconHost
// (Actor)

class UClass* ARH_OnlineBeaconHost::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RH_OnlineBeaconHost");

	return Clss;
}


// RH_OnlineBeaconHost RallyHereIntegration.Default__RH_OnlineBeaconHost
// (Public, ClassDefaultObject, ArchetypeObject)

class ARH_OnlineBeaconHost* ARH_OnlineBeaconHost::GetDefaultObj()
{
	static class ARH_OnlineBeaconHost* Default = nullptr;

	if (!Default)
		Default = static_cast<ARH_OnlineBeaconHost*>(ARH_OnlineBeaconHost::StaticClass()->DefaultObject);

	return Default;
}


// Class RallyHereIntegration.RH_OnlineBeaconClient
// (Actor)

class UClass* ARH_OnlineBeaconClient::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RH_OnlineBeaconClient");

	return Clss;
}


// RH_OnlineBeaconClient RallyHereIntegration.Default__RH_OnlineBeaconClient
// (Public, ClassDefaultObject, ArchetypeObject)

class ARH_OnlineBeaconClient* ARH_OnlineBeaconClient::GetDefaultObj()
{
	static class ARH_OnlineBeaconClient* Default = nullptr;

	if (!Default)
		Default = static_cast<ARH_OnlineBeaconClient*>(ARH_OnlineBeaconClient::StaticClass()->DefaultObject);

	return Default;
}


// Class RallyHereIntegration.RH_TestBeaconClient
// (Actor)

class UClass* ARH_TestBeaconClient::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RH_TestBeaconClient");

	return Clss;
}


// RH_TestBeaconClient RallyHereIntegration.Default__RH_TestBeaconClient
// (Public, ClassDefaultObject, ArchetypeObject)

class ARH_TestBeaconClient* ARH_TestBeaconClient::GetDefaultObj()
{
	static class ARH_TestBeaconClient* Default = nullptr;

	if (!Default)
		Default = static_cast<ARH_TestBeaconClient*>(ARH_TestBeaconClient::StaticClass()->DefaultObject);

	return Default;
}


// Function RallyHereIntegration.RH_TestBeaconClient.TestPing
// (Final, Native, Public)
// Parameters:

void ARH_TestBeaconClient::TestPing()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_TestBeaconClient", "TestPing");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function RallyHereIntegration.RH_TestBeaconClient.ServerPing
// (Net, NetReliable, Native, Event, Public, NetServer, HasDefaults, NetValidate)
// Parameters:
// struct CoreUObject_DateTime        ClientTime                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ARH_TestBeaconClient::ServerPing(const struct CoreUObject_DateTime& ClientTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_TestBeaconClient", "ServerPing");

	Params::ARH_TestBeaconClient_ServerPing_Params Parms{};

	Parms.ClientTime = ClientTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RallyHereIntegration.RH_TestBeaconClient.ClientPong
// (Net, NetReliable, Native, Event, Public, HasDefaults, NetClient)
// Parameters:
// struct CoreUObject_DateTime        ClientTime                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ARH_TestBeaconClient::ClientPong(const struct CoreUObject_DateTime& ClientTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_TestBeaconClient", "ClientPong");

	Params::ARH_TestBeaconClient_ClientPong_Params Parms{};

	Parms.ClientTime = ClientTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class RallyHereIntegration.RH_TestBeaconHostObject
// (Actor)

class UClass* ARH_TestBeaconHostObject::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RH_TestBeaconHostObject");

	return Clss;
}


// RH_TestBeaconHostObject RallyHereIntegration.Default__RH_TestBeaconHostObject
// (Public, ClassDefaultObject, ArchetypeObject)

class ARH_TestBeaconHostObject* ARH_TestBeaconHostObject::GetDefaultObj()
{
	static class ARH_TestBeaconHostObject* Default = nullptr;

	if (!Default)
		Default = static_cast<ARH_TestBeaconHostObject*>(ARH_TestBeaconHostObject::StaticClass()->DefaultObject);

	return Default;
}


// Class RallyHereIntegration.RH_CatalogItem
// (None)

class UClass* URH_CatalogItem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RH_CatalogItem");

	return Clss;
}


// RH_CatalogItem RallyHereIntegration.Default__RH_CatalogItem
// (Public, ClassDefaultObject, ArchetypeObject)

class URH_CatalogItem* URH_CatalogItem::GetDefaultObj()
{
	static class URH_CatalogItem* Default = nullptr;

	if (!Default)
		Default = static_cast<URH_CatalogItem*>(URH_CatalogItem::StaticClass()->DefaultObject);

	return Default;
}


// Function RallyHereIntegration.RH_CatalogItem.GetType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ERHAPI_ItemType         ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ERHAPI_ItemType URH_CatalogItem::GetType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_CatalogItem", "GetType");

	Params::URH_CatalogItem_GetType_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_CatalogItem.GetRefItemId
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 URH_CatalogItem::GetRefItemId()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_CatalogItem", "GetRefItemId");

	Params::URH_CatalogItem_GetRefItemId_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_CatalogItem.GetLevelXpTableId
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 URH_CatalogItem::GetLevelXpTableId()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_CatalogItem", "GetLevelXpTableId");

	Params::URH_CatalogItem_GetLevelXpTableId_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_CatalogItem.GetLevelVendorId
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 URH_CatalogItem::GetLevelVendorId()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_CatalogItem", "GetLevelVendorId");

	Params::URH_CatalogItem_GetLevelVendorId_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_CatalogItem.GetItemInventoryBucketUseRulesetId
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString URH_CatalogItem::GetItemInventoryBucketUseRulesetId()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_CatalogItem", "GetItemInventoryBucketUseRulesetId");

	Params::URH_CatalogItem_GetItemInventoryBucketUseRulesetId_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_CatalogItem.GetItemId
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 URH_CatalogItem::GetItemId()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_CatalogItem", "GetItemId");

	Params::URH_CatalogItem_GetItemId_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_CatalogItem.GetEntitledLootId
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 URH_CatalogItem::GetEntitledLootId()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_CatalogItem", "GetEntitledLootId");

	Params::URH_CatalogItem_GetEntitledLootId_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_CatalogItem.GetCouponDiscountPercentage
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float URH_CatalogItem::GetCouponDiscountPercentage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_CatalogItem", "GetCouponDiscountPercentage");

	Params::URH_CatalogItem_GetCouponDiscountPercentage_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_CatalogItem.GetCouponDiscountLoot
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<int32>                      ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<int32> URH_CatalogItem::GetCouponDiscountLoot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_CatalogItem", "GetCouponDiscountLoot");

	Params::URH_CatalogItem_GetCouponDiscountLoot_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_CatalogItem.GetCouponDiscountCurrencyItemId
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 URH_CatalogItem::GetCouponDiscountCurrencyItemId()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_CatalogItem", "GetCouponDiscountCurrencyItemId");

	Params::URH_CatalogItem_GetCouponDiscountCurrencyItemId_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_CatalogItem.GetCouponConsumeOnUse
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URH_CatalogItem::GetCouponConsumeOnUse()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_CatalogItem", "GetCouponConsumeOnUse");

	Params::URH_CatalogItem_GetCouponConsumeOnUse_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_CatalogItem.GetAvailabilityFlags
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 URH_CatalogItem::GetAvailabilityFlags()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_CatalogItem", "GetAvailabilityFlags");

	Params::URH_CatalogItem_GetAvailabilityFlags_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class RallyHereIntegration.RH_GameInstanceSubsystemPlugin
// (None)

class UClass* URH_GameInstanceSubsystemPlugin::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RH_GameInstanceSubsystemPlugin");

	return Clss;
}


// RH_GameInstanceSubsystemPlugin RallyHereIntegration.Default__RH_GameInstanceSubsystemPlugin
// (Public, ClassDefaultObject, ArchetypeObject)

class URH_GameInstanceSubsystemPlugin* URH_GameInstanceSubsystemPlugin::GetDefaultObj()
{
	static class URH_GameInstanceSubsystemPlugin* Default = nullptr;

	if (!Default)
		Default = static_cast<URH_GameInstanceSubsystemPlugin*>(URH_GameInstanceSubsystemPlugin::StaticClass()->DefaultObject);

	return Default;
}


// Function RallyHereIntegration.RH_GameInstanceSubsystemPlugin.GetGameInstanceSubsystem
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class URH_GameInstanceSubsystem*   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class URH_GameInstanceSubsystem* URH_GameInstanceSubsystemPlugin::GetGameInstanceSubsystem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_GameInstanceSubsystemPlugin", "GetGameInstanceSubsystem");

	Params::URH_GameInstanceSubsystemPlugin_GetGameInstanceSubsystem_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class RallyHereIntegration.RH_CatalogSubsystem
// (None)

class UClass* URH_CatalogSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RH_CatalogSubsystem");

	return Clss;
}


// RH_CatalogSubsystem RallyHereIntegration.Default__RH_CatalogSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class URH_CatalogSubsystem* URH_CatalogSubsystem::GetDefaultObj()
{
	static class URH_CatalogSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<URH_CatalogSubsystem*>(URH_CatalogSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Function RallyHereIntegration.RH_CatalogSubsystem.GetXpTable
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              XpTableId                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct RallyHereAPI_RHAPI_XpTable  XpTable                                                          (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URH_CatalogSubsystem::GetXpTable(int32 XpTableId, struct RallyHereAPI_RHAPI_XpTable* XpTable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_CatalogSubsystem", "GetXpTable");

	Params::URH_CatalogSubsystem_GetXpTable_Params Parms{};

	Parms.XpTableId = XpTableId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (XpTable != nullptr)
		*XpTable = std::move(Parms.XpTable);

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_CatalogSubsystem.BLUEPRINT_GetCatalogXpAll
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URH_CatalogSubsystem::BLUEPRINT_GetCatalogXpAll(FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_CatalogSubsystem", "BLUEPRINT_GetCatalogXpAll");

	Params::URH_CatalogSubsystem_BLUEPRINT_GetCatalogXpAll_Params Parms{};

	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RallyHereIntegration.RH_CatalogSubsystem.BLUEPRINT_GetCatalogVendorsAll
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URH_CatalogSubsystem::BLUEPRINT_GetCatalogVendorsAll(FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_CatalogSubsystem", "BLUEPRINT_GetCatalogVendorsAll");

	Params::URH_CatalogSubsystem_BLUEPRINT_GetCatalogVendorsAll_Params Parms{};

	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RallyHereIntegration.RH_CatalogSubsystem.BLUEPRINT_GetCatalogVendor
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct RallyHereIntegration_RHVendorGetRequestVendorRequest                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void URH_CatalogSubsystem::BLUEPRINT_GetCatalogVendor(struct RallyHereIntegration_RHVendorGetRequest& VendorRequest)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_CatalogSubsystem", "BLUEPRINT_GetCatalogVendor");

	Params::URH_CatalogSubsystem_BLUEPRINT_GetCatalogVendor_Params Parms{};

	Parms.VendorRequest = VendorRequest;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RallyHereIntegration.RH_CatalogSubsystem.BLUEPRINT_GetCatalogTimeFramesAll
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URH_CatalogSubsystem::BLUEPRINT_GetCatalogTimeFramesAll(FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_CatalogSubsystem", "BLUEPRINT_GetCatalogTimeFramesAll");

	Params::URH_CatalogSubsystem_BLUEPRINT_GetCatalogTimeFramesAll_Params Parms{};

	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RallyHereIntegration.RH_CatalogSubsystem.BLUEPRINT_GetCatalogPricePointsAll
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URH_CatalogSubsystem::BLUEPRINT_GetCatalogPricePointsAll(FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_CatalogSubsystem", "BLUEPRINT_GetCatalogPricePointsAll");

	Params::URH_CatalogSubsystem_BLUEPRINT_GetCatalogPricePointsAll_Params Parms{};

	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RallyHereIntegration.RH_CatalogSubsystem.BLUEPRINT_GetCatalogItem
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              ItemId                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URH_CatalogSubsystem::BLUEPRINT_GetCatalogItem(int32 ItemId, FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_CatalogSubsystem", "BLUEPRINT_GetCatalogItem");

	Params::URH_CatalogSubsystem_BLUEPRINT_GetCatalogItem_Params Parms{};

	Parms.ItemId = ItemId;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RallyHereIntegration.RH_CatalogSubsystem.BLUEPRINT_GetCatalogInventoryBucketUseRuleSetsAll
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URH_CatalogSubsystem::BLUEPRINT_GetCatalogInventoryBucketUseRuleSetsAll(FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_CatalogSubsystem", "BLUEPRINT_GetCatalogInventoryBucketUseRuleSetsAll");

	Params::URH_CatalogSubsystem_BLUEPRINT_GetCatalogInventoryBucketUseRuleSetsAll_Params Parms{};

	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RallyHereIntegration.RH_CatalogSubsystem.BLUEPRINT_GetCatalogAll
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URH_CatalogSubsystem::BLUEPRINT_GetCatalogAll(FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_CatalogSubsystem", "BLUEPRINT_GetCatalogAll");

	Params::URH_CatalogSubsystem_BLUEPRINT_GetCatalogAll_Params Parms{};

	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class RallyHereIntegration.RH_CatalogBlueprintLibrary
// (None)

class UClass* URH_CatalogBlueprintLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RH_CatalogBlueprintLibrary");

	return Clss;
}


// RH_CatalogBlueprintLibrary RallyHereIntegration.Default__RH_CatalogBlueprintLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class URH_CatalogBlueprintLibrary* URH_CatalogBlueprintLibrary::GetDefaultObj()
{
	static class URH_CatalogBlueprintLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<URH_CatalogBlueprintLibrary*>(URH_CatalogBlueprintLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function RallyHereIntegration.RH_CatalogBlueprintLibrary.IsCouponApplicableForLootId
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class URH_CatalogItem*             CouponItem                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              LootId                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URH_CatalogBlueprintLibrary::IsCouponApplicableForLootId(class URH_CatalogItem* CouponItem, int32 LootId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_CatalogBlueprintLibrary", "IsCouponApplicableForLootId");

	Params::URH_CatalogBlueprintLibrary_IsCouponApplicableForLootId_Params Parms{};

	Parms.CouponItem = CouponItem;
	Parms.LootId = LootId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_CatalogBlueprintLibrary.IsCouponApplicableForItem
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class URH_CatalogItem*             CouponItem                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct RallyHereAPI_RHAPI_Loot     LootItem                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URH_CatalogBlueprintLibrary::IsCouponApplicableForItem(class URH_CatalogItem* CouponItem, struct RallyHereAPI_RHAPI_Loot& LootItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_CatalogBlueprintLibrary", "IsCouponApplicableForItem");

	Params::URH_CatalogBlueprintLibrary_IsCouponApplicableForItem_Params Parms{};

	Parms.CouponItem = CouponItem;
	Parms.LootItem = LootItem;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_CatalogBlueprintLibrary.GetXpAtLevel
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct RallyHereAPI_RHAPI_XpTable  XpTable                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              XpLevel                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int64                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int64 URH_CatalogBlueprintLibrary::GetXpAtLevel(struct RallyHereAPI_RHAPI_XpTable& XpTable, int32 XpLevel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_CatalogBlueprintLibrary", "GetXpAtLevel");

	Params::URH_CatalogBlueprintLibrary_GetXpAtLevel_Params Parms{};

	Parms.XpTable = XpTable;
	Parms.XpLevel = XpLevel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_CatalogBlueprintLibrary.GetVendorItemById
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct RallyHereAPI_RHAPI_Vendor   Vendor                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              LootId                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct RallyHereAPI_RHAPI_Loot     LootItem                                                         (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URH_CatalogBlueprintLibrary::GetVendorItemById(struct RallyHereAPI_RHAPI_Vendor& Vendor, int32 LootId, struct RallyHereAPI_RHAPI_Loot* LootItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_CatalogBlueprintLibrary", "GetVendorItemById");

	Params::URH_CatalogBlueprintLibrary_GetVendorItemById_Params Parms{};

	Parms.Vendor = Vendor;
	Parms.LootId = LootId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (LootItem != nullptr)
		*LootItem = std::move(Parms.LootItem);

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_CatalogBlueprintLibrary.GetUnitPrice
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct RallyHereAPI_RHAPI_PriceBreakpoint>PriceBreakpoints                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              CurrencyItemId                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Quantity                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Price                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URH_CatalogBlueprintLibrary::GetUnitPrice(TArray<struct RallyHereAPI_RHAPI_PriceBreakpoint>& PriceBreakpoints, int32 CurrencyItemId, int32 Quantity, int32* Price)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_CatalogBlueprintLibrary", "GetUnitPrice");

	Params::URH_CatalogBlueprintLibrary_GetUnitPrice_Params Parms{};

	Parms.PriceBreakpoints = PriceBreakpoints;
	Parms.CurrencyItemId = CurrencyItemId;
	Parms.Quantity = Quantity;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Price != nullptr)
		*Price = Parms.Price;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_CatalogBlueprintLibrary.GetLevelAtXp
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct RallyHereAPI_RHAPI_XpTable  XpTable                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int64                              XpPoints                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 URH_CatalogBlueprintLibrary::GetLevelAtXp(struct RallyHereAPI_RHAPI_XpTable& XpTable, int64 XpPoints)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_CatalogBlueprintLibrary", "GetLevelAtXp");

	Params::URH_CatalogBlueprintLibrary_GetLevelAtXp_Params Parms{};

	Parms.XpTable = XpTable;
	Parms.XpPoints = XpPoints;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_CatalogBlueprintLibrary.GetCouponDiscountedPrice
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class URH_CatalogItem*             CouponItem                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Price                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 URH_CatalogBlueprintLibrary::GetCouponDiscountedPrice(class URH_CatalogItem* CouponItem, int32 Price)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_CatalogBlueprintLibrary", "GetCouponDiscountedPrice");

	Params::URH_CatalogBlueprintLibrary_GetCouponDiscountedPrice_Params Parms{};

	Parms.CouponItem = CouponItem;
	Parms.Price = Price;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class RallyHereIntegration.RH_ConfigSubsystem
// (None)

class UClass* URH_ConfigSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RH_ConfigSubsystem");

	return Clss;
}


// RH_ConfigSubsystem RallyHereIntegration.Default__RH_ConfigSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class URH_ConfigSubsystem* URH_ConfigSubsystem::GetDefaultObj()
{
	static class URH_ConfigSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<URH_ConfigSubsystem*>(URH_ConfigSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Function RallyHereIntegration.RH_ConfigSubsystem.HasFetchedSiteSettings
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URH_ConfigSubsystem::HasFetchedSiteSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_ConfigSubsystem", "HasFetchedSiteSettings");

	Params::URH_ConfigSubsystem_HasFetchedSiteSettings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_ConfigSubsystem.HasFetchedAppSettings
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URH_ConfigSubsystem::HasFetchedAppSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_ConfigSubsystem", "HasFetchedAppSettings");

	Params::URH_ConfigSubsystem_HasFetchedAppSettings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_ConfigSubsystem.GetServerTimeDrift
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct CoreUObject_Timespan        Timespan                                                         (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URH_ConfigSubsystem::GetServerTimeDrift(struct CoreUObject_Timespan* Timespan)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_ConfigSubsystem", "GetServerTimeDrift");

	Params::URH_ConfigSubsystem_GetServerTimeDrift_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Timespan != nullptr)
		*Timespan = std::move(Parms.Timespan);

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_ConfigSubsystem.GetServerTimeCache
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct RallyHereIntegration_RH_ServerTimeCacheReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

struct RallyHereIntegration_RH_ServerTimeCache URH_ConfigSubsystem::GetServerTimeCache()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_ConfigSubsystem", "GetServerTimeCache");

	Params::URH_ConfigSubsystem_GetServerTimeCache_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_ConfigSubsystem.GetServerTime
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct CoreUObject_DateTime        Time                                                             (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URH_ConfigSubsystem::GetServerTime(struct CoreUObject_DateTime* Time)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_ConfigSubsystem", "GetServerTime");

	Params::URH_ConfigSubsystem_GetServerTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Time != nullptr)
		*Time = std::move(Parms.Time);

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_ConfigSubsystem.GetAppSettings
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TMap<class FString, class FString> ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TMap<class FString, class FString> URH_ConfigSubsystem::GetAppSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_ConfigSubsystem", "GetAppSettings");

	Params::URH_ConfigSubsystem_GetAppSettings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_ConfigSubsystem.GetAppSetting
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Value                                                            (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URH_ConfigSubsystem::GetAppSetting(const class FString& Key, class FString* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_ConfigSubsystem", "GetAppSetting");

	Params::URH_ConfigSubsystem_GetAppSetting_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Value != nullptr)
		*Value = std::move(Parms.Value);

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_ConfigSubsystem.BLUEPRINT_RefreshServerTimeCache
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URH_ConfigSubsystem::BLUEPRINT_RefreshServerTimeCache(FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_ConfigSubsystem", "BLUEPRINT_RefreshServerTimeCache");

	Params::URH_ConfigSubsystem_BLUEPRINT_RefreshServerTimeCache_Params Parms{};

	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class RallyHereIntegration.RH_Diagnostics
// (None)

class UClass* URH_Diagnostics::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RH_Diagnostics");

	return Clss;
}


// RH_Diagnostics RallyHereIntegration.Default__RH_Diagnostics
// (Public, ClassDefaultObject, ArchetypeObject)

class URH_Diagnostics* URH_Diagnostics::GetDefaultObj()
{
	static class URH_Diagnostics* Default = nullptr;

	if (!Default)
		Default = static_cast<URH_Diagnostics*>(URH_Diagnostics::StaticClass()->DefaultObject);

	return Default;
}


// Function RallyHereIntegration.RH_Diagnostics.GenerateReport
// (Final, Native, Public, HasOutParams, Const)
// Parameters:
// struct RallyHereIntegration_RH_DiagnosticReportOptionsOptions                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void URH_Diagnostics::GenerateReport(struct RallyHereIntegration_RH_DiagnosticReportOptions& Options)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_Diagnostics", "GenerateReport");

	Params::URH_Diagnostics_GenerateReport_Params Parms{};

	Parms.Options = Options;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class RallyHereIntegration.RH_EntitlementSubsystem
// (None)

class UClass* URH_EntitlementSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RH_EntitlementSubsystem");

	return Clss;
}


// RH_EntitlementSubsystem RallyHereIntegration.Default__RH_EntitlementSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class URH_EntitlementSubsystem* URH_EntitlementSubsystem::GetDefaultObj()
{
	static class URH_EntitlementSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<URH_EntitlementSubsystem*>(URH_EntitlementSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Class RallyHereIntegration.RH_FriendSubsystem
// (None)

class UClass* URH_FriendSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RH_FriendSubsystem");

	return Clss;
}


// RH_FriendSubsystem RallyHereIntegration.Default__RH_FriendSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class URH_FriendSubsystem* URH_FriendSubsystem::GetDefaultObj()
{
	static class URH_FriendSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<URH_FriendSubsystem*>(URH_FriendSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Function RallyHereIntegration.RH_FriendSubsystem.UpdateRecentPlayerForOSS
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class URH_LocalPlayerSubsystem*    LocalPlayerSubsystem                                             (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Guid            PlayerUuid                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URH_FriendSubsystem::UpdateRecentPlayerForOSS(class URH_LocalPlayerSubsystem* LocalPlayerSubsystem, struct CoreUObject_Guid& PlayerUuid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_FriendSubsystem", "UpdateRecentPlayerForOSS");

	Params::URH_FriendSubsystem_UpdateRecentPlayerForOSS_Params Parms{};

	Parms.LocalPlayerSubsystem = LocalPlayerSubsystem;
	Parms.PlayerUuid = PlayerUuid;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RallyHereIntegration.RH_FriendSubsystem.IsPlayerRhBlocked
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct CoreUObject_Guid            PlayerUuid                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URH_FriendSubsystem::IsPlayerRhBlocked(struct CoreUObject_Guid& PlayerUuid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_FriendSubsystem", "IsPlayerRhBlocked");

	Params::URH_FriendSubsystem_IsPlayerRhBlocked_Params Parms{};

	Parms.PlayerUuid = PlayerUuid;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_FriendSubsystem.IsPlayerPlatformBlocked
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct CoreUObject_Guid            PlayerUuid                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URH_FriendSubsystem::IsPlayerPlatformBlocked(struct CoreUObject_Guid& PlayerUuid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_FriendSubsystem", "IsPlayerPlatformBlocked");

	Params::URH_FriendSubsystem_IsPlayerPlatformBlocked_Params Parms{};

	Parms.PlayerUuid = PlayerUuid;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_FriendSubsystem.IsPlayerBlocked
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct CoreUObject_Guid            PlayerUuid                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URH_FriendSubsystem::IsPlayerBlocked(struct CoreUObject_Guid& PlayerUuid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_FriendSubsystem", "IsPlayerBlocked");

	Params::URH_FriendSubsystem_IsPlayerBlocked_Params Parms{};

	Parms.PlayerUuid = PlayerUuid;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_FriendSubsystem.HasFriendsCached
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URH_FriendSubsystem::HasFriendsCached()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_FriendSubsystem", "HasFriendsCached");

	Params::URH_FriendSubsystem_HasFriendsCached_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_FriendSubsystem.GetRH_PlayerInfoSubsystem
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class URH_PlayerInfoSubsystem*     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class URH_PlayerInfoSubsystem* URH_FriendSubsystem::GetRH_PlayerInfoSubsystem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_FriendSubsystem", "GetRH_PlayerInfoSubsystem");

	Params::URH_FriendSubsystem_GetRH_PlayerInfoSubsystem_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_FriendSubsystem.GetOrCreateFriend
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class URH_PlayerInfo*              PlayerInfo                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class URH_RHFriendAndPlatformFriend*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class URH_RHFriendAndPlatformFriend* URH_FriendSubsystem::GetOrCreateFriend(class URH_PlayerInfo* PlayerInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_FriendSubsystem", "GetOrCreateFriend");

	Params::URH_FriendSubsystem_GetOrCreateFriend_Params Parms{};

	Parms.PlayerInfo = PlayerInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_FriendSubsystem.GetFriends
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class URH_RHFriendAndPlatformFriend*>ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<class URH_RHFriendAndPlatformFriend*> URH_FriendSubsystem::GetFriends()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_FriendSubsystem", "GetFriends");

	Params::URH_FriendSubsystem_GetFriends_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_FriendSubsystem.GetFriendByUuidOrPlatformId
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct CoreUObject_Guid            PlayerUuid                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct RallyHereIntegration_RH_PlayerPlatformIdPlatformPlayerId                                                 (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class URH_RHFriendAndPlatformFriend*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class URH_RHFriendAndPlatformFriend* URH_FriendSubsystem::GetFriendByUuidOrPlatformId(struct CoreUObject_Guid& PlayerUuid, struct RallyHereIntegration_RH_PlayerPlatformId& PlatformPlayerId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_FriendSubsystem", "GetFriendByUuidOrPlatformId");

	Params::URH_FriendSubsystem_GetFriendByUuidOrPlatformId_Params Parms{};

	Parms.PlayerUuid = PlayerUuid;
	Parms.PlatformPlayerId = PlatformPlayerId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_FriendSubsystem.GetFriendByUuid
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct CoreUObject_Guid            PlayerUuid                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class URH_RHFriendAndPlatformFriend*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class URH_RHFriendAndPlatformFriend* URH_FriendSubsystem::GetFriendByUuid(struct CoreUObject_Guid& PlayerUuid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_FriendSubsystem", "GetFriendByUuid");

	Params::URH_FriendSubsystem_GetFriendByUuid_Params Parms{};

	Parms.PlayerUuid = PlayerUuid;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_FriendSubsystem.GetFriendByPlayerInfo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class URH_PlayerInfo*              PlayerInfo                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class URH_RHFriendAndPlatformFriend*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class URH_RHFriendAndPlatformFriend* URH_FriendSubsystem::GetFriendByPlayerInfo(class URH_PlayerInfo* PlayerInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_FriendSubsystem", "GetFriendByPlayerInfo");

	Params::URH_FriendSubsystem_GetFriendByPlayerInfo_Params Parms{};

	Parms.PlayerInfo = PlayerInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_FriendSubsystem.GetFriendByPlatformId
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct RallyHereIntegration_RH_PlayerPlatformIdPlatformPlayerId                                                 (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class URH_RHFriendAndPlatformFriend*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class URH_RHFriendAndPlatformFriend* URH_FriendSubsystem::GetFriendByPlatformId(struct RallyHereIntegration_RH_PlayerPlatformId& PlatformPlayerId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_FriendSubsystem", "GetFriendByPlatformId");

	Params::URH_FriendSubsystem_GetFriendByPlatformId_Params Parms{};

	Parms.PlatformPlayerId = PlatformPlayerId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_FriendSubsystem.GetBlocked
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct CoreUObject_Guid>    ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<struct CoreUObject_Guid> URH_FriendSubsystem::GetBlocked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_FriendSubsystem", "GetBlocked");

	Params::URH_FriendSubsystem_GetBlocked_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_FriendSubsystem.BLUEPRINT_UnblockPlayer
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct CoreUObject_Guid            PlayerUuid                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URH_FriendSubsystem::BLUEPRINT_UnblockPlayer(struct CoreUObject_Guid& PlayerUuid, FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_FriendSubsystem", "BLUEPRINT_UnblockPlayer");

	Params::URH_FriendSubsystem_BLUEPRINT_UnblockPlayer_Params Parms{};

	Parms.PlayerUuid = PlayerUuid;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_FriendSubsystem.BLUEPRINT_RemoveFriend
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct CoreUObject_Guid            PlayerUuid                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URH_FriendSubsystem::BLUEPRINT_RemoveFriend(struct CoreUObject_Guid& PlayerUuid, FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_FriendSubsystem", "BLUEPRINT_RemoveFriend");

	Params::URH_FriendSubsystem_BLUEPRINT_RemoveFriend_Params Parms{};

	Parms.PlayerUuid = PlayerUuid;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_FriendSubsystem.BLUEPRINT_FetchFriendsList
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URH_FriendSubsystem::BLUEPRINT_FetchFriendsList(FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_FriendSubsystem", "BLUEPRINT_FetchFriendsList");

	Params::URH_FriendSubsystem_BLUEPRINT_FetchFriendsList_Params Parms{};

	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_FriendSubsystem.BLUEPRINT_FetchFriend
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct CoreUObject_Guid            PlayerUuid                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URH_FriendSubsystem::BLUEPRINT_FetchFriend(struct CoreUObject_Guid& PlayerUuid, FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_FriendSubsystem", "BLUEPRINT_FetchFriend");

	Params::URH_FriendSubsystem_BLUEPRINT_FetchFriend_Params Parms{};

	Parms.PlayerUuid = PlayerUuid;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_FriendSubsystem.BLUEPRINT_FetchBlockedPlayer
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct CoreUObject_Guid            PlayerUuid                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URH_FriendSubsystem::BLUEPRINT_FetchBlockedPlayer(struct CoreUObject_Guid& PlayerUuid, FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_FriendSubsystem", "BLUEPRINT_FetchBlockedPlayer");

	Params::URH_FriendSubsystem_BLUEPRINT_FetchBlockedPlayer_Params Parms{};

	Parms.PlayerUuid = PlayerUuid;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_FriendSubsystem.BLUEPRINT_FetchBlockedList
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URH_FriendSubsystem::BLUEPRINT_FetchBlockedList(FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_FriendSubsystem", "BLUEPRINT_FetchBlockedList");

	Params::URH_FriendSubsystem_BLUEPRINT_FetchBlockedList_Params Parms{};

	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_FriendSubsystem.BLUEPRINT_DeleteNotes
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct CoreUObject_Guid            PlayerUuid                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URH_FriendSubsystem::BLUEPRINT_DeleteNotes(struct CoreUObject_Guid& PlayerUuid, FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_FriendSubsystem", "BLUEPRINT_DeleteNotes");

	Params::URH_FriendSubsystem_BLUEPRINT_DeleteNotes_Params Parms{};

	Parms.PlayerUuid = PlayerUuid;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_FriendSubsystem.BLUEPRINT_BlockPlayer
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct CoreUObject_Guid            PlayerUuid                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URH_FriendSubsystem::BLUEPRINT_BlockPlayer(struct CoreUObject_Guid& PlayerUuid, FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_FriendSubsystem", "BLUEPRINT_BlockPlayer");

	Params::URH_FriendSubsystem_BLUEPRINT_BlockPlayer_Params Parms{};

	Parms.PlayerUuid = PlayerUuid;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_FriendSubsystem.BLUEPRINT_AddNotes
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct CoreUObject_Guid            PlayerUuid                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Notes                                                            (Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URH_FriendSubsystem::BLUEPRINT_AddNotes(struct CoreUObject_Guid& PlayerUuid, class FString& Notes, FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_FriendSubsystem", "BLUEPRINT_AddNotes");

	Params::URH_FriendSubsystem_BLUEPRINT_AddNotes_Params Parms{};

	Parms.PlayerUuid = PlayerUuid;
	Parms.Notes = Notes;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_FriendSubsystem.BLUEPRINT_AddFriend
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct CoreUObject_Guid            PlayerUuid                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URH_FriendSubsystem::BLUEPRINT_AddFriend(struct CoreUObject_Guid& PlayerUuid, FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_FriendSubsystem", "BLUEPRINT_AddFriend");

	Params::URH_FriendSubsystem_BLUEPRINT_AddFriend_Params Parms{};

	Parms.PlayerUuid = PlayerUuid;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class RallyHereIntegration.RH_PlatformFriend
// (None)

class UClass* URH_PlatformFriend::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RH_PlatformFriend");

	return Clss;
}


// RH_PlatformFriend RallyHereIntegration.Default__RH_PlatformFriend
// (Public, ClassDefaultObject, ArchetypeObject)

class URH_PlatformFriend* URH_PlatformFriend::GetDefaultObj()
{
	static class URH_PlatformFriend* Default = nullptr;

	if (!Default)
		Default = static_cast<URH_PlatformFriend*>(URH_PlatformFriend::StaticClass()->DefaultObject);

	return Default;
}


// Function RallyHereIntegration.RH_PlatformFriend.IsPlayingThisGame
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URH_PlatformFriend::IsPlayingThisGame()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_PlatformFriend", "IsPlayingThisGame");

	Params::URH_PlatformFriend_IsPlayingThisGame_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_PlatformFriend.IsPlayingGame
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URH_PlatformFriend::IsPlayingGame()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_PlatformFriend", "IsPlayingGame");

	Params::URH_PlatformFriend_IsPlayingGame_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_PlatformFriend.IsOnline
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URH_PlatformFriend::IsOnline()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_PlatformFriend", "IsOnline");

	Params::URH_PlatformFriend_IsOnline_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_PlatformFriend.IsJoinable
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URH_PlatformFriend::IsJoinable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_PlatformFriend", "IsJoinable");

	Params::URH_PlatformFriend_IsJoinable_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_PlatformFriend.IsFriend
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URH_PlatformFriend::IsFriend()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_PlatformFriend", "IsFriend");

	Params::URH_PlatformFriend_IsFriend_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_PlatformFriend.IsDND
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URH_PlatformFriend::IsDND()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_PlatformFriend", "IsDND");

	Params::URH_PlatformFriend_IsDND_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_PlatformFriend.IsBlocked
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URH_PlatformFriend::IsBlocked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_PlatformFriend", "IsBlocked");

	Params::URH_PlatformFriend_IsBlocked_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_PlatformFriend.Init
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class URH_PlatformFriend*          Other                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URH_PlatformFriend::Init(class URH_PlatformFriend* Other)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_PlatformFriend", "Init");

	Params::URH_PlatformFriend_Init_Params Parms{};

	Parms.Other = Other;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RallyHereIntegration.RH_PlatformFriend.HasPendingFriendRequestToYou
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URH_PlatformFriend::HasPendingFriendRequestToYou()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_PlatformFriend", "HasPendingFriendRequestToYou");

	Params::URH_PlatformFriend_HasPendingFriendRequestToYou_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_PlatformFriend.HasPendingFriendRequestFromYou
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URH_PlatformFriend::HasPendingFriendRequestFromYou()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_PlatformFriend", "HasPendingFriendRequestFromYou");

	Params::URH_PlatformFriend_HasPendingFriendRequestFromYou_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_PlatformFriend.HasAnyRelationship
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URH_PlatformFriend::HasAnyRelationship()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_PlatformFriend", "HasAnyRelationship");

	Params::URH_PlatformFriend_HasAnyRelationship_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_PlatformFriend.GetRichPresenceInfo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString URH_PlatformFriend::GetRichPresenceInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_PlatformFriend", "GetRichPresenceInfo");

	Params::URH_PlatformFriend_GetRichPresenceInfo_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_PlatformFriend.GetPlayerPlatformId
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct RallyHereIntegration_RH_PlayerPlatformIdReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct RallyHereIntegration_RH_PlayerPlatformId URH_PlatformFriend::GetPlayerPlatformId()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_PlatformFriend", "GetPlayerPlatformId");

	Params::URH_PlatformFriend_GetPlayerPlatformId_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_PlatformFriend.GetPlatformUserId
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString URH_PlatformFriend::GetPlatformUserId()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_PlatformFriend", "GetPlatformUserId");

	Params::URH_PlatformFriend_GetPlatformUserId_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_PlatformFriend.GetPlatformBase
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ERHAPI_Platform         ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ERHAPI_Platform URH_PlatformFriend::GetPlatformBase()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_PlatformFriend", "GetPlatformBase");

	Params::URH_PlatformFriend_GetPlatformBase_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_PlatformFriend.GetPlatform
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ERHAPI_Platform         ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ERHAPI_Platform URH_PlatformFriend::GetPlatform()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_PlatformFriend", "GetPlatform");

	Params::URH_PlatformFriend_GetPlatform_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_PlatformFriend.GetClientDisplayName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString URH_PlatformFriend::GetClientDisplayName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_PlatformFriend", "GetClientDisplayName");

	Params::URH_PlatformFriend_GetClientDisplayName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_PlatformFriend.ClearFriendAndStatusInfo
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void URH_PlatformFriend::ClearFriendAndStatusInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_PlatformFriend", "ClearFriendAndStatusInfo");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function RallyHereIntegration.RH_PlatformFriend.Clear
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void URH_PlatformFriend::Clear()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_PlatformFriend", "Clear");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class RallyHereIntegration.RH_RHFriendAndPlatformFriend
// (None)

class UClass* URH_RHFriendAndPlatformFriend::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RH_RHFriendAndPlatformFriend");

	return Clss;
}


// RH_RHFriendAndPlatformFriend RallyHereIntegration.Default__RH_RHFriendAndPlatformFriend
// (Public, ClassDefaultObject, ArchetypeObject)

class URH_RHFriendAndPlatformFriend* URH_RHFriendAndPlatformFriend::GetDefaultObj()
{
	static class URH_RHFriendAndPlatformFriend* Default = nullptr;

	if (!Default)
		Default = static_cast<URH_RHFriendAndPlatformFriend*>(URH_RHFriendAndPlatformFriend::StaticClass()->DefaultObject);

	return Default;
}


// Function RallyHereIntegration.RH_RHFriendAndPlatformFriend.RhPendingFriendRequest
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URH_RHFriendAndPlatformFriend::RhPendingFriendRequest()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_RHFriendAndPlatformFriend", "RhPendingFriendRequest");

	Params::URH_RHFriendAndPlatformFriend_RhPendingFriendRequest_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_RHFriendAndPlatformFriend.RHFriendRequestSent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URH_RHFriendAndPlatformFriend::RHFriendRequestSent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_RHFriendAndPlatformFriend", "RHFriendRequestSent");

	Params::URH_RHFriendAndPlatformFriend_RHFriendRequestSent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_RHFriendAndPlatformFriend.PendingFriendRequest
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URH_RHFriendAndPlatformFriend::PendingFriendRequest()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_RHFriendAndPlatformFriend", "PendingFriendRequest");

	Params::URH_RHFriendAndPlatformFriend_PendingFriendRequest_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_RHFriendAndPlatformFriend.OtherIsAwaitingFriendshipResponse
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URH_RHFriendAndPlatformFriend::OtherIsAwaitingFriendshipResponse()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_RHFriendAndPlatformFriend", "OtherIsAwaitingFriendshipResponse");

	Params::URH_RHFriendAndPlatformFriend_OtherIsAwaitingFriendshipResponse_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_RHFriendAndPlatformFriend.OtherDeclinedFriendship
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URH_RHFriendAndPlatformFriend::OtherDeclinedFriendship()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_RHFriendAndPlatformFriend", "OtherDeclinedFriendship");

	Params::URH_RHFriendAndPlatformFriend_OtherDeclinedFriendship_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_RHFriendAndPlatformFriend.IsPlayingThisGame
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URH_RHFriendAndPlatformFriend::IsPlayingThisGame()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_RHFriendAndPlatformFriend", "IsPlayingThisGame");

	Params::URH_RHFriendAndPlatformFriend_IsPlayingThisGame_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_RHFriendAndPlatformFriend.IsOnline
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URH_RHFriendAndPlatformFriend::IsOnline()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_RHFriendAndPlatformFriend", "IsOnline");

	Params::URH_RHFriendAndPlatformFriend_IsOnline_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_RHFriendAndPlatformFriend.IsDND
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URH_RHFriendAndPlatformFriend::IsDND()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_RHFriendAndPlatformFriend", "IsDND");

	Params::URH_RHFriendAndPlatformFriend_IsDND_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_RHFriendAndPlatformFriend.HaveRhRelationship
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URH_RHFriendAndPlatformFriend::HaveRhRelationship()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_RHFriendAndPlatformFriend", "HaveRhRelationship");

	Params::URH_RHFriendAndPlatformFriend_HaveRhRelationship_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_RHFriendAndPlatformFriend.HavePlatformRelationship
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URH_RHFriendAndPlatformFriend::HavePlatformRelationship()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_RHFriendAndPlatformFriend", "HavePlatformRelationship");

	Params::URH_RHFriendAndPlatformFriend_HavePlatformRelationship_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_RHFriendAndPlatformFriend.HaveAnyRelationship
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URH_RHFriendAndPlatformFriend::HaveAnyRelationship()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_RHFriendAndPlatformFriend", "HaveAnyRelationship");

	Params::URH_RHFriendAndPlatformFriend_HaveAnyRelationship_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_RHFriendAndPlatformFriend.GetStatus
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EFriendshipStatus       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EFriendshipStatus URH_RHFriendAndPlatformFriend::GetStatus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_RHFriendAndPlatformFriend", "GetStatus");

	Params::URH_RHFriendAndPlatformFriend_GetStatus_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_RHFriendAndPlatformFriend.GetRHPlayerUuid
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct CoreUObject_Guid            ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct CoreUObject_Guid URH_RHFriendAndPlatformFriend::GetRHPlayerUuid()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_RHFriendAndPlatformFriend", "GetRHPlayerUuid");

	Params::URH_RHFriendAndPlatformFriend_GetRHPlayerUuid_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_RHFriendAndPlatformFriend.GetPreviousStatus
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EFriendshipStatus       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EFriendshipStatus URH_RHFriendAndPlatformFriend::GetPreviousStatus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_RHFriendAndPlatformFriend", "GetPreviousStatus");

	Params::URH_RHFriendAndPlatformFriend_GetPreviousStatus_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_RHFriendAndPlatformFriend.GetPlayerAndPlatformInfo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct RallyHereIntegration_RH_PlayerAndPlatformInfoReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

struct RallyHereIntegration_RH_PlayerAndPlatformInfo URH_RHFriendAndPlatformFriend::GetPlayerAndPlatformInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_RHFriendAndPlatformFriend", "GetPlayerAndPlatformInfo");

	Params::URH_RHFriendAndPlatformFriend_GetPlayerAndPlatformInfo_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_RHFriendAndPlatformFriend.GetPlatformFriends
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class URH_PlatformFriend*>  ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<class URH_PlatformFriend*> URH_RHFriendAndPlatformFriend::GetPlatformFriends()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_RHFriendAndPlatformFriend", "GetPlatformFriends");

	Params::URH_RHFriendAndPlatformFriend_GetPlatformFriends_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_RHFriendAndPlatformFriend.GetPlatformFriendBase
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ERHAPI_Platform         Platform                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class URH_PlatformFriend*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class URH_PlatformFriend* URH_RHFriendAndPlatformFriend::GetPlatformFriendBase(enum class ERHAPI_Platform Platform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_RHFriendAndPlatformFriend", "GetPlatformFriendBase");

	Params::URH_RHFriendAndPlatformFriend_GetPlatformFriendBase_Params Parms{};

	Parms.Platform = Platform;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_RHFriendAndPlatformFriend.GetPlatformFriendAtIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class URH_PlatformFriend*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class URH_PlatformFriend* URH_RHFriendAndPlatformFriend::GetPlatformFriendAtIndex(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_RHFriendAndPlatformFriend", "GetPlatformFriendAtIndex");

	Params::URH_RHFriendAndPlatformFriend_GetPlatformFriendAtIndex_Params Parms{};

	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_RHFriendAndPlatformFriend.GetPlatformFriend
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ERHAPI_Platform         Platform                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class URH_PlatformFriend*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class URH_PlatformFriend* URH_RHFriendAndPlatformFriend::GetPlatformFriend(enum class ERHAPI_Platform Platform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_RHFriendAndPlatformFriend", "GetPlatformFriend");

	Params::URH_RHFriendAndPlatformFriend_GetPlatformFriend_Params Parms{};

	Parms.Platform = Platform;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_RHFriendAndPlatformFriend.GetNotes
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString URH_RHFriendAndPlatformFriend::GetNotes()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_RHFriendAndPlatformFriend", "GetNotes");

	Params::URH_RHFriendAndPlatformFriend_GetNotes_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_RHFriendAndPlatformFriend.GetLastModifiedOn
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct CoreUObject_DateTime        ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct CoreUObject_DateTime URH_RHFriendAndPlatformFriend::GetLastModifiedOn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_RHFriendAndPlatformFriend", "GetLastModifiedOn");

	Params::URH_RHFriendAndPlatformFriend_GetLastModifiedOn_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_RHFriendAndPlatformFriend.GetLastKnownDisplayName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ERHAPI_Platform         PreferredPlatformType                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString URH_RHFriendAndPlatformFriend::GetLastKnownDisplayName(enum class ERHAPI_Platform PreferredPlatformType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_RHFriendAndPlatformFriend", "GetLastKnownDisplayName");

	Params::URH_RHFriendAndPlatformFriend_GetLastKnownDisplayName_Params Parms{};

	Parms.PreferredPlatformType = PreferredPlatformType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_RHFriendAndPlatformFriend.GetFriendSubsystem
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class URH_FriendSubsystem*         ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class URH_FriendSubsystem* URH_RHFriendAndPlatformFriend::GetFriendSubsystem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_RHFriendAndPlatformFriend", "GetFriendSubsystem");

	Params::URH_RHFriendAndPlatformFriend_GetFriendSubsystem_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_RHFriendAndPlatformFriend.FriendRequestSent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URH_RHFriendAndPlatformFriend::FriendRequestSent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_RHFriendAndPlatformFriend", "FriendRequestSent");

	Params::URH_RHFriendAndPlatformFriend_FriendRequestSent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_RHFriendAndPlatformFriend.BLUEPRINT_GetRHPlayerUuidAsync
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URH_RHFriendAndPlatformFriend::BLUEPRINT_GetRHPlayerUuidAsync(FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_RHFriendAndPlatformFriend", "BLUEPRINT_GetRHPlayerUuidAsync");

	Params::URH_RHFriendAndPlatformFriend_BLUEPRINT_GetRHPlayerUuidAsync_Params Parms{};

	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RallyHereIntegration.RH_RHFriendAndPlatformFriend.BLUEPRINT_GetLastKnownDisplayNameAsync
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct CoreUObject_Timespan        StaleThreshold                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bForceRefresh                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ERHAPI_Platform         PreferredPlatformType                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URH_RHFriendAndPlatformFriend::BLUEPRINT_GetLastKnownDisplayNameAsync(struct CoreUObject_Timespan& StaleThreshold, bool bForceRefresh, enum class ERHAPI_Platform PreferredPlatformType, FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_RHFriendAndPlatformFriend", "BLUEPRINT_GetLastKnownDisplayNameAsync");

	Params::URH_RHFriendAndPlatformFriend_BLUEPRINT_GetLastKnownDisplayNameAsync_Params Parms{};

	Parms.StaleThreshold = StaleThreshold;
	Parms.bForceRefresh = bForceRefresh;
	Parms.PreferredPlatformType = PreferredPlatformType;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RallyHereIntegration.RH_RHFriendAndPlatformFriend.AwaitingFriendshipResponse
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URH_RHFriendAndPlatformFriend::AwaitingFriendshipResponse()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_RHFriendAndPlatformFriend", "AwaitingFriendshipResponse");

	Params::URH_RHFriendAndPlatformFriend_AwaitingFriendshipResponse_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_RHFriendAndPlatformFriend.AreRHFriends
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URH_RHFriendAndPlatformFriend::AreRHFriends()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_RHFriendAndPlatformFriend", "AreRHFriends");

	Params::URH_RHFriendAndPlatformFriend_AreRHFriends_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_RHFriendAndPlatformFriend.ArePlatformFriends
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URH_RHFriendAndPlatformFriend::ArePlatformFriends()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_RHFriendAndPlatformFriend", "ArePlatformFriends");

	Params::URH_RHFriendAndPlatformFriend_ArePlatformFriends_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_RHFriendAndPlatformFriend.AreFriends
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URH_RHFriendAndPlatformFriend::AreFriends()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_RHFriendAndPlatformFriend", "AreFriends");

	Params::URH_RHFriendAndPlatformFriend_AreFriends_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_RHFriendAndPlatformFriend.AcknowledgeFriendUpdate
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void URH_RHFriendAndPlatformFriend::AcknowledgeFriendUpdate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_RHFriendAndPlatformFriend", "AcknowledgeFriendUpdate");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class RallyHereIntegration.RH_BootstrappingSettings
// (None)

class UClass* URH_BootstrappingSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RH_BootstrappingSettings");

	return Clss;
}


// RH_BootstrappingSettings RallyHereIntegration.Default__RH_BootstrappingSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class URH_BootstrappingSettings* URH_BootstrappingSettings::GetDefaultObj()
{
	static class URH_BootstrappingSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<URH_BootstrappingSettings*>(URH_BootstrappingSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class RallyHereIntegration.RH_GameInstanceSubsystem
// (None)

class UClass* URH_GameInstanceSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RH_GameInstanceSubsystem");

	return Clss;
}


// RH_GameInstanceSubsystem RallyHereIntegration.Default__RH_GameInstanceSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class URH_GameInstanceSubsystem* URH_GameInstanceSubsystem::GetDefaultObj()
{
	static class URH_GameInstanceSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<URH_GameInstanceSubsystem*>(URH_GameInstanceSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Function RallyHereIntegration.RH_GameInstanceSubsystem.GetSessionSubsystem
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class URH_GameInstanceSessionSubsystem*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class URH_GameInstanceSessionSubsystem* URH_GameInstanceSubsystem::GetSessionSubsystem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_GameInstanceSubsystem", "GetSessionSubsystem");

	Params::URH_GameInstanceSubsystem_GetSessionSubsystem_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_GameInstanceSubsystem.GetSessionSearchCache
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class URH_SessionBrowserCache*     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class URH_SessionBrowserCache* URH_GameInstanceSubsystem::GetSessionSearchCache()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_GameInstanceSubsystem", "GetSessionSearchCache");

	Params::URH_GameInstanceSubsystem_GetSessionSearchCache_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_GameInstanceSubsystem.GetServerBootstrapper
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class URH_GameInstanceServerBootstrapper*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class URH_GameInstanceServerBootstrapper* URH_GameInstanceSubsystem::GetServerBootstrapper()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_GameInstanceSubsystem", "GetServerBootstrapper");

	Params::URH_GameInstanceSubsystem_GetServerBootstrapper_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_GameInstanceSubsystem.GetPlayerInfoSubsystem
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class URH_PlayerInfoSubsystem*     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class URH_PlayerInfoSubsystem* URH_GameInstanceSubsystem::GetPlayerInfoSubsystem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_GameInstanceSubsystem", "GetPlayerInfoSubsystem");

	Params::URH_GameInstanceSubsystem_GetPlayerInfoSubsystem_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_GameInstanceSubsystem.GetMatchmakingCache
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class URH_MatchmakingBrowserCache* ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class URH_MatchmakingBrowserCache* URH_GameInstanceSubsystem::GetMatchmakingCache()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_GameInstanceSubsystem", "GetMatchmakingCache");

	Params::URH_GameInstanceSubsystem_GetMatchmakingCache_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_GameInstanceSubsystem.GetConfigSubsystem
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class URH_ConfigSubsystem*         ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class URH_ConfigSubsystem* URH_GameInstanceSubsystem::GetConfigSubsystem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_GameInstanceSubsystem", "GetConfigSubsystem");

	Params::URH_GameInstanceSubsystem_GetConfigSubsystem_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_GameInstanceSubsystem.GetClientBootstrapper
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class URH_GameInstanceClientBootstrapper*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class URH_GameInstanceClientBootstrapper* URH_GameInstanceSubsystem::GetClientBootstrapper()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_GameInstanceSubsystem", "GetClientBootstrapper");

	Params::URH_GameInstanceSubsystem_GetClientBootstrapper_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_GameInstanceSubsystem.GetCatalogSubsystem
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class URH_CatalogSubsystem*        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class URH_CatalogSubsystem* URH_GameInstanceSubsystem::GetCatalogSubsystem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_GameInstanceSubsystem", "GetCatalogSubsystem");

	Params::URH_GameInstanceSubsystem_GetCatalogSubsystem_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_GameInstanceSubsystem.BLUEPRINT_CustomEndpoint
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct RallyHereIntegration_RH_CustomEndpointRequestWrapperRequest                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URH_GameInstanceSubsystem::BLUEPRINT_CustomEndpoint(struct RallyHereIntegration_RH_CustomEndpointRequestWrapper& Request, FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_GameInstanceSubsystem", "BLUEPRINT_CustomEndpoint");

	Params::URH_GameInstanceSubsystem_BLUEPRINT_CustomEndpoint_Params Parms{};

	Parms.Request = Request;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class RallyHereIntegration.RH_GameInstanceServerBootstrapper
// (None)

class UClass* URH_GameInstanceServerBootstrapper::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RH_GameInstanceServerBootstrapper");

	return Clss;
}


// RH_GameInstanceServerBootstrapper RallyHereIntegration.Default__RH_GameInstanceServerBootstrapper
// (Public, ClassDefaultObject, ArchetypeObject)

class URH_GameInstanceServerBootstrapper* URH_GameInstanceServerBootstrapper::GetDefaultObj()
{
	static class URH_GameInstanceServerBootstrapper* Default = nullptr;

	if (!Default)
		Default = static_cast<URH_GameInstanceServerBootstrapper*>(URH_GameInstanceServerBootstrapper::StaticClass()->DefaultObject);

	return Default;
}


// Function RallyHereIntegration.RH_GameInstanceServerBootstrapper.GetTemplate
// (Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      Type                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct RallyHereAPI_RHAPI_SessionTemplateTemplate                                                         (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URH_GameInstanceServerBootstrapper::GetTemplate(const class FString& Type, struct RallyHereAPI_RHAPI_SessionTemplate* Template)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_GameInstanceServerBootstrapper", "GetTemplate");

	Params::URH_GameInstanceServerBootstrapper_GetTemplate_Params Parms{};

	Parms.Type = Type;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Template != nullptr)
		*Template = std::move(Parms.Template);

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_GameInstanceServerBootstrapper.GetSessionById
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      SessionId                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class URH_SessionView*             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class URH_SessionView* URH_GameInstanceServerBootstrapper::GetSessionById(const class FString& SessionId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_GameInstanceServerBootstrapper", "GetSessionById");

	Params::URH_GameInstanceServerBootstrapper_GetSessionById_Params Parms{};

	Parms.SessionId = SessionId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_GameInstanceServerBootstrapper.GetSession
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class URH_OnlineSession*           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class URH_OnlineSession* URH_GameInstanceServerBootstrapper::GetSession()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_GameInstanceServerBootstrapper", "GetSession");

	Params::URH_GameInstanceServerBootstrapper_GetSession_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_GameInstanceServerBootstrapper.GetPlatformSyncerByRHSessionId
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      SessionId                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class URH_PlatformSessionSyncer*   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class URH_PlatformSessionSyncer* URH_GameInstanceServerBootstrapper::GetPlatformSyncerByRHSessionId(const class FString& SessionId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_GameInstanceServerBootstrapper", "GetPlatformSyncerByRHSessionId");

	Params::URH_GameInstanceServerBootstrapper_GetPlatformSyncerByRHSessionId_Params Parms{};

	Parms.SessionId = SessionId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_GameInstanceServerBootstrapper.GetPlatformSyncerByPlatformSessionId
// (Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct Engine_UniqueNetIdRepl      PlatformSessionId                                                (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class URH_PlatformSessionSyncer*   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class URH_PlatformSessionSyncer* URH_GameInstanceServerBootstrapper::GetPlatformSyncerByPlatformSessionId(struct Engine_UniqueNetIdRepl& PlatformSessionId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_GameInstanceServerBootstrapper", "GetPlatformSyncerByPlatformSessionId");

	Params::URH_GameInstanceServerBootstrapper_GetPlatformSyncerByPlatformSessionId_Params Parms{};

	Parms.PlatformSessionId = PlatformSessionId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_GameInstanceServerBootstrapper.GetBootstrapStep
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ERH_ServerBootstrapFlowStepReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ERH_ServerBootstrapFlowStep URH_GameInstanceServerBootstrapper::GetBootstrapStep()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_GameInstanceServerBootstrapper", "GetBootstrapStep");

	Params::URH_GameInstanceServerBootstrapper_GetBootstrapStep_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_GameInstanceServerBootstrapper.GetBootstrapMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ERH_ServerBootstrapMode ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ERH_ServerBootstrapMode URH_GameInstanceServerBootstrapper::GetBootstrapMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_GameInstanceServerBootstrapper", "GetBootstrapMode");

	Params::URH_GameInstanceServerBootstrapper_GetBootstrapMode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class RallyHereIntegration.RH_GameInstanceClientBootstrapper
// (None)

class UClass* URH_GameInstanceClientBootstrapper::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RH_GameInstanceClientBootstrapper");

	return Clss;
}


// RH_GameInstanceClientBootstrapper RallyHereIntegration.Default__RH_GameInstanceClientBootstrapper
// (Public, ClassDefaultObject, ArchetypeObject)

class URH_GameInstanceClientBootstrapper* URH_GameInstanceClientBootstrapper::GetDefaultObj()
{
	static class URH_GameInstanceClientBootstrapper* Default = nullptr;

	if (!Default)
		Default = static_cast<URH_GameInstanceClientBootstrapper*>(URH_GameInstanceClientBootstrapper::StaticClass()->DefaultObject);

	return Default;
}


// Function RallyHereIntegration.RH_GameInstanceClientBootstrapper.CreateOfflineSession
// (Native, Public, BlueprintCallable)
// Parameters:

void URH_GameInstanceClientBootstrapper::CreateOfflineSession()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_GameInstanceClientBootstrapper", "CreateOfflineSession");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class RallyHereIntegration.RH_GameInstanceSessionSubsystem
// (None)

class UClass* URH_GameInstanceSessionSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RH_GameInstanceSessionSubsystem");

	return Clss;
}


// RH_GameInstanceSessionSubsystem RallyHereIntegration.Default__RH_GameInstanceSessionSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class URH_GameInstanceSessionSubsystem* URH_GameInstanceSessionSubsystem::GetDefaultObj()
{
	static class URH_GameInstanceSessionSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<URH_GameInstanceSessionSubsystem*>(URH_GameInstanceSessionSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Function RallyHereIntegration.RH_GameInstanceSessionSubsystem.IsReadyToJoinInstance
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class URH_JoinedSession*           Session                                                          (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bLog                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URH_GameInstanceSessionSubsystem::IsReadyToJoinInstance(class URH_JoinedSession* Session, bool bLog)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_GameInstanceSessionSubsystem", "IsReadyToJoinInstance");

	Params::URH_GameInstanceSessionSubsystem_IsReadyToJoinInstance_Params Parms{};

	Parms.Session = Session;
	Parms.bLog = bLog;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_GameInstanceSessionSubsystem.IsPlayerLocal
// (Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct RallyHereAPI_RHAPI_SessionPlayerPlayer                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URH_GameInstanceSessionSubsystem::IsPlayerLocal(struct RallyHereAPI_RHAPI_SessionPlayer& Player)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_GameInstanceSessionSubsystem", "IsPlayerLocal");

	Params::URH_GameInstanceSessionSubsystem_IsPlayerLocal_Params Parms{};

	Parms.Player = Player;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_GameInstanceSessionSubsystem.IsMarkedFubar
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URH_GameInstanceSessionSubsystem::IsMarkedFubar()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_GameInstanceSessionSubsystem", "IsMarkedFubar");

	Params::URH_GameInstanceSessionSubsystem_IsMarkedFubar_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_GameInstanceSessionSubsystem.IsLocallyHostedSession
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class URH_JoinedSession*           Session                                                          (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URH_GameInstanceSessionSubsystem::IsLocallyHostedSession(class URH_JoinedSession* Session)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_GameInstanceSessionSubsystem", "IsLocallyHostedSession");

	Params::URH_GameInstanceSessionSubsystem_IsLocallyHostedSession_Params Parms{};

	Parms.Session = Session;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_GameInstanceSessionSubsystem.IsLocallyHostedInstance
// (Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct RallyHereAPI_RHAPI_InstanceInfoInstance                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URH_GameInstanceSessionSubsystem::IsLocallyHostedInstance(struct RallyHereAPI_RHAPI_InstanceInfo& Instance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_GameInstanceSessionSubsystem", "IsLocallyHostedInstance");

	Params::URH_GameInstanceSessionSubsystem_IsLocallyHostedInstance_Params Parms{};

	Parms.Instance = Instance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_GameInstanceSessionSubsystem.GetDesiredSession
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class URH_JoinedSession*           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class URH_JoinedSession* URH_GameInstanceSessionSubsystem::GetDesiredSession()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_GameInstanceSessionSubsystem", "GetDesiredSession");

	Params::URH_GameInstanceSessionSubsystem_GetDesiredSession_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_GameInstanceSessionSubsystem.GetActiveSession
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class URH_JoinedSession*           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class URH_JoinedSession* URH_GameInstanceSessionSubsystem::GetActiveSession()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_GameInstanceSessionSubsystem", "GetActiveSession");

	Params::URH_GameInstanceSessionSubsystem_GetActiveSession_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_GameInstanceSessionSubsystem.BLUEPRINT_SyncToSession
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class URH_JoinedSession*           SessionInfo                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URH_GameInstanceSessionSubsystem::BLUEPRINT_SyncToSession(class URH_JoinedSession* SessionInfo, FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_GameInstanceSessionSubsystem", "BLUEPRINT_SyncToSession");

	Params::URH_GameInstanceSessionSubsystem_BLUEPRINT_SyncToSession_Params Parms{};

	Parms.SessionInfo = SessionInfo;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RallyHereIntegration.RH_GameInstanceSessionSubsystem.BLUEPRINT_StartLeaveInstanceFlow
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// bool                               bAlreadyDisconnected                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bCheckDesired                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URH_GameInstanceSessionSubsystem::BLUEPRINT_StartLeaveInstanceFlow(bool bAlreadyDisconnected, bool bCheckDesired, FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_GameInstanceSessionSubsystem", "BLUEPRINT_StartLeaveInstanceFlow");

	Params::URH_GameInstanceSessionSubsystem_BLUEPRINT_StartLeaveInstanceFlow_Params Parms{};

	Parms.bAlreadyDisconnected = bAlreadyDisconnected;
	Parms.bCheckDesired = bCheckDesired;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RallyHereIntegration.RH_GameInstanceSessionSubsystem.BLUEPRINT_StartJoinInstanceFlow
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URH_GameInstanceSessionSubsystem::BLUEPRINT_StartJoinInstanceFlow(FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_GameInstanceSessionSubsystem", "BLUEPRINT_StartJoinInstanceFlow");

	Params::URH_GameInstanceSessionSubsystem_BLUEPRINT_StartJoinInstanceFlow_Params Parms{};

	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_GameInstanceSessionSubsystem.BLUEPRINT_MarkInstanceFubar
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      Reason                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URH_GameInstanceSessionSubsystem::BLUEPRINT_MarkInstanceFubar(const class FString& Reason, FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_GameInstanceSessionSubsystem", "BLUEPRINT_MarkInstanceFubar");

	Params::URH_GameInstanceSessionSubsystem_BLUEPRINT_MarkInstanceFubar_Params Parms{};

	Parms.Reason = Reason;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class RallyHereIntegration.RH_Integration
// (None)

class UClass* URH_Integration::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RH_Integration");

	return Clss;
}


// RH_Integration RallyHereIntegration.Default__RH_Integration
// (Public, ClassDefaultObject, ArchetypeObject)

class URH_Integration* URH_Integration::GetDefaultObj()
{
	static class URH_Integration* Default = nullptr;

	if (!Default)
		Default = static_cast<URH_Integration*>(URH_Integration::StaticClass()->DefaultObject);

	return Default;
}


// Class RallyHereIntegration.RH_IntegrationSettings
// (None)

class UClass* URH_IntegrationSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RH_IntegrationSettings");

	return Clss;
}


// RH_IntegrationSettings RallyHereIntegration.Default__RH_IntegrationSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class URH_IntegrationSettings* URH_IntegrationSettings::GetDefaultObj()
{
	static class URH_IntegrationSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<URH_IntegrationSettings*>(URH_IntegrationSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class RallyHereIntegration.RH_LocalPlayerInterface
// (None)

class UClass* IRH_LocalPlayerInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RH_LocalPlayerInterface");

	return Clss;
}


// RH_LocalPlayerInterface RallyHereIntegration.Default__RH_LocalPlayerInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IRH_LocalPlayerInterface* IRH_LocalPlayerInterface::GetDefaultObj()
{
	static class IRH_LocalPlayerInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IRH_LocalPlayerInterface*>(IRH_LocalPlayerInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class RallyHereIntegration.RH_LocalPlayer
// (None)

class UClass* URH_LocalPlayer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RH_LocalPlayer");

	return Clss;
}


// RH_LocalPlayer RallyHereIntegration.Default__RH_LocalPlayer
// (Public, ClassDefaultObject, ArchetypeObject)

class URH_LocalPlayer* URH_LocalPlayer::GetDefaultObj()
{
	static class URH_LocalPlayer* Default = nullptr;

	if (!Default)
		Default = static_cast<URH_LocalPlayer*>(URH_LocalPlayer::StaticClass()->DefaultObject);

	return Default;
}


// Class RallyHereIntegration.RH_IpConnectionInterface
// (None)

class UClass* IRH_IpConnectionInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RH_IpConnectionInterface");

	return Clss;
}


// RH_IpConnectionInterface RallyHereIntegration.Default__RH_IpConnectionInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IRH_IpConnectionInterface* IRH_IpConnectionInterface::GetDefaultObj()
{
	static class IRH_IpConnectionInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IRH_IpConnectionInterface*>(IRH_IpConnectionInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class RallyHereIntegration.RH_IpConnection
// (None)

class UClass* URH_IpConnection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RH_IpConnection");

	return Clss;
}


// RH_IpConnection RallyHereIntegration.Default__RH_IpConnection
// (Public, ClassDefaultObject, ArchetypeObject)

class URH_IpConnection* URH_IpConnection::GetDefaultObj()
{
	static class URH_IpConnection* Default = nullptr;

	if (!Default)
		Default = static_cast<URH_IpConnection*>(URH_IpConnection::StaticClass()->DefaultObject);

	return Default;
}


// Class RallyHereIntegration.RH_LocalPlayerLoginSubsystem
// (None)

class UClass* URH_LocalPlayerLoginSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RH_LocalPlayerLoginSubsystem");

	return Clss;
}


// RH_LocalPlayerLoginSubsystem RallyHereIntegration.Default__RH_LocalPlayerLoginSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class URH_LocalPlayerLoginSubsystem* URH_LocalPlayerLoginSubsystem::GetDefaultObj()
{
	static class URH_LocalPlayerLoginSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<URH_LocalPlayerLoginSubsystem*>(URH_LocalPlayerLoginSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Class RallyHereIntegration.RH_LocalPlayerPresenceSubsystem
// (None)

class UClass* URH_LocalPlayerPresenceSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RH_LocalPlayerPresenceSubsystem");

	return Clss;
}


// RH_LocalPlayerPresenceSubsystem RallyHereIntegration.Default__RH_LocalPlayerPresenceSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class URH_LocalPlayerPresenceSubsystem* URH_LocalPlayerPresenceSubsystem::GetDefaultObj()
{
	static class URH_LocalPlayerPresenceSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<URH_LocalPlayerPresenceSubsystem*>(URH_LocalPlayerPresenceSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Function RallyHereIntegration.RH_LocalPlayerPresenceSubsystem.StopRefreshTimer
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void URH_LocalPlayerPresenceSubsystem::StopRefreshTimer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_LocalPlayerPresenceSubsystem", "StopRefreshTimer");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function RallyHereIntegration.RH_LocalPlayerPresenceSubsystem.StartRefreshTimer
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void URH_LocalPlayerPresenceSubsystem::StartRefreshTimer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_LocalPlayerPresenceSubsystem", "StartRefreshTimer");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function RallyHereIntegration.RH_LocalPlayerPresenceSubsystem.SetDesiredStatus
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ERHAPI_OnlineStatus     NewStatus                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URH_LocalPlayerPresenceSubsystem::SetDesiredStatus(enum class ERHAPI_OnlineStatus NewStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_LocalPlayerPresenceSubsystem", "SetDesiredStatus");

	Params::URH_LocalPlayerPresenceSubsystem_SetDesiredStatus_Params Parms{};

	Parms.NewStatus = NewStatus;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RallyHereIntegration.RH_LocalPlayerPresenceSubsystem.IsRefreshTimerActive
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              TimeRemaining                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URH_LocalPlayerPresenceSubsystem::IsRefreshTimerActive(float* TimeRemaining)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_LocalPlayerPresenceSubsystem", "IsRefreshTimerActive");

	Params::URH_LocalPlayerPresenceSubsystem_IsRefreshTimerActive_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (TimeRemaining != nullptr)
		*TimeRemaining = Parms.TimeRemaining;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_LocalPlayerPresenceSubsystem.GetDesiredStatus
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ERHAPI_OnlineStatus     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ERHAPI_OnlineStatus URH_LocalPlayerPresenceSubsystem::GetDesiredStatus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_LocalPlayerPresenceSubsystem", "GetDesiredStatus");

	Params::URH_LocalPlayerPresenceSubsystem_GetDesiredStatus_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class RallyHereIntegration.RH_LocalPlayerSubsystem
// (None)

class UClass* URH_LocalPlayerSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RH_LocalPlayerSubsystem");

	return Clss;
}


// RH_LocalPlayerSubsystem RallyHereIntegration.Default__RH_LocalPlayerSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class URH_LocalPlayerSubsystem* URH_LocalPlayerSubsystem::GetDefaultObj()
{
	static class URH_LocalPlayerSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<URH_LocalPlayerSubsystem*>(URH_LocalPlayerSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Function RallyHereIntegration.RH_LocalPlayerSubsystem.GetSessionSubsystem
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class URH_LocalPlayerSessionSubsystem*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class URH_LocalPlayerSessionSubsystem* URH_LocalPlayerSubsystem::GetSessionSubsystem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_LocalPlayerSubsystem", "GetSessionSubsystem");

	Params::URH_LocalPlayerSubsystem_GetSessionSubsystem_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_LocalPlayerSubsystem.GetPurgeSubsystem
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class URH_PurgeSubsystem*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class URH_PurgeSubsystem* URH_LocalPlayerSubsystem::GetPurgeSubsystem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_LocalPlayerSubsystem", "GetPurgeSubsystem");

	Params::URH_LocalPlayerSubsystem_GetPurgeSubsystem_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_LocalPlayerSubsystem.GetPresenceSubsystem
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class URH_LocalPlayerPresenceSubsystem*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class URH_LocalPlayerPresenceSubsystem* URH_LocalPlayerSubsystem::GetPresenceSubsystem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_LocalPlayerSubsystem", "GetPresenceSubsystem");

	Params::URH_LocalPlayerSubsystem_GetPresenceSubsystem_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_LocalPlayerSubsystem.GetPlayerPlatformId
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct RallyHereIntegration_RH_PlayerPlatformIdReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct RallyHereIntegration_RH_PlayerPlatformId URH_LocalPlayerSubsystem::GetPlayerPlatformId()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_LocalPlayerSubsystem", "GetPlayerPlatformId");

	Params::URH_LocalPlayerSubsystem_GetPlayerPlatformId_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_LocalPlayerSubsystem.GetPlayerNotifications
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class URH_PlayerNotifications*     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class URH_PlayerNotifications* URH_LocalPlayerSubsystem::GetPlayerNotifications()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_LocalPlayerSubsystem", "GetPlayerNotifications");

	Params::URH_LocalPlayerSubsystem_GetPlayerNotifications_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_LocalPlayerSubsystem.GetPlayerInfoSubsystem
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class URH_PlayerInfoSubsystem*     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class URH_PlayerInfoSubsystem* URH_LocalPlayerSubsystem::GetPlayerInfoSubsystem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_LocalPlayerSubsystem", "GetPlayerInfoSubsystem");

	Params::URH_LocalPlayerSubsystem_GetPlayerInfoSubsystem_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_LocalPlayerSubsystem.GetLoginSubsystem
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class URH_LocalPlayerLoginSubsystem*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class URH_LocalPlayerLoginSubsystem* URH_LocalPlayerSubsystem::GetLoginSubsystem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_LocalPlayerSubsystem", "GetLoginSubsystem");

	Params::URH_LocalPlayerSubsystem_GetLoginSubsystem_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_LocalPlayerSubsystem.GetLocalPlayerInfo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class URH_PlayerInfo*              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class URH_PlayerInfo* URH_LocalPlayerSubsystem::GetLocalPlayerInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_LocalPlayerSubsystem", "GetLocalPlayerInfo");

	Params::URH_LocalPlayerSubsystem_GetLocalPlayerInfo_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_LocalPlayerSubsystem.GetFriendSubsystem
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class URH_FriendSubsystem*         ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class URH_FriendSubsystem* URH_LocalPlayerSubsystem::GetFriendSubsystem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_LocalPlayerSubsystem", "GetFriendSubsystem");

	Params::URH_LocalPlayerSubsystem_GetFriendSubsystem_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_LocalPlayerSubsystem.GetEntitlementSubsystem
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class URH_EntitlementSubsystem*    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class URH_EntitlementSubsystem* URH_LocalPlayerSubsystem::GetEntitlementSubsystem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_LocalPlayerSubsystem", "GetEntitlementSubsystem");

	Params::URH_LocalPlayerSubsystem_GetEntitlementSubsystem_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_LocalPlayerSubsystem.GetAdSubsystem
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class URH_AdSubsystem*             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class URH_AdSubsystem* URH_LocalPlayerSubsystem::GetAdSubsystem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_LocalPlayerSubsystem", "GetAdSubsystem");

	Params::URH_LocalPlayerSubsystem_GetAdSubsystem_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_LocalPlayerSubsystem.BLUEPRINT_CustomEndpoint
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct RallyHereIntegration_RH_CustomEndpointRequestWrapperRequest                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URH_LocalPlayerSubsystem::BLUEPRINT_CustomEndpoint(struct RallyHereIntegration_RH_CustomEndpointRequestWrapper& Request, FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_LocalPlayerSubsystem", "BLUEPRINT_CustomEndpoint");

	Params::URH_LocalPlayerSubsystem_BLUEPRINT_CustomEndpoint_Params Parms{};

	Parms.Request = Request;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class RallyHereIntegration.RH_LocalPlayerSessionSubsystem
// (None)

class UClass* URH_LocalPlayerSessionSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RH_LocalPlayerSessionSubsystem");

	return Clss;
}


// RH_LocalPlayerSessionSubsystem RallyHereIntegration.Default__RH_LocalPlayerSessionSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class URH_LocalPlayerSessionSubsystem* URH_LocalPlayerSessionSubsystem::GetDefaultObj()
{
	static class URH_LocalPlayerSessionSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<URH_LocalPlayerSessionSubsystem*>(URH_LocalPlayerSessionSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Function RallyHereIntegration.RH_LocalPlayerSessionSubsystem.StopPolling
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void URH_LocalPlayerSessionSubsystem::StopPolling()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_LocalPlayerSessionSubsystem", "StopPolling");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function RallyHereIntegration.RH_LocalPlayerSessionSubsystem.StartPolling
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void URH_LocalPlayerSessionSubsystem::StartPolling()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_LocalPlayerSessionSubsystem", "StartPolling");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function RallyHereIntegration.RH_LocalPlayerSessionSubsystem.IsInSession
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      SessionId                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URH_LocalPlayerSessionSubsystem::IsInSession(const class FString& SessionId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_LocalPlayerSessionSubsystem", "IsInSession");

	Params::URH_LocalPlayerSessionSubsystem_IsInSession_Params Parms{};

	Parms.SessionId = SessionId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_LocalPlayerSessionSubsystem.GetTemplates
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct RallyHereAPI_RHAPI_SessionTemplate>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct RallyHereAPI_RHAPI_SessionTemplate> URH_LocalPlayerSessionSubsystem::GetTemplates()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_LocalPlayerSessionSubsystem", "GetTemplates");

	Params::URH_LocalPlayerSessionSubsystem_GetTemplates_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_LocalPlayerSessionSubsystem.GetTemplate
// (Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      Type                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct RallyHereAPI_RHAPI_SessionTemplateTemplate                                                         (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URH_LocalPlayerSessionSubsystem::GetTemplate(const class FString& Type, struct RallyHereAPI_RHAPI_SessionTemplate* Template)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_LocalPlayerSessionSubsystem", "GetTemplate");

	Params::URH_LocalPlayerSessionSubsystem_GetTemplate_Params Parms{};

	Parms.Type = Type;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Template != nullptr)
		*Template = std::move(Parms.Template);

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_LocalPlayerSessionSubsystem.GetSessionsByType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      Type                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class URH_SessionView*>     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class URH_SessionView*> URH_LocalPlayerSessionSubsystem::GetSessionsByType(const class FString& Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_LocalPlayerSessionSubsystem", "GetSessionsByType");

	Params::URH_LocalPlayerSessionSubsystem_GetSessionsByType_Params Parms{};

	Parms.Type = Type;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_LocalPlayerSessionSubsystem.GetSessions
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class URH_SessionView*>     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class URH_SessionView*> URH_LocalPlayerSessionSubsystem::GetSessions()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_LocalPlayerSessionSubsystem", "GetSessions");

	Params::URH_LocalPlayerSessionSubsystem_GetSessions_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_LocalPlayerSessionSubsystem.GetSessionById
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      SessionId                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class URH_SessionView*             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class URH_SessionView* URH_LocalPlayerSessionSubsystem::GetSessionById(const class FString& SessionId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_LocalPlayerSessionSubsystem", "GetSessionById");

	Params::URH_LocalPlayerSessionSubsystem_GetSessionById_Params Parms{};

	Parms.SessionId = SessionId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_LocalPlayerSessionSubsystem.GetPollTimeRemaining
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float URH_LocalPlayerSessionSubsystem::GetPollTimeRemaining()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_LocalPlayerSessionSubsystem", "GetPollTimeRemaining");

	Params::URH_LocalPlayerSessionSubsystem_GetPollTimeRemaining_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_LocalPlayerSessionSubsystem.GetPlatformSyncerByRHSessionId
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      SessionId                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class URH_PlatformSessionSyncer*   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class URH_PlatformSessionSyncer* URH_LocalPlayerSessionSubsystem::GetPlatformSyncerByRHSessionId(const class FString& SessionId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_LocalPlayerSessionSubsystem", "GetPlatformSyncerByRHSessionId");

	Params::URH_LocalPlayerSessionSubsystem_GetPlatformSyncerByRHSessionId_Params Parms{};

	Parms.SessionId = SessionId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_LocalPlayerSessionSubsystem.GetPlatformSyncerByPlatformSessionId
// (Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct Engine_UniqueNetIdRepl      PlatformSessionId                                                (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class URH_PlatformSessionSyncer*   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class URH_PlatformSessionSyncer* URH_LocalPlayerSessionSubsystem::GetPlatformSyncerByPlatformSessionId(struct Engine_UniqueNetIdRepl& PlatformSessionId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_LocalPlayerSessionSubsystem", "GetPlatformSyncerByPlatformSessionId");

	Params::URH_LocalPlayerSessionSubsystem_GetPlatformSyncerByPlatformSessionId_Params Parms{};

	Parms.PlatformSessionId = PlatformSessionId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_LocalPlayerSessionSubsystem.GetJoinedSessionsByType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      Type                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class URH_JoinedSession*>   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class URH_JoinedSession*> URH_LocalPlayerSessionSubsystem::GetJoinedSessionsByType(const class FString& Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_LocalPlayerSessionSubsystem", "GetJoinedSessionsByType");

	Params::URH_LocalPlayerSessionSubsystem_GetJoinedSessionsByType_Params Parms{};

	Parms.Type = Type;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_LocalPlayerSessionSubsystem.GetInvitedSessionsByType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      Type                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class URH_InvitedSession*>  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class URH_InvitedSession*> URH_LocalPlayerSessionSubsystem::GetInvitedSessionsByType(const class FString& Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_LocalPlayerSessionSubsystem", "GetInvitedSessionsByType");

	Params::URH_LocalPlayerSessionSubsystem_GetInvitedSessionsByType_Params Parms{};

	Parms.Type = Type;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_LocalPlayerSessionSubsystem.GetFirstSessionByType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      Type                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class URH_SessionView*             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class URH_SessionView* URH_LocalPlayerSessionSubsystem::GetFirstSessionByType(const class FString& Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_LocalPlayerSessionSubsystem", "GetFirstSessionByType");

	Params::URH_LocalPlayerSessionSubsystem_GetFirstSessionByType_Params Parms{};

	Parms.Type = Type;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_LocalPlayerSessionSubsystem.GetFirstJoinedSessionByType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      Type                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class URH_JoinedSession*           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class URH_JoinedSession* URH_LocalPlayerSessionSubsystem::GetFirstJoinedSessionByType(const class FString& Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_LocalPlayerSessionSubsystem", "GetFirstJoinedSessionByType");

	Params::URH_LocalPlayerSessionSubsystem_GetFirstJoinedSessionByType_Params Parms{};

	Parms.Type = Type;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_LocalPlayerSessionSubsystem.GetFirstInvitedSessionByType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      Type                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class URH_InvitedSession*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class URH_InvitedSession* URH_LocalPlayerSessionSubsystem::GetFirstInvitedSessionByType(const class FString& Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_LocalPlayerSessionSubsystem", "GetFirstInvitedSessionByType");

	Params::URH_LocalPlayerSessionSubsystem_GetFirstInvitedSessionByType_Params Parms{};

	Parms.Type = Type;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_LocalPlayerSessionSubsystem.GetFirstActiveSession
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class URH_JoinedSession*           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class URH_JoinedSession* URH_LocalPlayerSessionSubsystem::GetFirstActiveSession()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_LocalPlayerSessionSubsystem", "GetFirstActiveSession");

	Params::URH_LocalPlayerSessionSubsystem_GetFirstActiveSession_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_LocalPlayerSessionSubsystem.ForcePollForUpdate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bClearETag                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URH_LocalPlayerSessionSubsystem::ForcePollForUpdate(bool bClearETag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_LocalPlayerSessionSubsystem", "ForcePollForUpdate");

	Params::URH_LocalPlayerSessionSubsystem_ForcePollForUpdate_Params Parms{};

	Parms.bClearETag = bClearETag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RallyHereIntegration.RH_LocalPlayerSessionSubsystem.BLUEPRINT_SearchForSessions
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct RallyHereIntegration_RH_SessionBrowserSearchParamsParams                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URH_LocalPlayerSessionSubsystem::BLUEPRINT_SearchForSessions(struct RallyHereIntegration_RH_SessionBrowserSearchParams& Params, FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_LocalPlayerSessionSubsystem", "BLUEPRINT_SearchForSessions");

	Params::URH_LocalPlayerSessionSubsystem_BLUEPRINT_SearchForSessions_Params Parms{};

	Parms.Params = Params;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RallyHereIntegration.RH_LocalPlayerSessionSubsystem.BLUEPRINT_JoinSessionById
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      SessionId                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URH_LocalPlayerSessionSubsystem::BLUEPRINT_JoinSessionById(const class FString& SessionId, FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_LocalPlayerSessionSubsystem", "BLUEPRINT_JoinSessionById");

	Params::URH_LocalPlayerSessionSubsystem_BLUEPRINT_JoinSessionById_Params Parms{};

	Parms.SessionId = SessionId;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RallyHereIntegration.RH_LocalPlayerSessionSubsystem.BLUEPRINT_CreateOrJoinSessionByType
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct RallyHereAPI_RHAPI_CreateOrJoinRequestCreateParams                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URH_LocalPlayerSessionSubsystem::BLUEPRINT_CreateOrJoinSessionByType(struct RallyHereAPI_RHAPI_CreateOrJoinRequest& CreateParams, FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_LocalPlayerSessionSubsystem", "BLUEPRINT_CreateOrJoinSessionByType");

	Params::URH_LocalPlayerSessionSubsystem_BLUEPRINT_CreateOrJoinSessionByType_Params Parms{};

	Parms.CreateParams = CreateParams;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class RallyHereIntegration.RH_ClientQueueAsset
// (None)

class UClass* URH_ClientQueueAsset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RH_ClientQueueAsset");

	return Clss;
}


// RH_ClientQueueAsset RallyHereIntegration.Default__RH_ClientQueueAsset
// (Public, ClassDefaultObject, ArchetypeObject)

class URH_ClientQueueAsset* URH_ClientQueueAsset::GetDefaultObj()
{
	static class URH_ClientQueueAsset* Default = nullptr;

	if (!Default)
		Default = static_cast<URH_ClientQueueAsset*>(URH_ClientQueueAsset::StaticClass()->DefaultObject);

	return Default;
}


// Class RallyHereIntegration.RH_MatchmakingQueueInfo
// (None)

class UClass* URH_MatchmakingQueueInfo::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RH_MatchmakingQueueInfo");

	return Clss;
}


// RH_MatchmakingQueueInfo RallyHereIntegration.Default__RH_MatchmakingQueueInfo
// (Public, ClassDefaultObject, ArchetypeObject)

class URH_MatchmakingQueueInfo* URH_MatchmakingQueueInfo::GetDefaultObj()
{
	static class URH_MatchmakingQueueInfo* Default = nullptr;

	if (!Default)
		Default = static_cast<URH_MatchmakingQueueInfo*>(URH_MatchmakingQueueInfo::StaticClass()->DefaultObject);

	return Default;
}


// Function RallyHereIntegration.RH_MatchmakingQueueInfo.IsActive
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URH_MatchmakingQueueInfo::IsActive()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_MatchmakingQueueInfo", "IsActive");

	Params::URH_MatchmakingQueueInfo_IsActive_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_MatchmakingQueueInfo.GetRankingType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 URH_MatchmakingQueueInfo::GetRankingType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_MatchmakingQueueInfo", "GetRankingType");

	Params::URH_MatchmakingQueueInfo_GetRankingType_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_MatchmakingQueueInfo.GetQueueId
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString URH_MatchmakingQueueInfo::GetQueueId()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_MatchmakingQueueInfo", "GetQueueId");

	Params::URH_MatchmakingQueueInfo_GetQueueId_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_MatchmakingQueueInfo.GetNumSides
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 URH_MatchmakingQueueInfo::GetNumSides()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_MatchmakingQueueInfo", "GetNumSides");

	Params::URH_MatchmakingQueueInfo_GetNumSides_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_MatchmakingQueueInfo.GetMinPlayersPerSide
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 URH_MatchmakingQueueInfo::GetMinPlayersPerSide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_MatchmakingQueueInfo", "GetMinPlayersPerSide");

	Params::URH_MatchmakingQueueInfo_GetMinPlayersPerSide_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_MatchmakingQueueInfo.GetMaxQueueGroupSize
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 URH_MatchmakingQueueInfo::GetMaxQueueGroupSize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_MatchmakingQueueInfo", "GetMaxQueueGroupSize");

	Params::URH_MatchmakingQueueInfo_GetMaxQueueGroupSize_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_MatchmakingQueueInfo.GetMaxPlayersPerSide
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 URH_MatchmakingQueueInfo::GetMaxPlayersPerSide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_MatchmakingQueueInfo", "GetMaxPlayersPerSide");

	Params::URH_MatchmakingQueueInfo_GetMaxPlayersPerSide_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_MatchmakingQueueInfo.GetMatchMakingTemplateGroupId
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct CoreUObject_Guid            ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct CoreUObject_Guid URH_MatchmakingQueueInfo::GetMatchMakingTemplateGroupId()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_MatchmakingQueueInfo", "GetMatchMakingTemplateGroupId");

	Params::URH_MatchmakingQueueInfo_GetMatchMakingTemplateGroupId_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class RallyHereIntegration.RH_MatchmakingTemplateGroupInfo
// (None)

class UClass* URH_MatchmakingTemplateGroupInfo::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RH_MatchmakingTemplateGroupInfo");

	return Clss;
}


// RH_MatchmakingTemplateGroupInfo RallyHereIntegration.Default__RH_MatchmakingTemplateGroupInfo
// (Public, ClassDefaultObject, ArchetypeObject)

class URH_MatchmakingTemplateGroupInfo* URH_MatchmakingTemplateGroupInfo::GetDefaultObj()
{
	static class URH_MatchmakingTemplateGroupInfo* Default = nullptr;

	if (!Default)
		Default = static_cast<URH_MatchmakingTemplateGroupInfo*>(URH_MatchmakingTemplateGroupInfo::StaticClass()->DefaultObject);

	return Default;
}


// Function RallyHereIntegration.RH_MatchmakingTemplateGroupInfo.GetTemplateGroupId
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct CoreUObject_Guid            ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct CoreUObject_Guid URH_MatchmakingTemplateGroupInfo::GetTemplateGroupId()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_MatchmakingTemplateGroupInfo", "GetTemplateGroupId");

	Params::URH_MatchmakingTemplateGroupInfo_GetTemplateGroupId_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_MatchmakingTemplateGroupInfo.GetRequiredItemIds
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TSet<int32>                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

TSet<int32> URH_MatchmakingTemplateGroupInfo::GetRequiredItemIds()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_MatchmakingTemplateGroupInfo", "GetRequiredItemIds");

	Params::URH_MatchmakingTemplateGroupInfo_GetRequiredItemIds_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_MatchmakingTemplateGroupInfo.GetPossibleInstanceLaunchTemplateIds
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct CoreUObject_Guid>    ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct CoreUObject_Guid> URH_MatchmakingTemplateGroupInfo::GetPossibleInstanceLaunchTemplateIds()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_MatchmakingTemplateGroupInfo", "GetPossibleInstanceLaunchTemplateIds");

	Params::URH_MatchmakingTemplateGroupInfo_GetPossibleInstanceLaunchTemplateIds_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class RallyHereIntegration.RH_InstanceLaunchTemplate
// (None)

class UClass* URH_InstanceLaunchTemplate::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RH_InstanceLaunchTemplate");

	return Clss;
}


// RH_InstanceLaunchTemplate RallyHereIntegration.Default__RH_InstanceLaunchTemplate
// (Public, ClassDefaultObject, ArchetypeObject)

class URH_InstanceLaunchTemplate* URH_InstanceLaunchTemplate::GetDefaultObj()
{
	static class URH_InstanceLaunchTemplate* Default = nullptr;

	if (!Default)
		Default = static_cast<URH_InstanceLaunchTemplate*>(URH_InstanceLaunchTemplate::StaticClass()->DefaultObject);

	return Default;
}


// Function RallyHereIntegration.RH_InstanceLaunchTemplate.GetInstanceLaunchTemplateId
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct CoreUObject_Guid            ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct CoreUObject_Guid URH_InstanceLaunchTemplate::GetInstanceLaunchTemplateId()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_InstanceLaunchTemplate", "GetInstanceLaunchTemplateId");

	Params::URH_InstanceLaunchTemplate_GetInstanceLaunchTemplateId_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_InstanceLaunchTemplate.GetInfo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct RallyHereAPI_RHAPI_InstanceLaunchTemplateReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

struct RallyHereAPI_RHAPI_InstanceLaunchTemplate URH_InstanceLaunchTemplate::GetInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_InstanceLaunchTemplate", "GetInfo");

	Params::URH_InstanceLaunchTemplate_GetInfo_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_InstanceLaunchTemplate.GetETag
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString URH_InstanceLaunchTemplate::GetETag()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_InstanceLaunchTemplate", "GetETag");

	Params::URH_InstanceLaunchTemplate_GetETag_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_InstanceLaunchTemplate.GetCustomData
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TMap<class FString, class FString> ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TMap<class FString, class FString> URH_InstanceLaunchTemplate::GetCustomData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_InstanceLaunchTemplate", "GetCustomData");

	Params::URH_InstanceLaunchTemplate_GetCustomData_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class RallyHereIntegration.RH_MatchmakingBrowserCache
// (None)

class UClass* URH_MatchmakingBrowserCache::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RH_MatchmakingBrowserCache");

	return Clss;
}


// RH_MatchmakingBrowserCache RallyHereIntegration.Default__RH_MatchmakingBrowserCache
// (Public, ClassDefaultObject, ArchetypeObject)

class URH_MatchmakingBrowserCache* URH_MatchmakingBrowserCache::GetDefaultObj()
{
	static class URH_MatchmakingBrowserCache* Default = nullptr;

	if (!Default)
		Default = static_cast<URH_MatchmakingBrowserCache*>(URH_MatchmakingBrowserCache::StaticClass()->DefaultObject);

	return Default;
}


// Function RallyHereIntegration.RH_MatchmakingBrowserCache.GetQueue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      QueueId                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class URH_MatchmakingQueueInfo*    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class URH_MatchmakingQueueInfo* URH_MatchmakingBrowserCache::GetQueue(const class FString& QueueId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_MatchmakingBrowserCache", "GetQueue");

	Params::URH_MatchmakingBrowserCache_GetQueue_Params Parms{};

	Parms.QueueId = QueueId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_MatchmakingBrowserCache.GetMatchmakingTemplateGroup
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct CoreUObject_Guid            TemplateGroupId                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class URH_MatchmakingTemplateGroupInfo*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class URH_MatchmakingTemplateGroupInfo* URH_MatchmakingBrowserCache::GetMatchmakingTemplateGroup(struct CoreUObject_Guid& TemplateGroupId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_MatchmakingBrowserCache", "GetMatchmakingTemplateGroup");

	Params::URH_MatchmakingBrowserCache_GetMatchmakingTemplateGroup_Params Parms{};

	Parms.TemplateGroupId = TemplateGroupId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_MatchmakingBrowserCache.GetInstanceLaunchTemplate
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct CoreUObject_Guid            InstanceLaunchTemplateId                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class URH_InstanceLaunchTemplate*  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class URH_InstanceLaunchTemplate* URH_MatchmakingBrowserCache::GetInstanceLaunchTemplate(struct CoreUObject_Guid& InstanceLaunchTemplateId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_MatchmakingBrowserCache", "GetInstanceLaunchTemplate");

	Params::URH_MatchmakingBrowserCache_GetInstanceLaunchTemplate_Params Parms{};

	Parms.InstanceLaunchTemplateId = InstanceLaunchTemplateId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_MatchmakingBrowserCache.GetAllRegions
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct RallyHereAPI_RHAPI_SiteSettings>ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<struct RallyHereAPI_RHAPI_SiteSettings> URH_MatchmakingBrowserCache::GetAllRegions()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_MatchmakingBrowserCache", "GetAllRegions");

	Params::URH_MatchmakingBrowserCache_GetAllRegions_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_MatchmakingBrowserCache.GetAllQueues
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class URH_MatchmakingQueueInfo*>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class URH_MatchmakingQueueInfo*> URH_MatchmakingBrowserCache::GetAllQueues()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_MatchmakingBrowserCache", "GetAllQueues");

	Params::URH_MatchmakingBrowserCache_GetAllQueues_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_MatchmakingBrowserCache.BLUEPRINT_SearchRegions
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URH_MatchmakingBrowserCache::BLUEPRINT_SearchRegions(FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_MatchmakingBrowserCache", "BLUEPRINT_SearchRegions");

	Params::URH_MatchmakingBrowserCache_BLUEPRINT_SearchRegions_Params Parms{};

	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RallyHereIntegration.RH_MatchmakingBrowserCache.BLUEPRINT_SearchQueues
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct RallyHereIntegration_RH_QueueSearchParamsParams                                                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URH_MatchmakingBrowserCache::BLUEPRINT_SearchQueues(struct RallyHereIntegration_RH_QueueSearchParams& Params, FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_MatchmakingBrowserCache", "BLUEPRINT_SearchQueues");

	Params::URH_MatchmakingBrowserCache_BLUEPRINT_SearchQueues_Params Parms{};

	Parms.Params = Params;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RallyHereIntegration.RH_MatchmakingBrowserCache.BLUEPRINT_SearchMatchmakingTemplateGroup
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct CoreUObject_Guid            TemplateId                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URH_MatchmakingBrowserCache::BLUEPRINT_SearchMatchmakingTemplateGroup(struct CoreUObject_Guid& TemplateId, FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_MatchmakingBrowserCache", "BLUEPRINT_SearchMatchmakingTemplateGroup");

	Params::URH_MatchmakingBrowserCache_BLUEPRINT_SearchMatchmakingTemplateGroup_Params Parms{};

	Parms.TemplateId = TemplateId;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RallyHereIntegration.RH_MatchmakingBrowserCache.BLUEPRINT_SearchInstanceLaunchTemplate
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct CoreUObject_Guid            TemplateId                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URH_MatchmakingBrowserCache::BLUEPRINT_SearchInstanceLaunchTemplate(struct CoreUObject_Guid& TemplateId, FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_MatchmakingBrowserCache", "BLUEPRINT_SearchInstanceLaunchTemplate");

	Params::URH_MatchmakingBrowserCache_BLUEPRINT_SearchInstanceLaunchTemplate_Params Parms{};

	Parms.TemplateId = TemplateId;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class RallyHereIntegration.RH_PlatformSessionSyncer
// (None)

class UClass* URH_PlatformSessionSyncer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RH_PlatformSessionSyncer");

	return Clss;
}


// RH_PlatformSessionSyncer RallyHereIntegration.Default__RH_PlatformSessionSyncer
// (Public, ClassDefaultObject, ArchetypeObject)

class URH_PlatformSessionSyncer* URH_PlatformSessionSyncer::GetDefaultObj()
{
	static class URH_PlatformSessionSyncer* Default = nullptr;

	if (!Default)
		Default = static_cast<URH_PlatformSessionSyncer*>(URH_PlatformSessionSyncer::StaticClass()->DefaultObject);

	return Default;
}


// Function RallyHereIntegration.RH_PlatformSessionSyncer.GetSessionOwner
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TScriptInterface<class IRH_SessionOwnerInterface>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TScriptInterface<class IRH_SessionOwnerInterface> URH_PlatformSessionSyncer::GetSessionOwner()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_PlatformSessionSyncer", "GetSessionOwner");

	Params::URH_PlatformSessionSyncer_GetSessionOwner_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_PlatformSessionSyncer.GetRHSessionId
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString URH_PlatformSessionSyncer::GetRHSessionId()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_PlatformSessionSyncer", "GetRHSessionId");

	Params::URH_PlatformSessionSyncer_GetRHSessionId_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_PlatformSessionSyncer.GetRHSession
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class URH_JoinedSession*           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class URH_JoinedSession* URH_PlatformSessionSyncer::GetRHSession()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_PlatformSessionSyncer", "GetRHSession");

	Params::URH_PlatformSessionSyncer_GetRHSession_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_PlatformSessionSyncer.GetPlatformSessionIdFromRHSession
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct Engine_UniqueNetIdRepl      PlatformSessionId                                                (Parm, OutParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URH_PlatformSessionSyncer::GetPlatformSessionIdFromRHSession(struct Engine_UniqueNetIdRepl* PlatformSessionId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_PlatformSessionSyncer", "GetPlatformSessionIdFromRHSession");

	Params::URH_PlatformSessionSyncer_GetPlatformSessionIdFromRHSession_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PlatformSessionId != nullptr)
		*PlatformSessionId = std::move(Parms.PlatformSessionId);

	return Parms.ReturnValue;

}


// Class RallyHereIntegration.RH_PlayerPresence
// (None)

class UClass* URH_PlayerPresence::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RH_PlayerPresence");

	return Clss;
}


// RH_PlayerPresence RallyHereIntegration.Default__RH_PlayerPresence
// (Public, ClassDefaultObject, ArchetypeObject)

class URH_PlayerPresence* URH_PlayerPresence::GetDefaultObj()
{
	static class URH_PlayerPresence* Default = nullptr;

	if (!Default)
		Default = static_cast<URH_PlayerPresence*>(URH_PlayerPresence::StaticClass()->DefaultObject);

	return Default;
}


// Function RallyHereIntegration.RH_PlayerPresence.GetPlayerInfo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class URH_PlayerInfo*              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class URH_PlayerInfo* URH_PlayerPresence::GetPlayerInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_PlayerPresence", "GetPlayerInfo");

	Params::URH_PlayerPresence_GetPlayerInfo_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_PlayerPresence.BLUEPRINT_RequestUpdate
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// bool                               bForceUpdate                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URH_PlayerPresence::BLUEPRINT_RequestUpdate(bool bForceUpdate, FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_PlayerPresence", "BLUEPRINT_RequestUpdate");

	Params::URH_PlayerPresence_BLUEPRINT_RequestUpdate_Params Parms{};

	Parms.bForceUpdate = bForceUpdate;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class RallyHereIntegration.RH_PlayerSessions
// (None)

class UClass* URH_PlayerSessions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RH_PlayerSessions");

	return Clss;
}


// RH_PlayerSessions RallyHereIntegration.Default__RH_PlayerSessions
// (Public, ClassDefaultObject, ArchetypeObject)

class URH_PlayerSessions* URH_PlayerSessions::GetDefaultObj()
{
	static class URH_PlayerSessions* Default = nullptr;

	if (!Default)
		Default = static_cast<URH_PlayerSessions*>(URH_PlayerSessions::StaticClass()->DefaultObject);

	return Default;
}


// Function RallyHereIntegration.RH_PlayerSessions.GetPlayerInfo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class URH_PlayerInfo*              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class URH_PlayerInfo* URH_PlayerSessions::GetPlayerInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_PlayerSessions", "GetPlayerInfo");

	Params::URH_PlayerSessions_GetPlayerInfo_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_PlayerSessions.BLUEPRINT_RequestUpdate
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// bool                               bForceUpdate                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URH_PlayerSessions::BLUEPRINT_RequestUpdate(bool bForceUpdate, FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_PlayerSessions", "BLUEPRINT_RequestUpdate");

	Params::URH_PlayerSessions_BLUEPRINT_RequestUpdate_Params Parms{};

	Parms.bForceUpdate = bForceUpdate;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class RallyHereIntegration.RH_PlayerPlatformInfo
// (None)

class UClass* URH_PlayerPlatformInfo::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RH_PlayerPlatformInfo");

	return Clss;
}


// RH_PlayerPlatformInfo RallyHereIntegration.Default__RH_PlayerPlatformInfo
// (Public, ClassDefaultObject, ArchetypeObject)

class URH_PlayerPlatformInfo* URH_PlayerPlatformInfo::GetDefaultObj()
{
	static class URH_PlayerPlatformInfo* Default = nullptr;

	if (!Default)
		Default = static_cast<URH_PlayerPlatformInfo*>(URH_PlayerPlatformInfo::StaticClass()->DefaultObject);

	return Default;
}


// Function RallyHereIntegration.RH_PlayerPlatformInfo.GetPlayerPlatformId
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct RallyHereIntegration_RH_PlayerPlatformIdReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct RallyHereIntegration_RH_PlayerPlatformId URH_PlayerPlatformInfo::GetPlayerPlatformId()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_PlayerPlatformInfo", "GetPlayerPlatformId");

	Params::URH_PlayerPlatformInfo_GetPlayerPlatformId_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_PlayerPlatformInfo.GetPlatformUserId
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString URH_PlayerPlatformInfo::GetPlatformUserId()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_PlayerPlatformInfo", "GetPlatformUserId");

	Params::URH_PlayerPlatformInfo_GetPlatformUserId_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_PlayerPlatformInfo.GetPlatform
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ERHAPI_Platform         ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ERHAPI_Platform URH_PlayerPlatformInfo::GetPlatform()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_PlayerPlatformInfo", "GetPlatform");

	Params::URH_PlayerPlatformInfo_GetPlatform_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_PlayerPlatformInfo.GetLastKnownDisplayName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString URH_PlayerPlatformInfo::GetLastKnownDisplayName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_PlayerPlatformInfo", "GetLastKnownDisplayName");

	Params::URH_PlayerPlatformInfo_GetLastKnownDisplayName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class RallyHereIntegration.RH_PlayerInfo
// (None)

class UClass* URH_PlayerInfo::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RH_PlayerInfo");

	return Clss;
}


// RH_PlayerInfo RallyHereIntegration.Default__RH_PlayerInfo
// (Public, ClassDefaultObject, ArchetypeObject)

class URH_PlayerInfo* URH_PlayerInfo::GetDefaultObj()
{
	static class URH_PlayerInfo* Default = nullptr;

	if (!Default)
		Default = static_cast<URH_PlayerInfo*>(URH_PlayerInfo::StaticClass()->DefaultObject);

	return Default;
}


// Function RallyHereIntegration.RH_PlayerInfo.StopStreamingNotifications
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bClearCache                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URH_PlayerInfo::StopStreamingNotifications(bool bClearCache)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_PlayerInfo", "StopStreamingNotifications");

	Params::URH_PlayerInfo_StopStreamingNotifications_Params Parms{};

	Parms.bClearCache = bClearCache;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RallyHereIntegration.RH_PlayerInfo.StartStreamingNotifications
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void URH_PlayerInfo::StartStreamingNotifications()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_PlayerInfo", "StartStreamingNotifications");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function RallyHereIntegration.RH_PlayerInfo.GetSessions
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class URH_PlayerSessions*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class URH_PlayerSessions* URH_PlayerInfo::GetSessions()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_PlayerInfo", "GetSessions");

	Params::URH_PlayerInfo_GetSessions_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_PlayerInfo.GetRHPlayerUuid
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct CoreUObject_Guid            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct CoreUObject_Guid URH_PlayerInfo::GetRHPlayerUuid()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_PlayerInfo", "GetRHPlayerUuid");

	Params::URH_PlayerInfo_GetRHPlayerUuid_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_PlayerInfo.GetPresence
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class URH_PlayerPresence*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class URH_PlayerPresence* URH_PlayerInfo::GetPresence()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_PlayerInfo", "GetPresence");

	Params::URH_PlayerInfo_GetPresence_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_PlayerInfo.GetPlayerPlatforms
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class URH_PlayerPlatformInfo*>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class URH_PlayerPlatformInfo*> URH_PlayerInfo::GetPlayerPlatforms()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_PlayerInfo", "GetPlayerPlatforms");

	Params::URH_PlayerInfo_GetPlayerPlatforms_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_PlayerInfo.GetPlayerPlatformInfo
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct RallyHereIntegration_RH_PlayerPlatformIdPlayerPlatformId                                                 (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class URH_PlayerPlatformInfo*      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class URH_PlayerPlatformInfo* URH_PlayerInfo::GetPlayerPlatformInfo(struct RallyHereIntegration_RH_PlayerPlatformId& PlayerPlatformId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_PlayerInfo", "GetPlayerPlatformInfo");

	Params::URH_PlayerInfo_GetPlayerPlatformInfo_Params Parms{};

	Parms.PlayerPlatformId = PlayerPlatformId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_PlayerInfo.GetPlayerPlatformIds
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct RallyHereIntegration_RH_PlayerPlatformId>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct RallyHereIntegration_RH_PlayerPlatformId> URH_PlayerInfo::GetPlayerPlatformIds()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_PlayerInfo", "GetPlayerPlatformIds");

	Params::URH_PlayerInfo_GetPlayerPlatformIds_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_PlayerInfo.GetPlayerNotifications
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class URH_PlayerNotifications*     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class URH_PlayerNotifications* URH_PlayerInfo::GetPlayerNotifications()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_PlayerInfo", "GetPlayerNotifications");

	Params::URH_PlayerInfo_GetPlayerNotifications_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_PlayerInfo.GetPlayerInventory
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class URH_PlayerInventory*         ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class URH_PlayerInventory* URH_PlayerInfo::GetPlayerInventory()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_PlayerInfo", "GetPlayerInventory");

	Params::URH_PlayerInfo_GetPlayerInventory_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_PlayerInfo.GetPlayerInfoSubsystem
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class URH_PlayerInfoSubsystem*     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class URH_PlayerInfoSubsystem* URH_PlayerInfo::GetPlayerInfoSubsystem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_PlayerInfo", "GetPlayerInfoSubsystem");

	Params::URH_PlayerInfo_GetPlayerInfoSubsystem_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_PlayerInfo.GetAllStoredPlayerSettings
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TMap<class FString, struct RallyHereIntegration_RH_PlayerSettingsDataWrapper>ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TMap<class FString, struct RallyHereIntegration_RH_PlayerSettingsDataWrapper> URH_PlayerInfo::GetAllStoredPlayerSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_PlayerInfo", "GetAllStoredPlayerSettings");

	Params::URH_PlayerInfo_GetAllStoredPlayerSettings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_PlayerInfo.GetAllStoredPlayerRankings
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TMap<int32, struct RallyHereAPI_RHAPI_PlayerRankResponse>ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TMap<int32, struct RallyHereAPI_RHAPI_PlayerRankResponse> URH_PlayerInfo::GetAllStoredPlayerRankings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_PlayerInfo", "GetAllStoredPlayerRankings");

	Params::URH_PlayerInfo_GetAllStoredPlayerRankings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_PlayerInfo.BLUEPRINT_UpdatePlayerRanking
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              RankId                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct RallyHereAPI_RHAPI_PlayerRankUpdateRequestRankData                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URH_PlayerInfo::BLUEPRINT_UpdatePlayerRanking(int32 RankId, struct RallyHereAPI_RHAPI_PlayerRankUpdateRequest& RankData, FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_PlayerInfo", "BLUEPRINT_UpdatePlayerRanking");

	Params::URH_PlayerInfo_BLUEPRINT_UpdatePlayerRanking_Params Parms{};

	Parms.RankId = RankId;
	Parms.RankData = RankData;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RallyHereIntegration.RH_PlayerInfo.BLUEPRINT_SetPlayerSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      SettingTypeId                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct RallyHereIntegration_RH_PlayerSettingsDataWrapperSettingsData                                                     (Parm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URH_PlayerInfo::BLUEPRINT_SetPlayerSettings(const class FString& SettingTypeId, const struct RallyHereIntegration_RH_PlayerSettingsDataWrapper& SettingsData, FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_PlayerInfo", "BLUEPRINT_SetPlayerSettings");

	Params::URH_PlayerInfo_BLUEPRINT_SetPlayerSettings_Params Parms{};

	Parms.SettingTypeId = SettingTypeId;
	Parms.SettingsData = SettingsData;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RallyHereIntegration.RH_PlayerInfo.BLUEPRINT_GetPlayerSettings
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      SettingTypeId                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Timespan        StaleThreshold                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bForceRefresh                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URH_PlayerInfo::BLUEPRINT_GetPlayerSettings(const class FString& SettingTypeId, struct CoreUObject_Timespan& StaleThreshold, bool bForceRefresh, FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_PlayerInfo", "BLUEPRINT_GetPlayerSettings");

	Params::URH_PlayerInfo_BLUEPRINT_GetPlayerSettings_Params Parms{};

	Parms.SettingTypeId = SettingTypeId;
	Parms.StaleThreshold = StaleThreshold;
	Parms.bForceRefresh = bForceRefresh;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RallyHereIntegration.RH_PlayerInfo.BLUEPRINT_GetPlayerRankings
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct CoreUObject_Timespan        StaleThreshold                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bForceRefresh                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URH_PlayerInfo::BLUEPRINT_GetPlayerRankings(struct CoreUObject_Timespan& StaleThreshold, bool bForceRefresh, FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_PlayerInfo", "BLUEPRINT_GetPlayerRankings");

	Params::URH_PlayerInfo_BLUEPRINT_GetPlayerRankings_Params Parms{};

	Parms.StaleThreshold = StaleThreshold;
	Parms.bForceRefresh = bForceRefresh;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RallyHereIntegration.RH_PlayerInfo.BLUEPRINT_GetLinkedPlatformInfo
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct CoreUObject_Timespan        StaleThreshold                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bForceRefresh                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URH_PlayerInfo::BLUEPRINT_GetLinkedPlatformInfo(struct CoreUObject_Timespan& StaleThreshold, bool bForceRefresh, FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_PlayerInfo", "BLUEPRINT_GetLinkedPlatformInfo");

	Params::URH_PlayerInfo_BLUEPRINT_GetLinkedPlatformInfo_Params Parms{};

	Parms.StaleThreshold = StaleThreshold;
	Parms.bForceRefresh = bForceRefresh;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RallyHereIntegration.RH_PlayerInfo.BLUEPRINT_GetLastKnownDisplayNameAsync
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class URH_LocalPlayerSubsystem*    LocalPlayerSubsystem                                             (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Timespan        StaleThreshold                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bForceRefresh                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ERHAPI_Platform         PreferredPlatformType                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URH_PlayerInfo::BLUEPRINT_GetLastKnownDisplayNameAsync(class URH_LocalPlayerSubsystem* LocalPlayerSubsystem, struct CoreUObject_Timespan& StaleThreshold, bool bForceRefresh, enum class ERHAPI_Platform PreferredPlatformType, FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_PlayerInfo", "BLUEPRINT_GetLastKnownDisplayNameAsync");

	Params::URH_PlayerInfo_BLUEPRINT_GetLastKnownDisplayNameAsync_Params Parms{};

	Parms.LocalPlayerSubsystem = LocalPlayerSubsystem;
	Parms.StaleThreshold = StaleThreshold;
	Parms.bForceRefresh = bForceRefresh;
	Parms.PreferredPlatformType = PreferredPlatformType;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RallyHereIntegration.RH_PlayerInfo.BLUEPRINT_GetLastKnownDisplayName
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ERHAPI_Platform         PreferredPlatformType                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OutDisplayName                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URH_PlayerInfo::BLUEPRINT_GetLastKnownDisplayName(enum class ERHAPI_Platform PreferredPlatformType, class FString* OutDisplayName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_PlayerInfo", "BLUEPRINT_GetLastKnownDisplayName");

	Params::URH_PlayerInfo_BLUEPRINT_GetLastKnownDisplayName_Params Parms{};

	Parms.PreferredPlatformType = PreferredPlatformType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutDisplayName != nullptr)
		*OutDisplayName = std::move(Parms.OutDisplayName);

	return Parms.ReturnValue;

}


// Class RallyHereIntegration.RH_SandboxedSubsystemPlugin
// (None)

class UClass* URH_SandboxedSubsystemPlugin::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RH_SandboxedSubsystemPlugin");

	return Clss;
}


// RH_SandboxedSubsystemPlugin RallyHereIntegration.Default__RH_SandboxedSubsystemPlugin
// (Public, ClassDefaultObject, ArchetypeObject)

class URH_SandboxedSubsystemPlugin* URH_SandboxedSubsystemPlugin::GetDefaultObj()
{
	static class URH_SandboxedSubsystemPlugin* Default = nullptr;

	if (!Default)
		Default = static_cast<URH_SandboxedSubsystemPlugin*>(URH_SandboxedSubsystemPlugin::StaticClass()->DefaultObject);

	return Default;
}


// Function RallyHereIntegration.RH_SandboxedSubsystemPlugin.GetLocalPlayerSubsystem
// (Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class URH_LocalPlayerSubsystem*    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class URH_LocalPlayerSubsystem* URH_SandboxedSubsystemPlugin::GetLocalPlayerSubsystem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_SandboxedSubsystemPlugin", "GetLocalPlayerSubsystem");

	Params::URH_SandboxedSubsystemPlugin_GetLocalPlayerSubsystem_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class RallyHereIntegration.RH_PlayerInfoSubsystem
// (None)

class UClass* URH_PlayerInfoSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RH_PlayerInfoSubsystem");

	return Clss;
}


// RH_PlayerInfoSubsystem RallyHereIntegration.Default__RH_PlayerInfoSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class URH_PlayerInfoSubsystem* URH_PlayerInfoSubsystem::GetDefaultObj()
{
	static class URH_PlayerInfoSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<URH_PlayerInfoSubsystem*>(URH_PlayerInfoSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Function RallyHereIntegration.RH_PlayerInfoSubsystem.RemovePlayerInfoFromCache
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct CoreUObject_Guid            PlayerUuid                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class URH_PlayerInfo*              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class URH_PlayerInfo* URH_PlayerInfoSubsystem::RemovePlayerInfoFromCache(struct CoreUObject_Guid& PlayerUuid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_PlayerInfoSubsystem", "RemovePlayerInfoFromCache");

	Params::URH_PlayerInfoSubsystem_RemovePlayerInfoFromCache_Params Parms{};

	Parms.PlayerUuid = PlayerUuid;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_PlayerInfoSubsystem.GetPlayerPlatformInfo
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct RallyHereIntegration_RH_PlayerPlatformIdPlayerPlatformId                                                 (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class URH_PlayerPlatformInfo*      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class URH_PlayerPlatformInfo* URH_PlayerInfoSubsystem::GetPlayerPlatformInfo(struct RallyHereIntegration_RH_PlayerPlatformId& PlayerPlatformId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_PlayerInfoSubsystem", "GetPlayerPlatformInfo");

	Params::URH_PlayerInfoSubsystem_GetPlayerPlatformInfo_Params Parms{};

	Parms.PlayerPlatformId = PlayerPlatformId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_PlayerInfoSubsystem.GetPlayerInfos
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TMap<struct CoreUObject_Guid, class URH_PlayerInfo*>ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TMap<struct CoreUObject_Guid, class URH_PlayerInfo*> URH_PlayerInfoSubsystem::GetPlayerInfos()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_PlayerInfoSubsystem", "GetPlayerInfos");

	Params::URH_PlayerInfoSubsystem_GetPlayerInfos_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_PlayerInfoSubsystem.GetPlayerInfo
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct CoreUObject_Guid            PlayerUuid                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class URH_PlayerInfo*              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class URH_PlayerInfo* URH_PlayerInfoSubsystem::GetPlayerInfo(struct CoreUObject_Guid& PlayerUuid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_PlayerInfoSubsystem", "GetPlayerInfo");

	Params::URH_PlayerInfoSubsystem_GetPlayerInfo_Params Parms{};

	Parms.PlayerUuid = PlayerUuid;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_PlayerInfoSubsystem.GetOrCreatePlayerPlatformInfo
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct RallyHereIntegration_RH_PlayerPlatformIdPlayerPlatformId                                                 (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class URH_PlayerPlatformInfo*      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class URH_PlayerPlatformInfo* URH_PlayerInfoSubsystem::GetOrCreatePlayerPlatformInfo(struct RallyHereIntegration_RH_PlayerPlatformId& PlayerPlatformId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_PlayerInfoSubsystem", "GetOrCreatePlayerPlatformInfo");

	Params::URH_PlayerInfoSubsystem_GetOrCreatePlayerPlatformInfo_Params Parms{};

	Parms.PlayerPlatformId = PlayerPlatformId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_PlayerInfoSubsystem.GetOrCreatePlayerInfo
// (Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct CoreUObject_Guid            PlayerUuid                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class URH_PlayerInfo*              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class URH_PlayerInfo* URH_PlayerInfoSubsystem::GetOrCreatePlayerInfo(struct CoreUObject_Guid& PlayerUuid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_PlayerInfoSubsystem", "GetOrCreatePlayerInfo");

	Params::URH_PlayerInfoSubsystem_GetOrCreatePlayerInfo_Params Parms{};

	Parms.PlayerUuid = PlayerUuid;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_PlayerInfoSubsystem.FindPlayerInfoByPlatformId
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct RallyHereIntegration_RH_PlayerPlatformIdPlayerPlatformId                                                 (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class URH_PlayerInfo*              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class URH_PlayerInfo* URH_PlayerInfoSubsystem::FindPlayerInfoByPlatformId(struct RallyHereIntegration_RH_PlayerPlatformId& PlayerPlatformId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_PlayerInfoSubsystem", "FindPlayerInfoByPlatformId");

	Params::URH_PlayerInfoSubsystem_FindPlayerInfoByPlatformId_Params Parms{};

	Parms.PlayerPlatformId = PlayerPlatformId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_PlayerInfoSubsystem.BLUEPRINT_LookupPlayerByPlatformUserId
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct RallyHereIntegration_RH_PlayerPlatformIdPlayerPlatformId                                                 (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URH_PlayerInfoSubsystem::BLUEPRINT_LookupPlayerByPlatformUserId(const struct RallyHereIntegration_RH_PlayerPlatformId& PlayerPlatformId, FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_PlayerInfoSubsystem", "BLUEPRINT_LookupPlayerByPlatformUserId");

	Params::URH_PlayerInfoSubsystem_BLUEPRINT_LookupPlayerByPlatformUserId_Params Parms{};

	Parms.PlayerPlatformId = PlayerPlatformId;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RallyHereIntegration.RH_PlayerInfoSubsystem.BLUEPRINT_LookupPlayer
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      PlayerName                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URH_PlayerInfoSubsystem::BLUEPRINT_LookupPlayer(const class FString& PlayerName, FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_PlayerInfoSubsystem", "BLUEPRINT_LookupPlayer");

	Params::URH_PlayerInfoSubsystem_BLUEPRINT_LookupPlayer_Params Parms{};

	Parms.PlayerName = PlayerName;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class RallyHereIntegration.RH_PlayerInventory
// (None)

class UClass* URH_PlayerInventory::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RH_PlayerInventory");

	return Clss;
}


// RH_PlayerInventory RallyHereIntegration.Default__RH_PlayerInventory
// (Public, ClassDefaultObject, ArchetypeObject)

class URH_PlayerInventory* URH_PlayerInventory::GetDefaultObj()
{
	static class URH_PlayerInventory* Default = nullptr;

	if (!Default)
		Default = static_cast<URH_PlayerInventory*>(URH_PlayerInventory::StaticClass()->DefaultObject);

	return Default;
}


// Function RallyHereIntegration.RH_PlayerInventory.GetOrderResults
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct RallyHereAPI_RHAPI_PlayerOrder>ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<struct RallyHereAPI_RHAPI_PlayerOrder> URH_PlayerInventory::GetOrderResults()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_PlayerInventory", "GetOrderResults");

	Params::URH_PlayerInventory_GetOrderResults_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_PlayerInventory.GetCachedInventorySession
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct RallyHereIntegration_RH_InventorySessionReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

struct RallyHereIntegration_RH_InventorySession URH_PlayerInventory::GetCachedInventorySession()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_PlayerInventory", "GetCachedInventorySession");

	Params::URH_PlayerInventory_GetCachedInventorySession_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_PlayerInventory.GetCachedInventoryForType
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ERHAPI_InventoryType    Type                                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct RallyHereIntegration_RH_ItemInventory>ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct RallyHereIntegration_RH_ItemInventory> URH_PlayerInventory::GetCachedInventoryForType(enum class ERHAPI_InventoryType& Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_PlayerInventory", "GetCachedInventoryForType");

	Params::URH_PlayerInventory_GetCachedInventoryForType_Params Parms{};

	Parms.Type = Type;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_PlayerInventory.GetCachedInventoryForItemsAndTypes
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<int32>                      ItemIds                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<enum class ERHAPI_InventoryType>Types                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct RallyHereIntegration_RH_ItemInventory>ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct RallyHereIntegration_RH_ItemInventory> URH_PlayerInventory::GetCachedInventoryForItemsAndTypes(TArray<int32>& ItemIds, TArray<enum class ERHAPI_InventoryType>& Types)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_PlayerInventory", "GetCachedInventoryForItemsAndTypes");

	Params::URH_PlayerInventory_GetCachedInventoryForItemsAndTypes_Params Parms{};

	Parms.ItemIds = ItemIds;
	Parms.Types = Types;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_PlayerInventory.GetCachedInventoryForItems
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<int32>                      ItemIds                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct RallyHereIntegration_RH_ItemInventory>ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct RallyHereIntegration_RH_ItemInventory> URH_PlayerInventory::GetCachedInventoryForItems(TArray<int32>& ItemIds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_PlayerInventory", "GetCachedInventoryForItems");

	Params::URH_PlayerInventory_GetCachedInventoryForItems_Params Parms{};

	Parms.ItemIds = ItemIds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_PlayerInventory.GetCachedInventoryForItem
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ItemId                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct RallyHereIntegration_RH_ItemInventory>ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct RallyHereIntegration_RH_ItemInventory> URH_PlayerInventory::GetCachedInventoryForItem(int32& ItemId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_PlayerInventory", "GetCachedInventoryForItem");

	Params::URH_PlayerInventory_GetCachedInventoryForItem_Params Parms{};

	Parms.ItemId = ItemId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_PlayerInventory.GetCachedInventoryForInventoryId
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct CoreUObject_Guid            InventoryId                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct RallyHereIntegration_RH_ItemInventoryItem                                                             (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URH_PlayerInventory::GetCachedInventoryForInventoryId(struct CoreUObject_Guid& InventoryId, struct RallyHereIntegration_RH_ItemInventory* Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_PlayerInventory", "GetCachedInventoryForInventoryId");

	Params::URH_PlayerInventory_GetCachedInventoryForInventoryId_Params Parms{};

	Parms.InventoryId = InventoryId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Item != nullptr)
		*Item = std::move(Parms.Item);

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_PlayerInventory.GetAllCachedInventory
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct RallyHereIntegration_RH_ItemInventory>ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct RallyHereIntegration_RH_ItemInventory> URH_PlayerInventory::GetAllCachedInventory()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_PlayerInventory", "GetAllCachedInventory");

	Params::URH_PlayerInventory_GetAllCachedInventory_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_PlayerInventory.BLUEPRINT_UpdateInventoryWithoutClientOrderRefId
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct RallyHereIntegration_RH_UpdateInventory>UpdateInventories                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ERHAPI_Source           Source                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URH_PlayerInventory::BLUEPRINT_UpdateInventoryWithoutClientOrderRefId(TArray<struct RallyHereIntegration_RH_UpdateInventory>& UpdateInventories, FDelegateProperty_& Delegate, enum class ERHAPI_Source Source)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_PlayerInventory", "BLUEPRINT_UpdateInventoryWithoutClientOrderRefId");

	Params::URH_PlayerInventory_BLUEPRINT_UpdateInventoryWithoutClientOrderRefId_Params Parms{};

	Parms.UpdateInventories = UpdateInventories;
	Parms.Delegate = Delegate;
	Parms.Source = Source;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RallyHereIntegration.RH_PlayerInventory.BLUEPRINT_UpdateInventory
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct CoreUObject_Guid            ClientOrderReferenceId                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct RallyHereIntegration_RH_UpdateInventory>UpdateInventories                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ERHAPI_Source           Source                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URH_PlayerInventory::BLUEPRINT_UpdateInventory(struct CoreUObject_Guid& ClientOrderReferenceId, TArray<struct RallyHereIntegration_RH_UpdateInventory>& UpdateInventories, FDelegateProperty_& Delegate, enum class ERHAPI_Source Source)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_PlayerInventory", "BLUEPRINT_UpdateInventory");

	Params::URH_PlayerInventory_BLUEPRINT_UpdateInventory_Params Parms{};

	Parms.ClientOrderReferenceId = ClientOrderReferenceId;
	Parms.UpdateInventories = UpdateInventories;
	Parms.Delegate = Delegate;
	Parms.Source = Source;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RallyHereIntegration.RH_PlayerInventory.BLUEPRINT_SetOrderWatch
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URH_PlayerInventory::BLUEPRINT_SetOrderWatch(FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_PlayerInventory", "BLUEPRINT_SetOrderWatch");

	Params::URH_PlayerInventory_BLUEPRINT_SetOrderWatch_Params Parms{};

	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RallyHereIntegration.RH_PlayerInventory.BLUEPRINT_RedeemPromoCode
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      PromoCode                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URH_PlayerInventory::BLUEPRINT_RedeemPromoCode(const class FString& PromoCode, FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_PlayerInventory", "BLUEPRINT_RedeemPromoCode");

	Params::URH_PlayerInventory_BLUEPRINT_RedeemPromoCode_Params Parms{};

	Parms.PromoCode = PromoCode;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RallyHereIntegration.RH_PlayerInventory.BLUEPRINT_IsInventoryItemRented
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              ItemId                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URH_PlayerInventory::BLUEPRINT_IsInventoryItemRented(int32& ItemId, FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_PlayerInventory", "BLUEPRINT_IsInventoryItemRented");

	Params::URH_PlayerInventory_BLUEPRINT_IsInventoryItemRented_Params Parms{};

	Parms.ItemId = ItemId;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RallyHereIntegration.RH_PlayerInventory.BLUEPRINT_IsInventoryItemOwned
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              ItemId                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URH_PlayerInventory::BLUEPRINT_IsInventoryItemOwned(int32& ItemId, FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_PlayerInventory", "BLUEPRINT_IsInventoryItemOwned");

	Params::URH_PlayerInventory_BLUEPRINT_IsInventoryItemOwned_Params Parms{};

	Parms.ItemId = ItemId;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RallyHereIntegration.RH_PlayerInventory.BLUEPRINT_GetInventorySession
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URH_PlayerInventory::BLUEPRINT_GetInventorySession(FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_PlayerInventory", "BLUEPRINT_GetInventorySession");

	Params::URH_PlayerInventory_BLUEPRINT_GetInventorySession_Params Parms{};

	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RallyHereIntegration.RH_PlayerInventory.BLUEPRINT_GetInventoryCount
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              ItemId                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URH_PlayerInventory::BLUEPRINT_GetInventoryCount(int32& ItemId, FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_PlayerInventory", "BLUEPRINT_GetInventoryCount");

	Params::URH_PlayerInventory_BLUEPRINT_GetInventoryCount_Params Parms{};

	Parms.ItemId = ItemId;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RallyHereIntegration.RH_PlayerInventory.BLUEPRINT_GetInventory
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<int32>                      ItemIds                                                          (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URH_PlayerInventory::BLUEPRINT_GetInventory(const TArray<int32>& ItemIds, FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_PlayerInventory", "BLUEPRINT_GetInventory");

	Params::URH_PlayerInventory_BLUEPRINT_GetInventory_Params Parms{};

	Parms.ItemIds = ItemIds;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RallyHereIntegration.RH_PlayerInventory.BLUEPRINT_CreatePlayerOrder
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// enum class ERHAPI_PlayerOrderEntryTypeFillType                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ERHAPI_Source           OrderSource                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class URH_PlayerOrderEntry*>OrderEntries                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URH_PlayerInventory::BLUEPRINT_CreatePlayerOrder(enum class ERHAPI_PlayerOrderEntryType FillType, enum class ERHAPI_Source OrderSource, TArray<class URH_PlayerOrderEntry*>& OrderEntries, FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_PlayerInventory", "BLUEPRINT_CreatePlayerOrder");

	Params::URH_PlayerInventory_BLUEPRINT_CreatePlayerOrder_Params Parms{};

	Parms.FillType = FillType;
	Parms.OrderSource = OrderSource;
	Parms.OrderEntries = OrderEntries;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RallyHereIntegration.RH_PlayerInventory.BLUEPRINT_CreateNewPlayerOrder2
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// enum class ERHAPI_Source           OrderSource                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               IsTransaction                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class URH_PlayerOrderEntry*>OrderEntries                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URH_PlayerInventory::BLUEPRINT_CreateNewPlayerOrder2(enum class ERHAPI_Source OrderSource, bool IsTransaction, TArray<class URH_PlayerOrderEntry*>& OrderEntries, FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_PlayerInventory", "BLUEPRINT_CreateNewPlayerOrder2");

	Params::URH_PlayerInventory_BLUEPRINT_CreateNewPlayerOrder2_Params Parms{};

	Parms.OrderSource = OrderSource;
	Parms.IsTransaction = IsTransaction;
	Parms.OrderEntries = OrderEntries;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RallyHereIntegration.RH_PlayerInventory.BLUEPRINT_CreateNewPlayerOrder
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// enum class ERHAPI_Source           OrderSource                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class URH_PlayerOrderEntry*>OrderEntries                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URH_PlayerInventory::BLUEPRINT_CreateNewPlayerOrder(enum class ERHAPI_Source OrderSource, TArray<class URH_PlayerOrderEntry*>& OrderEntries, FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_PlayerInventory", "BLUEPRINT_CreateNewPlayerOrder");

	Params::URH_PlayerInventory_BLUEPRINT_CreateNewPlayerOrder_Params Parms{};

	Parms.OrderSource = OrderSource;
	Parms.OrderEntries = OrderEntries;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RallyHereIntegration.RH_PlayerInventory.BLUEPRINT_CreateInventoryWithoutClientOrderRefId
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct RallyHereIntegration_RH_CreateInventory>CreateInventories                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ERHAPI_Source           Source                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URH_PlayerInventory::BLUEPRINT_CreateInventoryWithoutClientOrderRefId(TArray<struct RallyHereIntegration_RH_CreateInventory>& CreateInventories, FDelegateProperty_& Delegate, enum class ERHAPI_Source Source)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_PlayerInventory", "BLUEPRINT_CreateInventoryWithoutClientOrderRefId");

	Params::URH_PlayerInventory_BLUEPRINT_CreateInventoryWithoutClientOrderRefId_Params Parms{};

	Parms.CreateInventories = CreateInventories;
	Parms.Delegate = Delegate;
	Parms.Source = Source;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RallyHereIntegration.RH_PlayerInventory.BLUEPRINT_CreateInventorySessionForPlatform
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// enum class ERHAPI_Platform         Platform                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URH_PlayerInventory::BLUEPRINT_CreateInventorySessionForPlatform(enum class ERHAPI_Platform Platform, FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_PlayerInventory", "BLUEPRINT_CreateInventorySessionForPlatform");

	Params::URH_PlayerInventory_BLUEPRINT_CreateInventorySessionForPlatform_Params Parms{};

	Parms.Platform = Platform;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RallyHereIntegration.RH_PlayerInventory.BLUEPRINT_CreateInventorySession
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URH_PlayerInventory::BLUEPRINT_CreateInventorySession(FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_PlayerInventory", "BLUEPRINT_CreateInventorySession");

	Params::URH_PlayerInventory_BLUEPRINT_CreateInventorySession_Params Parms{};

	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RallyHereIntegration.RH_PlayerInventory.BLUEPRINT_CreateInventory
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct CoreUObject_Guid            ClientOrderReferenceId                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct RallyHereIntegration_RH_CreateInventory>CreateInventories                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ERHAPI_Source           Source                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URH_PlayerInventory::BLUEPRINT_CreateInventory(struct CoreUObject_Guid& ClientOrderReferenceId, TArray<struct RallyHereIntegration_RH_CreateInventory>& CreateInventories, FDelegateProperty_& Delegate, enum class ERHAPI_Source Source)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_PlayerInventory", "BLUEPRINT_CreateInventory");

	Params::URH_PlayerInventory_BLUEPRINT_CreateInventory_Params Parms{};

	Parms.ClientOrderReferenceId = ClientOrderReferenceId;
	Parms.CreateInventories = CreateInventories;
	Parms.Delegate = Delegate;
	Parms.Source = Source;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RallyHereIntegration.RH_PlayerInventory.BLUEPRINT_ClearOrderWatch
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URH_PlayerInventory::BLUEPRINT_ClearOrderWatch(FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_PlayerInventory", "BLUEPRINT_ClearOrderWatch");

	Params::URH_PlayerInventory_BLUEPRINT_ClearOrderWatch_Params Parms{};

	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RallyHereIntegration.RH_PlayerInventory.BLUEPRINT_AddPendingOrdersFromEntitlementsArray
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct RallyHereAPI_RHAPI_PlatformEntitlement>Entitlements                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URH_PlayerInventory::BLUEPRINT_AddPendingOrdersFromEntitlementsArray(TArray<struct RallyHereAPI_RHAPI_PlatformEntitlement>* Entitlements, FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_PlayerInventory", "BLUEPRINT_AddPendingOrdersFromEntitlementsArray");

	Params::URH_PlayerInventory_BLUEPRINT_AddPendingOrdersFromEntitlementsArray_Params Parms{};

	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Entitlements != nullptr)
		*Entitlements = std::move(Parms.Entitlements);

}


// Function RallyHereIntegration.RH_PlayerInventory.BLUEPRINT_AddPendingOrdersFromEntitlementResult
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct RallyHereAPI_RHAPI_PlatformEntitlementProcessResultEntitlementResult                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URH_PlayerInventory::BLUEPRINT_AddPendingOrdersFromEntitlementResult(struct RallyHereAPI_RHAPI_PlatformEntitlementProcessResult& EntitlementResult, FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_PlayerInventory", "BLUEPRINT_AddPendingOrdersFromEntitlementResult");

	Params::URH_PlayerInventory_BLUEPRINT_AddPendingOrdersFromEntitlementResult_Params Parms{};

	Parms.EntitlementResult = EntitlementResult;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class RallyHereIntegration.RH_PendingOrder
// (None)

class UClass* URH_PendingOrder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RH_PendingOrder");

	return Clss;
}


// RH_PendingOrder RallyHereIntegration.Default__RH_PendingOrder
// (Public, ClassDefaultObject, ArchetypeObject)

class URH_PendingOrder* URH_PendingOrder::GetDefaultObj()
{
	static class URH_PendingOrder* Default = nullptr;

	if (!Default)
		Default = static_cast<URH_PendingOrder*>(URH_PendingOrder::StaticClass()->DefaultObject);

	return Default;
}


// Class RallyHereIntegration.RH_PendingPromoCodeOrder
// (None)

class UClass* URH_PendingPromoCodeOrder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RH_PendingPromoCodeOrder");

	return Clss;
}


// RH_PendingPromoCodeOrder RallyHereIntegration.Default__RH_PendingPromoCodeOrder
// (Public, ClassDefaultObject, ArchetypeObject)

class URH_PendingPromoCodeOrder* URH_PendingPromoCodeOrder::GetDefaultObj()
{
	static class URH_PendingPromoCodeOrder* Default = nullptr;

	if (!Default)
		Default = static_cast<URH_PendingPromoCodeOrder*>(URH_PendingPromoCodeOrder::StaticClass()->DefaultObject);

	return Default;
}


// Class RallyHereIntegration.RH_PendingInventoryUpdateOrder
// (None)

class UClass* URH_PendingInventoryUpdateOrder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RH_PendingInventoryUpdateOrder");

	return Clss;
}


// RH_PendingInventoryUpdateOrder RallyHereIntegration.Default__RH_PendingInventoryUpdateOrder
// (Public, ClassDefaultObject, ArchetypeObject)

class URH_PendingInventoryUpdateOrder* URH_PendingInventoryUpdateOrder::GetDefaultObj()
{
	static class URH_PendingInventoryUpdateOrder* Default = nullptr;

	if (!Default)
		Default = static_cast<URH_PendingInventoryUpdateOrder*>(URH_PendingInventoryUpdateOrder::StaticClass()->DefaultObject);

	return Default;
}


// Class RallyHereIntegration.RH_PendingPlayerOrder
// (None)

class UClass* URH_PendingPlayerOrder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RH_PendingPlayerOrder");

	return Clss;
}


// RH_PendingPlayerOrder RallyHereIntegration.Default__RH_PendingPlayerOrder
// (Public, ClassDefaultObject, ArchetypeObject)

class URH_PendingPlayerOrder* URH_PendingPlayerOrder::GetDefaultObj()
{
	static class URH_PendingPlayerOrder* Default = nullptr;

	if (!Default)
		Default = static_cast<URH_PendingPlayerOrder*>(URH_PendingPlayerOrder::StaticClass()->DefaultObject);

	return Default;
}


// Class RallyHereIntegration.RH_PendingOrderDetailsOrder
// (None)

class UClass* URH_PendingOrderDetailsOrder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RH_PendingOrderDetailsOrder");

	return Clss;
}


// RH_PendingOrderDetailsOrder RallyHereIntegration.Default__RH_PendingOrderDetailsOrder
// (Public, ClassDefaultObject, ArchetypeObject)

class URH_PendingOrderDetailsOrder* URH_PendingOrderDetailsOrder::GetDefaultObj()
{
	static class URH_PendingOrderDetailsOrder* Default = nullptr;

	if (!Default)
		Default = static_cast<URH_PendingOrderDetailsOrder*>(URH_PendingOrderDetailsOrder::StaticClass()->DefaultObject);

	return Default;
}


// Class RallyHereIntegration.RH_PlayerOrderWatch
// (None)

class UClass* URH_PlayerOrderWatch::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RH_PlayerOrderWatch");

	return Clss;
}


// RH_PlayerOrderWatch RallyHereIntegration.Default__RH_PlayerOrderWatch
// (Public, ClassDefaultObject, ArchetypeObject)

class URH_PlayerOrderWatch* URH_PlayerOrderWatch::GetDefaultObj()
{
	static class URH_PlayerOrderWatch* Default = nullptr;

	if (!Default)
		Default = static_cast<URH_PlayerOrderWatch*>(URH_PlayerOrderWatch::StaticClass()->DefaultObject);

	return Default;
}


// Class RallyHereIntegration.RH_PlayerOrderEntry
// (None)

class UClass* URH_PlayerOrderEntry::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RH_PlayerOrderEntry");

	return Clss;
}


// RH_PlayerOrderEntry RallyHereIntegration.Default__RH_PlayerOrderEntry
// (Public, ClassDefaultObject, ArchetypeObject)

class URH_PlayerOrderEntry* URH_PlayerOrderEntry::GetDefaultObj()
{
	static class URH_PlayerOrderEntry* Default = nullptr;

	if (!Default)
		Default = static_cast<URH_PlayerOrderEntry*>(URH_PlayerOrderEntry::StaticClass()->DefaultObject);

	return Default;
}


// Function RallyHereIntegration.RH_PlayerOrderEntry.GetQuantity
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 URH_PlayerOrderEntry::GetQuantity()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_PlayerOrderEntry", "GetQuantity");

	Params::URH_PlayerOrderEntry_GetQuantity_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_PlayerOrderEntry.GetPriceItemId
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 URH_PlayerOrderEntry::GetPriceItemId()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_PlayerOrderEntry", "GetPriceItemId");

	Params::URH_PlayerOrderEntry_GetPriceItemId_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_PlayerOrderEntry.GetPrice
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 URH_PlayerOrderEntry::GetPrice()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_PlayerOrderEntry", "GetPrice");

	Params::URH_PlayerOrderEntry_GetPrice_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_PlayerOrderEntry.GetLootItem
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct RallyHereAPI_RHAPI_Loot     ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

struct RallyHereAPI_RHAPI_Loot URH_PlayerOrderEntry::GetLootItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_PlayerOrderEntry", "GetLootItem");

	Params::URH_PlayerOrderEntry_GetLootItem_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_PlayerOrderEntry.GetLootId
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 URH_PlayerOrderEntry::GetLootId()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_PlayerOrderEntry", "GetLootId");

	Params::URH_PlayerOrderEntry_GetLootId_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_PlayerOrderEntry.GetFillType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ERHAPI_PlayerOrderEntryTypeReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ERHAPI_PlayerOrderEntryType URH_PlayerOrderEntry::GetFillType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_PlayerOrderEntry", "GetFillType");

	Params::URH_PlayerOrderEntry_GetFillType_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_PlayerOrderEntry.GetExternalTransactionId
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString URH_PlayerOrderEntry::GetExternalTransactionId()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_PlayerOrderEntry", "GetExternalTransactionId");

	Params::URH_PlayerOrderEntry_GetExternalTransactionId_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_PlayerOrderEntry.GetCouponItemId
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 URH_PlayerOrderEntry::GetCouponItemId()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_PlayerOrderEntry", "GetCouponItemId");

	Params::URH_PlayerOrderEntry_GetCouponItemId_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class RallyHereIntegration.RH_InventoryBlueprintLibrary
// (None)

class UClass* URH_InventoryBlueprintLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RH_InventoryBlueprintLibrary");

	return Clss;
}


// RH_InventoryBlueprintLibrary RallyHereIntegration.Default__RH_InventoryBlueprintLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class URH_InventoryBlueprintLibrary* URH_InventoryBlueprintLibrary::GetDefaultObj()
{
	static class URH_InventoryBlueprintLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<URH_InventoryBlueprintLibrary*>(URH_InventoryBlueprintLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function RallyHereIntegration.RH_InventoryBlueprintLibrary.RemoveCustomDataFromItemInventory
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct RallyHereIntegration_RH_ItemInventoryItemInventory                                                    (Parm, OutParm, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URH_InventoryBlueprintLibrary::RemoveCustomDataFromItemInventory(struct RallyHereIntegration_RH_ItemInventory* ItemInventory, const class FString& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_InventoryBlueprintLibrary", "RemoveCustomDataFromItemInventory");

	Params::URH_InventoryBlueprintLibrary_RemoveCustomDataFromItemInventory_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ItemInventory != nullptr)
		*ItemInventory = std::move(Parms.ItemInventory);

}


// Function RallyHereIntegration.RH_InventoryBlueprintLibrary.InitUpdateInventoryWithItemInventoryValues
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct RallyHereIntegration_RH_UpdateInventoryUpdateInventory                                                  (Parm, NativeAccessSpecifierPublic)
// struct RallyHereIntegration_RH_ItemInventoryItemInventory                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URH_InventoryBlueprintLibrary::InitUpdateInventoryWithItemInventoryValues(const struct RallyHereIntegration_RH_UpdateInventory& UpdateInventory, struct RallyHereIntegration_RH_ItemInventory& ItemInventory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_InventoryBlueprintLibrary", "InitUpdateInventoryWithItemInventoryValues");

	Params::URH_InventoryBlueprintLibrary_InitUpdateInventoryWithItemInventoryValues_Params Parms{};

	Parms.UpdateInventory = UpdateInventory;
	Parms.ItemInventory = ItemInventory;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_InventoryBlueprintLibrary.InitCreateInventoryWithItemInventoryValues
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct RallyHereIntegration_RH_CreateInventoryCreateInventory                                                  (Parm, NativeAccessSpecifierPublic)
// struct RallyHereIntegration_RH_ItemInventoryItemInventory                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URH_InventoryBlueprintLibrary::InitCreateInventoryWithItemInventoryValues(const struct RallyHereIntegration_RH_CreateInventory& CreateInventory, struct RallyHereIntegration_RH_ItemInventory& ItemInventory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_InventoryBlueprintLibrary", "InitCreateInventoryWithItemInventoryValues");

	Params::URH_InventoryBlueprintLibrary_InitCreateInventoryWithItemInventoryValues_Params Parms{};

	Parms.CreateInventory = CreateInventory;
	Parms.ItemInventory = ItemInventory;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_InventoryBlueprintLibrary.GetInventoryExpiration
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct RallyHereIntegration_RH_ItemInventoryItemInventory                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct CoreUObject_DateTime        DateTimeOut                                                      (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URH_InventoryBlueprintLibrary::GetInventoryExpiration(struct RallyHereIntegration_RH_ItemInventory& ItemInventory, struct CoreUObject_DateTime* DateTimeOut)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_InventoryBlueprintLibrary", "GetInventoryExpiration");

	Params::URH_InventoryBlueprintLibrary_GetInventoryExpiration_Params Parms{};

	Parms.ItemInventory = ItemInventory;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (DateTimeOut != nullptr)
		*DateTimeOut = std::move(Parms.DateTimeOut);

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_InventoryBlueprintLibrary.FindCustomDataOnItemInventory
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct RallyHereIntegration_RH_ItemInventoryItemInventory                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString URH_InventoryBlueprintLibrary::FindCustomDataOnItemInventory(struct RallyHereIntegration_RH_ItemInventory& ItemInventory, const class FString& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_InventoryBlueprintLibrary", "FindCustomDataOnItemInventory");

	Params::URH_InventoryBlueprintLibrary_FindCustomDataOnItemInventory_Params Parms{};

	Parms.ItemInventory = ItemInventory;
	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_InventoryBlueprintLibrary.CheckIfInventoryExpires
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct RallyHereIntegration_RH_ItemInventoryItemInventory                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URH_InventoryBlueprintLibrary::CheckIfInventoryExpires(struct RallyHereIntegration_RH_ItemInventory& ItemInventory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_InventoryBlueprintLibrary", "CheckIfInventoryExpires");

	Params::URH_InventoryBlueprintLibrary_CheckIfInventoryExpires_Params Parms{};

	Parms.ItemInventory = ItemInventory;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_InventoryBlueprintLibrary.AddCustomDataToItemInventory
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct RallyHereIntegration_RH_ItemInventoryItemInventory                                                    (Parm, OutParm, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Value                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URH_InventoryBlueprintLibrary::AddCustomDataToItemInventory(struct RallyHereIntegration_RH_ItemInventory* ItemInventory, const class FString& Key, const class FString& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_InventoryBlueprintLibrary", "AddCustomDataToItemInventory");

	Params::URH_InventoryBlueprintLibrary_AddCustomDataToItemInventory_Params Parms{};

	Parms.Key = Key;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ItemInventory != nullptr)
		*ItemInventory = std::move(Parms.ItemInventory);

}


// Class RallyHereIntegration.RH_PlayerNotifications
// (None)

class UClass* URH_PlayerNotifications::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RH_PlayerNotifications");

	return Clss;
}


// RH_PlayerNotifications RallyHereIntegration.Default__RH_PlayerNotifications
// (Public, ClassDefaultObject, ArchetypeObject)

class URH_PlayerNotifications* URH_PlayerNotifications::GetDefaultObj()
{
	static class URH_PlayerNotifications* Default = nullptr;

	if (!Default)
		Default = static_cast<URH_PlayerNotifications*>(URH_PlayerNotifications::StaticClass()->DefaultObject);

	return Default;
}


// Function RallyHereIntegration.RH_PlayerNotifications.StopStreamingLatestNotifications
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bClearCache                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URH_PlayerNotifications::StopStreamingLatestNotifications(bool bClearCache)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_PlayerNotifications", "StopStreamingLatestNotifications");

	Params::URH_PlayerNotifications_StopStreamingLatestNotifications_Params Parms{};

	Parms.bClearCache = bClearCache;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RallyHereIntegration.RH_PlayerNotifications.StartStreamingLatestNotifications
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Cursor                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URH_PlayerNotifications::StartStreamingLatestNotifications(const class FString& Cursor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_PlayerNotifications", "StartStreamingLatestNotifications");

	Params::URH_PlayerNotifications_StartStreamingLatestNotifications_Params Parms{};

	Parms.Cursor = Cursor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RallyHereIntegration.RH_PlayerNotifications.SetStreamingHistorySize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Size                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URH_PlayerNotifications::SetStreamingHistorySize(int32 Size)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_PlayerNotifications", "SetStreamingHistorySize");

	Params::URH_PlayerNotifications_SetStreamingHistorySize_Params Parms{};

	Parms.Size = Size;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RallyHereIntegration.RH_PlayerNotifications.IsStreaming
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URH_PlayerNotifications::IsStreaming()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_PlayerNotifications", "IsStreaming");

	Params::URH_PlayerNotifications_IsStreaming_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_PlayerNotifications.GetStreamingPlayerUuid
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct CoreUObject_Guid            ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct CoreUObject_Guid URH_PlayerNotifications::GetStreamingPlayerUuid()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_PlayerNotifications", "GetStreamingPlayerUuid");

	Params::URH_PlayerNotifications_GetStreamingPlayerUuid_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_PlayerNotifications.GetStreamingHistorySize
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 URH_PlayerNotifications::GetStreamingHistorySize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_PlayerNotifications", "GetStreamingHistorySize");

	Params::URH_PlayerNotifications_GetStreamingHistorySize_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_PlayerNotifications.GetStreamingHistory
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct RallyHereAPI_RHAPI_Notification>ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<struct RallyHereAPI_RHAPI_Notification> URH_PlayerNotifications::GetStreamingHistory()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_PlayerNotifications", "GetStreamingHistory");

	Params::URH_PlayerNotifications_GetStreamingHistory_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_PlayerNotifications.GetStreamingCursor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString URH_PlayerNotifications::GetStreamingCursor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_PlayerNotifications", "GetStreamingCursor");

	Params::URH_PlayerNotifications_GetStreamingCursor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_PlayerNotifications.ClearStreamingHistory
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void URH_PlayerNotifications::ClearStreamingHistory()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_PlayerNotifications", "ClearStreamingHistory");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function RallyHereIntegration.RH_PlayerNotifications.BLUEPRINT_CreateNotification
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct CoreUObject_Guid            PlayerUuid                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Message                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      RhUrl                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TMap<class FString, class FString> CustomData                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URH_PlayerNotifications::BLUEPRINT_CreateNotification(struct CoreUObject_Guid& PlayerUuid, const class FString& Message, const class FString& RhUrl, TMap<class FString, class FString>& CustomData, FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_PlayerNotifications", "BLUEPRINT_CreateNotification");

	Params::URH_PlayerNotifications_BLUEPRINT_CreateNotification_Params Parms{};

	Parms.PlayerUuid = PlayerUuid;
	Parms.Message = Message;
	Parms.RhUrl = RhUrl;
	Parms.CustomData = CustomData;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class RallyHereIntegration.RH_PollingSettings
// (None)

class UClass* URH_PollingSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RH_PollingSettings");

	return Clss;
}


// RH_PollingSettings RallyHereIntegration.Default__RH_PollingSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class URH_PollingSettings* URH_PollingSettings::GetDefaultObj()
{
	static class URH_PollingSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<URH_PollingSettings*>(URH_PollingSettings::StaticClass()->DefaultObject);

	return Default;
}


// Function RallyHereIntegration.RH_PollingSettings.GetPollingInterval
// (Final, Native, Public, HasOutParams, Const)
// Parameters:
// class FName                        TimerName                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float URH_PollingSettings::GetPollingInterval(class FName& TimerName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_PollingSettings", "GetPollingInterval");

	Params::URH_PollingSettings_GetPollingInterval_Params Parms{};

	Parms.TimerName = TimerName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class RallyHereIntegration.RH_RallyHerePropertiesBlueprintLibrary
// (None)

class UClass* URH_RallyHerePropertiesBlueprintLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RH_RallyHerePropertiesBlueprintLibrary");

	return Clss;
}


// RH_RallyHerePropertiesBlueprintLibrary RallyHereIntegration.Default__RH_RallyHerePropertiesBlueprintLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class URH_RallyHerePropertiesBlueprintLibrary* URH_RallyHerePropertiesBlueprintLibrary::GetDefaultObj()
{
	static class URH_RallyHerePropertiesBlueprintLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<URH_RallyHerePropertiesBlueprintLibrary*>(URH_RallyHerePropertiesBlueprintLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function RallyHereIntegration.RH_RallyHerePropertiesBlueprintLibrary.EqualEqual_FRH_LootId
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct RallyHereIntegration_RH_LootIdA                                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct RallyHereIntegration_RH_LootIdB                                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URH_RallyHerePropertiesBlueprintLibrary::EqualEqual_FRH_LootId(struct RallyHereIntegration_RH_LootId& A, struct RallyHereIntegration_RH_LootId& B)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_RallyHerePropertiesBlueprintLibrary", "EqualEqual_FRH_LootId");

	Params::URH_RallyHerePropertiesBlueprintLibrary_EqualEqual_FRH_LootId_Params Parms{};

	Parms.A = A;
	Parms.B = B;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_RallyHerePropertiesBlueprintLibrary.EqualEqual_FRH_LegacyIdToGuid
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct RallyHereIntegration_RH_LegacyIdToGuidA                                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct RallyHereIntegration_RH_LegacyIdToGuidB                                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URH_RallyHerePropertiesBlueprintLibrary::EqualEqual_FRH_LegacyIdToGuid(struct RallyHereIntegration_RH_LegacyIdToGuid& A, struct RallyHereIntegration_RH_LegacyIdToGuid& B)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_RallyHerePropertiesBlueprintLibrary", "EqualEqual_FRH_LegacyIdToGuid");

	Params::URH_RallyHerePropertiesBlueprintLibrary_EqualEqual_FRH_LegacyIdToGuid_Params Parms{};

	Parms.A = A;
	Parms.B = B;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_RallyHerePropertiesBlueprintLibrary.EqualEqual_FRH_ItemId
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct RallyHereIntegration_RH_ItemIdA                                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct RallyHereIntegration_RH_ItemIdB                                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URH_RallyHerePropertiesBlueprintLibrary::EqualEqual_FRH_ItemId(struct RallyHereIntegration_RH_ItemId& A, struct RallyHereIntegration_RH_ItemId& B)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_RallyHerePropertiesBlueprintLibrary", "EqualEqual_FRH_ItemId");

	Params::URH_RallyHerePropertiesBlueprintLibrary_EqualEqual_FRH_ItemId_Params Parms{};

	Parms.A = A;
	Parms.B = B;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class RallyHereIntegration.RH_PurgeSubsystem
// (None)

class UClass* URH_PurgeSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RH_PurgeSubsystem");

	return Clss;
}


// RH_PurgeSubsystem RallyHereIntegration.Default__RH_PurgeSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class URH_PurgeSubsystem* URH_PurgeSubsystem::GetDefaultObj()
{
	static class URH_PurgeSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<URH_PurgeSubsystem*>(URH_PurgeSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Function RallyHereIntegration.RH_PurgeSubsystem.GetMyPurgeStatus
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct RallyHereAPI_RHAPI_PurgeResponseReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct RallyHereAPI_RHAPI_PurgeResponse URH_PurgeSubsystem::GetMyPurgeStatus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_PurgeSubsystem", "GetMyPurgeStatus");

	Params::URH_PurgeSubsystem_GetMyPurgeStatus_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_PurgeSubsystem.BLUEPRINT_QueryMyPurgeStatus
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URH_PurgeSubsystem::BLUEPRINT_QueryMyPurgeStatus(FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_PurgeSubsystem", "BLUEPRINT_QueryMyPurgeStatus");

	Params::URH_PurgeSubsystem_BLUEPRINT_QueryMyPurgeStatus_Params Parms{};

	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_PurgeSubsystem.BLUEPRINT_PurgeMeImmediately
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URH_PurgeSubsystem::BLUEPRINT_PurgeMeImmediately(FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_PurgeSubsystem", "BLUEPRINT_PurgeMeImmediately");

	Params::URH_PurgeSubsystem_BLUEPRINT_PurgeMeImmediately_Params Parms{};

	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_PurgeSubsystem.BLUEPRINT_EnqueueMeForPurgeWithPurgeTime
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct CoreUObject_DateTime        PurgeTime                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URH_PurgeSubsystem::BLUEPRINT_EnqueueMeForPurgeWithPurgeTime(const struct CoreUObject_DateTime& PurgeTime, FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_PurgeSubsystem", "BLUEPRINT_EnqueueMeForPurgeWithPurgeTime");

	Params::URH_PurgeSubsystem_BLUEPRINT_EnqueueMeForPurgeWithPurgeTime_Params Parms{};

	Parms.PurgeTime = PurgeTime;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_PurgeSubsystem.BLUEPRINT_EnqueueMeForPurge
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URH_PurgeSubsystem::BLUEPRINT_EnqueueMeForPurge(FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_PurgeSubsystem", "BLUEPRINT_EnqueueMeForPurge");

	Params::URH_PurgeSubsystem_BLUEPRINT_EnqueueMeForPurge_Params Parms{};

	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_PurgeSubsystem.BLUEPRINT_DequeueMeForPurge
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URH_PurgeSubsystem::BLUEPRINT_DequeueMeForPurge(FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_PurgeSubsystem", "BLUEPRINT_DequeueMeForPurge");

	Params::URH_PurgeSubsystem_BLUEPRINT_DequeueMeForPurge_Params Parms{};

	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class RallyHereIntegration.RH_SessionBrowserCache
// (None)

class UClass* URH_SessionBrowserCache::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RH_SessionBrowserCache");

	return Clss;
}


// RH_SessionBrowserCache RallyHereIntegration.Default__RH_SessionBrowserCache
// (Public, ClassDefaultObject, ArchetypeObject)

class URH_SessionBrowserCache* URH_SessionBrowserCache::GetDefaultObj()
{
	static class URH_SessionBrowserCache* Default = nullptr;

	if (!Default)
		Default = static_cast<URH_SessionBrowserCache*>(URH_SessionBrowserCache::StaticClass()->DefaultObject);

	return Default;
}


// Function RallyHereIntegration.RH_SessionBrowserCache.GetTemplate
// (Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      Type                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct RallyHereAPI_RHAPI_SessionTemplateTemplate                                                         (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URH_SessionBrowserCache::GetTemplate(const class FString& Type, struct RallyHereAPI_RHAPI_SessionTemplate* Template)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_SessionBrowserCache", "GetTemplate");

	Params::URH_SessionBrowserCache_GetTemplate_Params Parms{};

	Parms.Type = Type;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Template != nullptr)
		*Template = std::move(Parms.Template);

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_SessionBrowserCache.GetSessionById
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      SessionId                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class URH_SessionView*             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class URH_SessionView* URH_SessionBrowserCache::GetSessionById(const class FString& SessionId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_SessionBrowserCache", "GetSessionById");

	Params::URH_SessionBrowserCache_GetSessionById_Params Parms{};

	Parms.SessionId = SessionId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_SessionBrowserCache.GetPlayerInfoSubsystem
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class URH_PlayerInfoSubsystem*     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class URH_PlayerInfoSubsystem* URH_SessionBrowserCache::GetPlayerInfoSubsystem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_SessionBrowserCache", "GetPlayerInfoSubsystem");

	Params::URH_SessionBrowserCache_GetPlayerInfoSubsystem_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_SessionBrowserCache.GetPlatformSyncerByRHSessionId
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      SessionId                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class URH_PlatformSessionSyncer*   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class URH_PlatformSessionSyncer* URH_SessionBrowserCache::GetPlatformSyncerByRHSessionId(const class FString& SessionId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_SessionBrowserCache", "GetPlatformSyncerByRHSessionId");

	Params::URH_SessionBrowserCache_GetPlatformSyncerByRHSessionId_Params Parms{};

	Parms.SessionId = SessionId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_SessionBrowserCache.GetPlatformSyncerByPlatformSessionId
// (Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct Engine_UniqueNetIdRepl      PlatformSessionId                                                (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class URH_PlatformSessionSyncer*   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class URH_PlatformSessionSyncer* URH_SessionBrowserCache::GetPlatformSyncerByPlatformSessionId(struct Engine_UniqueNetIdRepl& PlatformSessionId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_SessionBrowserCache", "GetPlatformSyncerByPlatformSessionId");

	Params::URH_SessionBrowserCache_GetPlatformSyncerByPlatformSessionId_Params Parms{};

	Parms.PlatformSessionId = PlatformSessionId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_SessionBrowserCache.BLUEPRINT_Search
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct RallyHereIntegration_RH_SessionBrowserSearchParamsParams                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URH_SessionBrowserCache::BLUEPRINT_Search(struct RallyHereIntegration_RH_SessionBrowserSearchParams& Params, FDelegateProperty_ Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_SessionBrowserCache", "BLUEPRINT_Search");

	Params::URH_SessionBrowserCache_BLUEPRINT_Search_Params Parms{};

	Parms.Params = Params;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class RallyHereIntegration.RH_SessionView
// (None)

class UClass* URH_SessionView::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RH_SessionView");

	return Clss;
}


// RH_SessionView RallyHereIntegration.Default__RH_SessionView
// (Public, ClassDefaultObject, ArchetypeObject)

class URH_SessionView* URH_SessionView::GetDefaultObj()
{
	static class URH_SessionView* Default = nullptr;

	if (!Default)
		Default = static_cast<URH_SessionView*>(URH_SessionView::StaticClass()->DefaultObject);

	return Default;
}


// Function RallyHereIntegration.RH_SessionView.StopPolling
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void URH_SessionView::StopPolling()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_SessionView", "StopPolling");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function RallyHereIntegration.RH_SessionView.StartPolling
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void URH_SessionView::StartPolling()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_SessionView", "StartPolling");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function RallyHereIntegration.RH_SessionView.IsOnline
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URH_SessionView::IsOnline()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_SessionView", "IsOnline");

	Params::URH_SessionView_IsOnline_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_SessionView.IsOffline
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URH_SessionView::IsOffline()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_SessionView", "IsOffline");

	Params::URH_SessionView_IsOffline_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_SessionView.IsJoined
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URH_SessionView::IsJoined()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_SessionView", "IsJoined");

	Params::URH_SessionView_IsJoined_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_SessionView.IsInQueue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URH_SessionView::IsInQueue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_SessionView", "IsInQueue");

	Params::URH_SessionView_IsInQueue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_SessionView.IsCreatedByMatchmaking
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URH_SessionView::IsCreatedByMatchmaking()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_SessionView", "IsCreatedByMatchmaking");

	Params::URH_SessionView_IsCreatedByMatchmaking_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_SessionView.GetTemplate
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct RallyHereAPI_RHAPI_SessionTemplateReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct RallyHereAPI_RHAPI_SessionTemplate URH_SessionView::GetTemplate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_SessionView", "GetTemplate");

	Params::URH_SessionView_GetTemplate_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_SessionView.GetSessionType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString URH_SessionView::GetSessionType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_SessionView", "GetSessionType");

	Params::URH_SessionView_GetSessionType_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_SessionView.GetSessionPlayerCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 URH_SessionView::GetSessionPlayerCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_SessionView", "GetSessionPlayerCount");

	Params::URH_SessionView_GetSessionPlayerCount_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_SessionView.GetSessionPlayer
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct CoreUObject_Guid            PlayerUuid                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct RallyHereAPI_RHAPI_SessionPlayerOutPlayer                                                        (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URH_SessionView::GetSessionPlayer(struct CoreUObject_Guid& PlayerUuid, struct RallyHereAPI_RHAPI_SessionPlayer* OutPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_SessionView", "GetSessionPlayer");

	Params::URH_SessionView_GetSessionPlayer_Params Parms{};

	Parms.PlayerUuid = PlayerUuid;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutPlayer != nullptr)
		*OutPlayer = std::move(Parms.OutPlayer);

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_SessionView.GetSessionOwner
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TScriptInterface<class IRH_SessionOwnerInterface>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TScriptInterface<class IRH_SessionOwnerInterface> URH_SessionView::GetSessionOwner()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_SessionView", "GetSessionOwner");

	Params::URH_SessionView_GetSessionOwner_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_SessionView.GetSessionLeader
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct RallyHereAPI_RHAPI_SessionPlayerOutPlayer                                                        (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URH_SessionView::GetSessionLeader(struct RallyHereAPI_RHAPI_SessionPlayer* OutPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_SessionView", "GetSessionLeader");

	Params::URH_SessionView_GetSessionLeader_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutPlayer != nullptr)
		*OutPlayer = std::move(Parms.OutPlayer);

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_SessionView.GetSessionId
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString URH_SessionView::GetSessionId()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_SessionView", "GetSessionId");

	Params::URH_SessionView_GetSessionId_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_SessionView.GetSessionData
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct RallyHereAPI_RHAPI_Session  ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

struct RallyHereAPI_RHAPI_Session URH_SessionView::GetSessionData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_SessionView", "GetSessionData");

	Params::URH_SessionView_GetSessionData_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_SessionView.GetPollTimeRemaining
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float URH_SessionView::GetPollTimeRemaining()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_SessionView", "GetPollTimeRemaining");

	Params::URH_SessionView_GetPollTimeRemaining_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_SessionView.GetInstanceData
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct RallyHereAPI_RHAPI_InstanceInfoInstanceInfo                                                     (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URH_SessionView::GetInstanceData(struct RallyHereAPI_RHAPI_InstanceInfo* InstanceInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_SessionView", "GetInstanceData");

	Params::URH_SessionView_GetInstanceData_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InstanceInfo != nullptr)
		*InstanceInfo = std::move(Parms.InstanceInfo);

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_SessionView.GetInstanceCustomDataValue
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OutValue                                                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URH_SessionView::GetInstanceCustomDataValue(const class FString& Key, class FString* OutValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_SessionView", "GetInstanceCustomDataValue");

	Params::URH_SessionView_GetInstanceCustomDataValue_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutValue != nullptr)
		*OutValue = std::move(Parms.OutValue);

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_SessionView.GetInstanceCustomData
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TMap<class FString, class FString> ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

TMap<class FString, class FString> URH_SessionView::GetInstanceCustomData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_SessionView", "GetInstanceCustomData");

	Params::URH_SessionView_GetInstanceCustomData_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_SessionView.GetETag
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString URH_SessionView::GetETag()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_SessionView", "GetETag");

	Params::URH_SessionView_GetETag_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_SessionView.GetCustomDataValue
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OutValue                                                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URH_SessionView::GetCustomDataValue(const class FString& Key, class FString* OutValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_SessionView", "GetCustomDataValue");

	Params::URH_SessionView_GetCustomDataValue_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutValue != nullptr)
		*OutValue = std::move(Parms.OutValue);

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_SessionView.GetCustomData
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TMap<class FString, class FString> ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

TMap<class FString, class FString> URH_SessionView::GetCustomData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_SessionView", "GetCustomData");

	Params::URH_SessionView_GetCustomData_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_SessionView.GetBrowserCustomData
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TMap<class FString, class FString> ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

TMap<class FString, class FString> URH_SessionView::GetBrowserCustomData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_SessionView", "GetBrowserCustomData");

	Params::URH_SessionView_GetBrowserCustomData_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_SessionView.ForcePollForUpdate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bClearETag                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URH_SessionView::ForcePollForUpdate(bool bClearETag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_SessionView", "ForcePollForUpdate");

	Params::URH_SessionView_ForcePollForUpdate_Params Parms{};

	Parms.bClearETag = bClearETag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RallyHereIntegration.RH_SessionView.DeferPolling
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void URH_SessionView::DeferPolling()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_SessionView", "DeferPolling");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class RallyHereIntegration.RH_InvitedSession
// (None)

class UClass* URH_InvitedSession::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RH_InvitedSession");

	return Clss;
}


// RH_InvitedSession RallyHereIntegration.Default__RH_InvitedSession
// (Public, ClassDefaultObject, ArchetypeObject)

class URH_InvitedSession* URH_InvitedSession::GetDefaultObj()
{
	static class URH_InvitedSession* Default = nullptr;

	if (!Default)
		Default = static_cast<URH_InvitedSession*>(URH_InvitedSession::StaticClass()->DefaultObject);

	return Default;
}


// Function RallyHereIntegration.RH_InvitedSession.BLUEPRINT_Leave
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URH_InvitedSession::BLUEPRINT_Leave(FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_InvitedSession", "BLUEPRINT_Leave");

	Params::URH_InvitedSession_BLUEPRINT_Leave_Params Parms{};

	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RallyHereIntegration.RH_InvitedSession.BLUEPRINT_Join
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URH_InvitedSession::BLUEPRINT_Join(FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_InvitedSession", "BLUEPRINT_Join");

	Params::URH_InvitedSession_BLUEPRINT_Join_Params Parms{};

	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class RallyHereIntegration.RH_JoinedSession
// (None)

class UClass* URH_JoinedSession::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RH_JoinedSession");

	return Clss;
}


// RH_JoinedSession RallyHereIntegration.Default__RH_JoinedSession
// (Public, ClassDefaultObject, ArchetypeObject)

class URH_JoinedSession* URH_JoinedSession::GetDefaultObj()
{
	static class URH_JoinedSession* Default = nullptr;

	if (!Default)
		Default = static_cast<URH_JoinedSession*>(URH_JoinedSession::StaticClass()->DefaultObject);

	return Default;
}


// Function RallyHereIntegration.RH_JoinedSession.SetWatchingPlayers
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               bWatch                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URH_JoinedSession::SetWatchingPlayers(bool bWatch)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_JoinedSession", "SetWatchingPlayers");

	Params::URH_JoinedSession_SetWatchingPlayers_Params Parms{};

	Parms.bWatch = bWatch;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RallyHereIntegration.RH_JoinedSession.IsWatchingPlayers
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URH_JoinedSession::IsWatchingPlayers()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_JoinedSession", "IsWatchingPlayers");

	Params::URH_JoinedSession_IsWatchingPlayers_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_JoinedSession.IsSyncedWithPlatform
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URH_JoinedSession::IsSyncedWithPlatform()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_JoinedSession", "IsSyncedWithPlatform");

	Params::URH_JoinedSession_IsSyncedWithPlatform_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_JoinedSession.IsBeaconSession
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URH_JoinedSession::IsBeaconSession()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_JoinedSession", "IsBeaconSession");

	Params::URH_JoinedSession_IsBeaconSession_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_JoinedSession.IsActive
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URH_JoinedSession::IsActive()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_JoinedSession", "IsActive");

	Params::URH_JoinedSession_IsActive_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_JoinedSession.GetSessionUpdateInfoDefaults
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct RallyHereAPI_RHAPI_SessionUpdateReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct RallyHereAPI_RHAPI_SessionUpdate URH_JoinedSession::GetSessionUpdateInfoDefaults()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_JoinedSession", "GetSessionUpdateInfoDefaults");

	Params::URH_JoinedSession_GetSessionUpdateInfoDefaults_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_JoinedSession.GetPlatformSyncer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class URH_PlatformSessionSyncer*   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class URH_PlatformSessionSyncer* URH_JoinedSession::GetPlatformSyncer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_JoinedSession", "GetPlatformSyncer");

	Params::URH_JoinedSession_GetPlatformSyncer_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_JoinedSession.GetInstanceUpdateInfoDefaults
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct RallyHereAPI_RHAPI_InstanceInfoUpdateReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct RallyHereAPI_RHAPI_InstanceInfoUpdate URH_JoinedSession::GetInstanceUpdateInfoDefaults()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_JoinedSession", "GetInstanceUpdateInfoDefaults");

	Params::URH_JoinedSession_GetInstanceUpdateInfoDefaults_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_JoinedSession.GetClientVersionForSession
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString URH_JoinedSession::GetClientVersionForSession()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_JoinedSession", "GetClientVersionForSession");

	Params::URH_JoinedSession_GetClientVersionForSession_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_JoinedSession.BLUEPRINT_UpdateSessionInfo
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct RallyHereAPI_RHAPI_SessionUpdateUpdate                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URH_JoinedSession::BLUEPRINT_UpdateSessionInfo(struct RallyHereAPI_RHAPI_SessionUpdate& Update, FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_JoinedSession", "BLUEPRINT_UpdateSessionInfo");

	Params::URH_JoinedSession_BLUEPRINT_UpdateSessionInfo_Params Parms{};

	Parms.Update = Update;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RallyHereIntegration.RH_JoinedSession.BLUEPRINT_UpdatePlayerCustomData
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct CoreUObject_Guid            PlayerUuid                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TMap<class FString, class FString> CustomData                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URH_JoinedSession::BLUEPRINT_UpdatePlayerCustomData(struct CoreUObject_Guid& PlayerUuid, TMap<class FString, class FString>& CustomData, FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_JoinedSession", "BLUEPRINT_UpdatePlayerCustomData");

	Params::URH_JoinedSession_BLUEPRINT_UpdatePlayerCustomData_Params Parms{};

	Parms.PlayerUuid = PlayerUuid;
	Parms.CustomData = CustomData;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RallyHereIntegration.RH_JoinedSession.BLUEPRINT_UpdateInstanceInfo
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct RallyHereAPI_RHAPI_InstanceInfoUpdateUpdate                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URH_JoinedSession::BLUEPRINT_UpdateInstanceInfo(struct RallyHereAPI_RHAPI_InstanceInfoUpdate& Update, FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_JoinedSession", "BLUEPRINT_UpdateInstanceInfo");

	Params::URH_JoinedSession_BLUEPRINT_UpdateInstanceInfo_Params Parms{};

	Parms.Update = Update;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RallyHereIntegration.RH_JoinedSession.BLUEPRINT_UpdateBrowserInfo
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// bool                               bEnable                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TMap<class FString, class FString> CustomData                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URH_JoinedSession::BLUEPRINT_UpdateBrowserInfo(bool bEnable, TMap<class FString, class FString>& CustomData, FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_JoinedSession", "BLUEPRINT_UpdateBrowserInfo");

	Params::URH_JoinedSession_BLUEPRINT_UpdateBrowserInfo_Params Parms{};

	Parms.bEnable = bEnable;
	Parms.CustomData = CustomData;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RallyHereIntegration.RH_JoinedSession.BLUEPRINT_StartMatch
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URH_JoinedSession::BLUEPRINT_StartMatch(FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_JoinedSession", "BLUEPRINT_StartMatch");

	Params::URH_JoinedSession_BLUEPRINT_StartMatch_Params Parms{};

	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RallyHereIntegration.RH_JoinedSession.BLUEPRINT_SetLeader
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct CoreUObject_Guid            PlayerUuid                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URH_JoinedSession::BLUEPRINT_SetLeader(struct CoreUObject_Guid& PlayerUuid, FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_JoinedSession", "BLUEPRINT_SetLeader");

	Params::URH_JoinedSession_BLUEPRINT_SetLeader_Params Parms{};

	Parms.PlayerUuid = PlayerUuid;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RallyHereIntegration.RH_JoinedSession.BLUEPRINT_RequestInstance
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct RallyHereAPI_RHAPI_InstanceRequestInstanceRequest                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URH_JoinedSession::BLUEPRINT_RequestInstance(struct RallyHereAPI_RHAPI_InstanceRequest& InstanceRequest, FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_JoinedSession", "BLUEPRINT_RequestInstance");

	Params::URH_JoinedSession_BLUEPRINT_RequestInstance_Params Parms{};

	Parms.InstanceRequest = InstanceRequest;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RallyHereIntegration.RH_JoinedSession.BLUEPRINT_Leave
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URH_JoinedSession::BLUEPRINT_Leave(FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_JoinedSession", "BLUEPRINT_Leave");

	Params::URH_JoinedSession_BLUEPRINT_Leave_Params Parms{};

	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RallyHereIntegration.RH_JoinedSession.BLUEPRINT_KickPlayer
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct CoreUObject_Guid            PlayerUuid                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URH_JoinedSession::BLUEPRINT_KickPlayer(struct CoreUObject_Guid& PlayerUuid, FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_JoinedSession", "BLUEPRINT_KickPlayer");

	Params::URH_JoinedSession_BLUEPRINT_KickPlayer_Params Parms{};

	Parms.PlayerUuid = PlayerUuid;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RallyHereIntegration.RH_JoinedSession.BLUEPRINT_InvitePlayer
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct CoreUObject_Guid            PlayerUuid                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Team                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TMap<class FString, class FString> CustomData                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URH_JoinedSession::BLUEPRINT_InvitePlayer(struct CoreUObject_Guid& PlayerUuid, int32 Team, TMap<class FString, class FString>& CustomData, FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_JoinedSession", "BLUEPRINT_InvitePlayer");

	Params::URH_JoinedSession_BLUEPRINT_InvitePlayer_Params Parms{};

	Parms.PlayerUuid = PlayerUuid;
	Parms.Team = Team;
	Parms.CustomData = CustomData;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RallyHereIntegration.RH_JoinedSession.BLUEPRINT_EndMatch
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URH_JoinedSession::BLUEPRINT_EndMatch(FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_JoinedSession", "BLUEPRINT_EndMatch");

	Params::URH_JoinedSession_BLUEPRINT_EndMatch_Params Parms{};

	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RallyHereIntegration.RH_JoinedSession.BLUEPRINT_EndInstance
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URH_JoinedSession::BLUEPRINT_EndInstance(FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_JoinedSession", "BLUEPRINT_EndInstance");

	Params::URH_JoinedSession_BLUEPRINT_EndInstance_Params Parms{};

	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RallyHereIntegration.RH_JoinedSession.BLUEPRINT_CreateBeacon
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ULocalPlayer*                Player                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class AOnlineBeaconClient>BeaconClass                                                      (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AOnlineBeaconClient*         ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AOnlineBeaconClient* URH_JoinedSession::BLUEPRINT_CreateBeacon(class ULocalPlayer* Player, TSubclassOf<class AOnlineBeaconClient> BeaconClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_JoinedSession", "BLUEPRINT_CreateBeacon");

	Params::URH_JoinedSession_BLUEPRINT_CreateBeacon_Params Parms{};

	Parms.Player = Player;
	Parms.BeaconClass = BeaconClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_JoinedSession.BLUEPRINT_ChangePlayerTeam
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct CoreUObject_Guid            PlayerUuid                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Team                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URH_JoinedSession::BLUEPRINT_ChangePlayerTeam(struct CoreUObject_Guid& PlayerUuid, int32 Team, FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_JoinedSession", "BLUEPRINT_ChangePlayerTeam");

	Params::URH_JoinedSession_BLUEPRINT_ChangePlayerTeam_Params Parms{};

	Parms.PlayerUuid = PlayerUuid;
	Parms.Team = Team;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class RallyHereIntegration.RH_OfflineSession
// (None)

class UClass* URH_OfflineSession::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RH_OfflineSession");

	return Clss;
}


// RH_OfflineSession RallyHereIntegration.Default__RH_OfflineSession
// (Public, ClassDefaultObject, ArchetypeObject)

class URH_OfflineSession* URH_OfflineSession::GetDefaultObj()
{
	static class URH_OfflineSession* Default = nullptr;

	if (!Default)
		Default = static_cast<URH_OfflineSession*>(URH_OfflineSession::StaticClass()->DefaultObject);

	return Default;
}


// Class RallyHereIntegration.RH_OnlineSession
// (None)

class UClass* URH_OnlineSession::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RH_OnlineSession");

	return Clss;
}


// RH_OnlineSession RallyHereIntegration.Default__RH_OnlineSession
// (Public, ClassDefaultObject, ArchetypeObject)

class URH_OnlineSession* URH_OnlineSession::GetDefaultObj()
{
	static class URH_OnlineSession* Default = nullptr;

	if (!Default)
		Default = static_cast<URH_OnlineSession*>(URH_OnlineSession::StaticClass()->DefaultObject);

	return Default;
}


// Function RallyHereIntegration.RH_OnlineSession.GetJoinDetailDefaults
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TScriptInterface<class IRH_SessionOwnerInterface>SessionOwner                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct RallyHereAPI_RHAPI_SelfSessionPlayerUpdateRequestReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct RallyHereAPI_RHAPI_SelfSessionPlayerUpdateRequest URH_OnlineSession::GetJoinDetailDefaults(TScriptInterface<class IRH_SessionOwnerInterface> SessionOwner)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_OnlineSession", "GetJoinDetailDefaults");

	Params::URH_OnlineSession_GetJoinDetailDefaults_Params Parms{};

	Parms.SessionOwner = SessionOwner;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_OnlineSession.BLUEPRINT_LeaveQueue
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URH_OnlineSession::BLUEPRINT_LeaveQueue(FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_OnlineSession", "BLUEPRINT_LeaveQueue");

	Params::URH_OnlineSession_BLUEPRINT_LeaveQueue_Params Parms{};

	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RallyHereIntegration.RH_OnlineSession.BLUEPRINT_JoinQueueEx
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct RallyHereAPI_RHAPI_QueueJoinRequestRequest                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URH_OnlineSession::BLUEPRINT_JoinQueueEx(struct RallyHereAPI_RHAPI_QueueJoinRequest& Request, FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_OnlineSession", "BLUEPRINT_JoinQueueEx");

	Params::URH_OnlineSession_BLUEPRINT_JoinQueueEx_Params Parms{};

	Parms.Request = Request;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RallyHereIntegration.RH_OnlineSession.BLUEPRINT_JoinQueue
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      QueueId                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              MatchmakingTags                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URH_OnlineSession::BLUEPRINT_JoinQueue(const class FString& QueueId, TArray<class FString>& MatchmakingTags, FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_OnlineSession", "BLUEPRINT_JoinQueue");

	Params::URH_OnlineSession_BLUEPRINT_JoinQueue_Params Parms{};

	Parms.QueueId = QueueId;
	Parms.MatchmakingTags = MatchmakingTags;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RallyHereIntegration.RH_OnlineSession.BLUEPRINT_JoinByIdEx
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      SessionId                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct RallyHereAPI_RHAPI_SelfSessionPlayerUpdateRequestJoinDetails                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TScriptInterface<class IRH_SessionOwnerInterface>SessionOwner                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URH_OnlineSession::BLUEPRINT_JoinByIdEx(const class FString& SessionId, struct RallyHereAPI_RHAPI_SelfSessionPlayerUpdateRequest& JoinDetails, TScriptInterface<class IRH_SessionOwnerInterface> SessionOwner, FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_OnlineSession", "BLUEPRINT_JoinByIdEx");

	Params::URH_OnlineSession_BLUEPRINT_JoinByIdEx_Params Parms{};

	Parms.SessionId = SessionId;
	Parms.JoinDetails = JoinDetails;
	Parms.SessionOwner = SessionOwner;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RallyHereIntegration.RH_OnlineSession.BLUEPRINT_JoinById
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      SessionId                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TScriptInterface<class IRH_SessionOwnerInterface>SessionOwner                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URH_OnlineSession::BLUEPRINT_JoinById(const class FString& SessionId, TScriptInterface<class IRH_SessionOwnerInterface> SessionOwner, FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_OnlineSession", "BLUEPRINT_JoinById");

	Params::URH_OnlineSession_BLUEPRINT_JoinById_Params Parms{};

	Parms.SessionId = SessionId;
	Parms.SessionOwner = SessionOwner;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RallyHereIntegration.RH_OnlineSession.BLUEPRINT_CreateOrJoinByType
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct RallyHereAPI_RHAPI_CreateOrJoinRequestCreateParams                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TScriptInterface<class IRH_SessionOwnerInterface>SessionOwner                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URH_OnlineSession::BLUEPRINT_CreateOrJoinByType(struct RallyHereAPI_RHAPI_CreateOrJoinRequest& CreateParams, TScriptInterface<class IRH_SessionOwnerInterface> SessionOwner, FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_OnlineSession", "BLUEPRINT_CreateOrJoinByType");

	Params::URH_OnlineSession_BLUEPRINT_CreateOrJoinByType_Params Parms{};

	Parms.CreateParams = CreateParams;
	Parms.SessionOwner = SessionOwner;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class RallyHereIntegration.RH_SessionOwnerInterface
// (None)

class UClass* IRH_SessionOwnerInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RH_SessionOwnerInterface");

	return Clss;
}


// RH_SessionOwnerInterface RallyHereIntegration.Default__RH_SessionOwnerInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IRH_SessionOwnerInterface* IRH_SessionOwnerInterface::GetDefaultObj()
{
	static class IRH_SessionOwnerInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IRH_SessionOwnerInterface*>(IRH_SessionOwnerInterface::StaticClass()->DefaultObject);

	return Default;
}


// Function RallyHereIntegration.RH_SessionOwnerInterface.GetTemplate
// (Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      Type                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct RallyHereAPI_RHAPI_SessionTemplateTemplate                                                         (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IRH_SessionOwnerInterface::GetTemplate(const class FString& Type, struct RallyHereAPI_RHAPI_SessionTemplate* Template)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_SessionOwnerInterface", "GetTemplate");

	Params::IRH_SessionOwnerInterface_GetTemplate_Params Parms{};

	Parms.Type = Type;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Template != nullptr)
		*Template = std::move(Parms.Template);

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_SessionOwnerInterface.GetSessionById
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      SessionId                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class URH_SessionView*             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class URH_SessionView* IRH_SessionOwnerInterface::GetSessionById(const class FString& SessionId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_SessionOwnerInterface", "GetSessionById");

	Params::IRH_SessionOwnerInterface_GetSessionById_Params Parms{};

	Parms.SessionId = SessionId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_SessionOwnerInterface.GetPlayerInfoSubsystem
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class URH_PlayerInfoSubsystem*     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class URH_PlayerInfoSubsystem* IRH_SessionOwnerInterface::GetPlayerInfoSubsystem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_SessionOwnerInterface", "GetPlayerInfoSubsystem");

	Params::IRH_SessionOwnerInterface_GetPlayerInfoSubsystem_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_SessionOwnerInterface.GetPlatformSyncerByRHSessionId
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      SessionId                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class URH_PlatformSessionSyncer*   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class URH_PlatformSessionSyncer* IRH_SessionOwnerInterface::GetPlatformSyncerByRHSessionId(const class FString& SessionId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_SessionOwnerInterface", "GetPlatformSyncerByRHSessionId");

	Params::IRH_SessionOwnerInterface_GetPlatformSyncerByRHSessionId_Params Parms{};

	Parms.SessionId = SessionId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RallyHereIntegration.RH_SessionOwnerInterface.GetPlatformSyncerByPlatformSessionId
// (Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct Engine_UniqueNetIdRepl      SessionId                                                        (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class URH_PlatformSessionSyncer*   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class URH_PlatformSessionSyncer* IRH_SessionOwnerInterface::GetPlatformSyncerByPlatformSessionId(struct Engine_UniqueNetIdRepl& SessionId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RH_SessionOwnerInterface", "GetPlatformSyncerByPlatformSessionId");

	Params::IRH_SessionOwnerInterface_GetPlatformSyncerByPlatformSessionId_Params Parms{};

	Parms.SessionId = SessionId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class RallyHereIntegration.RH_WebRequests
// (None)

class UClass* URH_WebRequests::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RH_WebRequests");

	return Clss;
}


// RH_WebRequests RallyHereIntegration.Default__RH_WebRequests
// (Public, ClassDefaultObject, ArchetypeObject)

class URH_WebRequests* URH_WebRequests::GetDefaultObj()
{
	static class URH_WebRequests* Default = nullptr;

	if (!Default)
		Default = static_cast<URH_WebRequests*>(URH_WebRequests::StaticClass()->DefaultObject);

	return Default;
}

}


