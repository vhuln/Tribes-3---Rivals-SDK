#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EquipSlotFilter.EquipSlotFilter_C
// (None)

class UClass* UEquipSlotFilter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EquipSlotFilter_C");

	return Clss;
}


// EquipSlotFilter_C EquipSlotFilter.Default__EquipSlotFilter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEquipSlotFilter_C* UEquipSlotFilter_C::GetDefaultObj()
{
	static class UEquipSlotFilter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEquipSlotFilter_C*>(UEquipSlotFilter_C::StaticClass()->DefaultObject);

	return Default;
}


// Function EquipSlotFilter.EquipSlotFilter_C.ShouldBeFilteredOut
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct Valhalla_VendorItem         Item                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetEnabled_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct GameplayTags_GameplayTagContainerCallFunc_MakeGameplayTagContainerFromTag_ReturnValue             (None)
// bool                               CallFunc_HasTag_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UEquipSlotFilter_C::ShouldBeFilteredOut(struct Valhalla_VendorItem& Item, bool CallFunc_GetEnabled_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct GameplayTags_GameplayTagContainer& CallFunc_MakeGameplayTagContainerFromTag_ReturnValue, bool CallFunc_HasTag_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EquipSlotFilter_C", "ShouldBeFilteredOut");

	Params::UEquipSlotFilter_C_ShouldBeFilteredOut_Params Parms{};

	Parms.Item = Item;
	Parms.CallFunc_GetEnabled_ReturnValue = CallFunc_GetEnabled_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_MakeGameplayTagContainerFromTag_ReturnValue = CallFunc_MakeGameplayTagContainerFromTag_ReturnValue;
	Parms.CallFunc_HasTag_ReturnValue = CallFunc_HasTag_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


