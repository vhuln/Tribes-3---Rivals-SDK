#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_PlayerStatus_ContextMenu.WBP_PlayerStatus_ContextMenu_C
// (None)

class UClass* UWBP_PlayerStatus_ContextMenu_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_PlayerStatus_ContextMenu_C");

	return Clss;
}


// WBP_PlayerStatus_ContextMenu_C WBP_PlayerStatus_ContextMenu.Default__WBP_PlayerStatus_ContextMenu_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_PlayerStatus_ContextMenu_C* UWBP_PlayerStatus_ContextMenu_C::GetDefaultObj()
{
	static class UWBP_PlayerStatus_ContextMenu_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_PlayerStatus_ContextMenu_C*>(UWBP_PlayerStatus_ContextMenu_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_PlayerStatus_ContextMenu.WBP_PlayerStatus_ContextMenu_C.GetStatusColor
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ERHPlayerOnlineStatus   PlayerStatus                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct SlateCore_SlateColor        StatusColor                                                      (Parm, OutParm)
// enum class ERHPlayerOnlineStatus   Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_8                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_9                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_10                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct SlateCore_SlateColor        K2Node_MakeStruct_SlateColor                                     (None)
// class FName                        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct ColorEntry_ColorEntry       CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerStatus_ContextMenu_C::GetStatusColor(enum class ERHPlayerOnlineStatus PlayerStatus, struct SlateCore_SlateColor* StatusColor, enum class ERHPlayerOnlineStatus Temp_byte_Variable, class FName Temp_name_Variable, class FName Temp_name_Variable_1, class FName Temp_name_Variable_2, class FName Temp_name_Variable_3, class FName Temp_name_Variable_4, class FName Temp_name_Variable_5, class FName Temp_name_Variable_6, class FName Temp_name_Variable_7, class FName Temp_name_Variable_8, class FName Temp_name_Variable_9, class FName Temp_name_Variable_10, const struct SlateCore_SlateColor& K2Node_MakeStruct_SlateColor, class FName K2Node_Select_Default, const struct ColorEntry_ColorEntry& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerStatus_ContextMenu_C", "GetStatusColor");

	Params::UWBP_PlayerStatus_ContextMenu_C_GetStatusColor_Params Parms{};

	Parms.PlayerStatus = PlayerStatus;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.Temp_name_Variable_2 = Temp_name_Variable_2;
	Parms.Temp_name_Variable_3 = Temp_name_Variable_3;
	Parms.Temp_name_Variable_4 = Temp_name_Variable_4;
	Parms.Temp_name_Variable_5 = Temp_name_Variable_5;
	Parms.Temp_name_Variable_6 = Temp_name_Variable_6;
	Parms.Temp_name_Variable_7 = Temp_name_Variable_7;
	Parms.Temp_name_Variable_8 = Temp_name_Variable_8;
	Parms.Temp_name_Variable_9 = Temp_name_Variable_9;
	Parms.Temp_name_Variable_10 = Temp_name_Variable_10;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (StatusColor != nullptr)
		*StatusColor = std::move(Parms.StatusColor);

}


// Function WBP_PlayerStatus_ContextMenu.WBP_PlayerStatus_ContextMenu_C.UpdatePlayerStatus
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URH_LocalPlayerSubsystem*    CallFunc_GetLocalPlayerSubsystem_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERHPlayerOnlineStatus   CallFunc_GetPlayerOnlineStatus_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct SlateCore_SlateColor        CallFunc_GetStatusColor_StatusColor                              (None)
// class FText                        CallFunc_GetPlayerStatusMessage_ReturnValue                      (None)

void UWBP_PlayerStatus_ContextMenu_C::UpdatePlayerStatus(class URH_LocalPlayerSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class ERHPlayerOnlineStatus CallFunc_GetPlayerOnlineStatus_ReturnValue, const struct SlateCore_SlateColor& CallFunc_GetStatusColor_StatusColor, class FText CallFunc_GetPlayerStatusMessage_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerStatus_ContextMenu_C", "UpdatePlayerStatus");

	Params::UWBP_PlayerStatus_ContextMenu_C_UpdatePlayerStatus_Params Parms{};

	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetPlayerOnlineStatus_ReturnValue = CallFunc_GetPlayerOnlineStatus_ReturnValue;
	Parms.CallFunc_GetStatusColor_StatusColor = CallFunc_GetStatusColor_StatusColor;
	Parms.CallFunc_GetPlayerStatusMessage_ReturnValue = CallFunc_GetPlayerStatusMessage_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerStatus_ContextMenu.WBP_PlayerStatus_ContextMenu_C.HideContextMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerStatus_ContextMenu_C::HideContextMenu(bool CallFunc_IsVisible_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerStatus_ContextMenu_C", "HideContextMenu");

	Params::UWBP_PlayerStatus_ContextMenu_C_HideContextMenu_Params Parms{};

	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerStatus_ContextMenu.WBP_PlayerStatus_ContextMenu_C.ShowContextMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PlayerStatus_ContextMenuOption_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerStatus_ContextMenu_C::ShowContextMenu(class UWBP_PlayerStatus_ContextMenuOption_C* CallFunc_Array_Get_Item, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerStatus_ContextMenu_C", "ShowContextMenu");

	Params::UWBP_PlayerStatus_ContextMenu_C_ShowContextMenu_Params Parms{};

	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerStatus_ContextMenu.WBP_PlayerStatus_ContextMenu_C.HandleOptionSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPlayerStatusOption     EPlayerStatus                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ARHLobbyHUD*                 K2Node_DynamicCast_AsRHLobby_HUD                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URH_LocalPlayerSubsystem*    CallFunc_GetLocalPlayerSubsystem_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class URHSettingsDataFactory*      CallFunc_GetSettingsDataFactory_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ERHPlayerOnlineStatus   CallFunc_GetPlayerOnlineStatus_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerStatus_ContextMenu_C::HandleOptionSelected(enum class EPlayerStatusOption EPlayerStatus, class FName CallFunc_MakeLiteralName_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class ARHLobbyHUD* K2Node_DynamicCast_AsRHLobby_HUD, bool K2Node_DynamicCast_bSuccess, class URH_LocalPlayerSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, class URHSettingsDataFactory* CallFunc_GetSettingsDataFactory_ReturnValue, enum class ERHPlayerOnlineStatus CallFunc_GetPlayerOnlineStatus_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerStatus_ContextMenu_C", "HandleOptionSelected");

	Params::UWBP_PlayerStatus_ContextMenu_C_HandleOptionSelected_Params Parms{};

	Parms.EPlayerStatus = EPlayerStatus;
	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_DynamicCast_AsRHLobby_HUD = K2Node_DynamicCast_AsRHLobby_HUD;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.CallFunc_GetSettingsDataFactory_ReturnValue = CallFunc_GetSettingsDataFactory_ReturnValue;
	Parms.CallFunc_GetPlayerOnlineStatus_ReturnValue = CallFunc_GetPlayerOnlineStatus_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerStatus_ContextMenu.WBP_PlayerStatus_ContextMenu_C.SetupOptionButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetEnumeratorValueFromIndex_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_PlayerStatus_ContextMenuOption_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerStatus_ContextMenu_C::SetupOptionButton(int32 Temp_int_Variable, int32 Temp_int_Variable_1, uint8 CallFunc_Conv_IntToByte_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, uint8 CallFunc_GetEnumeratorValueFromIndex_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, class UWBP_PlayerStatus_ContextMenuOption_C* CallFunc_Create_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, int32 CallFunc_MakeLiteralInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerStatus_ContextMenu_C", "SetupOptionButton");

	Params::UWBP_PlayerStatus_ContextMenu_C_SetupOptionButton_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_1 = CallFunc_Conv_IntToByte_ReturnValue_1;
	Parms.CallFunc_GetEnumeratorValueFromIndex_ReturnValue = CallFunc_GetEnumeratorValueFromIndex_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;
	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerStatus_ContextMenu.WBP_PlayerStatus_ContextMenu_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PlayerStatus_ContextMenu_C::InitializeWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerStatus_ContextMenu_C", "InitializeWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PlayerStatus_ContextMenu.WBP_PlayerStatus_ContextMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_PlayerStatus_ContextMenu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerStatus_ContextMenu_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PlayerStatus_ContextMenu.WBP_PlayerStatus_ContextMenu_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerStatus_ContextMenu_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerStatus_ContextMenu_C", "PreConstruct");

	Params::UWBP_PlayerStatus_ContextMenu_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerStatus_ContextMenu.WBP_PlayerStatus_ContextMenu_C.SetPlayerInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class URH_PlayerInfo*              PlayerInfo                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerStatus_ContextMenu_C::SetPlayerInfo(class URH_PlayerInfo* PlayerInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerStatus_ContextMenu_C", "SetPlayerInfo");

	Params::UWBP_PlayerStatus_ContextMenu_C_SetPlayerInfo_Params Parms{};

	Parms.PlayerInfo = PlayerInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerStatus_ContextMenu.WBP_PlayerStatus_ContextMenu_C.DetermineToggleState
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PlayerStatus_ContextMenu_C::DetermineToggleState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerStatus_ContextMenu_C", "DetermineToggleState");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PlayerStatus_ContextMenu.WBP_PlayerStatus_ContextMenu_C.ExecuteUbergraph_WBP_PlayerStatus_ContextMenu
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URH_PlayerInfo*              K2Node_CustomEvent_PlayerInfo                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerStatus_ContextMenu_C::ExecuteUbergraph_WBP_PlayerStatus_ContextMenu(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool K2Node_Event_IsDesignTime, class URH_PlayerInfo* K2Node_CustomEvent_PlayerInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerStatus_ContextMenu_C", "ExecuteUbergraph_WBP_PlayerStatus_ContextMenu");

	Params::UWBP_PlayerStatus_ContextMenu_C_ExecuteUbergraph_WBP_PlayerStatus_ContextMenu_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_CustomEvent_PlayerInfo = K2Node_CustomEvent_PlayerInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerStatus_ContextMenu.WBP_PlayerStatus_ContextMenu_C.OnMenuStart__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PlayerStatus_ContextMenuOption_C*FirstFocusableButton                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerStatus_ContextMenu_C::OnMenuStart__DelegateSignature(class UWBP_PlayerStatus_ContextMenuOption_C* FirstFocusableButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerStatus_ContextMenu_C", "OnMenuStart__DelegateSignature");

	Params::UWBP_PlayerStatus_ContextMenu_C_OnMenuStart__DelegateSignature_Params Parms{};

	Parms.FirstFocusableButton = FirstFocusableButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerStatus_ContextMenu.WBP_PlayerStatus_ContextMenu_C.OnReadyNavigation__DelegateSignature
// (Public, Delegate, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UWBP_PlayerStatus_ContextMenuOption_C*>StatusButtons                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void UWBP_PlayerStatus_ContextMenu_C::OnReadyNavigation__DelegateSignature(TArray<class UWBP_PlayerStatus_ContextMenuOption_C*>& StatusButtons)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerStatus_ContextMenu_C", "OnReadyNavigation__DelegateSignature");

	Params::UWBP_PlayerStatus_ContextMenu_C_OnReadyNavigation__DelegateSignature_Params Parms{};

	Parms.StatusButtons = StatusButtons;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerStatus_ContextMenu.WBP_PlayerStatus_ContextMenu_C.OnMenuHidden__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PlayerStatus_ContextMenu_C::OnMenuHidden__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerStatus_ContextMenu_C", "OnMenuHidden__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


