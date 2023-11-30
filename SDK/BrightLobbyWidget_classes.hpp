#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC0 (0x610 - 0x550)
// WidgetBlueprintGeneratedClass BrightLobbyWidget.BrightLobbyWidget_C
class UBrightLobbyWidget_C : public URHLobbyWidget
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x550(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class URHCanvasPanel*                        AlwaysPersistent;                                  // 0x558(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URHCanvasPanel*                        AlwaysVisibile;                                    // 0x560(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                bkg;                                               // 0x568(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBlocker_C*                            Blocker;                                           // 0x570(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBrightLobbyHeader_C*                  BrightLobbyHeader;                                 // 0x578(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URHCanvasPanel*                        Content;                                           // 0x580(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_local_player_card_C*              PlayerCard;                                        // 0x588(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URHCanvasPanel*                        PopupContent;                                      // 0x590(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPopupManager_C*                       PopupManager;                                      // 0x598(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URHCanvasPanel*                        StickyContent;                                     // 0x5A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URHCanvasPanel*                        StickyContentTop;                                  // 0x5A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ToastNotification_Manager_C*      ToastNotificationManager;                          // 0x5B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Context_Bar_C*                    WBP_Context_Bar;                                   // 0x5B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_QueueTimer_v2_C*                  WBP_QueueTimer_v2;                                 // 0x5C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_TopNavBar_C*                      WBP_TopNavBar;                                     // 0x5C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_VersionNumber_C*                  WBP_VersionNumber;                                 // 0x5D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct CoreUObject_Vector2D                  Latest_Viewport_Size;                              // 0x5D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            BackButtonClicked;                                 // 0x5E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<struct RallyHereStart_StickyWidgetData> StickyWidgets;                                     // 0x5F8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UDataTable*                            LobbyViewTable;                                    // 0x608(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBrightLobbyWidget_C* GetDefaultObj();

	void SetErrorMessageDT();
	void UninitializeSubWidgets(class UPanelWidget* Container, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, class URHWidget* K2Node_DynamicCast_AsRHWidget, bool K2Node_DynamicCast_bSuccess, bool CallFunc_LessEqual_IntInt_ReturnValue);
	void InitializeSubWidgets(class UPanelWidget* Container, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, class URHWidget* K2Node_DynamicCast_AsRHWidget, bool K2Node_DynamicCast_bSuccess, class UPanelWidget* K2Node_DynamicCast_AsPanel_Widget, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_LessEqual_IntInt_ReturnValue);
	void HidePersistentWidgets(int32 Temp_int_Variable, class UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, class URHWidget* K2Node_DynamicCast_AsRHWidget, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_IsVisible_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void UninitializeKSWidgets();
	void InitializeKSWidgets();
	void CreateStickyWidgetData(const struct RallyHereStart_StickyWidgetData& K2Node_MakeStruct_StickyWidgetData, int32 CallFunc_Array_Add_ReturnValue, const struct RallyHereStart_StickyWidgetData& K2Node_MakeStruct_StickyWidgetData_1, int32 CallFunc_Array_Add_ReturnValue_1, const struct RallyHereStart_StickyWidgetData& K2Node_MakeStruct_StickyWidgetData_2, int32 CallFunc_Array_Add_ReturnValue_2, const struct RallyHereStart_StickyWidgetData& K2Node_MakeStruct_StickyWidgetData_3, int32 CallFunc_Array_Add_ReturnValue_3, const struct RallyHereStart_StickyWidgetData& K2Node_MakeStruct_StickyWidgetData_4, int32 CallFunc_Array_Add_ReturnValue_4);
	void Set_Safe_Frame(double Scale);
	void UninitializeWidget();
	void OnShown();
	void HandleSpecialRouteCases(class FName CurrentRoute, class FName LastRoute, enum class EViewManagerLayer Layer);
	void Tick(const struct SlateCore_Geometry& MyGeometry, float InDeltaTime);
	void HandleViewStateChangeStarted(class FName CurrentRoute, class FName NextRoute, enum class EViewManagerLayer Layer);
	void OnHudBindingReady();
	void ExecuteUbergraph_BrightLobbyWidget(int32 EntryPoint, class URHViewManager* CallFunc_SpawnObject_ReturnValue, class FName K2Node_CustomEvent_CurrentRoute_1, class FName K2Node_CustomEvent_LastRoute, enum class EViewManagerLayer K2Node_CustomEvent_Layer_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, const struct SlateCore_Geometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class FName K2Node_CustomEvent_CurrentRoute, class FName K2Node_CustomEvent_NextRoute, enum class EViewManagerLayer K2Node_CustomEvent_Layer, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_EqualEqual_NameName_ReturnValue_1, bool CallFunc_EqualEqual_NameName_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, TArray<class UCanvasPanel*>& K2Node_MakeArray_Array, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class ESlateVisibility Temp_byte_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, class URHInputManager* CallFunc_GetInputManager_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, class URHInputManager* CallFunc_GetInputManager_ReturnValue_1, class URHInputManager* CallFunc_GetInputManager_ReturnValue_2, class URHInputManager* CallFunc_GetInputManager_ReturnValue_3, bool CallFunc_DoesDataTableRowExist_ReturnValue, bool CallFunc_DoesDataTableRowExist_ReturnValue_1);
	void BackButtonClicked__DelegateSignature();
};

}


