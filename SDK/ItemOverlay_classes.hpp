#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x139 (0x411 - 0x2D8)
// WidgetBlueprintGeneratedClass ItemOverlay.ItemOverlay_C
class UItemOverlay_C : public UValItemOverlay
{
public:
	class UWidgetAnimation*                      AnimateDisplaySwap;                                // 0x2D8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      AnimateDisplay;                                    // 0x2E0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UItemOverlay_Info_C*                   ItemOverlay_Info;                                  // 0x2E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         Cached_Visible;                                    // 0x2F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2648[0x7];                                     // Fixing Size After Last Property  
	struct Valhalla_BoostItem                    Cached_Item;                                       // 0x2F8(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         Local_Display;                                     // 0x380(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Cached_Display;                                    // 0x381(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Local_Display_Swap;                                // 0x382(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2670[0x5];                                     // Fixing Size After Last Property  
	struct Valhalla_BoostItem                    Local_Equipped_Item;                               // 0x388(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         Cached_Display_Swap;                               // 0x410(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UItemOverlay_C* GetDefaultObj();

	void UpdateEquippedItem(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AValCharacter* CallFunc_GetLocalChar_ReturnValue, class AValPlayerState_Frontier* K2Node_DynamicCast_AsVal_Player_State_Frontier, bool K2Node_DynamicCast_bSuccess, TArray<class FName>& CallFunc_GetEquippedItemNames_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct Valhalla_BoostItem& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_EqualEqual_GameplayTag_ReturnValue);
	void OnOwningItemSet(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ABP_BoostItem_C* K2Node_DynamicCast_AsBP_Boost_Item, bool K2Node_DynamicCast_bSuccess, class FName CallFunc_GetPickupItemName_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_EqualEqual_StriStri_ReturnValue);
	void On_Item_Changed(class FName Item, const struct Valhalla_BoostItem& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue);
	void UpdateDisplay(bool Temp_bool_Variable, enum class EUMGSequencePlayMode Temp_byte_Variable, enum class EUMGSequencePlayMode Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class EUMGSequencePlayMode Temp_byte_Variable_2, enum class EUMGSequencePlayMode Temp_byte_Variable_3, bool CallFunc_NotEqual_BoolBool_ReturnValue, enum class EUMGSequencePlayMode K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, enum class EUMGSequencePlayMode K2Node_Select_Default_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool CallFunc_NotEqual_BoolBool_ReturnValue_1);
	void UpdateVisible(bool Visible);
	void OnUpdateVisibility(bool Visible);
};

}


