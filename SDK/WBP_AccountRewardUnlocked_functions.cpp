#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_AccountRewardUnlocked.WBP_AccountRewardUnlocked_C
// (None)

class UClass* UWBP_AccountRewardUnlocked_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_AccountRewardUnlocked_C");

	return Clss;
}


// WBP_AccountRewardUnlocked_C WBP_AccountRewardUnlocked.Default__WBP_AccountRewardUnlocked_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_AccountRewardUnlocked_C* UWBP_AccountRewardUnlocked_C::GetDefaultObj()
{
	static class UWBP_AccountRewardUnlocked_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_AccountRewardUnlocked_C*>(UWBP_AccountRewardUnlocked_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_AccountRewardUnlocked.WBP_AccountRewardUnlocked_C.Get Best Item Type Text
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UValItemAsset*               ItemAsset                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        OutText                                                          (Parm, OutParm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UValDataTableManager*        CallFunc_GetDataTableManager_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UValDataTableManager*        CallFunc_GetDataTableManager_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetGameplayText_Text                                    (None)
// bool                               CallFunc_GetGameplayText_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetFirstGameplayTextByContainer_Text                    (None)
// bool                               CallFunc_GetFirstGameplayTextByContainer_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsGameplayTagValid_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetEmptyText_ReturnValue                                (None)

void UWBP_AccountRewardUnlocked_C::Get_Best_Item_Type_Text(class UValItemAsset* ItemAsset, class FText* OutText, bool CallFunc_IsValid_ReturnValue, class UValDataTableManager* CallFunc_GetDataTableManager_ReturnValue, class UValDataTableManager* CallFunc_GetDataTableManager_ReturnValue_1, class FText CallFunc_GetGameplayText_Text, bool CallFunc_GetGameplayText_ReturnValue, class FText CallFunc_GetFirstGameplayTextByContainer_Text, bool CallFunc_GetFirstGameplayTextByContainer_ReturnValue, bool CallFunc_IsGameplayTagValid_ReturnValue, class FText CallFunc_GetEmptyText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_AccountRewardUnlocked_C", "Get Best Item Type Text");

	Params::UWBP_AccountRewardUnlocked_C_Get_Best_Item_Type_Text_Params Parms{};

	Parms.ItemAsset = ItemAsset;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetDataTableManager_ReturnValue = CallFunc_GetDataTableManager_ReturnValue;
	Parms.CallFunc_GetDataTableManager_ReturnValue_1 = CallFunc_GetDataTableManager_ReturnValue_1;
	Parms.CallFunc_GetGameplayText_Text = CallFunc_GetGameplayText_Text;
	Parms.CallFunc_GetGameplayText_ReturnValue = CallFunc_GetGameplayText_ReturnValue;
	Parms.CallFunc_GetFirstGameplayTextByContainer_Text = CallFunc_GetFirstGameplayTextByContainer_Text;
	Parms.CallFunc_GetFirstGameplayTextByContainer_ReturnValue = CallFunc_GetFirstGameplayTextByContainer_ReturnValue;
	Parms.CallFunc_IsGameplayTagValid_ReturnValue = CallFunc_IsGameplayTagValid_ReturnValue;
	Parms.CallFunc_GetEmptyText_ReturnValue = CallFunc_GetEmptyText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutText != nullptr)
		*OutText = Parms.OutText;

}


// Function WBP_AccountRewardUnlocked.WBP_AccountRewardUnlocked_C.GetBestDisplayTag
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_AccountRewardUnlocked_C::GetBestDisplayTag()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_AccountRewardUnlocked_C", "GetBestDisplayTag");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_AccountRewardUnlocked.WBP_AccountRewardUnlocked_C.SetData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UValItemAsset*               ItemAsset                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Get_Best_Item_Type_Text_OutText                         (None)
// bool                               CallFunc_MatchesAnyTags_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectInt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_LinearColor     CallFunc_GetColorFromRarity_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_AccountRewardUnlocked_C::SetData(class UValItemAsset* ItemAsset, class FName CallFunc_MakeLiteralName_ReturnValue, class FText CallFunc_Get_Best_Item_Type_Text_OutText, bool CallFunc_MatchesAnyTags_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, const struct CoreUObject_LinearColor& CallFunc_GetColorFromRarity_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_AccountRewardUnlocked_C", "SetData");

	Params::UWBP_AccountRewardUnlocked_C_SetData_Params Parms{};

	Parms.ItemAsset = ItemAsset;
	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.CallFunc_Get_Best_Item_Type_Text_OutText = CallFunc_Get_Best_Item_Type_Text_OutText;
	Parms.CallFunc_MatchesAnyTags_ReturnValue = CallFunc_MatchesAnyTags_ReturnValue;
	Parms.CallFunc_SelectInt_ReturnValue = CallFunc_SelectInt_ReturnValue;
	Parms.CallFunc_GetColorFromRarity_ReturnValue = CallFunc_GetColorFromRarity_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_AccountRewardUnlocked.WBP_AccountRewardUnlocked_C.TriggerAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_AccountRewardUnlocked_C::TriggerAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_AccountRewardUnlocked_C", "TriggerAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_AccountRewardUnlocked.WBP_AccountRewardUnlocked_C.BndEvt__WBP_AccountRewardUnlocked_UI_Button_Menu_Gold_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_AccountRewardUnlocked_C::BndEvt__WBP_AccountRewardUnlocked_UI_Button_Menu_Gold_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_AccountRewardUnlocked_C", "BndEvt__WBP_AccountRewardUnlocked_UI_Button_Menu_Gold_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_AccountRewardUnlocked.WBP_AccountRewardUnlocked_C.ExecuteUbergraph_WBP_AccountRewardUnlocked
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_AccountRewardUnlocked_C::ExecuteUbergraph_WBP_AccountRewardUnlocked(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_AccountRewardUnlocked_C", "ExecuteUbergraph_WBP_AccountRewardUnlocked");

	Params::UWBP_AccountRewardUnlocked_C_ExecuteUbergraph_WBP_AccountRewardUnlocked_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_AccountRewardUnlocked.WBP_AccountRewardUnlocked_C.OnAcquisitionDismissed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_AccountRewardUnlocked_C::OnAcquisitionDismissed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_AccountRewardUnlocked_C", "OnAcquisitionDismissed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


