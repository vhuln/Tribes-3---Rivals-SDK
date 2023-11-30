#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CanAffordFilter.CanAffordFilter_C
// (None)

class UClass* UCanAffordFilter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CanAffordFilter_C");

	return Clss;
}


// CanAffordFilter_C CanAffordFilter.Default__CanAffordFilter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCanAffordFilter_C* UCanAffordFilter_C::GetDefaultObj()
{
	static class UCanAffordFilter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCanAffordFilter_C*>(UCanAffordFilter_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CanAffordFilter.CanAffordFilter_C.ShouldBeFilteredOut
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct Valhalla_VendorItem         Item                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetEnabled_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValVendorBase*              CallFunc_GetVendorOwner_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_MeetsCurrencyRequirements_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UCanAffordFilter_C::ShouldBeFilteredOut(struct Valhalla_VendorItem& Item, bool CallFunc_GetEnabled_ReturnValue, class AValVendorBase* CallFunc_GetVendorOwner_ReturnValue, bool CallFunc_MeetsCurrencyRequirements_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CanAffordFilter_C", "ShouldBeFilteredOut");

	Params::UCanAffordFilter_C_ShouldBeFilteredOut_Params Parms{};

	Parms.Item = Item;
	Parms.CallFunc_GetEnabled_ReturnValue = CallFunc_GetEnabled_ReturnValue;
	Parms.CallFunc_GetVendorOwner_ReturnValue = CallFunc_GetVendorOwner_ReturnValue;
	Parms.CallFunc_MeetsCurrencyRequirements_ReturnValue = CallFunc_MeetsCurrencyRequirements_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


