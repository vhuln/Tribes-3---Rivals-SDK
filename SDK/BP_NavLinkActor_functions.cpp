#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_NavLinkActor.BP_NavLinkActor_C
// (Actor)

class UClass* ABP_NavLinkActor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_NavLinkActor_C");

	return Clss;
}


// BP_NavLinkActor_C BP_NavLinkActor.Default__BP_NavLinkActor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_NavLinkActor_C* ABP_NavLinkActor_C::GetDefaultObj()
{
	static class ABP_NavLinkActor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_NavLinkActor_C*>(ABP_NavLinkActor_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_NavLinkActor.BP_NavLinkActor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_NavLinkActor_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NavLinkActor_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}

}


