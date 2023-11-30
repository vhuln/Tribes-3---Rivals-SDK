#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x578 - 0x550)
// WidgetBlueprintGeneratedClass UI_Shared_Currency.UI_Shared_Currency_C
class UUI_Shared_Currency_C : public URHWidget
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x550(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class URHAsyncImage*                         Icon;                                              // 0x558(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            ValueText;                                         // 0x560(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        Currency_Item_Id;                                  // 0x568(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_34C7[0x4];                                     // Fixing Size After Last Property  
	class UObject*                               PlayerDataFactory;                                 // 0x570(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_Shared_Currency_C* GetDefaultObj();

	void RequestInventoryCount(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class URH_LocalPlayerSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, class URH_PlayerInfo* CallFunc_GetLocalPlayerInfo_ReturnValue, bool CallFunc_IsValid_ReturnValue, class URH_PlayerInventory* CallFunc_GetPlayerInventory_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void OnInventoryCountReceived(int32 InstanceCount, class FText CallFunc_Conv_IntToText_ReturnValue);
	void OnInventoryCacheUpdated(TArray<int32>& ItemIds, bool CallFunc_Array_Contains_ReturnValue);
	void UpdateData(int32 CurrencyItemId, class UValItemAsset* CallFunc_GetItemAssetById_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void OnHudBindingReady();
	void UninitializeWidget();
	void ExecuteUbergraph_UI_Shared_Currency(int32 EntryPoint, class URH_LocalPlayerSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class URH_PlayerInfo* CallFunc_GetLocalPlayerInfo_ReturnValue, class URH_LocalPlayerSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue_1, class URH_PlayerInventory* CallFunc_GetPlayerInventory_ReturnValue, class URH_PlayerInfo* CallFunc_GetLocalPlayerInfo_ReturnValue_1, class URH_PlayerInventory* CallFunc_GetPlayerInventory_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3);
};

}


