#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class GameplayTags.BlueprintGameplayTagLibrary
// (None)

class UClass* UBlueprintGameplayTagLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BlueprintGameplayTagLibrary");

	return Clss;
}


// BlueprintGameplayTagLibrary GameplayTags.Default__BlueprintGameplayTagLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UBlueprintGameplayTagLibrary* UBlueprintGameplayTagLibrary::GetDefaultObj()
{
	static class UBlueprintGameplayTagLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UBlueprintGameplayTagLibrary*>(UBlueprintGameplayTagLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.RemoveGameplayTag
// (Final, RequiredAPI, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct GameplayTags_GameplayTagContainerTagContainer                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct GameplayTags_GameplayTag    Tag                                                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UBlueprintGameplayTagLibrary::RemoveGameplayTag(struct GameplayTags_GameplayTagContainer& TagContainer, const struct GameplayTags_GameplayTag& Tag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlueprintGameplayTagLibrary", "RemoveGameplayTag");

	Params::UBlueprintGameplayTagLibrary_RemoveGameplayTag_Params Parms{};

	Parms.TagContainer = TagContainer;
	Parms.Tag = Tag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagTag
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct GameplayTags_GameplayTag    A                                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      B                                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UBlueprintGameplayTagLibrary::NotEqual_TagTag(const struct GameplayTags_GameplayTag& A, const class FString& B)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlueprintGameplayTagLibrary", "NotEqual_TagTag");

	Params::UBlueprintGameplayTagLibrary_NotEqual_TagTag_Params Parms{};

	Parms.A = A;
	Parms.B = B;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagContainerTagContainer
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct GameplayTags_GameplayTagContainerA                                                                (Parm, NativeAccessSpecifierPublic)
// class FString                      B                                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UBlueprintGameplayTagLibrary::NotEqual_TagContainerTagContainer(const struct GameplayTags_GameplayTagContainer& A, const class FString& B)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlueprintGameplayTagLibrary", "NotEqual_TagContainerTagContainer");

	Params::UBlueprintGameplayTagLibrary_NotEqual_TagContainerTagContainer_Params Parms{};

	Parms.A = A;
	Parms.B = B;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_GameplayTagContainer
// (Final, RequiredAPI, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct GameplayTags_GameplayTagContainerA                                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct GameplayTags_GameplayTagContainerB                                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UBlueprintGameplayTagLibrary::NotEqual_GameplayTagContainer(struct GameplayTags_GameplayTagContainer& A, struct GameplayTags_GameplayTagContainer& B)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlueprintGameplayTagLibrary", "NotEqual_GameplayTagContainer");

	Params::UBlueprintGameplayTagLibrary_NotEqual_GameplayTagContainer_Params Parms{};

	Parms.A = A;
	Parms.B = B;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_GameplayTag
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct GameplayTags_GameplayTag    A                                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GameplayTags_GameplayTag    B                                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UBlueprintGameplayTagLibrary::NotEqual_GameplayTag(const struct GameplayTags_GameplayTag& A, const struct GameplayTags_GameplayTag& B)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlueprintGameplayTagLibrary", "NotEqual_GameplayTag");

	Params::UBlueprintGameplayTagLibrary_NotEqual_GameplayTag_Params Parms{};

	Parms.A = A;
	Parms.B = B;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayTags.BlueprintGameplayTagLibrary.MatchesTag
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct GameplayTags_GameplayTag    TagOne                                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GameplayTags_GameplayTag    TagTwo                                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bExactMatch                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UBlueprintGameplayTagLibrary::MatchesTag(const struct GameplayTags_GameplayTag& TagOne, const struct GameplayTags_GameplayTag& TagTwo, bool bExactMatch)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlueprintGameplayTagLibrary", "MatchesTag");

	Params::UBlueprintGameplayTagLibrary_MatchesTag_Params Parms{};

	Parms.TagOne = TagOne;
	Parms.TagTwo = TagTwo;
	Parms.bExactMatch = bExactMatch;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayTags.BlueprintGameplayTagLibrary.MatchesAnyTags
// (Final, RequiredAPI, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct GameplayTags_GameplayTag    TagOne                                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GameplayTags_GameplayTagContainerOtherContainer                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bExactMatch                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UBlueprintGameplayTagLibrary::MatchesAnyTags(const struct GameplayTags_GameplayTag& TagOne, struct GameplayTags_GameplayTagContainer& OtherContainer, bool bExactMatch)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlueprintGameplayTagLibrary", "MatchesAnyTags");

	Params::UBlueprintGameplayTagLibrary_MatchesAnyTags_Params Parms{};

	Parms.TagOne = TagOne;
	Parms.OtherContainer = OtherContainer;
	Parms.bExactMatch = bExactMatch;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTagContainer
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct GameplayTags_GameplayTagContainerValue                                                            (Parm, NativeAccessSpecifierPublic)
// struct GameplayTags_GameplayTagContainerReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct GameplayTags_GameplayTagContainer UBlueprintGameplayTagLibrary::MakeLiteralGameplayTagContainer(const struct GameplayTags_GameplayTagContainer& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlueprintGameplayTagLibrary", "MakeLiteralGameplayTagContainer");

	Params::UBlueprintGameplayTagLibrary_MakeLiteralGameplayTagContainer_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTag
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct GameplayTags_GameplayTag    Value                                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GameplayTags_GameplayTag    ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct GameplayTags_GameplayTag UBlueprintGameplayTagLibrary::MakeLiteralGameplayTag(const struct GameplayTags_GameplayTag& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlueprintGameplayTagLibrary", "MakeLiteralGameplayTag");

	Params::UBlueprintGameplayTagLibrary_MakeLiteralGameplayTag_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagQuery_MatchNoTags
// (Final, RequiredAPI, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct GameplayTags_GameplayTagContainerInTags                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct GameplayTags_GameplayTagQueryReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct GameplayTags_GameplayTagQuery UBlueprintGameplayTagLibrary::MakeGameplayTagQuery_MatchNoTags(struct GameplayTags_GameplayTagContainer& InTags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlueprintGameplayTagLibrary", "MakeGameplayTagQuery_MatchNoTags");

	Params::UBlueprintGameplayTagLibrary_MakeGameplayTagQuery_MatchNoTags_Params Parms{};

	Parms.InTags = InTags;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagQuery_MatchAnyTags
// (Final, RequiredAPI, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct GameplayTags_GameplayTagContainerInTags                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct GameplayTags_GameplayTagQueryReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct GameplayTags_GameplayTagQuery UBlueprintGameplayTagLibrary::MakeGameplayTagQuery_MatchAnyTags(struct GameplayTags_GameplayTagContainer& InTags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlueprintGameplayTagLibrary", "MakeGameplayTagQuery_MatchAnyTags");

	Params::UBlueprintGameplayTagLibrary_MakeGameplayTagQuery_MatchAnyTags_Params Parms{};

	Parms.InTags = InTags;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagQuery_MatchAllTags
// (Final, RequiredAPI, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct GameplayTags_GameplayTagContainerInTags                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct GameplayTags_GameplayTagQueryReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct GameplayTags_GameplayTagQuery UBlueprintGameplayTagLibrary::MakeGameplayTagQuery_MatchAllTags(struct GameplayTags_GameplayTagContainer& InTags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlueprintGameplayTagLibrary", "MakeGameplayTagQuery_MatchAllTags");

	Params::UBlueprintGameplayTagLibrary_MakeGameplayTagQuery_MatchAllTags_Params Parms{};

	Parms.InTags = InTags;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagQuery
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct GameplayTags_GameplayTagQueryTagQuery                                                         (Parm, NativeAccessSpecifierPublic)
// struct GameplayTags_GameplayTagQueryReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct GameplayTags_GameplayTagQuery UBlueprintGameplayTagLibrary::MakeGameplayTagQuery(const struct GameplayTags_GameplayTagQuery& TagQuery)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlueprintGameplayTagLibrary", "MakeGameplayTagQuery");

	Params::UBlueprintGameplayTagLibrary_MakeGameplayTagQuery_Params Parms{};

	Parms.TagQuery = TagQuery;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagContainerFromTag
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct GameplayTags_GameplayTag    SingleTag                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GameplayTags_GameplayTagContainerReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct GameplayTags_GameplayTagContainer UBlueprintGameplayTagLibrary::MakeGameplayTagContainerFromTag(const struct GameplayTags_GameplayTag& SingleTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlueprintGameplayTagLibrary", "MakeGameplayTagContainerFromTag");

	Params::UBlueprintGameplayTagLibrary_MakeGameplayTagContainerFromTag_Params Parms{};

	Parms.SingleTag = SingleTag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagContainerFromArray
// (Final, RequiredAPI, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct GameplayTags_GameplayTag>GameplayTags                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct GameplayTags_GameplayTagContainerReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct GameplayTags_GameplayTagContainer UBlueprintGameplayTagLibrary::MakeGameplayTagContainerFromArray(TArray<struct GameplayTags_GameplayTag>& GameplayTags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlueprintGameplayTagLibrary", "MakeGameplayTagContainerFromArray");

	Params::UBlueprintGameplayTagLibrary_MakeGameplayTagContainerFromArray_Params Parms{};

	Parms.GameplayTags = GameplayTags;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayTags.BlueprintGameplayTagLibrary.IsTagQueryEmpty
// (Final, RequiredAPI, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct GameplayTags_GameplayTagQueryTagQuery                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UBlueprintGameplayTagLibrary::IsTagQueryEmpty(struct GameplayTags_GameplayTagQuery& TagQuery)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlueprintGameplayTagLibrary", "IsTagQueryEmpty");

	Params::UBlueprintGameplayTagLibrary_IsTagQueryEmpty_Params Parms{};

	Parms.TagQuery = TagQuery;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayTags.BlueprintGameplayTagLibrary.IsGameplayTagValid
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct GameplayTags_GameplayTag    GameplayTag                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UBlueprintGameplayTagLibrary::IsGameplayTagValid(const struct GameplayTags_GameplayTag& GameplayTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlueprintGameplayTagLibrary", "IsGameplayTagValid");

	Params::UBlueprintGameplayTagLibrary_IsGameplayTagValid_Params Parms{};

	Parms.GameplayTag = GameplayTag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayTags.BlueprintGameplayTagLibrary.HasTag
// (Final, RequiredAPI, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct GameplayTags_GameplayTagContainerTagContainer                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct GameplayTags_GameplayTag    Tag                                                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bExactMatch                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UBlueprintGameplayTagLibrary::HasTag(struct GameplayTags_GameplayTagContainer& TagContainer, const struct GameplayTags_GameplayTag& Tag, bool bExactMatch)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlueprintGameplayTagLibrary", "HasTag");

	Params::UBlueprintGameplayTagLibrary_HasTag_Params Parms{};

	Parms.TagContainer = TagContainer;
	Parms.Tag = Tag;
	Parms.bExactMatch = bExactMatch;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayTags.BlueprintGameplayTagLibrary.HasAnyTags
// (Final, RequiredAPI, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct GameplayTags_GameplayTagContainerTagContainer                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct GameplayTags_GameplayTagContainerOtherContainer                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bExactMatch                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UBlueprintGameplayTagLibrary::HasAnyTags(struct GameplayTags_GameplayTagContainer& TagContainer, struct GameplayTags_GameplayTagContainer& OtherContainer, bool bExactMatch)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlueprintGameplayTagLibrary", "HasAnyTags");

	Params::UBlueprintGameplayTagLibrary_HasAnyTags_Params Parms{};

	Parms.TagContainer = TagContainer;
	Parms.OtherContainer = OtherContainer;
	Parms.bExactMatch = bExactMatch;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayTags.BlueprintGameplayTagLibrary.HasAllTags
// (Final, RequiredAPI, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct GameplayTags_GameplayTagContainerTagContainer                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct GameplayTags_GameplayTagContainerOtherContainer                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bExactMatch                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UBlueprintGameplayTagLibrary::HasAllTags(struct GameplayTags_GameplayTagContainer& TagContainer, struct GameplayTags_GameplayTagContainer& OtherContainer, bool bExactMatch)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlueprintGameplayTagLibrary", "HasAllTags");

	Params::UBlueprintGameplayTagLibrary_HasAllTags_Params Parms{};

	Parms.TagContainer = TagContainer;
	Parms.OtherContainer = OtherContainer;
	Parms.bExactMatch = bExactMatch;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayTags.BlueprintGameplayTagLibrary.HasAllMatchingGameplayTags
// (Final, RequiredAPI, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TScriptInterface<class IGameplayTagAssetInterface>TagContainerInterface                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GameplayTags_GameplayTagContainerOtherContainer                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UBlueprintGameplayTagLibrary::HasAllMatchingGameplayTags(TScriptInterface<class IGameplayTagAssetInterface> TagContainerInterface, struct GameplayTags_GameplayTagContainer& OtherContainer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlueprintGameplayTagLibrary", "HasAllMatchingGameplayTags");

	Params::UBlueprintGameplayTagLibrary_HasAllMatchingGameplayTags_Params Parms{};

	Parms.TagContainerInterface = TagContainerInterface;
	Parms.OtherContainer = OtherContainer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayTags.BlueprintGameplayTagLibrary.GetTagName
// (Final, RequiredAPI, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct GameplayTags_GameplayTag    GameplayTag                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName UBlueprintGameplayTagLibrary::GetTagName(struct GameplayTags_GameplayTag& GameplayTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlueprintGameplayTagLibrary", "GetTagName");

	Params::UBlueprintGameplayTagLibrary_GetTagName_Params Parms{};

	Parms.GameplayTag = GameplayTag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayTags.BlueprintGameplayTagLibrary.GetNumGameplayTagsInContainer
// (Final, RequiredAPI, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct GameplayTags_GameplayTagContainerTagContainer                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UBlueprintGameplayTagLibrary::GetNumGameplayTagsInContainer(struct GameplayTags_GameplayTagContainer& TagContainer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlueprintGameplayTagLibrary", "GetNumGameplayTagsInContainer");

	Params::UBlueprintGameplayTagLibrary_GetNumGameplayTagsInContainer_Params Parms{};

	Parms.TagContainer = TagContainer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayTags.BlueprintGameplayTagLibrary.GetDebugStringFromGameplayTagContainer
// (Final, RequiredAPI, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct GameplayTags_GameplayTagContainerTagContainer                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UBlueprintGameplayTagLibrary::GetDebugStringFromGameplayTagContainer(struct GameplayTags_GameplayTagContainer& TagContainer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlueprintGameplayTagLibrary", "GetDebugStringFromGameplayTagContainer");

	Params::UBlueprintGameplayTagLibrary_GetDebugStringFromGameplayTagContainer_Params Parms{};

	Parms.TagContainer = TagContainer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayTags.BlueprintGameplayTagLibrary.GetDebugStringFromGameplayTag
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct GameplayTags_GameplayTag    GameplayTag                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UBlueprintGameplayTagLibrary::GetDebugStringFromGameplayTag(const struct GameplayTags_GameplayTag& GameplayTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlueprintGameplayTagLibrary", "GetDebugStringFromGameplayTag");

	Params::UBlueprintGameplayTagLibrary_GetDebugStringFromGameplayTag_Params Parms{};

	Parms.GameplayTag = GameplayTag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayTags.BlueprintGameplayTagLibrary.GetAllActorsOfClassMatchingTagQuery
// (Final, RequiredAPI, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class AActor>          ActorClass                                                       (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GameplayTags_GameplayTagQueryGameplayTagQuery                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<class AActor*>              OutActors                                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UBlueprintGameplayTagLibrary::GetAllActorsOfClassMatchingTagQuery(class UObject* WorldContextObject, TSubclassOf<class AActor> ActorClass, struct GameplayTags_GameplayTagQuery& GameplayTagQuery, TArray<class AActor*>* OutActors)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlueprintGameplayTagLibrary", "GetAllActorsOfClassMatchingTagQuery");

	Params::UBlueprintGameplayTagLibrary_GetAllActorsOfClassMatchingTagQuery_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ActorClass = ActorClass;
	Parms.GameplayTagQuery = GameplayTagQuery;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutActors != nullptr)
		*OutActors = std::move(Parms.OutActors);

}


// Function GameplayTags.BlueprintGameplayTagLibrary.EqualEqual_GameplayTagContainer
// (Final, RequiredAPI, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct GameplayTags_GameplayTagContainerA                                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct GameplayTags_GameplayTagContainerB                                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UBlueprintGameplayTagLibrary::EqualEqual_GameplayTagContainer(struct GameplayTags_GameplayTagContainer& A, struct GameplayTags_GameplayTagContainer& B)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlueprintGameplayTagLibrary", "EqualEqual_GameplayTagContainer");

	Params::UBlueprintGameplayTagLibrary_EqualEqual_GameplayTagContainer_Params Parms{};

	Parms.A = A;
	Parms.B = B;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayTags.BlueprintGameplayTagLibrary.EqualEqual_GameplayTag
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct GameplayTags_GameplayTag    A                                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GameplayTags_GameplayTag    B                                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UBlueprintGameplayTagLibrary::EqualEqual_GameplayTag(const struct GameplayTags_GameplayTag& A, const struct GameplayTags_GameplayTag& B)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlueprintGameplayTagLibrary", "EqualEqual_GameplayTag");

	Params::UBlueprintGameplayTagLibrary_EqualEqual_GameplayTag_Params Parms{};

	Parms.A = A;
	Parms.B = B;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayTags.BlueprintGameplayTagLibrary.DoesTagAssetInterfaceHaveTag
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TScriptInterface<class IGameplayTagAssetInterface>TagContainerInterface                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct GameplayTags_GameplayTag    Tag                                                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UBlueprintGameplayTagLibrary::DoesTagAssetInterfaceHaveTag(TScriptInterface<class IGameplayTagAssetInterface> TagContainerInterface, const struct GameplayTags_GameplayTag& Tag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlueprintGameplayTagLibrary", "DoesTagAssetInterfaceHaveTag");

	Params::UBlueprintGameplayTagLibrary_DoesTagAssetInterfaceHaveTag_Params Parms{};

	Parms.TagContainerInterface = TagContainerInterface;
	Parms.Tag = Tag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayTags.BlueprintGameplayTagLibrary.DoesContainerMatchTagQuery
// (Final, RequiredAPI, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct GameplayTags_GameplayTagContainerTagContainer                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct GameplayTags_GameplayTagQueryTagQuery                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UBlueprintGameplayTagLibrary::DoesContainerMatchTagQuery(struct GameplayTags_GameplayTagContainer& TagContainer, struct GameplayTags_GameplayTagQuery& TagQuery)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlueprintGameplayTagLibrary", "DoesContainerMatchTagQuery");

	Params::UBlueprintGameplayTagLibrary_DoesContainerMatchTagQuery_Params Parms{};

	Parms.TagContainer = TagContainer;
	Parms.TagQuery = TagQuery;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayTags.BlueprintGameplayTagLibrary.BreakGameplayTagContainer
// (Final, RequiredAPI, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct GameplayTags_GameplayTagContainerGameplayTagContainer                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct GameplayTags_GameplayTag>GameplayTags                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UBlueprintGameplayTagLibrary::BreakGameplayTagContainer(struct GameplayTags_GameplayTagContainer& GameplayTagContainer, TArray<struct GameplayTags_GameplayTag>* GameplayTags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlueprintGameplayTagLibrary", "BreakGameplayTagContainer");

	Params::UBlueprintGameplayTagLibrary_BreakGameplayTagContainer_Params Parms{};

	Parms.GameplayTagContainer = GameplayTagContainer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (GameplayTags != nullptr)
		*GameplayTags = std::move(Parms.GameplayTags);

}


// Function GameplayTags.BlueprintGameplayTagLibrary.AppendGameplayTagContainers
// (Final, RequiredAPI, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct GameplayTags_GameplayTagContainerInOutTagContainer                                                (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct GameplayTags_GameplayTagContainerInTagContainer                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UBlueprintGameplayTagLibrary::AppendGameplayTagContainers(struct GameplayTags_GameplayTagContainer& InOutTagContainer, struct GameplayTags_GameplayTagContainer& InTagContainer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlueprintGameplayTagLibrary", "AppendGameplayTagContainers");

	Params::UBlueprintGameplayTagLibrary_AppendGameplayTagContainers_Params Parms{};

	Parms.InOutTagContainer = InOutTagContainer;
	Parms.InTagContainer = InTagContainer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayTags.BlueprintGameplayTagLibrary.AddGameplayTag
// (Final, RequiredAPI, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct GameplayTags_GameplayTagContainerTagContainer                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct GameplayTags_GameplayTag    Tag                                                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBlueprintGameplayTagLibrary::AddGameplayTag(struct GameplayTags_GameplayTagContainer& TagContainer, const struct GameplayTags_GameplayTag& Tag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlueprintGameplayTagLibrary", "AddGameplayTag");

	Params::UBlueprintGameplayTagLibrary_AddGameplayTag_Params Parms{};

	Parms.TagContainer = TagContainer;
	Parms.Tag = Tag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GameplayTags.GameplayTagAssetInterface
// (None)

class UClass* IGameplayTagAssetInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameplayTagAssetInterface");

	return Clss;
}


// GameplayTagAssetInterface GameplayTags.Default__GameplayTagAssetInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IGameplayTagAssetInterface* IGameplayTagAssetInterface::GetDefaultObj()
{
	static class IGameplayTagAssetInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IGameplayTagAssetInterface*>(IGameplayTagAssetInterface::StaticClass()->DefaultObject);

	return Default;
}


// Function GameplayTags.GameplayTagAssetInterface.HasMatchingGameplayTag
// (RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct GameplayTags_GameplayTag    TagToCheck                                                       (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IGameplayTagAssetInterface::HasMatchingGameplayTag(const struct GameplayTags_GameplayTag& TagToCheck)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayTagAssetInterface", "HasMatchingGameplayTag");

	Params::IGameplayTagAssetInterface_HasMatchingGameplayTag_Params Parms{};

	Parms.TagToCheck = TagToCheck;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayTags.GameplayTagAssetInterface.HasAnyMatchingGameplayTags
// (RequiredAPI, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct GameplayTags_GameplayTagContainerTagContainer                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IGameplayTagAssetInterface::HasAnyMatchingGameplayTags(struct GameplayTags_GameplayTagContainer& TagContainer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayTagAssetInterface", "HasAnyMatchingGameplayTags");

	Params::IGameplayTagAssetInterface_HasAnyMatchingGameplayTags_Params Parms{};

	Parms.TagContainer = TagContainer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayTags.GameplayTagAssetInterface.HasAllMatchingGameplayTags
// (RequiredAPI, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct GameplayTags_GameplayTagContainerTagContainer                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IGameplayTagAssetInterface::HasAllMatchingGameplayTags(struct GameplayTags_GameplayTagContainer& TagContainer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayTagAssetInterface", "HasAllMatchingGameplayTags");

	Params::IGameplayTagAssetInterface_HasAllMatchingGameplayTags_Params Parms{};

	Parms.TagContainer = TagContainer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayTags.GameplayTagAssetInterface.GetOwnedGameplayTags
// (Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct GameplayTags_GameplayTagContainerTagContainer                                                     (Parm, OutParm, NativeAccessSpecifierPublic)

void IGameplayTagAssetInterface::GetOwnedGameplayTags(struct GameplayTags_GameplayTagContainer* TagContainer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayTagAssetInterface", "GetOwnedGameplayTags");

	Params::IGameplayTagAssetInterface_GetOwnedGameplayTags_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (TagContainer != nullptr)
		*TagContainer = std::move(Parms.TagContainer);

}


// Class GameplayTags.EditableGameplayTagQuery
// (None)

class UClass* UEditableGameplayTagQuery::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EditableGameplayTagQuery");

	return Clss;
}


// EditableGameplayTagQuery GameplayTags.Default__EditableGameplayTagQuery
// (Public, ClassDefaultObject, ArchetypeObject)

class UEditableGameplayTagQuery* UEditableGameplayTagQuery::GetDefaultObj()
{
	static class UEditableGameplayTagQuery* Default = nullptr;

	if (!Default)
		Default = static_cast<UEditableGameplayTagQuery*>(UEditableGameplayTagQuery::StaticClass()->DefaultObject);

	return Default;
}


// Class GameplayTags.EditableGameplayTagQueryExpression
// (None)

class UClass* UEditableGameplayTagQueryExpression::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EditableGameplayTagQueryExpression");

	return Clss;
}


// EditableGameplayTagQueryExpression GameplayTags.Default__EditableGameplayTagQueryExpression
// (Public, ClassDefaultObject, ArchetypeObject)

class UEditableGameplayTagQueryExpression* UEditableGameplayTagQueryExpression::GetDefaultObj()
{
	static class UEditableGameplayTagQueryExpression* Default = nullptr;

	if (!Default)
		Default = static_cast<UEditableGameplayTagQueryExpression*>(UEditableGameplayTagQueryExpression::StaticClass()->DefaultObject);

	return Default;
}


// Class GameplayTags.EditableGameplayTagQueryExpression_AnyTagsMatch
// (None)

class UClass* UEditableGameplayTagQueryExpression_AnyTagsMatch::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EditableGameplayTagQueryExpression_AnyTagsMatch");

	return Clss;
}


