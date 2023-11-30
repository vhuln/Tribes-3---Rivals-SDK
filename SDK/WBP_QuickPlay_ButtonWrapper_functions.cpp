#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_QuickPlay_ButtonWrapper.WBP_QuickPlay_ButtonWrapper_C
// (None)

class UClass* UWBP_QuickPlay_ButtonWrapper_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_QuickPlay_ButtonWrapper_C");

	return Clss;
}


// WBP_QuickPlay_ButtonWrapper_C WBP_QuickPlay_ButtonWrapper.Default__WBP_QuickPlay_ButtonWrapper_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_QuickPlay_ButtonWrapper_C* UWBP_QuickPlay_ButtonWrapper_C::GetDefaultObj()
{
	static class UWBP_QuickPlay_ButtonWrapper_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_QuickPlay_ButtonWrapper_C*>(UWBP_QuickPlay_ButtonWrapper_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_QuickPlay_ButtonWrapper.WBP_QuickPlay_ButtonWrapper_C.HandleOnQueueInfoSet
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URH_MatchmakingQueueInfo*    QueueInfo                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_QuickPlay_ButtonWrapper_C::HandleOnQueueInfoSet(class URH_MatchmakingQueueInfo* QueueInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_QuickPlay_ButtonWrapper_C", "HandleOnQueueInfoSet");

	Params::UWBP_QuickPlay_ButtonWrapper_C_HandleOnQueueInfoSet_Params Parms{};

	Parms.QueueInfo = QueueInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_QuickPlay_ButtonWrapper.WBP_QuickPlay_ButtonWrapper_C.RefreshFillTeamSetting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_QuickPlay_ButtonWrapper_C::RefreshFillTeamSetting()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_QuickPlay_ButtonWrapper_C", "RefreshFillTeamSetting");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_QuickPlay_ButtonWrapper.WBP_QuickPlay_ButtonWrapper_C.UpdateQueueEligibilityInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_QuickPlay_ButtonWrapper_C::UpdateQueueEligibilityInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_QuickPlay_ButtonWrapper_C", "UpdateQueueEligibilityInfo");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_QuickPlay_ButtonWrapper.WBP_QuickPlay_ButtonWrapper_C.GetNavigationWidgets
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class URHWidget*>           Return_Value                                                     (Parm, OutParm, ContainsInstancedReference)
// TArray<class URHWidget*>           CallFunc_GetNavigationWidgets_Return_Value                       (ReferenceParm, ContainsInstancedReference)

void UWBP_QuickPlay_ButtonWrapper_C::GetNavigationWidgets(TArray<class URHWidget*>* Return_Value, TArray<class URHWidget*>& CallFunc_GetNavigationWidgets_Return_Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_QuickPlay_ButtonWrapper_C", "GetNavigationWidgets");

	Params::UWBP_QuickPlay_ButtonWrapper_C_GetNavigationWidgets_Params Parms{};

	Parms.CallFunc_GetNavigationWidgets_Return_Value = CallFunc_GetNavigationWidgets_Return_Value;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_Value != nullptr)
		*Return_Value = std::move(Parms.Return_Value);

}


// Function WBP_QuickPlay_ButtonWrapper.WBP_QuickPlay_ButtonWrapper_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_QuickPlay_ButtonWrapper_C::InitializeWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_QuickPlay_ButtonWrapper_C", "InitializeWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_QuickPlay_ButtonWrapper.WBP_QuickPlay_ButtonWrapper_C.ExecuteUbergraph_WBP_QuickPlay_ButtonWrapper
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_QuickPlay_ButtonWrapper_C::ExecuteUbergraph_WBP_QuickPlay_ButtonWrapper(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_QuickPlay_ButtonWrapper_C", "ExecuteUbergraph_WBP_QuickPlay_ButtonWrapper");

	Params::UWBP_QuickPlay_ButtonWrapper_C_ExecuteUbergraph_WBP_QuickPlay_ButtonWrapper_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_QuickPlay_ButtonWrapper.WBP_QuickPlay_ButtonWrapper_C.OnQueueInfoSet__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URH_MatchmakingQueueInfo*    QueueInfo                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_QuickPlay_ButtonWrapper_C::OnQueueInfoSet__DelegateSignature(class URH_MatchmakingQueueInfo* QueueInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_QuickPlay_ButtonWrapper_C", "OnQueueInfoSet__DelegateSignature");

	Params::UWBP_QuickPlay_ButtonWrapper_C_OnQueueInfoSet__DelegateSignature_Params Parms{};

	Parms.QueueInfo = QueueInfo;

	UObject::ProcessEvent(Func, &Parms);

}

}


