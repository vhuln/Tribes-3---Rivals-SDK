#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x80 - 0x78)
// BlueprintGeneratedClass EquipSlotFilter.EquipSlotFilter_C
class UEquipSlotFilter_C : public UValVendorFilter
{
public:
	struct GameplayTags_GameplayTag              RequiredSlotTag;                                   // 0x78(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UEquipSlotFilter_C* GetDefaultObj();

	bool ShouldBeFilteredOut(struct Valhalla_VendorItem& Item, bool CallFunc_GetEnabled_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct GameplayTags_GameplayTagContainer& CallFunc_MakeGameplayTagContainerFromTag_ReturnValue, bool CallFunc_HasTag_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
};

}