// EditableGameplayTagQueryExpression_AnyTagsMatch GameplayTags.Default__EditableGameplayTagQueryExpression_AnyTagsMatch
// (Public, ClassDefaultObject, ArchetypeObject)

class UEditableGameplayTagQueryExpression_AnyTagsMatch* UEditableGameplayTagQueryExpression_AnyTagsMatch::GetDefaultObj()
{
	static class UEditableGameplayTagQueryExpression_AnyTagsMatch* Default = nullptr;

	if (!Default)
		Default = static_cast<UEditableGameplayTagQueryExpression_AnyTagsMatch*>(UEditableGameplayTagQueryExpression_AnyTagsMatch::StaticClass()->DefaultObject);

	return Default;
}


// Class GameplayTags.EditableGameplayTagQueryExpression_AllTagsMatch
// (None)

class UClass* UEditableGameplayTagQueryExpression_AllTagsMatch::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EditableGameplayTagQueryExpression_AllTagsMatch");

	return Clss;
}


// EditableGameplayTagQueryExpression_AllTagsMatch GameplayTags.Default__EditableGameplayTagQueryExpression_AllTagsMatch
// (Public, ClassDefaultObject, ArchetypeObject)

class UEditableGameplayTagQueryExpression_AllTagsMatch* UEditableGameplayTagQueryExpression_AllTagsMatch::GetDefaultObj()
{
	static class UEditableGameplayTagQueryExpression_AllTagsMatch* Default = nullptr;

