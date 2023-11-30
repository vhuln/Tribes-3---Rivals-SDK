#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CanCraftFilter.CanCraftFilter_C
// (None)

class UClass* UCanCraftFilter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CanCraftFilter_C");

	return Clss;
}


// CanCraftFilter_C CanCraftFilter.Default__CanCraftFilter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCanCraftFilter_C* UCanCraftFilter_C::GetDefaultObj()
{
	static class UCanCraftFilter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCanCraftFilter_C*>(UCanCraftFilter_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CanCraftFilter.CanCraftFilter_C.ShouldBeFilteredOut
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct Valhalla_VendorItem         Item                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetEnabled_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValVendorBase*              CallFunc_GetVendorOwner_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_MeetsCraftingRequirements_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UCanCraftFilter_C::ShouldBeFilteredOut(struct Valhalla_VendorItem& Item, bool CallFunc_GetEnabled_ReturnValue, class AValVendorBase* CallFunc_GetVendorOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_MeetsCraftingRequirements_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CanCraftFilter_C", "ShouldBeFilteredOut");

	Params::UCanCraftFilter_C_ShouldBeFilteredOut_Params Parms{};

	Parms.Item = Item;
	Parms.CallFunc_GetEnabled_ReturnValue = CallFunc_GetEnabled_ReturnValue;
	Parms.CallFunc_GetVendorOwner_ReturnValue = CallFunc_GetVendorOwner_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_MeetsCraftingRequirements_ReturnValue = CallFunc_MeetsCraftingRequirements_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


