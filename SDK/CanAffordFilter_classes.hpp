#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x78 - 0x78)
// BlueprintGeneratedClass CanAffordFilter.CanAffordFilter_C
class UCanAffordFilter_C : public UValVendorFilter
{
public:

	static class UClass* StaticClass();
	static class UCanAffordFilter_C* GetDefaultObj();

	bool ShouldBeFilteredOut(struct Valhalla_VendorItem& Item, bool CallFunc_GetEnabled_ReturnValue, class AValVendorBase* CallFunc_GetVendorOwner_ReturnValue, bool CallFunc_MeetsCurrencyRequirements_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
};

}