	if (!Default)
		Default = static_cast<UEditableGameplayTagQueryExpression_AllTagsMatch*>(UEditableGameplayTagQueryExpression_AllTagsMatch::StaticClass()->DefaultObject);

	return Default;
}


// Class GameplayTags.EditableGameplayTagQueryExpression_NoTagsMatch
// (None)

class UClass* UEditableGameplayTagQueryExpression_NoTagsMatch::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EditableGameplayTagQueryExpression_NoTagsMatch");

	return Clss;
}


// EditableGameplayTagQueryExpression_NoTagsMatch GameplayTags.Default__EditableGameplayTagQueryExpression_NoTagsMatch
// (Public, ClassDefaultObject, ArchetypeObject)

class UEditableGameplayTagQueryExpression_NoTagsMatch* UEditableGameplayTagQueryExpression_NoTagsMatch::GetDefaultObj()
{
	static class UEditableGameplayTagQueryExpression_NoTagsMatch* Default = nullptr;

	if (!Default)
		Default = static_cast<UEditableGameplayTagQueryExpression_NoTagsMatch*>(UEditableGameplayTagQueryExpression_NoTagsMatch::StaticClass()->DefaultObject);

	return Default;
}


// Class GameplayTags.EditableGameplayTagQueryExpression_AnyExprMatch
// (None)

