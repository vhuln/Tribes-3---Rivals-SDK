#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_LevelUpCelebration.WBP_LevelUpCelebration_C
// (None)

class UClass* UWBP_LevelUpCelebration_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_LevelUpCelebration_C");

	return Clss;
}


// WBP_LevelUpCelebration_C WBP_LevelUpCelebration.Default__WBP_LevelUpCelebration_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_LevelUpCelebration_C* UWBP_LevelUpCelebration_C::GetDefaultObj()
{
	static class UWBP_LevelUpCelebration_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_LevelUpCelebration_C*>(UWBP_LevelUpCelebration_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_LevelUpCelebration.WBP_LevelUpCelebration_C.InitiateLevelUpCelebration
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              StartingTier                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              EndingTier                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_LevelUpCelebration_C::InitiateLevelUpCelebration(int32 StartingTier, int32 EndingTier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LevelUpCelebration_C", "InitiateLevelUpCelebration");

	Params::UWBP_LevelUpCelebration_C_InitiateLevelUpCelebration_Params Parms{};

	Parms.StartingTier = StartingTier;
	Parms.EndingTier = EndingTier;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_LevelUpCelebration.WBP_LevelUpCelebration_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*            Animation                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_LevelUpCelebration_C::OnAnimationFinished(class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LevelUpCelebration_C", "OnAnimationFinished");

	Params::UWBP_LevelUpCelebration_C_OnAnimationFinished_Params Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_LevelUpCelebration.WBP_LevelUpCelebration_C.OnAnimFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_LevelUpCelebration_C::OnAnimFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LevelUpCelebration_C", "OnAnimFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_LevelUpCelebration.WBP_LevelUpCelebration_C.ExecuteUbergraph_WBP_LevelUpCelebration
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimation*            K2Node_Event_Animation                                           (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_StartingTier                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_EndingTier                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_1                            (None)
// float                              CallFunc_GetEndTime_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct Engine_TimerHandle          CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)

void UWBP_LevelUpCelebration_C::ExecuteUbergraph_WBP_LevelUpCelebration(int32 EntryPoint, class UWidgetAnimation* K2Node_Event_Animation, int32 K2Node_CustomEvent_StartingTier, int32 K2Node_CustomEvent_EndingTier, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_1, float CallFunc_GetEndTime_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct Engine_TimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LevelUpCelebration_C", "ExecuteUbergraph_WBP_LevelUpCelebration");

	Params::UWBP_LevelUpCelebration_C_ExecuteUbergraph_WBP_LevelUpCelebration_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Animation = K2Node_Event_Animation;
	Parms.K2Node_CustomEvent_StartingTier = K2Node_CustomEvent_StartingTier;
	Parms.K2Node_CustomEvent_EndingTier = K2Node_CustomEvent_EndingTier;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue_1 = CallFunc_Conv_IntToText_ReturnValue_1;
	Parms.CallFunc_GetEndTime_ReturnValue = CallFunc_GetEndTime_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_LevelUpCelebration.WBP_LevelUpCelebration_C.OnAnimComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_LevelUpCelebration_C::OnAnimComplete__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LevelUpCelebration_C", "OnAnimComplete__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


