#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x548 - 0x4F8)
// BlueprintGeneratedClass BP_BrightLobbyHUD.BP_BrightLobbyHUD_C
class ABP_BrightLobbyHUD_C : public ABP_BrightLobbyHUDMinimal_C
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x4F8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBrightLobbyWidget_C*                  LobbyWidget;                                       // 0x500(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	uint8                                        Loadout_Slot_Edit;                                 // 0x508(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3A1B[0x7];                                     // Fixing Size After Last Property  
	FMulticastInlineDelegateProperty_            Loadout_Slot_Change;                               // 0x510(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FName                                  MatchLoadingRouteName;                             // 0x520(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          ClearPendingRouteDataOnSwap;                       // 0x528(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class URH_LocalPlayerSessionSubsystem*       PCSessionSubsystem;                                // 0x538(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class URH_LocalPlayerSessionSubsystem*       LocalPlayerSessionSubsystem;                       // 0x540(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_BrightLobbyHUD_C* GetDefaultObj();

	class URHPopupManager* GetPopupManager();
	void RefreshJson();
	void ShouldDisplayGameSelect(bool* bShouldShowGameSelect, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UValGameInstance* K2Node_DynamicCast_AsVal_Game_Instance, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue);
	void ShouldDisplayMatchLoading(bool* ShouldDisplay, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ABP_ValPlayerController_City_C* K2Node_DynamicCast_AsBP_Val_Player_Controller_City, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_GetRemoteLobbyQueueId_ReturnValue, bool CallFunc_NotEqual_StriStri_ReturnValue);
	bool Is_in_EOM_View_State(TArray<class FName>& K2Node_MakeArray_Array, class FName CallFunc_GetCurrentTransitionRoute_Current_Route, class FName CallFunc_Get_Current_View_Route_Current_Route, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Array_Contains_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue);
	void SetupQueueEvents(class URHQueueDataFactory* CallFunc_GetQueueDataFactory_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void CallRemoveTopViewRoute(bool ForceTransition, bool* ViewChanged, bool CallFunc_Remove_Top_View_Route_ViewChanged);
	void CallAddViewRoute(class FName RouteName, bool ClearRouteStack, bool ForceTransition, bool* ViewChanged, bool CallFunc_Add_View_Route_ViewChanged);
	void SafeFrameSettingApplied();
	void BindSettingCallbacks(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct RallyHereStart_SettingDelegateStruct& K2Node_MakeStruct_SettingDelegateStruct);
	void InternalAddViewRoute(class FName RouteName, bool ClearRouteStack, bool ForceTransition, class UObject* Data, bool* ViewChanged, class FName NewViewRoute, class FName PreviousViewRoute, class FName CallFunc_GetTopViewRoute_ReturnValue, bool CallFunc_AddViewRoute_ReturnValue);
	void OnAcquisition(class UObject* Acquisition);
	void SwapViewRoute(class FName RouteName, class FName SwapTargetRoute, bool ForceTransition, class URHViewManager* CallFunc_GetViewManager_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_SwapViewRoute_ReturnValue);
	void Remove_Top_View_Route(bool ForceTransition, bool* ViewChanged, class FName Temp_name_Variable, class FName Temp_name_Variable_1, bool CallFunc_Not_PreBool_ReturnValue, class URHLoginDataFactory* CallFunc_GetLoginDataFactory_ReturnValue, bool CallFunc_IsLoggedIn_ReturnValue, bool Temp_bool_Variable, class FName CallFunc_GetTopViewRoute_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, class FName K2Node_Select_Default, bool CallFunc_Add_View_Route_ViewChanged, int32 CallFunc_GetViewRouteCount_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_RemoveTopViewRoute_ReturnValue);
	void Add_View_Route(class FName RouteName, bool ClearRouteStack, bool ForceTransition, bool* ViewChanged, bool CallFunc_InternalAddViewRoute_ViewChanged);
	void GetCurrentTransitionRoute(class FName* Current_Route, class FName CallFunc_GetCurrentTransitionRoute_ReturnValue);
	class URHLobbyWidget* GetLobbyWidget();
	void Focus_Home_Screen();
	void Get_Current_View_Route(class FName* Current_Route, class FName CallFunc_GetCurrentRoute_ReturnValue);
	void Focus_Sticky_Loadout_Panel(class UWidget* CallFunc_SetFocusToThis_ReturnValue);
	void Get_Current_Loadout_Slot(uint8* Current_Loadout_Slot);
	void Cache_Current_Loadout_Slot(uint8 Loadout_Slot_Edit);
	void TempBootstrapFunctionality();
	void FallbackLogoutCleanup(int32 Temp_int_Array_Index_Variable, TArray<class UPanelWidget*>& CallFunc_GetFocusableWidgetContainers_ReturnValue, int32 Temp_int_Variable, class UPanelWidget* CallFunc_Array_Get_Item, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1);
	TArray<class UPanelWidget*> GetFocusableWidgetContainers(TArray<class UPanelWidget*>& CallFunc_GetFocusableWidgetContainers_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<class UPanelWidget*>& K2Node_MakeArray_Array);
	void Handle_Login_State_Change(enum class ERHLoginState Login_State, bool CallFunc_Add_View_Route_ViewChanged, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Add_View_Route_ViewChanged_1, bool CallFunc_Add_View_Route_ViewChanged_2);
	void Handle_Party_Invite_Received(class URH_PlayerInfo* Inviter);
	void ReceiveBeginPlay();
	void ApplySafeFrameScale(float SafeFrameScale);
	void OnCustomQueueJoin();
	void EvaluateFocus();
	void HandleMatchStatusUpdated(enum class ERH_MatchStatus MatchStatus);
	void InitializeHudResources();
	void ExecuteUbergraph_BP_BrightLobbyHUD(int32 EntryPoint, class URH_GameInstanceSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class URH_ConfigSubsystem* CallFunc_GetConfigSubsystem_ReturnValue, const class FString& CallFunc_GetAppSetting_Value, bool CallFunc_GetAppSetting_ReturnValue, bool CallFunc_EqualEqual_StriStri_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Add_View_Route_ViewChanged, bool CallFunc_Not_PreBool_ReturnValue, float K2Node_Event_SafeFrameScale, class URHViewManager* CallFunc_GetViewManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_RemoveRoute_ReturnValue, class URHViewManager* CallFunc_GetViewManager_ReturnValue_1, bool CallFunc_ReplaceRoute_ReturnValue, enum class ERH_MatchStatus K2Node_Event_MatchStatus, class URHQueueDataFactory* CallFunc_GetQueueDataFactory_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsInCustomMatch_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_IsHudReadyForBinding_ReturnValue, bool CallFunc_ShouldDisplayMatchLoading_ShouldDisplay, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class ERHAPI_Platform CallFunc_GetLoggedInPlatformId_ReturnValue, class APlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class AValPlayerController* CallFunc_GetPlayer_ReturnValue, class URH_LocalPlayerSubsystem* CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue, class AValInventoryManager* CallFunc_GetInventoryManager_ReturnValue, class URH_LocalPlayerSessionSubsystem* CallFunc_GetSessionSubsystem_ReturnValue, bool CallFunc_IsItemIdInInventoryMap_ReturnValue, TArray<class URH_SessionView*>& CallFunc_GetSessionsByType_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, class URH_PlayerInfo* K2Node_CustomEvent_Inviter, bool CallFunc_IsValid_ReturnValue_2, const class FString& CallFunc_BLUEPRINT_GetLastKnownDisplayName_OutDisplayName, bool CallFunc_BLUEPRINT_GetLastKnownDisplayName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class APlayerController* CallFunc_GetOwningPlayerController_ReturnValue_1, class APlayerController* CallFunc_GetOwningPlayerController_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UBrightLobbyWidget_C* CallFunc_Create_ReturnValue, class URHLoginDataFactory* CallFunc_GetLoginDataFactory_ReturnValue, enum class ERHLoginState CallFunc_GetCurrentLoginState_ReturnValue, bool CallFunc_AddToPlayerScreen_ReturnValue, class URHPartyManager* CallFunc_GetPartyManager_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, double CallFunc_Set_Safe_Frame_Scale_ImplicitCast);
	void Loadout_Slot_Change__DelegateSignature(uint8 Loadout_Slot_Edit);
};

}


