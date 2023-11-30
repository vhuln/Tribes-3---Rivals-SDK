#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x220 (0x770 - 0x550)
// WidgetBlueprintGeneratedClass WBP_PurchaseConfirmationModal.WBP_PurchaseConfirmationModal_C
class UWBP_PurchaseConfirmationModal_C : public URHWidget
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x550(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      ShowAnim;                                          // 0x558(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      AnimWarning;                                       // 0x560(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      AnimPurchaseComplete;                              // 0x568(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBlocker_C*                            Blocker;                                           // 0x570(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            HeaderText;                                        // 0x578(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_509;                                         // 0x580(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Left_Bar;                                          // 0x588(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Left_Bar_0;                                        // 0x590(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Left_Bar_1;                                        // 0x598(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Left_Bar_2;                                        // 0x5A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Left_Bar_3;                                        // 0x5A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Left_Bar_4;                                        // 0x5B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Left_Bar_5;                                        // 0x5B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            NameText_1;                                        // 0x5C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URHUnsafeZone*                         PUMG_UnsafeZone_0;                                 // 0x5C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Button_Menu_Gold_C*                PurchaseButton;                                    // 0x5D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              PurchaseButtonGroup;                               // 0x5D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          PurchaseSuccessGroup;                              // 0x5E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          PurchasingBlocker;                                 // 0x5E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                RightBar01;                                        // 0x5F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                RightBar02;                                        // 0x5F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                RightBar03;                                        // 0x600(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                RightBar04;                                        // 0x608(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                RightBar05;                                        // 0x610(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                RightBar07;                                        // 0x618(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                RightBar08;                                        // 0x620(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_154;                                       // 0x628(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Shared_PriceDisplay_C*             TokenCost;                                         // 0x630(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TypeText_1;                                        // 0x638(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Button_Menu_C*                     UI_Button_Menu;                                    // 0x640(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_TriangleThrobber_C*               WBP_TriangleThrobber;                              // 0x648(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              WidgetHolder;                                      // 0x650(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ACameraActor*                          My_Camera;                                         // 0x658(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FName                                  CameraTag;                                         // 0x660(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct Valhalla_InventoryItem                CachedInventoryItem;                               // 0x668(0xC8)(Edit, BlueprintVisible, DisableEditOnInstance)
	class AValShopManager*                       CachedShopManager;                                 // 0x730(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         IsOwned;                                           // 0x738(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3474[0x7];                                     // Fixing Size After Last Property  
	struct Engine_TimerHandle                    PurchaseTImeout;                                   // 0x740(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UValItemAsset*                         ItemAsset;                                         // 0x748(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UObject*                               PlayerDataFactory;                                 // 0x750(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         AllowRedirect;                                     // 0x758(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bBoundAppSettings;                                 // 0x759(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3483[0x2];                                     // Fixing Size After Last Property  
	int32                                        PurchaseFocusGroup;                                // 0x75C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CantAffordFocusGroup;                              // 0x760(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3484[0x4];                                     // Fixing Size After Last Property  
	struct Engine_TimerHandle                    PurchaseCompleteAnimTimer;                         // 0x768(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_PurchaseConfirmationModal_C* GetDefaultObj();

	void Add_Shop_Widget(class UWBP_ShopPanel_Base_C* Widget, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UWBP_ShopPanel_Base_C* CallFunc_Create_ReturnValue, class UOverlaySlot* CallFunc_AddChildToOverlay_ReturnValue);
	void UpdateItemTypeText(bool IsSuit, bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText K2Node_Select_Default);
	void OnPurchaseResponse(struct CoreUObject_Guid& InventoryId, enum class EShopPurchaseResponse Response, bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_GetEndTime_ReturnValue, bool CallFunc_NavigateBack_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_NavigateBack_ReturnValue_1, bool CallFunc_NavigateBack_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct Engine_TimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
	void BindShopManager(class AValShopManager* ShopManager, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue);
	void GetShopManager(bool* Valid, class AValShopManager** ShopManager, bool CallFunc_IsValid_ReturnValue, class AValPlayerController* CallFunc_GetPlayer_ReturnValue, class AValShopManager* CallFunc_GetShopManager_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2);
	void UpdateText(bool CallFunc_IsValid_ReturnValue, class UValGameInstance* CallFunc_GetGameInstance_ReturnValue, class UValDataTableManager* CallFunc_GetDataTableManager_ReturnValue, class FText CallFunc_GetGameplayText_Text, bool CallFunc_GetGameplayText_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
	void UpdateRarity(class FName CallFunc_MakeLiteralName_ReturnValue, const struct CoreUObject_LinearColor& CallFunc_GetColorFromRarity_ReturnValue, const struct SlateCore_SlateColor& K2Node_MakeStruct_SlateColor);
	void GetItemTypeText(class FText* OutText);
	bool NavigateBack(bool CallFunc_RemoveTopViewRoute_ReturnValue, bool CallFunc_NavigateBack_ReturnValue);
	void HandleBackButtonPressed(bool CallFunc_NavigateBack_ReturnValue);
	void UpdateData(const struct Valhalla_InventoryItem& DisplayItem, bool LocalIsSuit, bool CallFunc_GetShopManager_Valid, class AValShopManager* CallFunc_GetShopManager_ShopManager, const struct Valhalla_ShopPrice& CallFunc_GetShopPrice_ShopPrice, bool CallFunc_GetShopPrice_ReturnValue, class AValInventoryManager* CallFunc_GetInventoryManager_ReturnValue, class UValItemAsset* CallFunc_GetItemAssetById_ItemAsset, bool CallFunc_GetItemAssetById_ReturnValue);
	void UpdateCamera(int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, TArray<class ACameraActor*>& CallFunc_GetAllActorsOfClassWithTag_OutActors, class ACameraActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void InitializeWidget();
	void OnShown();
	void BndEvt__WBP_ShopPurchaseConfirmation_UI_Button_Menu_Gold_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
	void OnPurchaseTimeout();
	void OnHide();
	void BndEvt__WBP_PurchaseConfirmationModal_UI_Button_Menu_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
	void OnSuccessAnimComplete();
	void ExecuteUbergraph_WBP_PurchaseConfirmationModal(int32 EntryPoint, TArray<class FName>& K2Node_MakeArray_Array, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct Engine_TimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_GetShopManager_Valid, class AValShopManager* CallFunc_GetShopManager_ShopManager, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class AValPlayerController* CallFunc_GetPlayer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_GetShopManager_Valid_1, class AValShopManager* CallFunc_GetShopManager_ShopManager_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
};

}


