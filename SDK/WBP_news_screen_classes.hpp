#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x90 (0x5F8 - 0x568)
// WidgetBlueprintGeneratedClass WBP_news_screen.WBP_news_screen_C
class UWBP_news_screen_C : public URHWhatsNewModal
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x568(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                FeaturedImage;                                     // 0x570(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              FooterBackground;                                  // 0x578(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          HeaderBlock;                                       // 0x580(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                HeaderBreak;                                       // 0x588(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              HeaderOverlay;                                     // 0x590(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            HeaderText;                                        // 0x598(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalContainer;                               // 0x5A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URHUnsafeZone*                         PUMG_UnsafeZone_0;                                 // 0x5A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            SubheaderText;                                     // 0x5B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Button_Menu_Gold_C*                UI_Button_Menu_Gold;                               // 0x5B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalLeftContainer;                             // 0x5C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalRightContainer;                            // 0x5C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class ERHLoginState                     LoginState;                                        // 0x5D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_364B[0x7];                                     // Fixing Size After Last Property  
	TArray<class URHWhatsNewPanel*>              CachedPanels;                                      // 0x5D8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class URHWhatsNewPanel*>              PanelData;                                         // 0x5E8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UWBP_news_screen_C* GetDefaultObj();

	void SetupHeader(class URHWhatsNewPanel* NewsData, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, class UVerticalBoxSlot* CallFunc_SlotAsVerticalBoxSlot_ReturnValue, class UVerticalBoxSlot* CallFunc_SlotAsVerticalBoxSlot_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue_1, bool CallFunc_TextIsEmpty_ReturnValue);
	bool NavigateBack(bool CallFunc_EqualEqual_ByteByte_ReturnValue, class ABP_BrightLobbyHUD_C* K2Node_DynamicCast_AsBP_Bright_Lobby_HUD, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_Remove_Top_View_Route_ViewChanged, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Add_View_Route_ViewChanged, bool CallFunc_NavigateBack_ReturnValue);
	void SetNavigationFocus(class UWidget* Widget);
	void Populate_Panel(class URHWhatsNewPanel* NewsData, int32 SubPanelDescFontSize, int32 SubPanelHeaderFontSize, int32 NumSubPanels, enum class EVerticalAlignment SubPanelVerticalAlignment, const struct SlateCore_Margin& SubPanelPadding, double SubPanelHeight, double SubPanelWidth, class UPanelWidget* SubPanelContainer, const struct SlateCore_Margin& K2Node_MakeStruct_Margin, const struct SlateCore_Margin& K2Node_MakeStruct_Margin_1, const struct SlateCore_Margin& K2Node_MakeStruct_Margin_2, const struct SlateCore_Margin& K2Node_MakeStruct_Margin_3, const struct SlateCore_Margin& K2Node_MakeStruct_Margin_4, bool K2Node_SwitchInteger_CmpSuccess, bool K2Node_SwitchInteger_CmpSuccess_1, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, class UWBP_news_article_C* CallFunc_Create_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UVerticalBoxSlot* K2Node_DynamicCast_AsVertical_Box_Slot, bool K2Node_DynamicCast_bSuccess, class UHorizontalBoxSlot* K2Node_DynamicCast_AsHorizontal_Box_Slot, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct RallyHereStart_SubPanel& CallFunc_Array_Get_Item);
	void InitializeWidget();
	void InitializeWidgetNavigation();
	void OnJsonChanged();
	void HandleLoginStateChange(enum class ERHLoginState NewLoginState);
	void BndEvt__WBP_news_screen_UI_Button_Menu_Gold_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
	void Refresh_News_Info();
	void OnPanelDataRetrieved(TArray<class URHWhatsNewPanel*>& PanelData);
	void ExecuteUbergraph_WBP_news_screen(int32 EntryPoint, TArray<class URHWhatsNewPanel*>& K2Node_CustomEvent_PanelData, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, enum class ERHLoginState K2Node_CustomEvent_NewLoginState, bool CallFunc_NavigateBack_ReturnValue, class URHLoginDataFactory* CallFunc_GetLoginDataFactory_ReturnValue, enum class ERHLoginState CallFunc_GetCurrentLoginState_ReturnValue, bool CallFunc_NavigateBack_ReturnValue_1, bool CallFunc_Array_IsValidIndex_ReturnValue, class URHWhatsNewPanel* CallFunc_Array_Get_Item);
};

}


