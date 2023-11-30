#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1EC (0x73C - 0x550)
// WidgetBlueprintGeneratedClass WBP_ShopPurchaseConfirmation.WBP_ShopPurchaseConfirmation_C
class UWBP_ShopPurchaseConfirmation_C : public URHWidget
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x550(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      AnimWarning;                                       // 0x558(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      AnimPurchaseComplete;                              // 0x560(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UVerticalBox*                          ArmorComponentGroup;                               // 0x568(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          ArmorComponentList;                                // 0x570(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               DevPurchaseWarning;                                // 0x578(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          DyeList;                                           // 0x580(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Button_Menu_Gold_C*                GetMoreTokens;                                     // 0x588(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_2;                                           // 0x590(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_3;                                           // 0x598(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_134;                                         // 0x5A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            NameText_1;                                        // 0x5A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               OwnedLabel;                                        // 0x5B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       OwnedSwitcher;                                     // 0x5B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Button_Menu_Gold_C*                PurchaseButton;                                    // 0x5C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              PurchaseButtonGroup;                               // 0x5C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          PurchaseSuccessGroup;                              // 0x5D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          PurchasingBlocker;                                 // 0x5D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Shared_Preview_Rotator_C*          Rotator;                                           // 0x5E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Shared_PriceDisplay_C*             TokenCost;                                         // 0x5E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Shared_PriceDisplay_C*             TokenCost_Unaffordable;                            // 0x5F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TypeText_1;                                        // 0x5F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Shared_Currency_C*                 UI_Shared_Currency;                                // 0x600(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          UnaffordableGroup;                                 // 0x608(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       UnaffordableSwitcher;                              // 0x610(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URHUnsafeZone*                         VignetteGroup;                                     // 0x618(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SubscreenHeader_C*                WBP_SubscreenHeader;                               // 0x620(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_TriangleThrobber_C*               WBP_TriangleThrobber;                              // 0x628(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ACameraActor*                          My_Camera;                                         // 0x630(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FName                                  CameraTag;                                         // 0x638(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct Valhalla_InventoryItem                CachedInventoryItem;                               // 0x640(0xC8)(Edit, BlueprintVisible, DisableEditOnInstance)
	class AValShopManager*                       CachedShopManager;                                 // 0x708(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         IsOwned;                                           // 0x710(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_387F[0x7];                                     // Fixing Size After Last Property  
	struct Engine_TimerHandle                    PurchaseTImeout;                                   // 0x718(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UValItemAsset*                         ItemAsset;                                         // 0x720(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UObject*                               PlayerDataFactory;                                 // 0x728(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         AllowRedirect;                                     // 0x730(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bBoundAppSettings;                                 // 0x731(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3886[0x2];                                     // Fixing Size After Last Property  
	int32                                        PurchaseFocusGroup;                                // 0x734(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CantAffordFocusGroup;                              // 0x738(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_ShopPurchaseConfirmation_C* GetDefaultObj();

	void OnAppSettingsUpdate(class URH_ConfigSubsystem* ConfigSubsystem);
	void UpdateItemTypeText(bool IsSuit, bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText K2Node_Select_Default);
	void BindAppSettings(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class URH_GameInstanceSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class URH_ConfigSubsystem* CallFunc_GetConfigSubsystem_ReturnValue);
	void UpdateAllowRedirect(class URH_GameInstanceSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class URH_ConfigSubsystem* CallFunc_GetConfigSubsystem_ReturnValue, const class FString& CallFunc_GetAppSetting_Value, bool CallFunc_GetAppSetting_ReturnValue, bool CallFunc_GetShopManager_Valid, class AValShopManager* CallFunc_GetShopManager_ShopManager, const struct Valhalla_ShopPrice& CallFunc_GetShopPrice_ShopPrice, bool CallFunc_GetShopPrice_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void NavigateToTokenShop(bool CallFunc_AddViewRoute_ReturnValue, bool CallFunc_IsValid_ReturnValue, class URHViewManager* CallFunc_GetViewManager_ReturnValue, bool CallFunc_RemoveTopViewRoute_ReturnValue, class URHWidget* CallFunc_GetTopViewRouteWidget_ReturnValue, class UWBP_ShopScene_C* K2Node_DynamicCast_AsWBP_Shop_Scene, bool K2Node_DynamicCast_bSuccess);
	void Update_Affordability(const struct Valhalla_ShopPrice& ShopPrice, bool CantAfford, bool NewLocalVar);
	void OnPurchaseResponse(struct CoreUObject_Guid& InventoryId, enum class EShopPurchaseResponse Response, bool K2Node_SwitchEnum_CmpSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1);
	void BindShopManager(class AValShopManager* ShopManager, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue);
	void GetShopManager(bool* Valid, class AValShopManager** ShopManager, bool CallFunc_IsValid_ReturnValue, class AValPlayerController* CallFunc_GetPlayer_ReturnValue, class AValShopManager* CallFunc_GetShopManager_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2);
	void UpdateText(bool CallFunc_IsValid_ReturnValue, class UValGameInstance* CallFunc_GetGameInstance_ReturnValue, class UValDataTableManager* CallFunc_GetDataTableManager_ReturnValue, class FText CallFunc_GetGameplayText_Text, bool CallFunc_GetGameplayText_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
	void UpdateRarity(class FName CallFunc_MakeLiteralName_ReturnValue, const struct CoreUObject_LinearColor& CallFunc_GetColorFromRarity_ReturnValue, const struct SlateCore_SlateColor& K2Node_MakeStruct_SlateColor);
	void UpdateSuitComponentText(bool Value, bool IsDye, class AValInventoryManager* LocalInventoryManager, int32 Temp_int_Array_Index_Variable, class UWBP_SuitComponentEntry_C* CallFunc_Create_ReturnValue, const struct SlateCore_Margin& K2Node_MakeStruct_Margin, bool Temp_bool_Variable, bool Temp_bool_Variable_1, int32 CallFunc_Array_Get_Item, class UVerticalBox* K2Node_Select_Default, int32 CallFunc_Array_Length_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, class UValItemAsset* CallFunc_GetItemAssetById_ItemAsset, bool CallFunc_GetItemAssetById_ReturnValue, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, const struct Engine_FormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class AValInventoryManager* CallFunc_GetInventoryManager_ReturnValue, TArray<struct Engine_FormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class FText K2Node_Select_Default_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void GetItemTypeText(class FText* OutText);
	bool NavigateBack(bool CallFunc_RemoveTopViewRoute_ReturnValue, bool CallFunc_NavigateBack_ReturnValue);
	void HandleBackButtonPressed(bool CallFunc_NavigateBack_ReturnValue);
	void UpdateData(const struct Valhalla_InventoryItem& DisplayItem, bool LocalIsSuit, int32 Temp_int_Variable, bool CallFunc_GetShopManager_Valid, class AValShopManager* CallFunc_GetShopManager_ShopManager, const struct Valhalla_ShopPrice& CallFunc_GetShopPrice_ShopPrice, bool CallFunc_GetShopPrice_ReturnValue, int32 Temp_int_Variable_1, bool Temp_bool_Variable, bool CallFunc_MatchesTag_ReturnValue, int32 K2Node_Select_Default, class AValInventoryManager* CallFunc_GetInventoryManager_ReturnValue, class UValItemAsset* CallFunc_GetItemAssetById_ItemAsset, bool CallFunc_GetItemAssetById_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void UpdateCamera(int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, TArray<class ACameraActor*>& CallFunc_GetAllActorsOfClassWithTag_OutActors, class ACameraActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void OnShown();
	void BndEvt__WBP_ShopPurchaseConfirmation_UI_Button_Menu_Gold_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
	void OnPurchaseTimeout();
	void OnHide();
	void OnHudBindingReady();
	void InitializeWidget();
	void BndEvt__WBP_ShopPurchaseConfirmation_GetMoreTokens_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void ExecuteUbergraph_WBP_ShopPurchaseConfirmation(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct Engine_TimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_GetShopManager_Valid, class AValShopManager* CallFunc_GetShopManager_ShopManager, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class AValPlayerController* CallFunc_GetPlayer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_GetShopManager_Valid_1, class AValShopManager* CallFunc_GetShopManager_ShopManager_1, TArray<class FName>& K2Node_MakeArray_Array);
};

}


