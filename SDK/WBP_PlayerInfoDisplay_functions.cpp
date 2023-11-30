#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C
// (None)

class UClass* UWBP_PlayerInfoDisplay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_PlayerInfoDisplay_C");

	return Clss;
}


// WBP_PlayerInfoDisplay_C WBP_PlayerInfoDisplay.Default__WBP_PlayerInfoDisplay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_PlayerInfoDisplay_C* UWBP_PlayerInfoDisplay_C::GetDefaultObj()
{
	static class UWBP_PlayerInfoDisplay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_PlayerInfoDisplay_C*>(UWBP_PlayerInfoDisplay_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.OnGetPlayerLevelResponse
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              InstanceCount                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)

void UWBP_PlayerInfoDisplay_C::OnGetPlayerLevelResponse(int32 InstanceCount, bool CallFunc_Greater_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerInfoDisplay_C", "OnGetPlayerLevelResponse");

	Params::UWBP_PlayerInfoDisplay_C_OnGetPlayerLevelResponse_Params Parms{};

	Parms.InstanceCount = InstanceCount;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.OnPlayerInventoryCacheUpdated
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                      ItemIds                                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class URHProgression*              CallFunc_GetPlayerXpProgression_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct RallyHereIntegration_RH_ItemIdCallFunc_GetItemId_ReturnValue                                   (ConstParm, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerInfoDisplay_C::OnPlayerInventoryCacheUpdated(TArray<int32>& ItemIds, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class URHProgression* CallFunc_GetPlayerXpProgression_ReturnValue, const struct RallyHereIntegration_RH_ItemId& CallFunc_GetItemId_ReturnValue, bool CallFunc_Array_Contains_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerInfoDisplay_C", "OnPlayerInventoryCacheUpdated");

	Params::UWBP_PlayerInfoDisplay_C_OnPlayerInventoryCacheUpdated_Params Parms{};

	Parms.ItemIds = ItemIds;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetPlayerXpProgression_ReturnValue = CallFunc_GetPlayerXpProgression_ReturnValue;
	Parms.CallFunc_GetItemId_ReturnValue = CallFunc_GetItemId_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.SetFriend
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URH_RHFriendAndPlatformFriend*Friend                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetLastKnownDisplayName_ReturnValue                     (ZeroConstructor, HasGetValueTypeHash)
// class URH_GameInstanceSubsystem*   CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Guid            CallFunc_GetRHPlayerUuid_ReturnValue                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URH_PlayerInfoSubsystem*     CallFunc_GetPlayerInfoSubsystem_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class URH_PlayerInfo*              CallFunc_GetPlayerInfo_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerInfoDisplay_C::SetFriend(class URH_RHFriendAndPlatformFriend* Friend, const class FString& CallFunc_GetLastKnownDisplayName_ReturnValue, class URH_GameInstanceSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, const struct CoreUObject_Guid& CallFunc_GetRHPlayerUuid_ReturnValue, class URH_PlayerInfoSubsystem* CallFunc_GetPlayerInfoSubsystem_ReturnValue, class URH_PlayerInfo* CallFunc_GetPlayerInfo_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerInfoDisplay_C", "SetFriend");

	Params::UWBP_PlayerInfoDisplay_C_SetFriend_Params Parms{};

	Parms.Friend = Friend;
	Parms.CallFunc_GetLastKnownDisplayName_ReturnValue = CallFunc_GetLastKnownDisplayName_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetRHPlayerUuid_ReturnValue = CallFunc_GetRHPlayerUuid_ReturnValue;
	Parms.CallFunc_GetPlayerInfoSubsystem_ReturnValue = CallFunc_GetPlayerInfoSubsystem_ReturnValue;
	Parms.CallFunc_GetPlayerInfo_ReturnValue = CallFunc_GetPlayerInfo_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.On Get Player Account Loadout Settings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URH_PlayerInfo*              PlayerInfo                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class URH_PlayerLoadout*           Loadouts                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetEquippedItemInSlot_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerInfoDisplay_C::On_Get_Player_Account_Loadout_Settings(class URH_PlayerInfo* PlayerInfo, class URH_PlayerLoadout* Loadouts, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_GetEquippedItemInSlot_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerInfoDisplay_C", "On Get Player Account Loadout Settings");

	Params::UWBP_PlayerInfoDisplay_C_On_Get_Player_Account_Loadout_Settings_Params Parms{};

	Parms.PlayerInfo = PlayerInfo;
	Parms.Loadouts = Loadouts;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetEquippedItemInSlot_ReturnValue = CallFunc_GetEquippedItemInSlot_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.UnbindDelegates
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class URH_PlayerInventory*         CallFunc_GetPlayerInventory_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerInfoDisplay_C::UnbindDelegates(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class URH_PlayerInventory* CallFunc_GetPlayerInventory_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerInfoDisplay_C", "UnbindDelegates");

	Params::UWBP_PlayerInfoDisplay_C_UnbindDelegates_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetPlayerInventory_ReturnValue = CallFunc_GetPlayerInventory_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.BindDelegates
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class URHProgression*              CallFunc_GetPlayerXpProgression_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URH_PlayerInventory*         CallFunc_GetPlayerInventory_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerInfoDisplay_C::BindDelegates(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class URHProgression* CallFunc_GetPlayerXpProgression_ReturnValue, bool CallFunc_IsValid_ReturnValue, class URH_PlayerInventory* CallFunc_GetPlayerInventory_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerInfoDisplay_C", "BindDelegates");

	Params::UWBP_PlayerInfoDisplay_C_BindDelegates_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetPlayerXpProgression_ReturnValue = CallFunc_GetPlayerXpProgression_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetPlayerInventory_ReturnValue = CallFunc_GetPlayerInventory_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.SetRHPlayerInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URH_PlayerInfo*              PlayerInfo                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Timespan        CallFunc_MakeTimespan_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Timespan        CallFunc_MakeTimespan_ReturnValue_1                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class URHLoadoutDataFactory*       CallFunc_GetRHLoadoutDataFactory_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class URH_LocalPlayerSubsystem*    CallFunc_GetLocalPlayerSubsystem_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ERHAPI_Platform         CallFunc_GetLoggedInPlatformId_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerInfoDisplay_C::SetRHPlayerInfo(class URH_PlayerInfo* PlayerInfo, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct CoreUObject_Timespan& CallFunc_MakeTimespan_ReturnValue, const struct CoreUObject_Timespan& CallFunc_MakeTimespan_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class URHLoadoutDataFactory* CallFunc_GetRHLoadoutDataFactory_ReturnValue, class URH_LocalPlayerSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, enum class ERHAPI_Platform CallFunc_GetLoggedInPlatformId_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerInfoDisplay_C", "SetRHPlayerInfo");

	Params::UWBP_PlayerInfoDisplay_C_SetRHPlayerInfo_Params Parms{};

	Parms.PlayerInfo = PlayerInfo;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_MakeTimespan_ReturnValue = CallFunc_MakeTimespan_ReturnValue;
	Parms.CallFunc_MakeTimespan_ReturnValue_1 = CallFunc_MakeTimespan_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetRHLoadoutDataFactory_ReturnValue = CallFunc_GetRHLoadoutDataFactory_ReturnValue;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_GetLoggedInPlatformId_ReturnValue = CallFunc_GetLoggedInPlatformId_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.SetPlayerNameFont
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct SlateCore_SlateFontInfo     Font                                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWBP_PlayerInfoDisplay_C::SetPlayerNameFont(const struct SlateCore_SlateFontInfo& Font)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerInfoDisplay_C", "SetPlayerNameFont");

	Params::UWBP_PlayerInfoDisplay_C_SetPlayerNameFont_Params Parms{};

	Parms.Font = Font;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.SetPlayerNameColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct SlateCore_SlateColor        Color                                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_PlayerInfoDisplay_C::SetPlayerNameColor(const struct SlateCore_SlateColor& Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerInfoDisplay_C", "SetPlayerNameColor");

	Params::UWBP_PlayerInfoDisplay_C_SetPlayerNameColor_Params Parms{};

	Parms.Color = Color;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.TogglePartyLeaderIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShowLeaderIcon                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerInfoDisplay_C::TogglePartyLeaderIcon(bool ShowLeaderIcon, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerInfoDisplay_C", "TogglePartyLeaderIcon");

	Params::UWBP_PlayerInfoDisplay_C_TogglePartyLeaderIcon_Params Parms{};

	Parms.ShowLeaderIcon = ShowLeaderIcon;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.SetVoiceActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsActive                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerInfoDisplay_C::SetVoiceActive(bool IsActive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerInfoDisplay_C", "SetVoiceActive");

	Params::UWBP_PlayerInfoDisplay_C_SetVoiceActive_Params Parms{};

	Parms.IsActive = IsActive;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.SetVoiceTalking
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Talking                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerInfoDisplay_C::SetVoiceTalking(bool Talking)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerInfoDisplay_C", "SetVoiceTalking");

	Params::UWBP_PlayerInfoDisplay_C_SetVoiceTalking_Params Parms{};

	Parms.Talking = Talking;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.SetVoiceMuted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Muted                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerInfoDisplay_C::SetVoiceMuted(bool Muted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerInfoDisplay_C", "SetVoiceMuted");

	Params::UWBP_PlayerInfoDisplay_C_SetVoiceMuted_Params Parms{};

	Parms.Muted = Muted;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.OnGetPlatform
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ERHPlatformDisplayType  PlatformType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerInfoDisplay_C::OnGetPlatform(enum class ERHPlatformDisplayType PlatformType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerInfoDisplay_C", "OnGetPlatform");

	Params::UWBP_PlayerInfoDisplay_C_OnGetPlatform_Params Parms{};

	Parms.PlatformType = PlatformType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.ResetDisplay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URHLoadoutDataFactory*       CallFunc_GetRHLoadoutDataFactory_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlatformInventoryItem*      CallFunc_GetDefaultItemForLoadoutSlotType_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class URHAvatar*                   K2Node_DynamicCast_AsRHAvatar                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UIconInfo*                   CallFunc_GetLargeAvatarInfo_ReturnValue                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerInfoDisplay_C::ResetDisplay(class URHLoadoutDataFactory* CallFunc_GetRHLoadoutDataFactory_ReturnValue, class UPlatformInventoryItem* CallFunc_GetDefaultItemForLoadoutSlotType_ReturnValue, class URHAvatar* K2Node_DynamicCast_AsRHAvatar, bool K2Node_DynamicCast_bSuccess, class UIconInfo* CallFunc_GetLargeAvatarInfo_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerInfoDisplay_C", "ResetDisplay");

	Params::UWBP_PlayerInfoDisplay_C_ResetDisplay_Params Parms{};

	Parms.CallFunc_GetRHLoadoutDataFactory_ReturnValue = CallFunc_GetRHLoadoutDataFactory_ReturnValue;
	Parms.CallFunc_GetDefaultItemForLoadoutSlotType_ReturnValue = CallFunc_GetDefaultItemForLoadoutSlotType_ReturnValue;
	Parms.K2Node_DynamicCast_AsRHAvatar = K2Node_DynamicCast_AsRHAvatar;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetLargeAvatarInfo_ReturnValue = CallFunc_GetLargeAvatarInfo_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.OnGetDisplayName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bSuccess                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      DisplayName                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UWBP_PlayerInfoDisplay_C::OnGetDisplayName(bool bSuccess, const class FString& DisplayName, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerInfoDisplay_C", "OnGetDisplayName");

	Params::UWBP_PlayerInfoDisplay_C_OnGetDisplayName_Params Parms{};

	Parms.bSuccess = bSuccess;
	Parms.DisplayName = DisplayName;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.OnPlayerAvatarLoaded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct RallyHereStart_RHEquippedLoadoutItemWrapperItemWrapper                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// class URHAvatar*                   K2Node_DynamicCast_AsRHAvatar                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UIconInfo*                   CallFunc_GetLargeAvatarInfo_ReturnValue                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerInfoDisplay_C::OnPlayerAvatarLoaded(const struct RallyHereStart_RHEquippedLoadoutItemWrapper& ItemWrapper, class URHAvatar* K2Node_DynamicCast_AsRHAvatar, bool K2Node_DynamicCast_bSuccess, class UIconInfo* CallFunc_GetLargeAvatarInfo_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerInfoDisplay_C", "OnPlayerAvatarLoaded");

	Params::UWBP_PlayerInfoDisplay_C_OnPlayerAvatarLoaded_Params Parms{};

	Parms.ItemWrapper = ItemWrapper;
	Parms.K2Node_DynamicCast_AsRHAvatar = K2Node_DynamicCast_AsRHAvatar;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetLargeAvatarInfo_ReturnValue = CallFunc_GetLargeAvatarInfo_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.UpdateVoiceDisplay
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PlayerInfoDisplay_C::UpdateVoiceDisplay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerInfoDisplay_C", "UpdateVoiceDisplay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.Get Status Color
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ERHPlayerOnlineStatus   Status                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
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

void UWBP_PlayerInfoDisplay_C::Get_Status_Color(enum class ERHPlayerOnlineStatus Status, struct SlateCore_SlateColor* StatusColor, enum class ERHPlayerOnlineStatus Temp_byte_Variable, class FName Temp_name_Variable, class FName Temp_name_Variable_1, class FName Temp_name_Variable_2, class FName Temp_name_Variable_3, class FName Temp_name_Variable_4, class FName Temp_name_Variable_5, class FName Temp_name_Variable_6, class FName Temp_name_Variable_7, class FName Temp_name_Variable_8, class FName Temp_name_Variable_9, class FName Temp_name_Variable_10, const struct SlateCore_SlateColor& K2Node_MakeStruct_SlateColor, class FName K2Node_Select_Default, const struct ColorEntry_ColorEntry& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerInfoDisplay_C", "Get Status Color");

	Params::UWBP_PlayerInfoDisplay_C_Get_Status_Color_Params Parms{};

	Parms.Status = Status;
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


// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.UpdateStatus
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ERHPlayerOnlineStatus   PlayerOnlineStatus                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
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
// enum class ERHPlayerOnlineStatus   Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URH_LocalPlayerSubsystem*    CallFunc_GetLocalPlayerSubsystem_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct ColorEntry_ColorEntry       CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERHPlayerOnlineStatus   CallFunc_GetFriendOnlineStatus_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct SlateCore_SlateColor        CallFunc_Get_Status_Color_StatusColor                            (None)
// class FText                        CallFunc_GetStatusMessage_ReturnValue                            (None)

void UWBP_PlayerInfoDisplay_C::UpdateStatus(enum class ERHPlayerOnlineStatus PlayerOnlineStatus, class FName Temp_name_Variable, class FName Temp_name_Variable_1, class FName Temp_name_Variable_2, class FName Temp_name_Variable_3, class FName Temp_name_Variable_4, class FName Temp_name_Variable_5, class FName Temp_name_Variable_6, class FName Temp_name_Variable_7, class FName Temp_name_Variable_8, class FName Temp_name_Variable_9, class FName Temp_name_Variable_10, enum class ERHPlayerOnlineStatus Temp_byte_Variable, class FName K2Node_Select_Default, class URH_LocalPlayerSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, const struct ColorEntry_ColorEntry& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, enum class ERHPlayerOnlineStatus CallFunc_GetFriendOnlineStatus_ReturnValue, const struct SlateCore_SlateColor& CallFunc_Get_Status_Color_StatusColor, class FText CallFunc_GetStatusMessage_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerInfoDisplay_C", "UpdateStatus");

	Params::UWBP_PlayerInfoDisplay_C_UpdateStatus_Params Parms{};

	Parms.PlayerOnlineStatus = PlayerOnlineStatus;
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
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_GetFriendOnlineStatus_ReturnValue = CallFunc_GetFriendOnlineStatus_ReturnValue;
	Parms.CallFunc_Get_Status_Color_StatusColor = CallFunc_Get_Status_Color_StatusColor;
	Parms.CallFunc_GetStatusMessage_ReturnValue = CallFunc_GetStatusMessage_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.SetVoiceState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShouldShow                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsTalking                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsMuted                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerInfoDisplay_C::SetVoiceState(bool ShouldShow, bool IsTalking, bool IsMuted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerInfoDisplay_C", "SetVoiceState");

	Params::UWBP_PlayerInfoDisplay_C_SetVoiceState_Params Parms{};

	Parms.ShouldShow = ShouldShow;
	Parms.IsTalking = IsTalking;
	Parms.IsMuted = IsMuted;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.ToggleStatusDisplay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShowStatus                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerInfoDisplay_C::ToggleStatusDisplay(bool ShowStatus, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerInfoDisplay_C", "ToggleStatusDisplay");

	Params::UWBP_PlayerInfoDisplay_C_ToggleStatusDisplay_Params Parms{};

	Parms.ShowStatus = ShowStatus;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerInfoDisplay_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerInfoDisplay_C", "PreConstruct");

	Params::UWBP_PlayerInfoDisplay_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_PlayerInfoDisplay_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerInfoDisplay_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PlayerInfoDisplay_C::InitializeWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerInfoDisplay_C", "InitializeWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.Display Reset
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PlayerInfoDisplay_C::Display_Reset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerInfoDisplay_C", "Display Reset");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.OnPlayerProgressionLoaded
// (Event, Public, BlueprintEvent)
// Parameters:

void UWBP_PlayerInfoDisplay_C::OnPlayerProgressionLoaded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerInfoDisplay_C", "OnPlayerProgressionLoaded");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.OnPlayerPresenceUpdated
// (Event, Public, BlueprintEvent)
// Parameters:
// class URH_PlayerPresence*          PlayerPresence                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerInfoDisplay_C::OnPlayerPresenceUpdated(class URH_PlayerPresence* PlayerPresence)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerInfoDisplay_C", "OnPlayerPresenceUpdated");

	Params::UWBP_PlayerInfoDisplay_C_OnPlayerPresenceUpdated_Params Parms{};

	Parms.PlayerPresence = PlayerPresence;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.ExecuteUbergraph_WBP_PlayerInfoDisplay
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOverlaySlot*                CallFunc_SlotAsOverlaySlot_ReturnValue                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class URH_PlayerPresence*          K2Node_Event_PlayerPresence                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerInfoDisplay_C::ExecuteUbergraph_WBP_PlayerInfoDisplay(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_IsDesignTime, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class URH_PlayerPresence* K2Node_Event_PlayerPresence)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerInfoDisplay_C", "ExecuteUbergraph_WBP_PlayerInfoDisplay");

	Params::UWBP_PlayerInfoDisplay_C_ExecuteUbergraph_WBP_PlayerInfoDisplay_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_SlotAsOverlaySlot_ReturnValue = CallFunc_SlotAsOverlaySlot_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_Event_PlayerPresence = K2Node_Event_PlayerPresence;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.OnDisplayReset__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PlayerInfoDisplay_C::OnDisplayReset__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerInfoDisplay_C", "OnDisplayReset__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


