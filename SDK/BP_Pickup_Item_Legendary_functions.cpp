#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Pickup_Item_Legendary.BP_Pickup_Item_Legendary_C
// (Actor)

class UClass* ABP_Pickup_Item_Legendary_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Pickup_Item_Legendary_C");

	return Clss;
}


// BP_Pickup_Item_Legendary_C BP_Pickup_Item_Legendary.Default__BP_Pickup_Item_Legendary_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Pickup_Item_Legendary_C* ABP_Pickup_Item_Legendary_C::GetDefaultObj()
{
	static class ABP_Pickup_Item_Legendary_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Pickup_Item_Legendary_C*>(ABP_Pickup_Item_Legendary_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Pickup_Item_Legendary.BP_Pickup_Item_Legendary_C.GetContextPingType
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class EValPingType            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class EValPingType ABP_Pickup_Item_Legendary_C::GetContextPingType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Pickup_Item_Legendary_C", "GetContextPingType");

	Params::ABP_Pickup_Item_Legendary_C_GetContextPingType_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