class UClass* UEditableGameplayTagQueryExpression_AnyExprMatch::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EditableGameplayTagQueryExpression_AnyExprMatch");

	return Clss;
}


// EditableGameplayTagQueryExpression_AnyExprMatch GameplayTags.Default__EditableGameplayTagQueryExpression_AnyExprMatch
// (Public, ClassDefaultObject, ArchetypeObject)

class UEditableGameplayTagQueryExpression_AnyExprMatch* UEditableGameplayTagQueryExpression_AnyExprMatch::GetDefaultObj()
{
	static class UEditableGameplayTagQueryExpression_AnyExprMatch* Default = nullptr;

	if (!Default)
		Default = static_cast<UEditableGameplayTagQueryExpression_AnyExprMatch*>(UEditableGameplayTagQueryExpression_AnyExprMatch::StaticClass()->DefaultObject);

	return Default;
}


// Class GameplayTags.EditableGameplayTagQueryExpression_AllExprMatch
// (None)

class UClass* UEditableGameplayTagQueryExpression_AllExprMatch::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EditableGameplayTagQueryExpression_AllExprMatch");

	return Clss;
}


// EditableGameplayTagQueryExpression_AllExprMatch GameplayTags.Default__EditableGameplayTagQueryExpression_AllExprMatch
// (Public, ClassDefaultObject, ArchetypeObject)

