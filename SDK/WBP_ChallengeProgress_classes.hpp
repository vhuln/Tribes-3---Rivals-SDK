#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x9C (0x5EC - 0x550)
// WidgetBlueprintGeneratedClass WBP_ChallengeProgress.WBP_ChallengeProgress_C
class UWBP_ChallengeProgress_C : public URHWidget
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x550(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      AnimShowButton;                                    // 0x558(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UVerticalBox*                          ChallengeContainer;                                // 0x560(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            PlayerLevelText;                                   // 0x568(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Button_Menu_Gold_C*                UI_Button_Menu_Gold;                               // 0x570(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ChallengeProgressEntry_C*         WBP_ChallengeProgressEntry;                        // 0x578(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ChallengeProgressEntry_C*         WBP_ChallengeProgressEntry_1;                      // 0x580(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ChallengeProgressEntry_C*         WBP_ChallengeProgressEntry_2;                      // 0x588(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ChallengeProgressEntry_C*         WBP_ChallengeProgressEntry_3;                      // 0x590(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ChallengeProgressEntry_C*         WBP_ChallengeProgressEntry_4;                      // 0x598(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ChallengeProgressEntry_C*         WBP_ChallengeProgressEntry_5;                      // 0x5A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ChallengeProgressEntry_C*         WBP_ChallengeProgressEntry_6;                      // 0x5A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                        DelayIncrement;                                    // 0x5B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B7F[0x4];                                     // Fixing Size After Last Property  
	FMulticastInlineDelegateProperty_            ChallengeAnimationCompleted;                       // 0x5B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         bAllChallengesComplete;                            // 0x5C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3BA5[0x7];                                     // Fixing Size After Last Property  
	struct Engine_TimerHandle                    ButtonDelayTimer;                                  // 0x5D0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            SkipButtonClicked;                                 // 0x5D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                        CachedNumWidgets;                                  // 0x5E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_ChallengeProgress_C* GetDefaultObj();

	void Was_There_Any_Activity_Progress(bool* AtLeastOneActivityMadeProgress, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class AValPlayerController* CallFunc_GetPlayer_ReturnValue, class UValGameInstance* K2Node_DynamicCast_AsVal_Game_Instance, bool K2Node_DynamicCast_bSuccess, TArray<class UValActivityPlayerInstance*>& CallFunc_GetPlayerActivities_OutActivities, TArray<class UValActivityPlayerInstance*>& CallFunc_SortActivities_SortedActivities, int32 CallFunc_Array_Length_ReturnValue, class UValActivityPlayerInstance* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Get_Activity_Start_End_Progress_StartingProgress, int32 CallFunc_Get_Activity_Start_End_Progress_EndingProgress, bool CallFunc_Less_IntInt_ReturnValue_1);
	void Get_Activity_Start_End_Progress(class UValActivityPlayerInstance* Activity, int32* StartingProgress, int32* EndingProgress, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, int32 CallFunc_GetCurrentProgress_ReturnValue, class UValGameInstance* K2Node_DynamicCast_AsVal_Game_Instance, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetCurrentProgress_ReturnValue_1, int32 CallFunc_GetActivityInstanceEndingProgress_OutEndingProgress, bool CallFunc_GetActivityInstanceEndingProgress_ReturnValue, int32 CallFunc_GetActivityInstanceStartingProgress_OutStartingProgress, bool CallFunc_GetActivityInstanceStartingProgress_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, int32 CallFunc_SelectInt_ReturnValue_1);
	void ShowButton(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void ChallengeEntryCompleted(const TArray<class UWidget*>& LocalChallengeWidgets, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UWBP_ChallengeProgressEntry_C* K2Node_DynamicCast_AsWBP_Challenge_Progress_Entry, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue);
	void InitiateAnim();
	void BndEvt__WBP_ChallengeProgress_UI_Button_Menu_Gold_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void ExecuteUbergraph_WBP_ChallengeProgress(int32 EntryPoint, const struct SlateCore_Margin& K2Node_MakeStruct_Margin, int32 Temp_int_Array_Index_Variable, class AValPlayerController* CallFunc_GetPlayer_ReturnValue, int32 Temp_int_Loop_Counter_Variable, TArray<class UValActivityPlayerInstance*>& CallFunc_GetPlayerActivities_OutActivities, int32 CallFunc_Add_IntInt_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UValGameInstance* K2Node_DynamicCast_AsVal_Game_Instance, bool K2Node_DynamicCast_bSuccess, const struct Engine_TimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, class UValGameInstance* K2Node_DynamicCast_AsVal_Game_Instance_1, bool K2Node_DynamicCast_bSuccess_1, class UWBP_ChallengeProgressEntry_C* CallFunc_Create_ReturnValue, TArray<class UValActivityPlayerInstance*>& CallFunc_SortActivities_SortedActivities, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, class UValActivityPlayerInstance* CallFunc_Array_Get_Item, int32 CallFunc_Get_Activity_Start_End_Progress_StartingProgress, int32 CallFunc_Get_Activity_Start_End_Progress_EndingProgress, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast, float CallFunc_AnimateWithDelay_Delay_ImplicitCast);
	void SkipButtonClicked__DelegateSignature();
	void ChallengeAnimationCompleted__DelegateSignature();
};

}


