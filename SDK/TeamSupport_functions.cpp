#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class TeamSupport.WithTeamInterface
// (None)

class UClass* IWithTeamInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WithTeamInterface");

	return Clss;
}


// WithTeamInterface TeamSupport.Default__WithTeamInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IWithTeamInterface* IWithTeamInterface::GetDefaultObj()
{
	static class IWithTeamInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IWithTeamInterface*>(IWithTeamInterface::StaticClass()->DefaultObject);

	return Default;
}


// Function TeamSupport.WithTeamInterface.SetTeamId
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              TeamId                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IWithTeamInterface::SetTeamId(int32 TeamId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WithTeamInterface", "SetTeamId");

	Params::IWithTeamInterface_SetTeamId_Params Parms{};

	Parms.TeamId = TeamId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TeamSupport.WithTeamInterface.RemoveOnTeamChangedDelegate
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IWithTeamInterface::RemoveOnTeamChangedDelegate(FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WithTeamInterface", "RemoveOnTeamChangedDelegate");

	Params::IWithTeamInterface_RemoveOnTeamChangedDelegate_Params Parms{};

	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TeamSupport.WithTeamInterface.RemoveAllOnTeamChangedDelegates
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IWithTeamInterface::RemoveAllOnTeamChangedDelegates()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WithTeamInterface", "RemoveAllOnTeamChangedDelegates");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function TeamSupport.WithTeamInterface.HasATeam
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IWithTeamInterface::HasATeam()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WithTeamInterface", "HasATeam");

	Params::IWithTeamInterface_HasATeam_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TeamSupport.WithTeamInterface.GetTeamRelation
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                     Other                                                            (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ETeamRelation           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ETeamRelation IWithTeamInterface::GetTeamRelation(class UObject* Other)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WithTeamInterface", "GetTeamRelation");

	Params::IWithTeamInterface_GetTeamRelation_Params Parms{};

	Parms.Other = Other;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TeamSupport.WithTeamInterface.GetTeamId
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 IWithTeamInterface::GetTeamId()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WithTeamInterface", "GetTeamId");

	Params::IWithTeamInterface_GetTeamId_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TeamSupport.WithTeamInterface.GetTeamDefinitionToRegisterWith
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName IWithTeamInterface::GetTeamDefinitionToRegisterWith()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WithTeamInterface", "GetTeamDefinitionToRegisterWith");

	Params::IWithTeamInterface_GetTeamDefinitionToRegisterWith_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TeamSupport.WithTeamInterface.AddOnTeamChangedDelegate
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IWithTeamInterface::AddOnTeamChangedDelegate(FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WithTeamInterface", "AddOnTeamChangedDelegate");

	Params::IWithTeamInterface_AddOnTeamChangedDelegate_Params Parms{};

	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class TeamSupport.TeamCreationComponent
// (None)

class UClass* UTeamCreationComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TeamCreationComponent");

	return Clss;
}


// TeamCreationComponent TeamSupport.Default__TeamCreationComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UTeamCreationComponent* UTeamCreationComponent::GetDefaultObj()
{
	static class UTeamCreationComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UTeamCreationComponent*>(UTeamCreationComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function TeamSupport.TeamCreationComponent.ServerCreateTeams
// (Native, Event, Public, BlueprintEvent)
// Parameters:

void UTeamCreationComponent::ServerCreateTeams()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TeamCreationComponent", "ServerCreateTeams");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function TeamSupport.TeamCreationComponent.ServerCreateTeam
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              TeamId                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        Definition                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ATeamState*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ATeamState* UTeamCreationComponent::ServerCreateTeam(int32 TeamId, class FName& Definition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TeamCreationComponent", "ServerCreateTeam");

	Params::UTeamCreationComponent_ServerCreateTeam_Params Parms{};

	Parms.TeamId = TeamId;
	Parms.Definition = Definition;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TeamSupport.TeamCreationComponent.ServerChooseTeamForPlayer
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerState*                Player                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UTeamCreationComponent::ServerChooseTeamForPlayer(class APlayerState* Player)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TeamCreationComponent", "ServerChooseTeamForPlayer");

	Params::UTeamCreationComponent_ServerChooseTeamForPlayer_Params Parms{};

	Parms.Player = Player;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TeamSupport.TeamCreationComponent.ServerAssignPlayerToTeam
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerState*                Player                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTeamCreationComponent::ServerAssignPlayerToTeam(class APlayerState* Player)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TeamCreationComponent", "ServerAssignPlayerToTeam");

	Params::UTeamCreationComponent_ServerAssignPlayerToTeam_Params Parms{};

	Parms.Player = Player;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TeamSupport.TeamCreationComponent.GetNextAvailableTeamId
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UTeamCreationComponent::GetNextAvailableTeamId()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TeamCreationComponent", "GetNextAvailableTeamId");

	Params::UTeamCreationComponent_GetNextAvailableTeamId_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class TeamSupport.SimpleTeamCreationComponent
// (None)

class UClass* USimpleTeamCreationComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SimpleTeamCreationComponent");

	return Clss;
}


// SimpleTeamCreationComponent TeamSupport.Default__SimpleTeamCreationComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class USimpleTeamCreationComponent* USimpleTeamCreationComponent::GetDefaultObj()
{
	static class USimpleTeamCreationComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<USimpleTeamCreationComponent*>(USimpleTeamCreationComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function TeamSupport.SimpleTeamCreationComponent.GetCreationMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EFixedTeamCreationMode  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EFixedTeamCreationMode USimpleTeamCreationComponent::GetCreationMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SimpleTeamCreationComponent", "GetCreationMode");

	Params::USimpleTeamCreationComponent_GetCreationMode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TeamSupport.SimpleTeamCreationComponent.GetCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 USimpleTeamCreationComponent::GetCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SimpleTeamCreationComponent", "GetCount");

	Params::USimpleTeamCreationComponent_GetCount_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TeamSupport.SimpleTeamCreationComponent.CanAssignPlayersToReserveTeams
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USimpleTeamCreationComponent::CanAssignPlayersToReserveTeams()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SimpleTeamCreationComponent", "CanAssignPlayersToReserveTeams");

	Params::USimpleTeamCreationComponent_CanAssignPlayersToReserveTeams_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class TeamSupport.TeamState
// (Actor)

class UClass* ATeamState::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TeamState");

	return Clss;
}


// TeamState TeamSupport.Default__TeamState
// (Public, ClassDefaultObject, ArchetypeObject)

class ATeamState* ATeamState::GetDefaultObj()
{
	static class ATeamState* Default = nullptr;

	if (!Default)
		Default = static_cast<ATeamState*>(ATeamState::StaticClass()->DefaultObject);

	return Default;
}


// Function TeamSupport.TeamState.OnRep_TeamId
// (Final, Native, Private)
// Parameters:

void ATeamState::OnRep_TeamId()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TeamState", "OnRep_TeamId");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function TeamSupport.TeamState.HasMember
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                     Member                                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ATeamState::HasMember(class UObject* Member)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TeamState", "HasMember");

	Params::ATeamState_HasMember_Params Parms{};

	Parms.Member = Member;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TeamSupport.TeamState.GetTeamId
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 ATeamState::GetTeamId()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TeamState", "GetTeamId");

	Params::ATeamState_GetTeamId_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TeamSupport.TeamState.GetTeamDefinition
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName ATeamState::GetTeamDefinition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TeamState", "GetTeamDefinition");

	Params::ATeamState_GetTeamDefinition_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TeamSupport.TeamState.GetMembers
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UObject*>             OutMembers                                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void ATeamState::GetMembers(TArray<class UObject*>* OutMembers)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TeamState", "GetMembers");

	Params::ATeamState_GetMembers_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutMembers != nullptr)
		*OutMembers = std::move(Parms.OutMembers);

}


// Function TeamSupport.TeamState.GetMemberCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 ATeamState::GetMemberCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TeamState", "GetMemberCount");

	Params::ATeamState_GetMemberCount_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class TeamSupport.TeamStatics
// (None)

class UClass* UTeamStatics::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TeamStatics");

	return Clss;
}


// TeamStatics TeamSupport.Default__TeamStatics
// (Public, ClassDefaultObject, ArchetypeObject)

class UTeamStatics* UTeamStatics::GetDefaultObj()
{
	static class UTeamStatics* Default = nullptr;

	if (!Default)
		Default = static_cast<UTeamStatics*>(UTeamStatics::StaticClass()->DefaultObject);

	return Default;
}


// Function TeamSupport.TeamStatics.ObjectHasTeam
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     Object                                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bDebugLog                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTeamStatics::ObjectHasTeam(class UObject* Object, bool bDebugLog)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TeamStatics", "ObjectHasTeam");

	Params::UTeamStatics_ObjectHasTeam_Params Parms{};

	Parms.Object = Object;
	Parms.bDebugLog = bDebugLog;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TeamSupport.TeamStatics.IsOnSameTeam
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     Reference                                                        (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     Other                                                            (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bDebugLog                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTeamStatics::IsOnSameTeam(class UObject* Reference, class UObject* Other, bool bDebugLog)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TeamStatics", "IsOnSameTeam");

	Params::UTeamStatics_IsOnSameTeam_Params Parms{};

	Parms.Reference = Reference;
	Parms.Other = Other;
	Parms.bDebugLog = bDebugLog;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TeamSupport.TeamStatics.IsOnDifferentTeam
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     Reference                                                        (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     Other                                                            (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bDebugLog                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTeamStatics::IsOnDifferentTeam(class UObject* Reference, class UObject* Other, bool bDebugLog)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TeamStatics", "IsOnDifferentTeam");

	Params::UTeamStatics_IsOnDifferentTeam_Params Parms{};

	Parms.Reference = Reference;
	Parms.Other = Other;
	Parms.bDebugLog = bDebugLog;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TeamSupport.TeamStatics.IsFriendlyWith
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     Reference                                                        (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     Other                                                            (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bDebugLog                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTeamStatics::IsFriendlyWith(class UObject* Reference, class UObject* Other, bool bDebugLog)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TeamStatics", "IsFriendlyWith");

	Params::UTeamStatics_IsFriendlyWith_Params Parms{};

	Parms.Reference = Reference;
	Parms.Other = Other;
	Parms.bDebugLog = bDebugLog;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TeamSupport.TeamStatics.IsEnemyWith
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     Reference                                                        (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     Other                                                            (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bDebugLog                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTeamStatics::IsEnemyWith(class UObject* Reference, class UObject* Other, bool bDebugLog)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TeamStatics", "IsEnemyWith");

	Params::UTeamStatics_IsEnemyWith_Params Parms{};

	Parms.Reference = Reference;
	Parms.Other = Other;
	Parms.bDebugLog = bDebugLog;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TeamSupport.TeamStatics.GetTeamStateFromTeamId
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TeamId                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bDebugLog                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ATeamState*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ATeamState* UTeamStatics::GetTeamStateFromTeamId(class UObject* WorldContextObject, int32 TeamId, bool bDebugLog)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TeamStatics", "GetTeamStateFromTeamId");

	Params::UTeamStatics_GetTeamStateFromTeamId_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.TeamId = TeamId;
	Parms.bDebugLog = bDebugLog;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TeamSupport.TeamStatics.GetTeamStateFromTeamDefinition
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        TeamDefinition                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bDebugLog                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ATeamState*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ATeamState* UTeamStatics::GetTeamStateFromTeamDefinition(class UObject* WorldContextObject, class FName& TeamDefinition, bool bDebugLog)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TeamStatics", "GetTeamStateFromTeamDefinition");

	Params::UTeamStatics_GetTeamStateFromTeamDefinition_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.TeamDefinition = TeamDefinition;
	Parms.bDebugLog = bDebugLog;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TeamSupport.TeamStatics.GetTeamStateFromObject
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     Object                                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bDebugLog                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ATeamState*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ATeamState* UTeamStatics::GetTeamStateFromObject(class UObject* Object, bool bDebugLog)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TeamStatics", "GetTeamStateFromObject");

	Params::UTeamStatics_GetTeamStateFromObject_Params Parms{};

	Parms.Object = Object;
	Parms.bDebugLog = bDebugLog;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TeamSupport.TeamStatics.GetTeamRelation
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     Reference                                                        (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     Other                                                            (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bDebugLog                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ETeamRelation           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ETeamRelation UTeamStatics::GetTeamRelation(class UObject* Reference, class UObject* Other, bool bDebugLog)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TeamStatics", "GetTeamRelation");

	Params::UTeamStatics_GetTeamRelation_Params Parms{};

	Parms.Reference = Reference;
	Parms.Other = Other;
	Parms.bDebugLog = bDebugLog;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TeamSupport.TeamStatics.GetTeamFromObject
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     Object                                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bHasATeam                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TeamId                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bDebugLog                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTeamStatics::GetTeamFromObject(class UObject* Object, bool* bHasATeam, int32* TeamId, bool bDebugLog)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TeamStatics", "GetTeamFromObject");

	Params::UTeamStatics_GetTeamFromObject_Params Parms{};

	Parms.Object = Object;
	Parms.bDebugLog = bDebugLog;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bHasATeam != nullptr)
		*bHasATeam = Parms.bHasATeam;

	if (TeamId != nullptr)
		*TeamId = Parms.TeamId;

}


// Function TeamSupport.TeamStatics.GetAllTeamStates
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class ATeamState*>          OutTeams                                                         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UTeamStatics::GetAllTeamStates(class UObject* WorldContextObject, TArray<class ATeamState*>* OutTeams)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TeamStatics", "GetAllTeamStates");

	Params::UTeamStatics_GetAllTeamStates_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutTeams != nullptr)
		*OutTeams = std::move(Parms.OutTeams);

}


// Class TeamSupport.TeamSubsystem
// (None)

class UClass* UTeamSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TeamSubsystem");

	return Clss;
}


// TeamSubsystem TeamSupport.Default__TeamSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UTeamSubsystem* UTeamSubsystem::GetDefaultObj()
{
	static class UTeamSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UTeamSubsystem*>(UTeamSubsystem::StaticClass()->DefaultObject);

	return Default;
}

}


