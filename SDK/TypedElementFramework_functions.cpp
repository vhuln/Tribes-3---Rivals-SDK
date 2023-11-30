#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class TypedElementFramework.TypedElementDataStorageCompatibilityInterface
// (None)

class UClass* ITypedElementDataStorageCompatibilityInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TypedElementDataStorageCompatibilityInterface");

	return Clss;
}


// TypedElementDataStorageCompatibilityInterface TypedElementFramework.Default__TypedElementDataStorageCompatibilityInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class ITypedElementDataStorageCompatibilityInterface* ITypedElementDataStorageCompatibilityInterface::GetDefaultObj()
{
	static class ITypedElementDataStorageCompatibilityInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<ITypedElementDataStorageCompatibilityInterface*>(ITypedElementDataStorageCompatibilityInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class TypedElementFramework.TypedElementDataStorageFactory
// (None)

class UClass* UTypedElementDataStorageFactory::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TypedElementDataStorageFactory");

	return Clss;
}


// TypedElementDataStorageFactory TypedElementFramework.Default__TypedElementDataStorageFactory
// (Public, ClassDefaultObject, ArchetypeObject)

class UTypedElementDataStorageFactory* UTypedElementDataStorageFactory::GetDefaultObj()
{
	static class UTypedElementDataStorageFactory* Default = nullptr;

	if (!Default)
		Default = static_cast<UTypedElementDataStorageFactory*>(UTypedElementDataStorageFactory::StaticClass()->DefaultObject);

	return Default;
}


// Class TypedElementFramework.TypedElementDataStorageInterface
// (None)

class UClass* ITypedElementDataStorageInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TypedElementDataStorageInterface");

	return Clss;
}


