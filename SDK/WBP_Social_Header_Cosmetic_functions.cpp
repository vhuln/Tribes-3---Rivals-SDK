#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C
// (None)

class UClass* UWBP_Social_Header_Cosmetic_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Social_Header_Cosmetic_C");

	return Clss;
}


// WBP_Social_Header_Cosmetic_C WBP_Social_Header_Cosmetic.Default__WBP_Social_Header_Cosmetic_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Social_Header_Cosmetic_C* UWBP_Social_Header_Cosmetic_C::GetDefaultObj()
{
	static class UWBP_Social_Header_Cosmetic_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Social_Header_Cosmetic_C*>(UWBP_Social_Header_Cosmetic_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.On Get Player Loadout Account Settings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URH_PlayerInfo*              PlayerInfo                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class URH_PlayerLoadout*           Loadout                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetEquippedItemInSlot_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetEquippedItemInSlot_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Social_Header_Cosmetic_C::On_Get_Player_Loadout_Account_Settings(class URH_PlayerInfo* PlayerInfo, class URH_PlayerLoadout* Loadout, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GetEquippedItemInSlot_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_GetEquippedItemInSlot_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Header_Cosmetic_C", "On Get Player Loadout Account Settings");

	Params::UWBP_Social_Header_Cosmetic_C_On_Get_Player_Loadout_Account_Settings_Params Parms{};

	Parms.PlayerInfo = PlayerInfo;
	Parms.Loadout = Loadout;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetEquippedItemInSlot_ReturnValue = CallFunc_GetEquippedItemInSlot_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_GetEquippedItemInSlot_ReturnValue_1 = CallFunc_GetEquippedItemInSlot_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.On Display Name Loaded
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bSuccess                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      DisplayName                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UWBP_Social_Header_Cosmetic_C::On_Display_Name_Loaded(bool bSuccess, const class FString& DisplayName, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Header_Cosmetic_C", "On Display Name Loaded");

	Params::UWBP_Social_Header_Cosmetic_C_On_Display_Name_Loaded_Params Parms{};

	Parms.bSuccess = bSuccess;
	Parms.DisplayName = DisplayName;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.OnPlayerBannerLoaded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct RallyHereStart_RHEquippedLoadoutItemWrapperItemWrapper                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// class URHBanner*                   K2Node_DynamicCast_AsRHBanner                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UIconInfo*                   CallFunc_GetLargeBannerInfo_ReturnValue                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Social_Header_Cosmetic_C::OnPlayerBannerLoaded(const struct RallyHereStart_RHEquippedLoadoutItemWrapper& ItemWrapper, class URHBanner* K2Node_DynamicCast_AsRHBanner, bool K2Node_DynamicCast_bSuccess, class UIconInfo* CallFunc_GetLargeBannerInfo_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Header_Cosmetic_C", "OnPlayerBannerLoaded");

	Params::UWBP_Social_Header_Cosmetic_C_OnPlayerBannerLoaded_Params Parms{};

	Parms.ItemWrapper = ItemWrapper;
	Parms.K2Node_DynamicCast_AsRHBanner = K2Node_DynamicCast_AsRHBanner;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetLargeBannerInfo_ReturnValue = CallFunc_GetLargeBannerInfo_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.OnPlayerAvatarLoaded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct RallyHereStart_RHEquippedLoadoutItemWrapperItemWrapper                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// class URHAvatar*                   K2Node_DynamicCast_AsRHAvatar                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UIconInfo*                   CallFunc_GetLargeAvatarInfo_ReturnValue                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Social_Header_Cosmetic_C::OnPlayerAvatarLoaded(const struct RallyHereStart_RHEquippedLoadoutItemWrapper& ItemWrapper, class URHAvatar* K2Node_DynamicCast_AsRHAvatar, bool K2Node_DynamicCast_bSuccess, class UIconInfo* CallFunc_GetLargeAvatarInfo_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Header_Cosmetic_C", "OnPlayerAvatarLoaded");

	Params::UWBP_Social_Header_Cosmetic_C_OnPlayerAvatarLoaded_Params Parms{};

	Parms.ItemWrapper = ItemWrapper;
	Parms.K2Node_DynamicCast_AsRHAvatar = K2Node_DynamicCast_AsRHAvatar;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetLargeAvatarInfo_ReturnValue = CallFunc_GetLargeAvatarInfo_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.BindContextMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Social_Header_Cosmetic_C::BindContextMenu(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Header_Cosmetic_C", "BindContextMenu");

	Params::UWBP_Social_Header_Cosmetic_C_BindContextMenu_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.UpdateName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ERHAPI_Platform         CallFunc_GetLoggedInPlatformId_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Timespan        CallFunc_MakeTimespan_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class URH_LocalPlayerSubsystem*    CallFunc_GetLocalPlayerSubsystem_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Social_Header_Cosmetic_C::UpdateName(enum class ERHAPI_Platform CallFunc_GetLoggedInPlatformId_ReturnValue, const struct CoreUObject_Timespan& CallFunc_MakeTimespan_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class URH_LocalPlayerSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Header_Cosmetic_C", "UpdateName");

	Params::UWBP_Social_Header_Cosmetic_C_UpdateName_Params Parms{};

	Parms.CallFunc_GetLoggedInPlatformId_ReturnValue = CallFunc_GetLoggedInPlatformId_ReturnValue;
	Parms.CallFunc_MakeTimespan_ReturnValue = CallFunc_MakeTimespan_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.UpdateAfterInfoChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct CoreUObject_Timespan        CallFunc_MakeTimespan_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class URHLoadoutDataFactory*       CallFunc_GetRHLoadoutDataFactory_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Social_Header_Cosmetic_C::UpdateAfterInfoChange(const struct CoreUObject_Timespan& CallFunc_MakeTimespan_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class URHLoadoutDataFactory* CallFunc_GetRHLoadoutDataFactory_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Header_Cosmetic_C", "UpdateAfterInfoChange");

	Params::UWBP_Social_Header_Cosmetic_C_UpdateAfterInfoChange_Params Parms{};

	Parms.CallFunc_MakeTimespan_ReturnValue = CallFunc_MakeTimespan_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetRHLoadoutDataFactory_ReturnValue = CallFunc_GetRHLoadoutDataFactory_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.SetData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URH_PlayerInfo*              PlayerInfo                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Social_Header_Cosmetic_C::SetData(class URH_PlayerInfo* PlayerInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Header_Cosmetic_C", "SetData");

	Params::UWBP_Social_Header_Cosmetic_C_SetData_Params Parms{};

	Parms.PlayerInfo = PlayerInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Social_Header_Cosmetic_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Header_Cosmetic_C", "PreConstruct");

	Params::UWBP_Social_Header_Cosmetic_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Social_Header_Cosmetic_C::InitializeWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Header_Cosmetic_C", "InitializeWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.BndEvt__DNDToggleBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_Social_Header_Cosmetic_C::BndEvt__DNDToggleBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Header_Cosmetic_C", "BndEvt__DNDToggleBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.HandleInputStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ERH_INPUT_STATE         InputState                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Social_Header_Cosmetic_C::HandleInputStateChanged(enum class ERH_INPUT_STATE InputState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Header_Cosmetic_C", "HandleInputStateChanged");

	Params::UWBP_Social_Header_Cosmetic_C_HandleInputStateChanged_Params Parms{};

	Parms.InputState = InputState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.ToggleDND
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Social_Header_Cosmetic_C::ToggleDND()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Header_Cosmetic_C", "ToggleDND");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.HandleReadyNavigation
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UWBP_PlayerStatus_ContextMenuOption_C*>StatusButtons                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void UWBP_Social_Header_Cosmetic_C::HandleReadyNavigation(TArray<class UWBP_PlayerStatus_ContextMenuOption_C*>& StatusButtons)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Header_Cosmetic_C", "HandleReadyNavigation");

	Params::UWBP_Social_Header_Cosmetic_C_HandleReadyNavigation_Params Parms{};

	Parms.StatusButtons = StatusButtons;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.HandleMenuStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PlayerStatus_ContextMenuOption_C*FocusWidget                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Social_Header_Cosmetic_C::HandleMenuStart(class UWBP_PlayerStatus_ContextMenuOption_C* FocusWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Header_Cosmetic_C", "HandleMenuStart");

	Params::UWBP_Social_Header_Cosmetic_C_HandleMenuStart_Params Parms{};

	Parms.FocusWidget = FocusWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.HandleMenuHidden
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Social_Header_Cosmetic_C::HandleMenuHidden()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Header_Cosmetic_C", "HandleMenuHidden");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.HideStatusMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Social_Header_Cosmetic_C::HideStatusMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Header_Cosmetic_C", "HideStatusMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.ExecuteUbergraph_WBP_Social_Header_Cosmetic
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ARHHUDCommon*                CallFunc_GetHUDCommon_HUD_Common                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERH_INPUT_STATE         CallFunc_GetCurrentInputState_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ERH_INPUT_STATE         K2Node_CustomEvent_InputState                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWBP_PlayerStatus_ContextMenuOption_C*>K2Node_CustomEvent_StatusButtons                                 (ReferenceParm, ContainsInstancedReference)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_PlayerStatus_ContextMenuOption_C*K2Node_CustomEvent_FocusWidget                                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Social_Header_Cosmetic_C::ExecuteUbergraph_WBP_Social_Header_Cosmetic(int32 EntryPoint, class ARHHUDCommon* CallFunc_GetHUDCommon_HUD_Common, enum class ESlateVisibility Temp_byte_Variable, enum class ERH_INPUT_STATE CallFunc_GetCurrentInputState_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_1, bool K2Node_Event_IsDesignTime, bool Temp_bool_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class ERH_INPUT_STATE K2Node_CustomEvent_InputState, bool CallFunc_EqualEqual_ByteByte_ReturnValue, TArray<class UWBP_PlayerStatus_ContextMenuOption_C*>& K2Node_CustomEvent_StatusButtons, enum class ESlateVisibility K2Node_Select_Default, class UWBP_PlayerStatus_ContextMenuOption_C* K2Node_CustomEvent_FocusWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Header_Cosmetic_C", "ExecuteUbergraph_WBP_Social_Header_Cosmetic");

	Params::UWBP_Social_Header_Cosmetic_C_ExecuteUbergraph_WBP_Social_Header_Cosmetic_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetHUDCommon_HUD_Common = CallFunc_GetHUDCommon_HUD_Common;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetCurrentInputState_ReturnValue = CallFunc_GetCurrentInputState_ReturnValue;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_InputState = K2Node_CustomEvent_InputState;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_CustomEvent_StatusButtons = K2Node_CustomEvent_StatusButtons;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_CustomEvent_FocusWidget = K2Node_CustomEvent_FocusWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.OnMenuHidden__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Social_Header_Cosmetic_C::OnMenuHidden__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Header_Cosmetic_C", "OnMenuHidden__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.OnMenuShown__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PlayerStatus_ContextMenuOption_C*FocusWidget                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Social_Header_Cosmetic_C::OnMenuShown__DelegateSignature(class UWBP_PlayerStatus_ContextMenuOption_C* FocusWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Header_Cosmetic_C", "OnMenuShown__DelegateSignature");

	Params::UWBP_Social_Header_Cosmetic_C_OnMenuShown__DelegateSignature_Params Parms{};

	Parms.FocusWidget = FocusWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.OnNavigationReady__DelegateSignature
// (Public, Delegate, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UWBP_PlayerStatus_ContextMenuOption_C*>StatusButtons                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void UWBP_Social_Header_Cosmetic_C::OnNavigationReady__DelegateSignature(TArray<class UWBP_PlayerStatus_ContextMenuOption_C*>& StatusButtons)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Header_Cosmetic_C", "OnNavigationReady__DelegateSignature");

	Params::UWBP_Social_Header_Cosmetic_C_OnNavigationReady__DelegateSignature_Params Parms{};

	Parms.StatusButtons = StatusButtons;

	UObject::ProcessEvent(Func, &Parms);

}

}