class UEditableGameplayTagQueryExpression_AllExprMatch* UEditableGameplayTagQueryExpression_AllExprMatch::GetDefaultObj()
{
	static class UEditableGameplayTagQueryExpression_AllExprMatch* Default = nullptr;

	if (!Default)
		Default = static_cast<UEditableGameplayTagQueryExpression_AllExprMatch*>(UEditableGameplayTagQueryExpression_AllExprMatch::StaticClass()->DefaultObject);

	return Default;
}


// Class GameplayTags.EditableGameplayTagQueryExpression_NoExprMatch
// (None)

class UClass* UEditableGameplayTagQueryExpression_NoExprMatch::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EditableGameplayTagQueryExpression_NoExprMatch");

	return Clss;
}


// EditableGameplayTagQueryExpression_NoExprMatch GameplayTags.Default__EditableGameplayTagQueryExpression_NoExprMatch
// (Public, ClassDefaultObject, ArchetypeObject)

class UEditableGameplayTagQueryExpression_NoExprMatch* UEditableGameplayTagQueryExpression_NoExprMatch::GetDefaultObj()
{
	static class UEditableGameplayTagQueryExpression_NoExprMatch* Default = nullptr;

	if (!Default)
		Default = static_cast<UEditableGameplayTagQueryExpression_NoExprMatch*>(UEditableGameplayTagQueryExpression_NoExprMatch::StaticClass()->DefaultObject);

