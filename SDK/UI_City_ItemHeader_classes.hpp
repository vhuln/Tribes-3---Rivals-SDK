#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x151 (0x411 - 0x2C0)
// WidgetBlueprintGeneratedClass UI_City_ItemHeader.UI_City_ItemHeader_C
class UUI_City_ItemHeader_C : public UUserWidget
{
public:
	class UBorder*                               Equipped;                                          // 0x2C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               HeaderGroup;                                       // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_148;                                         // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_260;                                         // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URHAsyncImage*                         ItemIcon;                                          // 0x2E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            NameText_1;                                        // 0x2E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            QuantityText;                                      // 0x2F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct GameplayTags_GameplayTag              SlotTag;                                           // 0x2F8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct GameplayTags_GameplayTagContainer     CachedTags;                                        // 0x300(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  Display_Name;                                      // 0x320(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	enum class ERarity                           CachedRarity;                                      // 0x338(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_111[0x7];                                      // Fixing Size After Last Property  
	class UValItemAsset*                         CachedItemAsset;                                   // 0x340(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct Valhalla_InventoryItem                CachedInventoryItem;                               // 0x348(0xC8)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         ShowLevel;                                         // 0x410(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_City_ItemHeader_C* GetDefaultObj();

	void UpdateIsEquipped(bool Equipped);
	void Check_Dog_Tag_and_Relation(bool* IsDogTag, bool* IsFriendly);
	void Update_Quantity_Explicit(int32 Quantity, int64 CallFunc_Conv_IntToInt64_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const struct Engine_FormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct Engine_FormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void SetPriceDisplay();
	void GetBestGameplayText(class FText* OutText, class UValGameInstance* CallFunc_GetGameInstance_ReturnValue, bool CallFunc_IsGameplayTagValid_ReturnValue, class UValDataTableManager* CallFunc_GetDataTableManager_ReturnValue, class FText CallFunc_GetFirstGameplayTextByContainer_Text, bool CallFunc_GetFirstGameplayTextByContainer_ReturnValue, class UValGameInstance* CallFunc_GetGameInstance_ReturnValue_1, class UValDataTableManager* CallFunc_GetDataTableManager_ReturnValue_1, class FText CallFunc_GetGameplayText_Text, bool CallFunc_GetGameplayText_ReturnValue);
	void Update_Data_from_Equipment(class UValItemAsset*& ItemAsset, enum class ERarity RarityOverride, class FText NameOverride, const struct Valhalla_InventoryItem& InventoryItem, int32 UpgradeCount, int32 AccountLevel, bool CallFunc_IsValid_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_Check_Dog_Tag_and_Relation_isDogTag, bool CallFunc_Check_Dog_Tag_and_Relation_isFriendly, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class FText K2Node_Select_Default);
	void Update_Icon(TSoftObjectPtr<class UTexture2D> Icon, bool CallFunc_IsValidSoftObjectReference_ReturnValue);
};

}