// TypedElementDataStorageInterface TypedElementFramework.Default__TypedElementDataStorageInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class ITypedElementDataStorageInterface* ITypedElementDataStorageInterface::GetDefaultObj()
{
	static class ITypedElementDataStorageInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<ITypedElementDataStorageInterface*>(ITypedElementDataStorageInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class TypedElementFramework.TypedElementDataStorageUiInterface
// (None)

class UClass* ITypedElementDataStorageUiInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TypedElementDataStorageUiInterface");

	return Clss;
}


// TypedElementDataStorageUiInterface TypedElementFramework.Default__TypedElementDataStorageUiInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class ITypedElementDataStorageUiInterface* ITypedElementDataStorageUiInterface::GetDefaultObj()
{
	static class ITypedElementDataStorageUiInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<ITypedElementDataStorageUiInterface*>(ITypedElementDataStorageUiInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class TypedElementFramework.TypedElementHandleLibrary
// (None)

class UClass* UTypedElementHandleLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TypedElementHandleLibrary");

	return Clss;
}


// TypedElementHandleLibrary TypedElementFramework.Default__TypedElementHandleLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UTypedElementHandleLibrary* UTypedElementHandleLibrary::GetDefaultObj()
{
	static class UTypedElementHandleLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UTypedElementHandleLibrary*>(UTypedElementHandleLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function TypedElementFramework.TypedElementHandleLibrary.Release
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct TypedElementFramework_ScriptTypedElementHandleElementHandle                                                    (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UTypedElementHandleLibrary::Release(struct TypedElementFramework_ScriptTypedElementHandle& ElementHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementHandleLibrary", "Release");

	Params::UTypedElementHandleLibrary_Release_Params Parms{};

	Parms.ElementHandle = ElementHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TypedElementFramework.TypedElementHandleLibrary.NotEqual
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct TypedElementFramework_ScriptTypedElementHandleLHS                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct TypedElementFramework_ScriptTypedElementHandleRHS                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTypedElementHandleLibrary::NotEqual(struct TypedElementFramework_ScriptTypedElementHandle& LHS, struct TypedElementFramework_ScriptTypedElementHandle& RHS)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementHandleLibrary", "NotEqual");

	Params::UTypedElementHandleLibrary_NotEqual_Params Parms{};

	Parms.LHS = LHS;
	Parms.RHS = RHS;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TypedElementFramework.TypedElementHandleLibrary.IsSet
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct TypedElementFramework_ScriptTypedElementHandleElementHandle                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTypedElementHandleLibrary::IsSet(struct TypedElementFramework_ScriptTypedElementHandle& ElementHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementHandleLibrary", "IsSet");

	Params::UTypedElementHandleLibrary_IsSet_Params Parms{};

	Parms.ElementHandle = ElementHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TypedElementFramework.TypedElementHandleLibrary.Equal
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct TypedElementFramework_ScriptTypedElementHandleLHS                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct TypedElementFramework_ScriptTypedElementHandleRHS                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTypedElementHandleLibrary::Equal(struct TypedElementFramework_ScriptTypedElementHandle& LHS, struct TypedElementFramework_ScriptTypedElementHandle& RHS)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementHandleLibrary", "Equal");

	Params::UTypedElementHandleLibrary_Equal_Params Parms{};

	Parms.LHS = LHS;
	Parms.RHS = RHS;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class TypedElementFramework.TypedElementListLibrary
// (None)

class UClass* UTypedElementListLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TypedElementListLibrary");

	return Clss;
}


// TypedElementListLibrary TypedElementFramework.Default__TypedElementListLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UTypedElementListLibrary* UTypedElementListLibrary::GetDefaultObj()
{
	static class UTypedElementListLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UTypedElementListLibrary*>(UTypedElementListLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function TypedElementFramework.TypedElementListLibrary.Shrink
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct TypedElementFramework_ScriptTypedElementListProxyElementList                                                      (Parm, NativeAccessSpecifierPublic)

void UTypedElementListLibrary::Shrink(const struct TypedElementFramework_ScriptTypedElementListProxy& ElementList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementListLibrary", "Shrink");

	Params::UTypedElementListLibrary_Shrink_Params Parms{};

	Parms.ElementList = ElementList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TypedElementFramework.TypedElementListLibrary.Reset
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct TypedElementFramework_ScriptTypedElementListProxyElementList                                                      (Parm, NativeAccessSpecifierPublic)

void UTypedElementListLibrary::Reset(const struct TypedElementFramework_ScriptTypedElementListProxy& ElementList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementListLibrary", "Reset");

	Params::UTypedElementListLibrary_Reset_Params Parms{};

	Parms.ElementList = ElementList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TypedElementFramework.TypedElementListLibrary.Reserve
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct TypedElementFramework_ScriptTypedElementListProxyElementList                                                      (Parm, NativeAccessSpecifierPublic)
// int32                              Size                                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTypedElementListLibrary::Reserve(const struct TypedElementFramework_ScriptTypedElementListProxy& ElementList, int32 Size)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementListLibrary", "Reserve");

	Params::UTypedElementListLibrary_Reserve_Params Parms{};

	Parms.ElementList = ElementList;
	Parms.Size = Size;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TypedElementFramework.TypedElementListLibrary.Remove
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct TypedElementFramework_ScriptTypedElementListProxyElementList                                                      (Parm, NativeAccessSpecifierPublic)
// struct TypedElementFramework_ScriptTypedElementHandleElementHandle                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTypedElementListLibrary::Remove(const struct TypedElementFramework_ScriptTypedElementListProxy& ElementList, struct TypedElementFramework_ScriptTypedElementHandle& ElementHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementListLibrary", "Remove");

	Params::UTypedElementListLibrary_Remove_Params Parms{};

	Parms.ElementList = ElementList;
	Parms.ElementHandle = ElementHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TypedElementFramework.TypedElementListLibrary.Num
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct TypedElementFramework_ScriptTypedElementListProxyElementList                                                      (ConstParm, Parm, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UTypedElementListLibrary::Num(const struct TypedElementFramework_ScriptTypedElementListProxy& ElementList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementListLibrary", "Num");

	Params::UTypedElementListLibrary_Num_Params Parms{};

	Parms.ElementList = ElementList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TypedElementFramework.TypedElementListLibrary.IsValidIndex
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct TypedElementFramework_ScriptTypedElementListProxyElementList                                                      (ConstParm, Parm, NativeAccessSpecifierPublic)
// int32                              Index                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTypedElementListLibrary::IsValidIndex(const struct TypedElementFramework_ScriptTypedElementListProxy& ElementList, int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementListLibrary", "IsValidIndex");

	Params::UTypedElementListLibrary_IsValidIndex_Params Parms{};

	Parms.ElementList = ElementList;
	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TypedElementFramework.TypedElementListLibrary.HasElementsOfType
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct TypedElementFramework_ScriptTypedElementListProxyElementList                                                      (ConstParm, Parm, NativeAccessSpecifierPublic)
// class FName                        ElementTypeName                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTypedElementListLibrary::HasElementsOfType(const struct TypedElementFramework_ScriptTypedElementListProxy& ElementList, class FName ElementTypeName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementListLibrary", "HasElementsOfType");

	Params::UTypedElementListLibrary_HasElementsOfType_Params Parms{};

	Parms.ElementList = ElementList;
	Parms.ElementTypeName = ElementTypeName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TypedElementFramework.TypedElementListLibrary.HasElements
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct TypedElementFramework_ScriptTypedElementListProxyElementList                                                      (ConstParm, Parm, NativeAccessSpecifierPublic)
// TSubclassOf<class IInterface>      BaseInterfaceType                                                (ConstParm, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTypedElementListLibrary::HasElements(const struct TypedElementFramework_ScriptTypedElementListProxy& ElementList, TSubclassOf<class IInterface> BaseInterfaceType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementListLibrary", "HasElements");

	Params::UTypedElementListLibrary_HasElements_Params Parms{};

	Parms.ElementList = ElementList;
	Parms.BaseInterfaceType = BaseInterfaceType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TypedElementFramework.TypedElementListLibrary.GetElementInterface
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct TypedElementFramework_ScriptTypedElementListProxyElementList                                                      (ConstParm, Parm, NativeAccessSpecifierPublic)
// struct TypedElementFramework_ScriptTypedElementHandleElementHandle                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TSubclassOf<class IInterface>      BaseInterfaceType                                                (ConstParm, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UObject* UTypedElementListLibrary::GetElementInterface(const struct TypedElementFramework_ScriptTypedElementListProxy& ElementList, struct TypedElementFramework_ScriptTypedElementHandle& ElementHandle, TSubclassOf<class IInterface> BaseInterfaceType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementListLibrary", "GetElementInterface");

	Params::UTypedElementListLibrary_GetElementInterface_Params Parms{};

	Parms.ElementList = ElementList;
	Parms.ElementHandle = ElementHandle;
	Parms.BaseInterfaceType = BaseInterfaceType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TypedElementFramework.TypedElementListLibrary.GetElementHandles
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct TypedElementFramework_ScriptTypedElementListProxyElementList                                                      (ConstParm, Parm, NativeAccessSpecifierPublic)
// TSubclassOf<class IInterface>      BaseInterfaceType                                                (ConstParm, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct TypedElementFramework_ScriptTypedElementHandle>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct TypedElementFramework_ScriptTypedElementHandle> UTypedElementListLibrary::GetElementHandles(const struct TypedElementFramework_ScriptTypedElementListProxy& ElementList, TSubclassOf<class IInterface> BaseInterfaceType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementListLibrary", "GetElementHandles");

	Params::UTypedElementListLibrary_GetElementHandles_Params Parms{};

	Parms.ElementList = ElementList;
	Parms.BaseInterfaceType = BaseInterfaceType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TypedElementFramework.TypedElementListLibrary.GetElementHandleAt
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct TypedElementFramework_ScriptTypedElementListProxyElementList                                                      (ConstParm, Parm, NativeAccessSpecifierPublic)
// int32                              Index                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct TypedElementFramework_ScriptTypedElementHandleReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct TypedElementFramework_ScriptTypedElementHandle UTypedElementListLibrary::GetElementHandleAt(const struct TypedElementFramework_ScriptTypedElementListProxy& ElementList, int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementListLibrary", "GetElementHandleAt");

	Params::UTypedElementListLibrary_GetElementHandleAt_Params Parms{};

	Parms.ElementList = ElementList;
	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TypedElementFramework.TypedElementListLibrary.Empty
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct TypedElementFramework_ScriptTypedElementListProxyElementList                                                      (Parm, NativeAccessSpecifierPublic)
// int32                              Slack                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTypedElementListLibrary::Empty(const struct TypedElementFramework_ScriptTypedElementListProxy& ElementList, int32 Slack)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementListLibrary", "Empty");

	Params::UTypedElementListLibrary_Empty_Params Parms{};

	Parms.ElementList = ElementList;
	Parms.Slack = Slack;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TypedElementFramework.TypedElementListLibrary.CreateScriptElementList
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UTypedElementRegistry*       Registry                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct TypedElementFramework_ScriptTypedElementListProxyReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct TypedElementFramework_ScriptTypedElementListProxy UTypedElementListLibrary::CreateScriptElementList(class UTypedElementRegistry* Registry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementListLibrary", "CreateScriptElementList");

	Params::UTypedElementListLibrary_CreateScriptElementList_Params Parms{};

	Parms.Registry = Registry;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TypedElementFramework.TypedElementListLibrary.CountElementsOfType
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct TypedElementFramework_ScriptTypedElementListProxyElementList                                                      (ConstParm, Parm, NativeAccessSpecifierPublic)
// class FName                        ElementTypeName                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UTypedElementListLibrary::CountElementsOfType(const struct TypedElementFramework_ScriptTypedElementListProxy& ElementList, class FName ElementTypeName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementListLibrary", "CountElementsOfType");

	Params::UTypedElementListLibrary_CountElementsOfType_Params Parms{};

	Parms.ElementList = ElementList;
	Parms.ElementTypeName = ElementTypeName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TypedElementFramework.TypedElementListLibrary.CountElements
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct TypedElementFramework_ScriptTypedElementListProxyElementList                                                      (ConstParm, Parm, NativeAccessSpecifierPublic)
// TSubclassOf<class IInterface>      BaseInterfaceType                                                (ConstParm, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UTypedElementListLibrary::CountElements(const struct TypedElementFramework_ScriptTypedElementListProxy& ElementList, TSubclassOf<class IInterface> BaseInterfaceType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementListLibrary", "CountElements");

	Params::UTypedElementListLibrary_CountElements_Params Parms{};

	Parms.ElementList = ElementList;
	Parms.BaseInterfaceType = BaseInterfaceType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TypedElementFramework.TypedElementListLibrary.Contains
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct TypedElementFramework_ScriptTypedElementListProxyElementList                                                      (ConstParm, Parm, NativeAccessSpecifierPublic)
// struct TypedElementFramework_ScriptTypedElementHandleElementHandle                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTypedElementListLibrary::Contains(const struct TypedElementFramework_ScriptTypedElementListProxy& ElementList, struct TypedElementFramework_ScriptTypedElementHandle& ElementHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementListLibrary", "Contains");

	Params::UTypedElementListLibrary_Contains_Params Parms{};

	Parms.ElementList = ElementList;
	Parms.ElementHandle = ElementHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TypedElementFramework.TypedElementListLibrary.Clone
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct TypedElementFramework_ScriptTypedElementListProxyElementList                                                      (ConstParm, Parm, NativeAccessSpecifierPublic)
// struct TypedElementFramework_ScriptTypedElementListProxyReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct TypedElementFramework_ScriptTypedElementListProxy UTypedElementListLibrary::Clone(const struct TypedElementFramework_ScriptTypedElementListProxy& ElementList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementListLibrary", "Clone");

	Params::UTypedElementListLibrary_Clone_Params Parms{};

	Parms.ElementList = ElementList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TypedElementFramework.TypedElementListLibrary.AppendList
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct TypedElementFramework_ScriptTypedElementListProxyElementList                                                      (Parm, NativeAccessSpecifierPublic)
// struct TypedElementFramework_ScriptTypedElementListProxyOtherElementList                                                 (ConstParm, Parm, NativeAccessSpecifierPublic)

void UTypedElementListLibrary::AppendList(const struct TypedElementFramework_ScriptTypedElementListProxy& ElementList, const struct TypedElementFramework_ScriptTypedElementListProxy& OtherElementList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementListLibrary", "AppendList");

	Params::UTypedElementListLibrary_AppendList_Params Parms{};

	Parms.ElementList = ElementList;
	Parms.OtherElementList = OtherElementList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TypedElementFramework.TypedElementListLibrary.Append
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct TypedElementFramework_ScriptTypedElementListProxyElementList                                                      (Parm, NativeAccessSpecifierPublic)
// TArray<struct TypedElementFramework_ScriptTypedElementHandle>ElementHandles                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UTypedElementListLibrary::Append(const struct TypedElementFramework_ScriptTypedElementListProxy& ElementList, TArray<struct TypedElementFramework_ScriptTypedElementHandle>& ElementHandles)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementListLibrary", "Append");

	Params::UTypedElementListLibrary_Append_Params Parms{};

	Parms.ElementList = ElementList;
	Parms.ElementHandles = ElementHandles;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TypedElementFramework.TypedElementListLibrary.Add
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct TypedElementFramework_ScriptTypedElementListProxyElementList                                                      (Parm, NativeAccessSpecifierPublic)
// struct TypedElementFramework_ScriptTypedElementHandleElementHandle                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTypedElementListLibrary::Add(const struct TypedElementFramework_ScriptTypedElementListProxy& ElementList, struct TypedElementFramework_ScriptTypedElementHandle& ElementHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementListLibrary", "Add");

	Params::UTypedElementListLibrary_Add_Params Parms{};

	Parms.ElementList = ElementList;
	Parms.ElementHandle = ElementHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class TypedElementFramework.TypedElementCounterInterface
// (None)

class UClass* ITypedElementCounterInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TypedElementCounterInterface");

	return Clss;
}


// TypedElementCounterInterface TypedElementFramework.Default__TypedElementCounterInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class ITypedElementCounterInterface* ITypedElementCounterInterface::GetDefaultObj()
{
	static class ITypedElementCounterInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<ITypedElementCounterInterface*>(ITypedElementCounterInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class TypedElementFramework.TypedElementRegistry
// (None)

class UClass* UTypedElementRegistry::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TypedElementRegistry");

	return Clss;
}


// TypedElementRegistry TypedElementFramework.Default__TypedElementRegistry
// (Public, ClassDefaultObject, ArchetypeObject)

class UTypedElementRegistry* UTypedElementRegistry::GetDefaultObj()
{
	static class UTypedElementRegistry* Default = nullptr;

	if (!Default)
		Default = static_cast<UTypedElementRegistry*>(UTypedElementRegistry::StaticClass()->DefaultObject);

	return Default;
}


// Function TypedElementFramework.TypedElementRegistry.GetInstance
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UTypedElementRegistry*       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTypedElementRegistry* UTypedElementRegistry::GetInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementRegistry", "GetInstance");

	Params::UTypedElementRegistry_GetInstance_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TypedElementFramework.TypedElementRegistry.GetElementInterface
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct TypedElementFramework_ScriptTypedElementHandleInElementHandle                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TSubclassOf<class IInterface>      InBaseInterfaceType                                              (ConstParm, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UObject* UTypedElementRegistry::GetElementInterface(struct TypedElementFramework_ScriptTypedElementHandle& InElementHandle, TSubclassOf<class IInterface> InBaseInterfaceType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementRegistry", "GetElementInterface");

	Params::UTypedElementRegistry_GetElementInterface_Params Parms{};

	Parms.InElementHandle = InElementHandle;
	Parms.InBaseInterfaceType = InBaseInterfaceType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class TypedElementFramework.TestTypedElementInterfaceA
// (None)

class UClass* ITestTypedElementInterfaceA::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TestTypedElementInterfaceA");

	return Clss;
}


// TestTypedElementInterfaceA TypedElementFramework.Default__TestTypedElementInterfaceA
// (Public, ClassDefaultObject, ArchetypeObject)

class ITestTypedElementInterfaceA* ITestTypedElementInterfaceA::GetDefaultObj()
{
	static class ITestTypedElementInterfaceA* Default = nullptr;

	if (!Default)
		Default = static_cast<ITestTypedElementInterfaceA*>(ITestTypedElementInterfaceA::StaticClass()->DefaultObject);

	return Default;
}


// Function TypedElementFramework.TestTypedElementInterfaceA.SetDisplayName
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct TypedElementFramework_ScriptTypedElementHandleInElementHandle                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FText                        InNewName                                                        (Parm, NativeAccessSpecifierPublic)
// bool                               bNotify                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ITestTypedElementInterfaceA::SetDisplayName(struct TypedElementFramework_ScriptTypedElementHandle& InElementHandle, class FText InNewName, bool bNotify)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TestTypedElementInterfaceA", "SetDisplayName");

	Params::ITestTypedElementInterfaceA_SetDisplayName_Params Parms{};

	Parms.InElementHandle = InElementHandle;
	Parms.InNewName = InNewName;
	Parms.bNotify = bNotify;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TypedElementFramework.TestTypedElementInterfaceA.GetDisplayName
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct TypedElementFramework_ScriptTypedElementHandleInElementHandle                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText ITestTypedElementInterfaceA::GetDisplayName(struct TypedElementFramework_ScriptTypedElementHandle& InElementHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TestTypedElementInterfaceA", "GetDisplayName");

	Params::ITestTypedElementInterfaceA_GetDisplayName_Params Parms{};

	Parms.InElementHandle = InElementHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class TypedElementFramework.TestTypedElementInterfaceB
// (None)

class UClass* ITestTypedElementInterfaceB::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TestTypedElementInterfaceB");

	return Clss;
}


// TestTypedElementInterfaceB TypedElementFramework.Default__TestTypedElementInterfaceB
// (Public, ClassDefaultObject, ArchetypeObject)

class ITestTypedElementInterfaceB* ITestTypedElementInterfaceB::GetDefaultObj()
{
	static class ITestTypedElementInterfaceB* Default = nullptr;

	if (!Default)
		Default = static_cast<ITestTypedElementInterfaceB*>(ITestTypedElementInterfaceB::StaticClass()->DefaultObject);

	return Default;
}


// Function TypedElementFramework.TestTypedElementInterfaceB.MarkAsTested
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct TypedElementFramework_ScriptTypedElementHandleInElementHandle                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ITestTypedElementInterfaceB::MarkAsTested(struct TypedElementFramework_ScriptTypedElementHandle& InElementHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TestTypedElementInterfaceB", "MarkAsTested");

	Params::ITestTypedElementInterfaceB_MarkAsTested_Params Parms{};

	Parms.InElementHandle = InElementHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class TypedElementFramework.TestTypedElementInterfaceC
// (None)

class UClass* ITestTypedElementInterfaceC::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TestTypedElementInterfaceC");

	return Clss;
}


// TestTypedElementInterfaceC TypedElementFramework.Default__TestTypedElementInterfaceC
// (Public, ClassDefaultObject, ArchetypeObject)

class ITestTypedElementInterfaceC* ITestTypedElementInterfaceC::GetDefaultObj()
{
	static class ITestTypedElementInterfaceC* Default = nullptr;

	if (!Default)
		Default = static_cast<ITestTypedElementInterfaceC*>(ITestTypedElementInterfaceC::StaticClass()->DefaultObject);

	return Default;
}


// Function TypedElementFramework.TestTypedElementInterfaceC.GetIsTested
// (Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct TypedElementFramework_ScriptTypedElementHandleInElementHandle                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ITestTypedElementInterfaceC::GetIsTested(struct TypedElementFramework_ScriptTypedElementHandle& InElementHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TestTypedElementInterfaceC", "GetIsTested");

	Params::ITestTypedElementInterfaceC_GetIsTested_Params Parms{};

	Parms.InElementHandle = InElementHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class TypedElementFramework.TestTypedElementInterfaceA_ImplTyped
// (None)

class UClass* UTestTypedElementInterfaceA_ImplTyped::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TestTypedElementInterfaceA_ImplTyped");

	return Clss;
}


// TestTypedElementInterfaceA_ImplTyped TypedElementFramework.Default__TestTypedElementInterfaceA_ImplTyped
// (Public, ClassDefaultObject, ArchetypeObject)

class UTestTypedElementInterfaceA_ImplTyped* UTestTypedElementInterfaceA_ImplTyped::GetDefaultObj()
{
	static class UTestTypedElementInterfaceA_ImplTyped* Default = nullptr;

	if (!Default)
		Default = static_cast<UTestTypedElementInterfaceA_ImplTyped*>(UTestTypedElementInterfaceA_ImplTyped::StaticClass()->DefaultObject);

	return Default;
}


// Class TypedElementFramework.TestTypedElementInterfaceA_ImplUntyped
// (None)

class UClass* UTestTypedElementInterfaceA_ImplUntyped::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TestTypedElementInterfaceA_ImplUntyped");

	return Clss;
}


// TestTypedElementInterfaceA_ImplUntyped TypedElementFramework.Default__TestTypedElementInterfaceA_ImplUntyped
// (Public, ClassDefaultObject, ArchetypeObject)

class UTestTypedElementInterfaceA_ImplUntyped* UTestTypedElementInterfaceA_ImplUntyped::GetDefaultObj()
{
	static class UTestTypedElementInterfaceA_ImplUntyped* Default = nullptr;

	if (!Default)
		Default = static_cast<UTestTypedElementInterfaceA_ImplUntyped*>(UTestTypedElementInterfaceA_ImplUntyped::StaticClass()->DefaultObject);

	return Default;
}


// Class TypedElementFramework.TestTypedElementInterfaceBAndC_Typed
// (None)

class UClass* UTestTypedElementInterfaceBAndC_Typed::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TestTypedElementInterfaceBAndC_Typed");

	return Clss;
}


// TestTypedElementInterfaceBAndC_Typed TypedElementFramework.Default__TestTypedElementInterfaceBAndC_Typed
// (Public, ClassDefaultObject, ArchetypeObject)

class UTestTypedElementInterfaceBAndC_Typed* UTestTypedElementInterfaceBAndC_Typed::GetDefaultObj()
{
	static class UTestTypedElementInterfaceBAndC_Typed* Default = nullptr;

	if (!Default)
		Default = static_cast<UTestTypedElementInterfaceBAndC_Typed*>(UTestTypedElementInterfaceBAndC_Typed::StaticClass()->DefaultObject);

	return Default;
}

}


