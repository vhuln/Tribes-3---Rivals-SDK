#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_PartyModuleCardSlot.WBP_PartyModuleCardSlot_C
// (None)

class UClass* UWBP_PartyModuleCardSlot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_PartyModuleCardSlot_C");

	return Clss;
}


// WBP_PartyModuleCardSlot_C WBP_PartyModuleCardSlot.Default__WBP_PartyModuleCardSlot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_PartyModuleCardSlot_C* UWBP_PartyModuleCardSlot_C::GetDefaultObj()
{
	static class UWBP_PartyModuleCardSlot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_PartyModuleCardSlot_C*>(UWBP_PartyModuleCardSlot_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_PartyModuleCardSlot.WBP_PartyModuleCardSlot_C.NavigateConfirm
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UWBP_PartyModuleCardSlot_C::NavigateConfirm(int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PartyModuleCardSlot_C", "NavigateConfirm");

	Params::UWBP_PartyModuleCardSlot_C_NavigateConfirm_Params Parms{};

	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue = CallFunc_GetActiveWidgetIndex_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_PartyModuleCardSlot.WBP_PartyModuleCardSlot_C.SetPlayerView
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URH_RHFriendAndPlatformFriend*Friend_Info                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PartyModuleCardSlot_C::SetPlayerView(class URH_RHFriendAndPlatformFriend* Friend_Info)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PartyModuleCardSlot_C", "SetPlayerView");

	Params::UWBP_PartyModuleCardSlot_C_SetPlayerView_Params Parms{};

	Parms.Friend_Info = Friend_Info;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PartyModuleCardSlot.WBP_PartyModuleCardSlot_C.SetEmptyView
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PartyModuleCardSlot_C::SetEmptyView()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PartyModuleCardSlot_C", "SetEmptyView");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PartyModuleCardSlot.WBP_PartyModuleCardSlot_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PartyModuleCardSlot_C::InitializeWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PartyModuleCardSlot_C", "InitializeWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PartyModuleCardSlot.WBP_PartyModuleCardSlot_C.BndEvt__EmptySlotGroup_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_PartyModuleCardSlot_C::BndEvt__EmptySlotGroup_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PartyModuleCardSlot_C", "BndEvt__EmptySlotGroup_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PartyModuleCardSlot.WBP_PartyModuleCardSlot_C.BndEvt__EmptySlotGroup_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_PartyModuleCardSlot_C::BndEvt__EmptySlotGroup_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PartyModuleCardSlot_C", "BndEvt__EmptySlotGroup_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PartyModuleCardSlot.WBP_PartyModuleCardSlot_C.BndEvt__EmptySlotGroup_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_PartyModuleCardSlot_C::BndEvt__EmptySlotGroup_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PartyModuleCardSlot_C", "BndEvt__EmptySlotGroup_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PartyModuleCardSlot.WBP_PartyModuleCardSlot_C.GamepadHover
// (Event, Public, BlueprintEvent)
// Parameters:

void UWBP_PartyModuleCardSlot_C::GamepadHover()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PartyModuleCardSlot_C", "GamepadHover");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PartyModuleCardSlot.WBP_PartyModuleCardSlot_C.GamepadUnhover
// (Event, Public, BlueprintEvent)
// Parameters:

void UWBP_PartyModuleCardSlot_C::GamepadUnhover()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PartyModuleCardSlot_C", "GamepadUnhover");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PartyModuleCardSlot.WBP_PartyModuleCardSlot_C.Add Party Member Selected
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PartyModuleCardSlot_C::Add_Party_Member_Selected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PartyModuleCardSlot_C", "Add Party Member Selected");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PartyModuleCardSlot.WBP_PartyModuleCardSlot_C.Add Party Member Hovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PartyModuleCardSlot_C::Add_Party_Member_Hovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PartyModuleCardSlot_C", "Add Party Member Hovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PartyModuleCardSlot.WBP_PartyModuleCardSlot_C.Add Party Member Unhovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PartyModuleCardSlot_C::Add_Party_Member_Unhovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PartyModuleCardSlot_C", "Add Party Member Unhovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PartyModuleCardSlot.WBP_PartyModuleCardSlot_C.ExecuteUbergraph_WBP_PartyModuleCardSlot
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_BrightLobbyHUD_C*        K2Node_DynamicCast_AsBP_Bright_Lobby_HUD                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URHPartyManager*             CallFunc_GetPartyManager_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_InternalAddViewRoute_ViewChanged                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PartyModuleCardSlot_C::ExecuteUbergraph_WBP_PartyModuleCardSlot(int32 EntryPoint, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, int32 CallFunc_GetActiveWidgetIndex_ReturnValue_1, bool K2Node_SwitchInteger_CmpSuccess_1, class ABP_BrightLobbyHUD_C* K2Node_DynamicCast_AsBP_Bright_Lobby_HUD, bool K2Node_DynamicCast_bSuccess, class URHPartyManager* CallFunc_GetPartyManager_ReturnValue, bool CallFunc_InternalAddViewRoute_ViewChanged)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PartyModuleCardSlot_C", "ExecuteUbergraph_WBP_PartyModuleCardSlot");

	Params::UWBP_PartyModuleCardSlot_C_ExecuteUbergraph_WBP_PartyModuleCardSlot_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue = CallFunc_GetActiveWidgetIndex_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue_1 = CallFunc_GetActiveWidgetIndex_ReturnValue_1;
	Parms.K2Node_SwitchInteger_CmpSuccess_1 = K2Node_SwitchInteger_CmpSuccess_1;
	Parms.K2Node_DynamicCast_AsBP_Bright_Lobby_HUD = K2Node_DynamicCast_AsBP_Bright_Lobby_HUD;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetPartyManager_ReturnValue = CallFunc_GetPartyManager_ReturnValue;
	Parms.CallFunc_InternalAddViewRoute_ViewChanged = CallFunc_InternalAddViewRoute_ViewChanged;

	UObject::ProcessEvent(Func, &Parms);

}

}


