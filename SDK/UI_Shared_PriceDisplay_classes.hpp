#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x59 (0x5A9 - 0x550)
// WidgetBlueprintGeneratedClass UI_Shared_PriceDisplay.UI_Shared_PriceDisplay_C
class UUI_Shared_PriceDisplay_C : public URHWidget
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x550(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class URHAsyncImage*                         PUMG_AsyncImage_61;                                // 0x558(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            ValueText;                                         // 0x560(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        Currency_Item_Id;                                  // 0x568(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_3B27[0x4];                                     // Fixing Size After Last Property  
	class UObject*                               PlayerDataFactory;                                 // 0x570(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                        Price;                                             // 0x578(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         bIsAffordable;                                     // 0x57C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B48[0x3];                                     // Fixing Size After Last Property  
	struct SlateCore_SlateColor                  PriceColor;                                        // 0x580(0x14)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct SlateCore_SlateColor                  UnaffordablePriceColor;                            // 0x594(0x14)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                         bCheckAffordability;                               // 0x5A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_Shared_PriceDisplay_C* GetDefaultObj();

	void UpdateData(int32 Price, int32 Currency_Item_Id, class FText CallFunc_Conv_IntToText_ReturnValue, bool Temp_bool_Variable, class URH_LocalPlayerSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, class URH_PlayerInfo* CallFunc_GetLocalPlayerInfo_ReturnValue, const struct SlateCore_SlateColor& K2Node_Select_Default, class URH_PlayerInventory* CallFunc_GetPlayerInventory_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetInventoryItemCount_ItemCount, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AValInventoryManager* CallFunc_GetInventoryManager_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class UValItemAsset* CallFunc_GetItemAssetById_ItemAsset, bool CallFunc_GetItemAssetById_ReturnValue);
	void OnHudBindingReady();
	void PreConstruct(bool IsDesignTime);
	void OnInventoryCacheUpdated(TArray<int32>& ItemIds);
	void UninitializeWidget();
	void ExecuteUbergraph_UI_Shared_PriceDisplay(int32 EntryPoint, class URH_LocalPlayerSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, class URH_PlayerInfo* CallFunc_GetLocalPlayerInfo_ReturnValue, class URH_PlayerInventory* CallFunc_GetPlayerInventory_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool K2Node_Event_IsDesignTime, class URH_LocalPlayerSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue_1, class URH_PlayerInfo* CallFunc_GetLocalPlayerInfo_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class URH_PlayerInventory* CallFunc_GetPlayerInventory_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, TArray<int32>& K2Node_CustomEvent_ItemIds, bool CallFunc_Array_Contains_ReturnValue);
};

}


