#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_ChallengeProgress.WBP_ChallengeProgress_C
// (None)

class UClass* UWBP_ChallengeProgress_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_ChallengeProgress_C");

	return Clss;
}


// WBP_ChallengeProgress_C WBP_ChallengeProgress.Default__WBP_ChallengeProgress_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_ChallengeProgress_C* UWBP_ChallengeProgress_C::GetDefaultObj()
{
	static class UWBP_ChallengeProgress_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_ChallengeProgress_C*>(UWBP_ChallengeProgress_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_ChallengeProgress.WBP_ChallengeProgress_C.Was There Any Activity Progress
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               AtLeastOneActivityMadeProgress                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AValPlayerController*        CallFunc_GetPlayer_ReturnValue                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UValGameInstance*            K2Node_DynamicCast_AsVal_Game_Instance                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UValActivityPlayerInstance*>CallFunc_GetPlayerActivities_OutActivities                       (ReferenceParm)
// TArray<class UValActivityPlayerInstance*>CallFunc_SortActivities_SortedActivities                         (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UValActivityPlayerInstance*  CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Get_Activity_Start_End_Progress_StartingProgress        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Get_Activity_Start_End_Progress_EndingProgress          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ChallengeProgress_C::Was_There_Any_Activity_Progress(bool* AtLeastOneActivityMadeProgress, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class AValPlayerController* CallFunc_GetPlayer_ReturnValue, class UValGameInstance* K2Node_DynamicCast_AsVal_Game_Instance, bool K2Node_DynamicCast_bSuccess, TArray<class UValActivityPlayerInstance*>& CallFunc_GetPlayerActivities_OutActivities, TArray<class UValActivityPlayerInstance*>& CallFunc_SortActivities_SortedActivities, int32 CallFunc_Array_Length_ReturnValue, class UValActivityPlayerInstance* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Get_Activity_Start_End_Progress_StartingProgress, int32 CallFunc_Get_Activity_Start_End_Progress_EndingProgress, bool CallFunc_Less_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ChallengeProgress_C", "Was There Any Activity Progress");

	Params::UWBP_ChallengeProgress_C_Was_There_Any_Activity_Progress_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.CallFunc_GetPlayer_ReturnValue = CallFunc_GetPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsVal_Game_Instance = K2Node_DynamicCast_AsVal_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetPlayerActivities_OutActivities = CallFunc_GetPlayerActivities_OutActivities;
	Parms.CallFunc_SortActivities_SortedActivities = CallFunc_SortActivities_SortedActivities;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Get_Activity_Start_End_Progress_StartingProgress = CallFunc_Get_Activity_Start_End_Progress_StartingProgress;
	Parms.CallFunc_Get_Activity_Start_End_Progress_EndingProgress = CallFunc_Get_Activity_Start_End_Progress_EndingProgress;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (AtLeastOneActivityMadeProgress != nullptr)
		*AtLeastOneActivityMadeProgress = Parms.AtLeastOneActivityMadeProgress;

}


// Function WBP_ChallengeProgress.WBP_ChallengeProgress_C.Get Activity Start End Progress
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UValActivityPlayerInstance*  Activity                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              StartingProgress                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              EndingProgress                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentProgress_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UValGameInstance*            K2Node_DynamicCast_AsVal_Game_Instance                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentProgress_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetActivityInstanceEndingProgress_OutEndingProgress     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetActivityInstanceEndingProgress_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetActivityInstanceStartingProgress_OutStartingProgress (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetActivityInstanceStartingProgress_ReturnValue         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectInt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectInt_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ChallengeProgress_C::Get_Activity_Start_End_Progress(class UValActivityPlayerInstance* Activity, int32* StartingProgress, int32* EndingProgress, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, int32 CallFunc_GetCurrentProgress_ReturnValue, class UValGameInstance* K2Node_DynamicCast_AsVal_Game_Instance, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetCurrentProgress_ReturnValue_1, int32 CallFunc_GetActivityInstanceEndingProgress_OutEndingProgress, bool CallFunc_GetActivityInstanceEndingProgress_ReturnValue, int32 CallFunc_GetActivityInstanceStartingProgress_OutStartingProgress, bool CallFunc_GetActivityInstanceStartingProgress_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, int32 CallFunc_SelectInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ChallengeProgress_C", "Get Activity Start End Progress");

	Params::UWBP_ChallengeProgress_C_Get_Activity_Start_End_Progress_Params Parms{};

	Parms.Activity = Activity;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.CallFunc_GetCurrentProgress_ReturnValue = CallFunc_GetCurrentProgress_ReturnValue;
	Parms.K2Node_DynamicCast_AsVal_Game_Instance = K2Node_DynamicCast_AsVal_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetCurrentProgress_ReturnValue_1 = CallFunc_GetCurrentProgress_ReturnValue_1;
	Parms.CallFunc_GetActivityInstanceEndingProgress_OutEndingProgress = CallFunc_GetActivityInstanceEndingProgress_OutEndingProgress;
	Parms.CallFunc_GetActivityInstanceEndingProgress_ReturnValue = CallFunc_GetActivityInstanceEndingProgress_ReturnValue;
	Parms.CallFunc_GetActivityInstanceStartingProgress_OutStartingProgress = CallFunc_GetActivityInstanceStartingProgress_OutStartingProgress;
	Parms.CallFunc_GetActivityInstanceStartingProgress_ReturnValue = CallFunc_GetActivityInstanceStartingProgress_ReturnValue;
	Parms.CallFunc_SelectInt_ReturnValue = CallFunc_SelectInt_ReturnValue;
	Parms.CallFunc_SelectInt_ReturnValue_1 = CallFunc_SelectInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (StartingProgress != nullptr)
		*StartingProgress = Parms.StartingProgress;

	if (EndingProgress != nullptr)
		*EndingProgress = Parms.EndingProgress;

}


// Function WBP_ChallengeProgress.WBP_ChallengeProgress_C.ShowButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ChallengeProgress_C::ShowButton(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ChallengeProgress_C", "ShowButton");

	Params::UWBP_ChallengeProgress_C_ShowButton_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ChallengeProgress.WBP_ChallengeProgress_C.ChallengeEntryCompleted
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UWidget*>             LocalChallengeWidgets                                            (Edit, BlueprintVisible, ContainsInstancedReference)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_ChallengeProgressEntry_C*K2Node_DynamicCast_AsWBP_Challenge_Progress_Entry                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)

void UWBP_ChallengeProgress_C::ChallengeEntryCompleted(const TArray<class UWidget*>& LocalChallengeWidgets, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UWBP_ChallengeProgressEntry_C* K2Node_DynamicCast_AsWBP_Challenge_Progress_Entry, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ChallengeProgress_C", "ChallengeEntryCompleted");

	Params::UWBP_ChallengeProgress_C_ChallengeEntryCompleted_Params Parms{};

	Parms.LocalChallengeWidgets = LocalChallengeWidgets;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsWBP_Challenge_Progress_Entry = K2Node_DynamicCast_AsWBP_Challenge_Progress_Entry;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ChallengeProgress.WBP_ChallengeProgress_C.InitiateAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_ChallengeProgress_C::InitiateAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ChallengeProgress_C", "InitiateAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ChallengeProgress.WBP_ChallengeProgress_C.BndEvt__WBP_ChallengeProgress_UI_Button_Menu_Gold_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_ChallengeProgress_C::BndEvt__WBP_ChallengeProgress_UI_Button_Menu_Gold_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ChallengeProgress_C", "BndEvt__WBP_ChallengeProgress_UI_Button_Menu_Gold_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ChallengeProgress.WBP_ChallengeProgress_C.ExecuteUbergraph_WBP_ChallengeProgress
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct SlateCore_Margin            K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValPlayerController*        CallFunc_GetPlayer_ReturnValue                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UValActivityPlayerInstance*>CallFunc_GetPlayerActivities_OutActivities                       (ReferenceParm)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UValGameInstance*            K2Node_DynamicCast_AsVal_Game_Instance                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct Engine_TimerHandle          CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UValGameInstance*            K2Node_DynamicCast_AsVal_Game_Instance_1                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_ChallengeProgressEntry_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<class UValActivityPlayerInstance*>CallFunc_SortActivities_SortedActivities                         (ReferenceParm)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UValActivityPlayerInstance*  CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Get_Activity_Start_End_Progress_StartingProgress        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Get_Activity_Start_End_Progress_EndingProgress          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_B_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_AnimateWithDelay_Delay_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ChallengeProgress_C::ExecuteUbergraph_WBP_ChallengeProgress(int32 EntryPoint, const struct SlateCore_Margin& K2Node_MakeStruct_Margin, int32 Temp_int_Array_Index_Variable, class AValPlayerController* CallFunc_GetPlayer_ReturnValue, int32 Temp_int_Loop_Counter_Variable, TArray<class UValActivityPlayerInstance*>& CallFunc_GetPlayerActivities_OutActivities, int32 CallFunc_Add_IntInt_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UValGameInstance* K2Node_DynamicCast_AsVal_Game_Instance, bool K2Node_DynamicCast_bSuccess, const struct Engine_TimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, class UValGameInstance* K2Node_DynamicCast_AsVal_Game_Instance_1, bool K2Node_DynamicCast_bSuccess_1, class UWBP_ChallengeProgressEntry_C* CallFunc_Create_ReturnValue, TArray<class UValActivityPlayerInstance*>& CallFunc_SortActivities_SortedActivities, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, class UValActivityPlayerInstance* CallFunc_Array_Get_Item, int32 CallFunc_Get_Activity_Start_End_Progress_StartingProgress, int32 CallFunc_Get_Activity_Start_End_Progress_EndingProgress, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast, float CallFunc_AnimateWithDelay_Delay_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ChallengeProgress_C", "ExecuteUbergraph_WBP_ChallengeProgress");

	Params::UWBP_ChallengeProgress_C_ExecuteUbergraph_WBP_ChallengeProgress_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetPlayer_ReturnValue = CallFunc_GetPlayer_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetPlayerActivities_OutActivities = CallFunc_GetPlayerActivities_OutActivities;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_DynamicCast_AsVal_Game_Instance = K2Node_DynamicCast_AsVal_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue_1 = CallFunc_GetGameInstance_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsVal_Game_Instance_1 = K2Node_DynamicCast_AsVal_Game_Instance_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_SortActivities_SortedActivities = CallFunc_SortActivities_SortedActivities;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Get_Activity_Start_End_Progress_StartingProgress = CallFunc_Get_Activity_Start_End_Progress_StartingProgress;
	Parms.CallFunc_Get_Activity_Start_End_Progress_EndingProgress = CallFunc_Get_Activity_Start_End_Progress_EndingProgress;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_B_ImplicitCast = CallFunc_Multiply_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_AnimateWithDelay_Delay_ImplicitCast = CallFunc_AnimateWithDelay_Delay_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ChallengeProgress.WBP_ChallengeProgress_C.SkipButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_ChallengeProgress_C::SkipButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ChallengeProgress_C", "SkipButtonClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ChallengeProgress.WBP_ChallengeProgress_C.ChallengeAnimationCompleted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_ChallengeProgress_C::ChallengeAnimationCompleted__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ChallengeProgress_C", "ChallengeAnimationCompleted__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


