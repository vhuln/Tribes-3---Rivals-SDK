#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class LevelSequence.DefaultLevelSequenceInstanceData
// (None)

class UClass* UDefaultLevelSequenceInstanceData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DefaultLevelSequenceInstanceData");

	return Clss;
}


// DefaultLevelSequenceInstanceData LevelSequence.Default__DefaultLevelSequenceInstanceData
// (Public, ClassDefaultObject, ArchetypeObject)

class UDefaultLevelSequenceInstanceData* UDefaultLevelSequenceInstanceData::GetDefaultObj()
{
	static class UDefaultLevelSequenceInstanceData* Default = nullptr;

	if (!Default)
		Default = static_cast<UDefaultLevelSequenceInstanceData*>(UDefaultLevelSequenceInstanceData::StaticClass()->DefaultObject);

	return Default;
}


// Class LevelSequence.AnimSequenceLevelSequenceLink
// (None)

class UClass* UAnimSequenceLevelSequenceLink::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimSequenceLevelSequenceLink");

	return Clss;
}


// AnimSequenceLevelSequenceLink LevelSequence.Default__AnimSequenceLevelSequenceLink
// (Public, ClassDefaultObject, ArchetypeObject)

class UAnimSequenceLevelSequenceLink* UAnimSequenceLevelSequenceLink::GetDefaultObj()
{
	static class UAnimSequenceLevelSequenceLink* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimSequenceLevelSequenceLink*>(UAnimSequenceLevelSequenceLink::StaticClass()->DefaultObject);

	return Default;
}


// Class LevelSequence.LevelSequence
// (None)

class UClass* ULevelSequence::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LevelSequence");

	return Clss;
}


// LevelSequence LevelSequence.Default__LevelSequence
// (Public, ClassDefaultObject, ArchetypeObject)

class ULevelSequence* ULevelSequence::GetDefaultObj()
{
	static class ULevelSequence* Default = nullptr;

	if (!Default)
		Default = static_cast<ULevelSequence*>(ULevelSequence::StaticClass()->DefaultObject);

	return Default;
}


