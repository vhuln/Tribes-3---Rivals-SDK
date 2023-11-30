#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x31 (0x5C1 - 0x590)
// WidgetBlueprintGeneratedClass WBP_ToastNotification_Manager.WBP_ToastNotification_Manager_C
class UWBP_ToastNotification_Manager_C : public URHToastNotificationWidgetBase
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x590(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      MobileLayout;                                      // 0x598(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UVerticalBox*                          ChallengeNotificationContainer;                    // 0x5A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          NotificationContainer;                             // 0x5A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class FText>                          LocalizeTexts;                                     // 0x5B0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         CanDisplaySocialToasts;                            // 0x5C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_ToastNotification_Manager_C* GetDefaultObj();

	void PushAwardsEarnedInMatch(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct RallyHereStart_ToastData>& CallFunc_GetPostMatchToasts_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct RallyHereStart_ToastData& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void DisplayChallengeToast(class UWBP_Toast2_C* Toast, class UPanelSlot* CallFunc_AddChild_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
	void DisplayToast(class UWBP_ToastNotifcation_Entry_C* Toast, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct SlateCore_Margin& K2Node_MakeStruct_Margin, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UPanelSlot* CallFunc_AddChild_ReturnValue);
	void OnToastNotificationReceived(const struct RallyHereStart_ToastData& ToastData);
	void HandleToastNotificationRemove(class URHWidget* ToastNotification);
	void OnToastIntroAnimFinished();
	void Construct();
	void HandleChallengeToastNotificationRemove(class URHWidget* ToastNotification);
	void ExecuteUbergraph_WBP_ToastNotification_Manager(int32 EntryPoint, const struct RallyHereStart_ToastData& K2Node_Event_ToastData, class UWBP_ToastNotifcation_Entry_C* CallFunc_Create_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class URHWidget* K2Node_CustomEvent_ToastNotification_1, class UWBP_Toast2_C* CallFunc_Create_ReturnValue_1, bool CallFunc_RemoveChild_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class URHWidget* K2Node_CustomEvent_ToastNotification, bool CallFunc_RemoveChild_ReturnValue_1);
};

}


