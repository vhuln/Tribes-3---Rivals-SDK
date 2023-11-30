#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x98 - 0x78)
// BlueprintGeneratedClass GameplayTagFilter.GameplayTagFilter_C
class UGameplayTagFilter_C : public UValVendorFilter
{
public:
	TArray<struct GameplayTags_GameplayTag>      AND_Gameplay_Tags;                                 // 0x78(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct GameplayTags_GameplayTag>      OR_Gameplay_Tags;                                  // 0x88(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UGameplayTagFilter_C* GetDefaultObj();

	bool HasTags(struct GameplayTags_GameplayTagContainer& TagContainer, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct GameplayTags_GameplayTag& CallFunc_Array_Get_Item, const struct GameplayTags_GameplayTag& CallFunc_Array_Get_Item_1, bool CallFunc_HasTag_ReturnValue, bool CallFunc_HasTag_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_Array_IsEmpty_ReturnValue);
	bool ShouldBeFilteredOut(struct Valhalla_VendorItem& Item, bool CallFunc_GetEnabled_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasTags_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
};

}


