#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x130 (0x680 - 0x550)
// WidgetBlueprintGeneratedClass WBP_ShopView_RealMoney.WBP_ShopView_RealMoney_C
class UWBP_ShopView_RealMoney_C : public UValStoreWidget
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x550(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UUniformGridPanel*                     DLCGrid;                                           // 0x558(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PanelHeader_C*                    DLCHeader;                                         // 0x560(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               EmptyStoreWarning;                                 // 0x568(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_105;                                         // 0x570(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            ItemScroll;                                        // 0x578(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       LoadingSwitcher;                                   // 0x580(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                          StoreContent_RetainerBox;                          // 0x588(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUniformGridPanel*                     TokensGrid;                                        // 0x590(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PanelHeader_C*                    TokensHeader;                                      // 0x598(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ShopPanel_DLC_C*                  WBP_ShopPanel_DLC;                                 // 0x5A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ShopPanel_DLC_C*                  WBP_ShopPanel_DLC_1;                               // 0x5A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ShopPanel_DLC_C*                  WBP_ShopPanel_DLC_2;                               // 0x5B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ShopPanel_TokenBundle_C*          WBP_ShopPanel_TokenBundle;                         // 0x5B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ShopPanel_TokenBundle_C*          WBP_ShopPanel_TokenBundle_1;                       // 0x5C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ShopPanel_TokenBundle_C*          WBP_ShopPanel_TokenBundle_2;                       // 0x5C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<int32, int32>                           ID_To_Sort_Index;                                  // 0x5D0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<int32, class UWBP_ShopPanel_Base_C*>    PendingPurchaseWidgets;                            // 0x620(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class ACameraActor*                          My_Camera;                                         // 0x670(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FName                                  CameraTag;                                         // 0x678(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_ShopView_RealMoney_C* GetDefaultObj();

	void UpdateCamera(int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, TArray<class ACameraActor*>& CallFunc_GetAllActorsOfClassWithTag_OutActors, class ACameraActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void OnCanCharacterOwnMoreComplete(bool IsValid, class URHStoreItemHelper* CallFunc_GetStoreItemHelper_ReturnValue, bool CallFunc_HasPendingPurchase_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void On_Acquisition_Received(int32 LootId, class UWBP_ShopPanel_Base_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void Update_Portal_Purchase_Complete(class UWidget* Widget, class URHStoreItem* Item, class UWBP_ShopPanel_Base_C* K2Node_DynamicCast_AsWBP_Shop_Panel_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, const struct RallyHereIntegration_RH_LootId& CallFunc_GetLootId_ReturnValue);
	void OnPortalPurchaseAcquisition(int32& ID, bool CallFunc_Map_Remove_ReturnValue, class UWBP_ShopPanel_Base_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void OnPortalPurchaseComplete(class URHStoreItem* Item, const TArray<class UWidget*>& NewLocalVar, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class UWidget* CallFunc_Array_Get_Item, class UWidget* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue_1);
	void ScrollTokensIntoView();
	void OnPortalOfferSelected(class URHStoreItem* PortalOffer, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class URH_PlayerInfo* CallFunc_GetLocalPlayerInfo_ReturnValue);
	void OnPortalStoreUpdated(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, class UPanelWidget* Temp_object_Variable, enum class EStoreSectionTypes Temp_byte_Variable, bool CallFunc_HasAnyChildren_ReturnValue, bool CallFunc_HasAnyChildren_ReturnValue_1, bool CallFunc_BooleanNOR_ReturnValue, class UPanelWidget* Temp_object_Variable_1, enum class EStoreSectionTypes Temp_byte_Variable_1, class UClass* Temp_class_Variable, class UClass* Temp_class_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UClass* Temp_class_Variable_2, enum class EStoreSectionTypes Temp_byte_Variable_2, int32 CallFunc_GetStoreLayout_ErrorCode, TArray<class URHStoreSection*>& CallFunc_GetStoreLayout_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class URHStoreSection* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UPanelWidget* K2Node_Select_Default, class UUniformGridPanel* K2Node_DynamicCast_AsUniform_Grid_Panel, bool K2Node_DynamicCast_bSuccess, class UClass* K2Node_Select_Default_1, class UClass* K2Node_ClassDynamicCast_AsWBP_Shop_Panel_Base, bool K2Node_ClassDynamicCast_bSuccess, class URHStoreSectionItem* CallFunc_Array_Get_Item_1, class UWBP_ShopPanel_Base_C* CallFunc_Create_ReturnValue, class URHStorePanelItem* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_GetSortOrder_ReturnValue, class UUniformGridSlot* CallFunc_AddChildToUniformGrid_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct RallyHereIntegration_RH_LootId& CallFunc_GetLootId_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, class UPanelWidget* K2Node_Select_Default_2, bool CallFunc_IsValid_ReturnValue_1);
	void OnVendorsReceived(int32 GroupId, TArray<int32>& VendorIds);
	void OnPortalOffersReceived();
	void OnPricePointsReveived();
	void OnInitialized();
	void ExecuteUbergraph_WBP_ShopView_RealMoney(int32 EntryPoint, int32 K2Node_Event_GroupId, TArray<int32>& K2Node_Event_VendorIds, bool CallFunc_HasAllRequiredStoreInformation_ReturnValue, class URHStoreItemHelper* CallFunc_GetStoreItemHelper_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UValStoreItemHelper* K2Node_DynamicCast_AsVal_Store_Item_Helper, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasAllRequiredStoreInformation_ReturnValue_1);
};

}


