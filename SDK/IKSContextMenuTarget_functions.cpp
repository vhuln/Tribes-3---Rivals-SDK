#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass IKSContextMenuTarget.IKSContextMenuTarget_C
// (None)

class UClass* IIKSContextMenuTarget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IKSContextMenuTarget_C");

	return Clss;
}


// IKSContextMenuTarget_C IKSContextMenuTarget.Default__IKSContextMenuTarget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IIKSContextMenuTarget_C* IIKSContextMenuTarget_C::GetDefaultObj()
{
	static class IIKSContextMenuTarget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IIKSContextMenuTarget_C*>(IIKSContextMenuTarget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function IKSContextMenuTarget.IKSContextMenuTarget_C.OnContextMenuOpen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EViewSide               Side                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IIKSContextMenuTarget_C::OnContextMenuOpen(enum class EViewSide Side)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IKSContextMenuTarget_C", "OnContextMenuOpen");

	Params::IIKSContextMenuTarget_C_OnContextMenuOpen_Params Parms{};

	Parms.Side = Side;

	UObject::ProcessEvent(Func, &Parms);

}


// Function IKSContextMenuTarget.IKSContextMenuTarget_C.OnContextMenuClose
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IIKSContextMenuTarget_C::OnContextMenuClose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IKSContextMenuTarget_C", "OnContextMenuClose");



	UObject::ProcessEvent(Func, nullptr);

}

}


