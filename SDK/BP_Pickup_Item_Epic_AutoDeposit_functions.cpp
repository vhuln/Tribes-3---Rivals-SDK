#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Pickup_Item_Epic_AutoDeposit.BP_Pickup_Item_Epic_AutoDeposit_C
// (Actor)

class UClass* ABP_Pickup_Item_Epic_AutoDeposit_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Pickup_Item_Epic_AutoDeposit_C");

	return Clss;
}


// BP_Pickup_Item_Epic_AutoDeposit_C BP_Pickup_Item_Epic_AutoDeposit.Default__BP_Pickup_Item_Epic_AutoDeposit_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Pickup_Item_Epic_AutoDeposit_C* ABP_Pickup_Item_Epic_AutoDeposit_C::GetDefaultObj()
{
	static class ABP_Pickup_Item_Epic_AutoDeposit_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Pickup_Item_Epic_AutoDeposit_C*>(ABP_Pickup_Item_Epic_AutoDeposit_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Pickup_Item_Epic_AutoDeposit.BP_Pickup_Item_Epic_AutoDeposit_C.CustomPickupFunc
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AValCharacter*               ValCharacter                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_Pickup_Item_Epic_AutoDeposit_C::CustomPickupFunc(class AValCharacter* ValCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Pickup_Item_Epic_AutoDeposit_C", "CustomPickupFunc");

	Params::ABP_Pickup_Item_Epic_AutoDeposit_C_CustomPickupFunc_Params Parms{};

	Parms.ValCharacter = ValCharacter;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


