#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x81 (0x5D1 - 0x550)
// WidgetBlueprintGeneratedClass WBP_PlayerStatus_ContextMenu.WBP_PlayerStatus_ContextMenu_C
class UWBP_PlayerStatus_ContextMenu_C : public URHWidget
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x550(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      ShowAnim;                                          // 0x558(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                            OnlineStatus;                                      // 0x560(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                OptionsBg;                                         // 0x568(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          OptionsContainer;                                  // 0x570(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              OuterMenuContainer;                                // 0x578(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnReadyNavigation;                                 // 0x580(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnMenuHidden;                                      // 0x590(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnMenuStart;                                       // 0x5A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class URH_PlayerInfo*                        LocalPlayerInfo;                                   // 0x5B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UDataTable*                            StatusColors;                                      // 0x5B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class UWBP_PlayerStatus_ContextMenuOption_C*> OptionButtons;                                     // 0x5C0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                         IsOpen;                                            // 0x5D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_PlayerStatus_ContextMenu_C* GetDefaultObj();

	void GetStatusColor(enum class ERHPlayerOnlineStatus PlayerStatus, struct SlateCore_SlateColor* StatusColor, enum class ERHPlayerOnlineStatus Temp_byte_Variable, class FName Temp_name_Variable, class FName Temp_name_Variable_1, class FName Temp_name_Variable_2, class FName Temp_name_Variable_3, class FName Temp_name_Variable_4, class FName Temp_name_Variable_5, class FName Temp_name_Variable_6, class FName Temp_name_Variable_7, class FName Temp_name_Variable_8, class FName Temp_name_Variable_9, class FName Temp_name_Variable_10, const struct SlateCore_SlateColor& K2Node_MakeStruct_SlateColor, class FName K2Node_Select_Default, const struct ColorEntry_ColorEntry& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue);
	void UpdatePlayerStatus(class URH_LocalPlayerSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class ERHPlayerOnlineStatus CallFunc_GetPlayerOnlineStatus_ReturnValue, const struct SlateCore_SlateColor& CallFunc_GetStatusColor_StatusColor, class FText CallFunc_GetPlayerStatusMessage_ReturnValue);
	void HideContextMenu(bool CallFunc_IsVisible_ReturnValue);
	void ShowContextMenu(class UWBP_PlayerStatus_ContextMenuOption_C* CallFunc_Array_Get_Item, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void HandleOptionSelected(enum class EPlayerStatusOption EPlayerStatus, class FName CallFunc_MakeLiteralName_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class ARHLobbyHUD* K2Node_DynamicCast_AsRHLobby_HUD, bool K2Node_DynamicCast_bSuccess, class URH_LocalPlayerSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, class URHSettingsDataFactory* CallFunc_GetSettingsDataFactory_ReturnValue, enum class ERHPlayerOnlineStatus CallFunc_GetPlayerOnlineStatus_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void SetupOptionButton(int32 Temp_int_Variable, int32 Temp_int_Variable_1, uint8 CallFunc_Conv_IntToByte_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, uint8 CallFunc_GetEnumeratorValueFromIndex_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, class UWBP_PlayerStatus_ContextMenuOption_C* CallFunc_Create_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, int32 CallFunc_MakeLiteralInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void InitializeWidget();
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void SetPlayerInfo(class URH_PlayerInfo* PlayerInfo);
	void DetermineToggleState();
	void ExecuteUbergraph_WBP_PlayerStatus_ContextMenu(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool K2Node_Event_IsDesignTime, class URH_PlayerInfo* K2Node_CustomEvent_PlayerInfo);
	void OnMenuStart__DelegateSignature(class UWBP_PlayerStatus_ContextMenuOption_C* FirstFocusableButton);
	void OnReadyNavigation__DelegateSignature(TArray<class UWBP_PlayerStatus_ContextMenuOption_C*>& StatusButtons);
	void OnMenuHidden__DelegateSignature();
};

}


