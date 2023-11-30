#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE4 (0x634 - 0x550)
// WidgetBlueprintGeneratedClass WBP_ShopScene.WBP_ShopScene_C
class UWBP_ShopScene_C : public URHWidget
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x550(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetSwitcher*                       GamepadLeftTriggerSwitcher;                        // 0x558(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       GamepadRightTriggerSwitcher;                       // 0x560(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_KeyCallout_C*                     RightTriggerIcon;                                  // 0x568(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Button_Menu_C*                     TabBundles;                                        // 0x570(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Button_Menu_C*                     TabDaily;                                          // 0x578(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Button_Menu_C*                     TabDaily_1;                                        // 0x580(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUniformGridPanel*                     TabGroup;                                          // 0x588(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Shared_Currency_C*                 UI_Shared_Currency;                                // 0x590(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Shared_Currency_C*                 UI_Shared_Currency_1;                              // 0x598(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       ViewSwitcher;                                      // 0x5A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ShopView_RealMoney_C*             WBP_ShopView_RealMoney;                            // 0x5A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ShopView_Daily_C*                 WBP_StoreView_Daily;                               // 0x5B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ACameraActor*                          My_Camera;                                         // 0x5B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FName                                  CameraTag;                                         // 0x5C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ASceneCapture2D*>               CachedShopCaptures;                                // 0x5C8(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TMap<int32, class UUI_Button_Menu_C*>        TabValueMap;                                       // 0x5D8(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	int32                                        CurrentViewIndex;                                  // 0x628(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bBoundAppSettings;                                 // 0x62C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E94[0x3];                                     // Fixing Size After Last Property  
	int32                                        SuitSkinsFocusGroup;                               // 0x630(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_ShopScene_C* GetDefaultObj();

	void BindPromptCycleAction(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class URHInputManager* CallFunc_GetInputManager_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void HandleNavLeft(bool NextIsTarget, bool Temp_bool_Variable, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, class UUI_Button_Menu_C* K2Node_DynamicCast_AsUI_Button_Menu, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_GetIsEnabled_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue);
	void HandleNavRight(bool NextIsTarget, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Variable, class UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, class UUI_Button_Menu_C* K2Node_DynamicCast_AsUI_Button_Menu, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_GetIsEnabled_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue);
	void BindInputState(bool CallFunc_IsValid_ReturnValue, enum class ERH_INPUT_STATE CallFunc_GetCurrentInputState_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void HandleInputStateChanged(enum class ERH_INPUT_STATE InputState, bool Temp_bool_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	void BindAppSettings(class URH_GameInstanceSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class URH_ConfigSubsystem* CallFunc_GetConfigSubsystem_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void UpdateBundlesTabEnabled(class URH_ConfigSubsystem* ConfigSubsystem, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_GetAppSetting_Value, bool CallFunc_GetAppSetting_ReturnValue, bool CallFunc_EqualEqual_StriStri_ReturnValue);
	void NavigateToTokens();
	void UpdateView(int32 Index, bool bForce, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class UUI_Button_Menu_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UUI_Button_Menu_C* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1);
	void OnTabSelected(int32 Value, bool CallFunc_NotEqual_IntInt_ReturnValue);
	void BindNavTabs(const TArray<class UWidget*>& NewLocalVar, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UWidget* CallFunc_Array_Get_Item, class UUI_Button_Menu_C* K2Node_DynamicCast_AsUI_Button_Menu, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue);
	void OnShown(const struct Engine_TimerHandle& CallFunc_K2_SetTimer_ReturnValue);
	void RequestShopItems(class AValPlayerController* CallFunc_GetPlayer_ReturnValue, class AValPlayerController* CallFunc_GetPlayer_ReturnValue_1, class AValPlayerController_City* K2Node_DynamicCast_AsVal_Player_Controller_City, bool K2Node_DynamicCast_bSuccess, class AValPlayerController_City* K2Node_DynamicCast_AsVal_Player_Controller_City_1, bool K2Node_DynamicCast_bSuccess_1, class UValPreviewManager* CallFunc_GetPreviewManager_ReturnValue, class UValPreviewManager* CallFunc_GetPreviewManager_ReturnValue_1, bool CallFunc_IsEditorBuild_ReturnValue, class AValPlayerController* CallFunc_GetPlayer_ReturnValue_2, class AValShopManager* CallFunc_GetShopManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<struct Valhalla_InventoryItem>& CallFunc_GetWeaponSkins_WeaponSkins, TArray<struct Valhalla_InventoryItem>& CallFunc_GetSuitSkins_SuitSkins);
	void GetShopCapture(TArray<class ASceneCapture2D*>* ShopCaptures, TArray<class ASceneCapture2D*>& CallFunc_GetAllActorsOfClass_OutActors, bool CallFunc_Array_IsNotEmpty_ReturnValue);
	void UpdateCamera(int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, TArray<class ACameraActor*>& CallFunc_GetAllActorsOfClassWithTag_OutActors, class ACameraActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void UpdateRender(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class ASceneCapture2D*>& CallFunc_GetShopCapture_ShopCaptures, int32 CallFunc_Array_Length_ReturnValue, class ASceneCapture2D* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	bool NavigateBack(bool CallFunc_RemoveTopViewRoute_ReturnValue, bool CallFunc_NavigateBack_ReturnValue);
	void HandleBackButtonPressed(bool CallFunc_NavigateBack_ReturnValue);
	void OnHudBindingReady();
	void OnPromptCycleAction(bool bNext);
	void FocusGroupNavigateDownFailure(int32 FocusGroup);
	void FocusGroupNavigateUpFailure(int32 FocusGroup);
	void InitializeWidget();
	void ExecuteUbergraph_WBP_ShopScene(int32 EntryPoint, class URH_GameInstanceSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class URH_ConfigSubsystem* CallFunc_GetConfigSubsystem_ReturnValue, bool K2Node_CustomEvent_bNext, int32 K2Node_Event_FocusGroup_1, TArray<class FName>& K2Node_MakeArray_Array, int32 K2Node_Event_FocusGroup, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class URH_GameInstanceSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, class URH_ConfigSubsystem* CallFunc_GetConfigSubsystem_ReturnValue_1);
};

}


