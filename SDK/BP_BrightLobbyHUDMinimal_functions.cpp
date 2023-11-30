#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BrightLobbyHUDMinimal.BP_BrightLobbyHUDMinimal_C
// (Actor)

class UClass* ABP_BrightLobbyHUDMinimal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BrightLobbyHUDMinimal_C");

	return Clss;
}


// BP_BrightLobbyHUDMinimal_C BP_BrightLobbyHUDMinimal.Default__BP_BrightLobbyHUDMinimal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BrightLobbyHUDMinimal_C* ABP_BrightLobbyHUDMinimal_C::GetDefaultObj()
{
	static class ABP_BrightLobbyHUDMinimal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BrightLobbyHUDMinimal_C*>(ABP_BrightLobbyHUDMinimal_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_BrightLobbyHUDMinimal.BP_BrightLobbyHUDMinimal_C.CallRemoveTopViewRoute
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ForceTransition                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ViewChanged                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BrightLobbyHUDMinimal_C::CallRemoveTopViewRoute(bool ForceTransition, bool* ViewChanged)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BrightLobbyHUDMinimal_C", "CallRemoveTopViewRoute");

	Params::ABP_BrightLobbyHUDMinimal_C_CallRemoveTopViewRoute_Params Parms{};

	Parms.ForceTransition = ForceTransition;

	UObject::ProcessEvent(Func, &Parms);

	if (ViewChanged != nullptr)
		*ViewChanged = Parms.ViewChanged;

}


// Function BP_BrightLobbyHUDMinimal.BP_BrightLobbyHUDMinimal_C.CallAddViewRoute
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        RouteName                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ClearRouteStack                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ForceTransition                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ViewChanged                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BrightLobbyHUDMinimal_C::CallAddViewRoute(class FName RouteName, bool ClearRouteStack, bool ForceTransition, bool* ViewChanged)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BrightLobbyHUDMinimal_C", "CallAddViewRoute");

	Params::ABP_BrightLobbyHUDMinimal_C_CallAddViewRoute_Params Parms{};

	Parms.RouteName = RouteName;
	Parms.ClearRouteStack = ClearRouteStack;
	Parms.ForceTransition = ForceTransition;

	UObject::ProcessEvent(Func, &Parms);

	if (ViewChanged != nullptr)
		*ViewChanged = Parms.ViewChanged;

}

}