// Function LevelSequence.LevelSequence.RemoveMetaDataByClass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class UObject>         InClass                                                          (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULevelSequence::RemoveMetaDataByClass(TSubclassOf<class UObject> InClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequence", "RemoveMetaDataByClass");

	Params::ULevelSequence_RemoveMetaDataByClass_Params Parms{};

	Parms.InClass = InClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LevelSequence.LevelSequence.FindOrAddMetaDataByClass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class UObject>         InClass                                                          (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UObject* ULevelSequence::FindOrAddMetaDataByClass(TSubclassOf<class UObject> InClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequence", "FindOrAddMetaDataByClass");

	Params::ULevelSequence_FindOrAddMetaDataByClass_Params Parms{};

	Parms.InClass = InClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LevelSequence.LevelSequence.FindMetaDataByClass
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TSubclassOf<class UObject>         InClass                                                          (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UObject* ULevelSequence::FindMetaDataByClass(TSubclassOf<class UObject> InClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequence", "FindMetaDataByClass");

	Params::ULevelSequence_FindMetaDataByClass_Params Parms{};

	Parms.InClass = InClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LevelSequence.LevelSequence.CopyMetaData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     InMetaData                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UObject* ULevelSequence::CopyMetaData(class UObject* InMetaData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequence", "CopyMetaData");

	Params::ULevelSequence_CopyMetaData_Params Parms{};

	Parms.InMetaData = InMetaData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class LevelSequence.LevelSequenceBurnInInitSettings
// (None)

class UClass* ULevelSequenceBurnInInitSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LevelSequenceBurnInInitSettings");

	return Clss;
}


// LevelSequenceBurnInInitSettings LevelSequence.Default__LevelSequenceBurnInInitSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class ULevelSequenceBurnInInitSettings* ULevelSequenceBurnInInitSettings::GetDefaultObj()
{
	static class ULevelSequenceBurnInInitSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<ULevelSequenceBurnInInitSettings*>(ULevelSequenceBurnInInitSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class LevelSequence.LevelSequenceBurnInOptions
// (None)

class UClass* ULevelSequenceBurnInOptions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LevelSequenceBurnInOptions");

	return Clss;
}


// LevelSequenceBurnInOptions LevelSequence.Default__LevelSequenceBurnInOptions
// (Public, ClassDefaultObject, ArchetypeObject)

class ULevelSequenceBurnInOptions* ULevelSequenceBurnInOptions::GetDefaultObj()
{
	static class ULevelSequenceBurnInOptions* Default = nullptr;

	if (!Default)
		Default = static_cast<ULevelSequenceBurnInOptions*>(ULevelSequenceBurnInOptions::StaticClass()->DefaultObject);

	return Default;
}


// Function LevelSequence.LevelSequenceBurnInOptions.SetBurnIn
// (Final, RequiredAPI, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct CoreUObject_SoftClassPath   InBurnInClass                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULevelSequenceBurnInOptions::SetBurnIn(const struct CoreUObject_SoftClassPath& InBurnInClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceBurnInOptions", "SetBurnIn");

	Params::ULevelSequenceBurnInOptions_SetBurnIn_Params Parms{};

	Parms.InBurnInClass = InBurnInClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class LevelSequence.LevelSequenceActor
// (Actor)

class UClass* ALevelSequenceActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LevelSequenceActor");

	return Clss;
}


// LevelSequenceActor LevelSequence.Default__LevelSequenceActor
// (Public, ClassDefaultObject, ArchetypeObject)

class ALevelSequenceActor* ALevelSequenceActor::GetDefaultObj()
{
	static class ALevelSequenceActor* Default = nullptr;

	if (!Default)
		Default = static_cast<ALevelSequenceActor*>(ALevelSequenceActor::StaticClass()->DefaultObject);

	return Default;
}


// Function LevelSequence.LevelSequenceActor.ShowBurnin
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:

void ALevelSequenceActor::ShowBurnin()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceActor", "ShowBurnin");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function LevelSequence.LevelSequenceActor.SetSequence
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// class ULevelSequence*              InSequence                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ALevelSequenceActor::SetSequence(class ULevelSequence* InSequence)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceActor", "SetSequence");

	Params::ALevelSequenceActor_SetSequence_Params Parms{};

	Parms.InSequence = InSequence;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LevelSequence.LevelSequenceActor.SetReplicatePlayback
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReplicatePlayback                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ALevelSequenceActor::SetReplicatePlayback(bool ReplicatePlayback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceActor", "SetReplicatePlayback");

	Params::ALevelSequenceActor_SetReplicatePlayback_Params Parms{};

	Parms.ReplicatePlayback = ReplicatePlayback;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LevelSequence.LevelSequenceActor.SetBindingByTag
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        BindingTag                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AActor*>              Actors                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bAllowBindingsFromAsset                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ALevelSequenceActor::SetBindingByTag(class FName BindingTag, TArray<class AActor*>& Actors, bool bAllowBindingsFromAsset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceActor", "SetBindingByTag");

	Params::ALevelSequenceActor_SetBindingByTag_Params Parms{};

	Parms.BindingTag = BindingTag;
	Parms.Actors = Actors;
	Parms.bAllowBindingsFromAsset = bAllowBindingsFromAsset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LevelSequence.LevelSequenceActor.SetBinding
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct MovieScene_MovieSceneObjectBindingIDBinding                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AActor*>              Actors                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bAllowBindingsFromAsset                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ALevelSequenceActor::SetBinding(const struct MovieScene_MovieSceneObjectBindingID& Binding, TArray<class AActor*>& Actors, bool bAllowBindingsFromAsset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceActor", "SetBinding");

	Params::ALevelSequenceActor_SetBinding_Params Parms{};

	Parms.Binding = Binding;
	Parms.Actors = Actors;
	Parms.bAllowBindingsFromAsset = bAllowBindingsFromAsset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LevelSequence.LevelSequenceActor.ResetBindings
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:

void ALevelSequenceActor::ResetBindings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceActor", "ResetBindings");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function LevelSequence.LevelSequenceActor.ResetBinding
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// struct MovieScene_MovieSceneObjectBindingIDBinding                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ALevelSequenceActor::ResetBinding(const struct MovieScene_MovieSceneObjectBindingID& Binding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceActor", "ResetBinding");

	Params::ALevelSequenceActor_ResetBinding_Params Parms{};

	Parms.Binding = Binding;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LevelSequence.LevelSequenceActor.RemoveBindingByTag
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        Tag                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ALevelSequenceActor::RemoveBindingByTag(class FName Tag, class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceActor", "RemoveBindingByTag");

	Params::ALevelSequenceActor_RemoveBindingByTag_Params Parms{};

	Parms.Tag = Tag;
	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LevelSequence.LevelSequenceActor.RemoveBinding
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// struct MovieScene_MovieSceneObjectBindingIDBinding                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ALevelSequenceActor::RemoveBinding(const struct MovieScene_MovieSceneObjectBindingID& Binding, class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceActor", "RemoveBinding");

	Params::ALevelSequenceActor_RemoveBinding_Params Parms{};

	Parms.Binding = Binding;
	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction LevelSequence.LevelSequenceActor.OnLevelSequenceLoaded__DelegateSignature
// (Public, Delegate)
// Parameters:

void ALevelSequenceActor::OnLevelSequenceLoaded__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceActor", "OnLevelSequenceLoaded__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LevelSequence.LevelSequenceActor.HideBurnin
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:

void ALevelSequenceActor::HideBurnin()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceActor", "HideBurnin");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function LevelSequence.LevelSequenceActor.GetSequencePlayer
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ULevelSequencePlayer*        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULevelSequencePlayer* ALevelSequenceActor::GetSequencePlayer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceActor", "GetSequencePlayer");

	Params::ALevelSequenceActor_GetSequencePlayer_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LevelSequence.LevelSequenceActor.GetSequence
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ULevelSequence*              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULevelSequence* ALevelSequenceActor::GetSequence()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceActor", "GetSequence");

	Params::ALevelSequenceActor_GetSequence_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LevelSequence.LevelSequenceActor.FindNamedBindings
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        Tag                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct MovieScene_MovieSceneObjectBindingID>ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<struct MovieScene_MovieSceneObjectBindingID> ALevelSequenceActor::FindNamedBindings(class FName Tag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceActor", "FindNamedBindings");

	Params::ALevelSequenceActor_FindNamedBindings_Params Parms{};

	Parms.Tag = Tag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LevelSequence.LevelSequenceActor.FindNamedBinding
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        Tag                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct MovieScene_MovieSceneObjectBindingIDReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct MovieScene_MovieSceneObjectBindingID ALevelSequenceActor::FindNamedBinding(class FName Tag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceActor", "FindNamedBinding");

	Params::ALevelSequenceActor_FindNamedBinding_Params Parms{};

	Parms.Tag = Tag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LevelSequence.LevelSequenceActor.AddBindingByTag
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        BindingTag                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAllowBindingsFromAsset                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ALevelSequenceActor::AddBindingByTag(class FName BindingTag, class AActor* Actor, bool bAllowBindingsFromAsset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceActor", "AddBindingByTag");

	Params::ALevelSequenceActor_AddBindingByTag_Params Parms{};

	Parms.BindingTag = BindingTag;
	Parms.Actor = Actor;
	Parms.bAllowBindingsFromAsset = bAllowBindingsFromAsset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LevelSequence.LevelSequenceActor.AddBinding
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// struct MovieScene_MovieSceneObjectBindingIDBinding                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAllowBindingsFromAsset                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ALevelSequenceActor::AddBinding(const struct MovieScene_MovieSceneObjectBindingID& Binding, class AActor* Actor, bool bAllowBindingsFromAsset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceActor", "AddBinding");

	Params::ALevelSequenceActor_AddBinding_Params Parms{};

	Parms.Binding = Binding;
	Parms.Actor = Actor;
	Parms.bAllowBindingsFromAsset = bAllowBindingsFromAsset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class LevelSequence.ReplicatedLevelSequenceActor
// (Actor)

class UClass* AReplicatedLevelSequenceActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ReplicatedLevelSequenceActor");

	return Clss;
}


// ReplicatedLevelSequenceActor LevelSequence.Default__ReplicatedLevelSequenceActor
// (Public, ClassDefaultObject, ArchetypeObject)

class AReplicatedLevelSequenceActor* AReplicatedLevelSequenceActor::GetDefaultObj()
{
	static class AReplicatedLevelSequenceActor* Default = nullptr;

	if (!Default)
		Default = static_cast<AReplicatedLevelSequenceActor*>(AReplicatedLevelSequenceActor::StaticClass()->DefaultObject);

	return Default;
}


// Class LevelSequence.LevelSequenceAnimSequenceLink
// (None)

class UClass* ULevelSequenceAnimSequenceLink::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LevelSequenceAnimSequenceLink");

	return Clss;
}


// LevelSequenceAnimSequenceLink LevelSequence.Default__LevelSequenceAnimSequenceLink
// (Public, ClassDefaultObject, ArchetypeObject)

class ULevelSequenceAnimSequenceLink* ULevelSequenceAnimSequenceLink::GetDefaultObj()
{
	static class ULevelSequenceAnimSequenceLink* Default = nullptr;

	if (!Default)
		Default = static_cast<ULevelSequenceAnimSequenceLink*>(ULevelSequenceAnimSequenceLink::StaticClass()->DefaultObject);

	return Default;
}


// Class LevelSequence.LevelSequenceBurnIn
// (None)

class UClass* ULevelSequenceBurnIn::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LevelSequenceBurnIn");

	return Clss;
}


// LevelSequenceBurnIn LevelSequence.Default__LevelSequenceBurnIn
// (Public, ClassDefaultObject, ArchetypeObject)

class ULevelSequenceBurnIn* ULevelSequenceBurnIn::GetDefaultObj()
{
	static class ULevelSequenceBurnIn* Default = nullptr;

	if (!Default)
		Default = static_cast<ULevelSequenceBurnIn*>(ULevelSequenceBurnIn::StaticClass()->DefaultObject);

	return Default;
}


// Function LevelSequence.LevelSequenceBurnIn.SetSettings
// (RequiredAPI, Event, Public, BlueprintEvent)
// Parameters:
// class UObject*                     InSettings                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULevelSequenceBurnIn::SetSettings(class UObject* InSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceBurnIn", "SetSettings");

	Params::ULevelSequenceBurnIn_SetSettings_Params Parms{};

	Parms.InSettings = InSettings;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LevelSequence.LevelSequenceBurnIn.GetSettingsClass
// (RequiredAPI, Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// TSubclassOf<class ULevelSequenceBurnInInitSettings>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TSubclassOf<class ULevelSequenceBurnInInitSettings> ULevelSequenceBurnIn::GetSettingsClass()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceBurnIn", "GetSettingsClass");

	Params::ULevelSequenceBurnIn_GetSettingsClass_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class LevelSequence.LevelSequenceDirector
// (None)

class UClass* ULevelSequenceDirector::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LevelSequenceDirector");

	return Clss;
}


// LevelSequenceDirector LevelSequence.Default__LevelSequenceDirector
// (Public, ClassDefaultObject, ArchetypeObject)

class ULevelSequenceDirector* ULevelSequenceDirector::GetDefaultObj()
{
	static class ULevelSequenceDirector* Default = nullptr;

	if (!Default)
		Default = static_cast<ULevelSequenceDirector*>(ULevelSequenceDirector::StaticClass()->DefaultObject);

	return Default;
}


// Function LevelSequence.LevelSequenceDirector.OnCreated
// (RequiredAPI, Event, Public, BlueprintEvent)
// Parameters:

void ULevelSequenceDirector::OnCreated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceDirector", "OnCreated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LevelSequence.LevelSequenceDirector.GetSequence
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMovieSceneSequence* ULevelSequenceDirector::GetSequence()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceDirector", "GetSequence");

	Params::ULevelSequenceDirector_GetSequence_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LevelSequence.LevelSequenceDirector.GetRootSequenceTime
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct CoreUObject_QualifiedFrameTimeReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct CoreUObject_QualifiedFrameTime ULevelSequenceDirector::GetRootSequenceTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceDirector", "GetRootSequenceTime");

	Params::ULevelSequenceDirector_GetRootSequenceTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LevelSequence.LevelSequenceDirector.GetMasterSequenceTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct CoreUObject_QualifiedFrameTimeReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct CoreUObject_QualifiedFrameTime ULevelSequenceDirector::GetMasterSequenceTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceDirector", "GetMasterSequenceTime");

	Params::ULevelSequenceDirector_GetMasterSequenceTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LevelSequence.LevelSequenceDirector.GetCurrentTime
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct CoreUObject_QualifiedFrameTimeReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct CoreUObject_QualifiedFrameTime ULevelSequenceDirector::GetCurrentTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceDirector", "GetCurrentTime");

	Params::ULevelSequenceDirector_GetCurrentTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LevelSequence.LevelSequenceDirector.GetBoundObjects
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// struct MovieScene_MovieSceneObjectBindingIDObjectBinding                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UObject*>             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UObject*> ULevelSequenceDirector::GetBoundObjects(const struct MovieScene_MovieSceneObjectBindingID& ObjectBinding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceDirector", "GetBoundObjects");

	Params::ULevelSequenceDirector_GetBoundObjects_Params Parms{};

	Parms.ObjectBinding = ObjectBinding;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LevelSequence.LevelSequenceDirector.GetBoundObject
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// struct MovieScene_MovieSceneObjectBindingIDObjectBinding                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UObject* ULevelSequenceDirector::GetBoundObject(const struct MovieScene_MovieSceneObjectBindingID& ObjectBinding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceDirector", "GetBoundObject");

	Params::ULevelSequenceDirector_GetBoundObject_Params Parms{};

	Parms.ObjectBinding = ObjectBinding;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LevelSequence.LevelSequenceDirector.GetBoundActors
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// struct MovieScene_MovieSceneObjectBindingIDObjectBinding                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AActor*>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class AActor*> ULevelSequenceDirector::GetBoundActors(const struct MovieScene_MovieSceneObjectBindingID& ObjectBinding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceDirector", "GetBoundActors");

	Params::ULevelSequenceDirector_GetBoundActors_Params Parms{};

	Parms.ObjectBinding = ObjectBinding;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LevelSequence.LevelSequenceDirector.GetBoundActor
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// struct MovieScene_MovieSceneObjectBindingIDObjectBinding                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AActor* ULevelSequenceDirector::GetBoundActor(const struct MovieScene_MovieSceneObjectBindingID& ObjectBinding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceDirector", "GetBoundActor");

	Params::ULevelSequenceDirector_GetBoundActor_Params Parms{};

	Parms.ObjectBinding = ObjectBinding;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class LevelSequence.LegacyLevelSequenceDirectorBlueprint
// (Blueprint)

class UClass* ULegacyLevelSequenceDirectorBlueprint::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LegacyLevelSequenceDirectorBlueprint");

	return Clss;
}


// LegacyLevelSequenceDirectorBlueprint LevelSequence.Default__LegacyLevelSequenceDirectorBlueprint
// (Public, ClassDefaultObject, ArchetypeObject)

class ULegacyLevelSequenceDirectorBlueprint* ULegacyLevelSequenceDirectorBlueprint::GetDefaultObj()
{
	static class ULegacyLevelSequenceDirectorBlueprint* Default = nullptr;

	if (!Default)
		Default = static_cast<ULegacyLevelSequenceDirectorBlueprint*>(ULegacyLevelSequenceDirectorBlueprint::StaticClass()->DefaultObject);

	return Default;
}


// Class LevelSequence.LevelSequencePlayer
// (None)

class UClass* ULevelSequencePlayer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LevelSequencePlayer");

	return Clss;
}


// LevelSequencePlayer LevelSequence.Default__LevelSequencePlayer
// (Public, ClassDefaultObject, ArchetypeObject)

class ULevelSequencePlayer* ULevelSequencePlayer::GetDefaultObj()
{
	static class ULevelSequencePlayer* Default = nullptr;

	if (!Default)
		Default = static_cast<ULevelSequencePlayer*>(ULevelSequencePlayer::StaticClass()->DefaultObject);

	return Default;
}


// Function LevelSequence.LevelSequencePlayer.GetActiveCameraComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UCameraComponent*            ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCameraComponent* ULevelSequencePlayer::GetActiveCameraComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequencePlayer", "GetActiveCameraComponent");

	Params::ULevelSequencePlayer_GetActiveCameraComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LevelSequence.LevelSequencePlayer.CreateLevelSequencePlayer
// (Final, RequiredAPI, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULevelSequence*              LevelSequence                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct MovieScene_MovieSceneSequencePlaybackSettingsSettings                                                         (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class ALevelSequenceActor*         OutActor                                                         (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULevelSequencePlayer*        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULevelSequencePlayer* ULevelSequencePlayer::CreateLevelSequencePlayer(class UObject* WorldContextObject, class ULevelSequence* LevelSequence, const struct MovieScene_MovieSceneSequencePlaybackSettings& Settings, class ALevelSequenceActor** OutActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequencePlayer", "CreateLevelSequencePlayer");

	Params::ULevelSequencePlayer_CreateLevelSequencePlayer_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.LevelSequence = LevelSequence;
	Parms.Settings = Settings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutActor != nullptr)
		*OutActor = Parms.OutActor;

	return Parms.ReturnValue;

}


// Class LevelSequence.LevelSequenceProjectSettings
// (None)

class UClass* ULevelSequenceProjectSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LevelSequenceProjectSettings");

	return Clss;
}


// LevelSequenceProjectSettings LevelSequence.Default__LevelSequenceProjectSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class ULevelSequenceProjectSettings* ULevelSequenceProjectSettings::GetDefaultObj()
{
	static class ULevelSequenceProjectSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<ULevelSequenceProjectSettings*>(ULevelSequenceProjectSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class LevelSequence.LevelSequenceMediaController
// (Actor)

class UClass* ALevelSequenceMediaController::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LevelSequenceMediaController");

	return Clss;
}


// LevelSequenceMediaController LevelSequence.Default__LevelSequenceMediaController
// (Public, ClassDefaultObject, ArchetypeObject)

class ALevelSequenceMediaController* ALevelSequenceMediaController::GetDefaultObj()
{
	static class ALevelSequenceMediaController* Default = nullptr;

	if (!Default)
		Default = static_cast<ALevelSequenceMediaController*>(ALevelSequenceMediaController::StaticClass()->DefaultObject);

	return Default;
}


// Function LevelSequence.LevelSequenceMediaController.SynchronizeToServer
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// float                              DesyncThresholdSeconds                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ALevelSequenceMediaController::SynchronizeToServer(float DesyncThresholdSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceMediaController", "SynchronizeToServer");

	Params::ALevelSequenceMediaController_SynchronizeToServer_Params Parms{};

	Parms.DesyncThresholdSeconds = DesyncThresholdSeconds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LevelSequence.LevelSequenceMediaController.Play
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:

void ALevelSequenceMediaController::Play()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceMediaController", "Play");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function LevelSequence.LevelSequenceMediaController.OnRep_ServerStartTimeSeconds
// (Final, RequiredAPI, Native, Private)
// Parameters:

void ALevelSequenceMediaController::OnRep_ServerStartTimeSeconds()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceMediaController", "OnRep_ServerStartTimeSeconds");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function LevelSequence.LevelSequenceMediaController.GetSequence
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ALevelSequenceActor*         ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ALevelSequenceActor* ALevelSequenceMediaController::GetSequence()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceMediaController", "GetSequence");

	Params::ALevelSequenceMediaController_GetSequence_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LevelSequence.LevelSequenceMediaController.GetMediaComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMediaComponent*             ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMediaComponent* ALevelSequenceMediaController::GetMediaComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceMediaController", "GetMediaComponent");

	Params::ALevelSequenceMediaController_GetMediaComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