	return Default;
}


// Class GameplayTags.GameplayTagsManager
// (None)

class UClass* UGameplayTagsManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameplayTagsManager");

	return Clss;
}


// GameplayTagsManager GameplayTags.Default__GameplayTagsManager
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameplayTagsManager* UGameplayTagsManager::GetDefaultObj()
{
	static class UGameplayTagsManager* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameplayTagsManager*>(UGameplayTagsManager::StaticClass()->DefaultObject);

	return Default;
}


// Class GameplayTags.GameplayTagsList
// (None)

class UClass* UGameplayTagsList::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameplayTagsList");

	return Clss;
}


// GameplayTagsList GameplayTags.Default__GameplayTagsList
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameplayTagsList* UGameplayTagsList::GetDefaultObj()
{
	static class UGameplayTagsList* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameplayTagsList*>(UGameplayTagsList::StaticClass()->DefaultObject);

	return Default;
}


// Class GameplayTags.RestrictedGameplayTagsList
// (None)

class UClass* URestrictedGameplayTagsList::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RestrictedGameplayTagsList");

	return Clss;
}


// RestrictedGameplayTagsList GameplayTags.Default__RestrictedGameplayTagsList
// (Public, ClassDefaultObject, ArchetypeObject)

class URestrictedGameplayTagsList* URestrictedGameplayTagsList::GetDefaultObj()
{
	static class URestrictedGameplayTagsList* Default = nullptr;

	if (!Default)
		Default = static_cast<URestrictedGameplayTagsList*>(URestrictedGameplayTagsList::StaticClass()->DefaultObject);

	return Default;
}


// Class GameplayTags.GameplayTagsSettings
// (None)

class UClass* UGameplayTagsSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameplayTagsSettings");

	return Clss;
}


// GameplayTagsSettings GameplayTags.Default__GameplayTagsSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameplayTagsSettings* UGameplayTagsSettings::GetDefaultObj()
{
	static class UGameplayTagsSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameplayTagsSettings*>(UGameplayTagsSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class GameplayTags.GameplayTagsDeveloperSettings
// (None)

class UClass* UGameplayTagsDeveloperSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameplayTagsDeveloperSettings");

	return Clss;
}


// GameplayTagsDeveloperSettings GameplayTags.Default__GameplayTagsDeveloperSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameplayTagsDeveloperSettings* UGameplayTagsDeveloperSettings::GetDefaultObj()
{
	static class UGameplayTagsDeveloperSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameplayTagsDeveloperSettings*>(UGameplayTagsDeveloperSettings::StaticClass()->DefaultObject);

	return Default;
}

}


