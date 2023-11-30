#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ReviveBeaconOverlay.ReviveBeaconOverlay_C
// (None)

class UClass* UReviveBeaconOverlay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ReviveBeaconOverlay_C");

	return Clss;
}


// ReviveBeaconOverlay_C ReviveBeaconOverlay.Default__ReviveBeaconOverlay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UReviveBeaconOverlay_C* UReviveBeaconOverlay_C::GetDefaultObj()
{
	static class UReviveBeaconOverlay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UReviveBeaconOverlay_C*>(UReviveBeaconOverlay_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ReviveBeaconOverlay.ReviveBeaconOverlay_C.TickText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             CallFunc_GetServerWorldTimeSeconds_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FCeil_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct Engine_FormatArgumentData   K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct Engine_FormatArgumentData>K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// double                             CallFunc_Subtract_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UReviveBeaconOverlay_C::TickText(double CallFunc_GetServerWorldTimeSeconds_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, int32 CallFunc_FCeil_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_FClamp_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue, const struct Engine_FormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct Engine_FormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReviveBeaconOverlay_C", "TickText");

	Params::UReviveBeaconOverlay_C_TickText_Params Parms{};

	Parms.CallFunc_GetServerWorldTimeSeconds_ReturnValue = CallFunc_GetServerWorldTimeSeconds_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_FCeil_ReturnValue = CallFunc_FCeil_ReturnValue;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue = CallFunc_Conv_IntToInt64_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_A_ImplicitCast = CallFunc_Subtract_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ReviveBeaconOverlay.ReviveBeaconOverlay_C.StartReviveDisplay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UReviveBeaconOverlay_C::StartReviveDisplay(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReviveBeaconOverlay_C", "StartReviveDisplay");

	Params::UReviveBeaconOverlay_C_StartReviveDisplay_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ReviveBeaconOverlay.ReviveBeaconOverlay_C.OnRespawnCompleteTimeChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValGameState_Frontier*      K2Node_DynamicCast_AsVal_Game_State_Frontier                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UReviveBeaconOverlay_C::OnRespawnCompleteTimeChanged(float Value, class AGameStateBase* CallFunc_GetGameState_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, class AValGameState_Frontier* K2Node_DynamicCast_AsVal_Game_State_Frontier, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, double CallFunc_Greater_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReviveBeaconOverlay_C", "OnRespawnCompleteTimeChanged");

	Params::UReviveBeaconOverlay_C_OnRespawnCompleteTimeChanged_Params Parms{};

	Parms.Value = Value;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.K2Node_DynamicCast_AsVal_Game_State_Frontier = K2Node_DynamicCast_AsVal_Game_State_Frontier;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast = CallFunc_Greater_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ReviveBeaconOverlay.ReviveBeaconOverlay_C.BindReviveBeacon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_ReviveBeacon_C*          OwningBeacon                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFriendlyWithLocalViewTarget_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UReviveBeaconOverlay_C::BindReviveBeacon(class ABP_ReviveBeacon_C* OwningBeacon, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsFriendlyWithLocalViewTarget_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReviveBeaconOverlay_C", "BindReviveBeacon");

	Params::UReviveBeaconOverlay_C_BindReviveBeacon_Params Parms{};

	Parms.OwningBeacon = OwningBeacon;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsFriendlyWithLocalViewTarget_ReturnValue = CallFunc_IsFriendlyWithLocalViewTarget_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ReviveBeaconOverlay.ReviveBeaconOverlay_C.SetPlayerName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AValPlayerState*             RespawnPlayer                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetPlayerName_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UReviveBeaconOverlay_C::SetPlayerName(class AValPlayerState* RespawnPlayer, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_GetPlayerName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReviveBeaconOverlay_C", "SetPlayerName");

	Params::UReviveBeaconOverlay_C_SetPlayerName_Params Parms{};

	Parms.RespawnPlayer = RespawnPlayer;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetPlayerName_ReturnValue = CallFunc_GetPlayerName_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ReviveBeaconOverlay.ReviveBeaconOverlay_C.UpdateHovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Hovered                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UReviveBeaconOverlay_C::UpdateHovered(bool Hovered, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReviveBeaconOverlay_C", "UpdateHovered");

	Params::UReviveBeaconOverlay_C_UpdateHovered_Params Parms{};

	Parms.Hovered = Hovered;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ReviveBeaconOverlay.ReviveBeaconOverlay_C.UpdateDisplay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visible                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UReviveBeaconOverlay_C::UpdateDisplay(bool Visible, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReviveBeaconOverlay_C", "UpdateDisplay");

	Params::UReviveBeaconOverlay_C_UpdateDisplay_Params Parms{};

	Parms.Visible = Visible;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ReviveBeaconOverlay.ReviveBeaconOverlay_C.OnOwningObjectiveSet
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AValPlayerController*        CallFunc_GetLocalPlayer_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsBindingReady_Value                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UReviveBeaconOverlay_C::OnOwningObjectiveSet(class AValPlayerController* CallFunc_GetLocalPlayer_ReturnValue, bool CallFunc_IsBindingReady_Value, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReviveBeaconOverlay_C", "OnOwningObjectiveSet");

	Params::UReviveBeaconOverlay_C_OnOwningObjectiveSet_Params Parms{};

	Parms.CallFunc_GetLocalPlayer_ReturnValue = CallFunc_GetLocalPlayer_ReturnValue;
	Parms.CallFunc_IsBindingReady_Value = CallFunc_IsBindingReady_Value;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ReviveBeaconOverlay.ReviveBeaconOverlay_C.BindCharacter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AValPlayerStateBase*         K2Node_DynamicCast_AsVal_Player_State_Base                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UReviveBeaconOverlay_C::BindCharacter(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AValPlayerStateBase* K2Node_DynamicCast_AsVal_Player_State_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReviveBeaconOverlay_C", "BindCharacter");

	Params::UReviveBeaconOverlay_C_BindCharacter_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_DynamicCast_AsVal_Player_State_Base = K2Node_DynamicCast_AsVal_Player_State_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ReviveBeaconOverlay.ReviveBeaconOverlay_C.UpdateDamageType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UReviveBeaconOverlay_C::UpdateDamageType(int32 Value, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReviveBeaconOverlay_C", "UpdateDamageType");

	Params::UReviveBeaconOverlay_C_UpdateDamageType_Params Parms{};

	Parms.Value = Value;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ReviveBeaconOverlay.ReviveBeaconOverlay_C.GetAggregateWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UReviveBeaconOverlay_C::GetAggregateWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReviveBeaconOverlay_C", "GetAggregateWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReviveBeaconOverlay.ReviveBeaconOverlay_C.SetTeamFriendly
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct SlateCore_SlateColor        K2Node_MakeStruct_SlateColor                                     (None)

void UReviveBeaconOverlay_C::SetTeamFriendly(const struct SlateCore_SlateColor& K2Node_MakeStruct_SlateColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReviveBeaconOverlay_C", "SetTeamFriendly");

	Params::UReviveBeaconOverlay_C_SetTeamFriendly_Params Parms{};

	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ReviveBeaconOverlay.ReviveBeaconOverlay_C.SetTeamEnemy
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct SlateCore_SlateColor        K2Node_MakeStruct_SlateColor                                     (None)

void UReviveBeaconOverlay_C::SetTeamEnemy(const struct SlateCore_SlateColor& K2Node_MakeStruct_SlateColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReviveBeaconOverlay_C", "SetTeamEnemy");

	Params::UReviveBeaconOverlay_C_SetTeamEnemy_Params Parms{};

	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ReviveBeaconOverlay.ReviveBeaconOverlay_C.AddDamage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Valhalla_DamageData         Data                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCharacterOverlay_Damage_C*  CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            K2Node_DynamicCast_AsCanvas_Panel_Slot                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UReviveBeaconOverlay_C::AddDamage(const struct Valhalla_DamageData& Data, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UCharacterOverlay_Damage_C* CallFunc_Create_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReviveBeaconOverlay_C", "AddDamage");

	Params::UReviveBeaconOverlay_C_AddDamage_Params Parms{};

	Parms.Data = Data;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.K2Node_DynamicCast_AsCanvas_Panel_Slot = K2Node_DynamicCast_AsCanvas_Panel_Slot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ReviveBeaconOverlay.ReviveBeaconOverlay_C.IsBindingReady
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValPlayerController*        CallFunc_GetLocalPlayer_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsBindingReady_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsBindingReady_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UReviveBeaconOverlay_C::IsBindingReady(bool* Value, class AValPlayerController* CallFunc_GetLocalPlayer_ReturnValue, bool CallFunc_IsBindingReady_ReturnValue, bool CallFunc_IsBindingReady_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReviveBeaconOverlay_C", "IsBindingReady");

	Params::UReviveBeaconOverlay_C_IsBindingReady_Params Parms{};

	Parms.CallFunc_GetLocalPlayer_ReturnValue = CallFunc_GetLocalPlayer_ReturnValue;
	Parms.CallFunc_IsBindingReady_ReturnValue = CallFunc_IsBindingReady_ReturnValue;
	Parms.CallFunc_IsBindingReady_ReturnValue_1 = CallFunc_IsBindingReady_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Function ReviveBeaconOverlay.ReviveBeaconOverlay_C.IsEnemy
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValPlayerController*        CallFunc_GetLocalPlayer_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEnemyWith_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UReviveBeaconOverlay_C::IsEnemy(bool* Value, bool CallFunc_IsValid_ReturnValue, class AValPlayerController* CallFunc_GetLocalPlayer_ReturnValue, bool CallFunc_IsEnemyWith_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReviveBeaconOverlay_C", "IsEnemy");

	Params::UReviveBeaconOverlay_C_IsEnemy_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetLocalPlayer_ReturnValue = CallFunc_GetLocalPlayer_ReturnValue;
	Parms.CallFunc_IsEnemyWith_ReturnValue = CallFunc_IsEnemyWith_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Function ReviveBeaconOverlay.ReviveBeaconOverlay_C.UpdateHealth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UReviveBeaconOverlay_C::UpdateHealth(double CallFunc_FMax_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReviveBeaconOverlay_C", "UpdateHealth");

	Params::UReviveBeaconOverlay_C_UpdateHealth_Params Parms{};

	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ReviveBeaconOverlay.ReviveBeaconOverlay_C.UpdateTeam
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               LocalEnemy                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEnemy_Value                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEnemy_Value_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UReviveBeaconOverlay_C::UpdateTeam(bool LocalEnemy, bool CallFunc_IsEnemy_Value, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsEnemy_Value_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReviveBeaconOverlay_C", "UpdateTeam");

	Params::UReviveBeaconOverlay_C_UpdateTeam_Params Parms{};

	Parms.LocalEnemy = LocalEnemy;
	Parms.CallFunc_IsEnemy_Value = CallFunc_IsEnemy_Value;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_IsEnemy_Value_1 = CallFunc_IsEnemy_Value_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ReviveBeaconOverlay.ReviveBeaconOverlay_C.BindSettings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UValGameUserSettings*        K2Node_DynamicCast_AsVal_Game_User_Settings                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UReviveBeaconOverlay_C::BindSettings(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, class UValGameUserSettings* K2Node_DynamicCast_AsVal_Game_User_Settings, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReviveBeaconOverlay_C", "BindSettings");

	Params::UReviveBeaconOverlay_C_BindSettings_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.K2Node_DynamicCast_AsVal_Game_User_Settings = K2Node_DynamicCast_AsVal_Game_User_Settings;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ReviveBeaconOverlay.ReviveBeaconOverlay_C.OnLocalDealtDamage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Valhalla_DamageData         Data                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// class AActor*                      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UReviveBeaconOverlay_C::OnLocalDealtDamage(const struct Valhalla_DamageData& Data, class AActor* Target, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReviveBeaconOverlay_C", "OnLocalDealtDamage");

	Params::UReviveBeaconOverlay_C_OnLocalDealtDamage_Params Parms{};

	Parms.Data = Data;
	Parms.Target = Target;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ReviveBeaconOverlay.ReviveBeaconOverlay_C.OnDamageComplete
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveChild_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UReviveBeaconOverlay_C::OnDamageComplete(class UWidget* Widget, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_RemoveChild_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReviveBeaconOverlay_C", "OnDamageComplete");

	Params::UReviveBeaconOverlay_C_OnDamageComplete_Params Parms{};

	Parms.Widget = Widget;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_RemoveChild_ReturnValue = CallFunc_RemoveChild_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ReviveBeaconOverlay.ReviveBeaconOverlay_C.OnSettingsChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UValGameUserSettings*        K2Node_DynamicCast_AsVal_Game_User_Settings                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetDamageNumberType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UReviveBeaconOverlay_C::OnSettingsChanged(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, class UValGameUserSettings* K2Node_DynamicCast_AsVal_Game_User_Settings, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetDamageNumberType_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReviveBeaconOverlay_C", "OnSettingsChanged");

	Params::UReviveBeaconOverlay_C_OnSettingsChanged_Params Parms{};

	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.K2Node_DynamicCast_AsVal_Game_User_Settings = K2Node_DynamicCast_AsVal_Game_User_Settings;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetDamageNumberType_ReturnValue = CallFunc_GetDamageNumberType_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ReviveBeaconOverlay.ReviveBeaconOverlay_C.OnUpdateInterface
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UReviveBeaconOverlay_C::OnUpdateInterface()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReviveBeaconOverlay_C", "OnUpdateInterface");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReviveBeaconOverlay.ReviveBeaconOverlay_C.OnHealthMaxChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              OldValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UReviveBeaconOverlay_C::OnHealthMaxChanged(int32 OldValue, int32 NewValue, double CallFunc_Conv_IntToDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReviveBeaconOverlay_C", "OnHealthMaxChanged");

	Params::UReviveBeaconOverlay_C_OnHealthMaxChanged_Params Parms{};

	Parms.OldValue = OldValue;
	Parms.NewValue = NewValue;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ReviveBeaconOverlay.ReviveBeaconOverlay_C.OnHealthChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              OldValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UReviveBeaconOverlay_C::OnHealthChanged(int32 OldValue, int32 NewValue, double CallFunc_Conv_IntToDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReviveBeaconOverlay_C", "OnHealthChanged");

	Params::UReviveBeaconOverlay_C_OnHealthChanged_Params Parms{};

	Parms.OldValue = OldValue;
	Parms.NewValue = NewValue;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ReviveBeaconOverlay.ReviveBeaconOverlay_C.OnBindingReady
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EBindingType            Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UReviveBeaconOverlay_C::OnBindingReady(enum class EBindingType Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReviveBeaconOverlay_C", "OnBindingReady");

	Params::UReviveBeaconOverlay_C_OnBindingReady_Params Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ReviveBeaconOverlay.ReviveBeaconOverlay_C.BindHealth
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AValReviveBeacon*            K2Node_DynamicCast_AsVal_Revive_Beacon                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFriendlyWithLocalViewTarget_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetHealthMax_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetHealth_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetPlayerName_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UReviveBeaconOverlay_C::BindHealth(class AValReviveBeacon* K2Node_DynamicCast_AsVal_Revive_Beacon, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsFriendlyWithLocalViewTarget_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetHealthMax_ReturnValue, int32 CallFunc_GetHealth_ReturnValue, const class FString& CallFunc_GetPlayerName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReviveBeaconOverlay_C", "BindHealth");

	Params::UReviveBeaconOverlay_C_BindHealth_Params Parms{};

	Parms.K2Node_DynamicCast_AsVal_Revive_Beacon = K2Node_DynamicCast_AsVal_Revive_Beacon;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsFriendlyWithLocalViewTarget_ReturnValue = CallFunc_IsFriendlyWithLocalViewTarget_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetHealthMax_ReturnValue = CallFunc_GetHealthMax_ReturnValue;
	Parms.CallFunc_GetHealth_ReturnValue = CallFunc_GetHealth_ReturnValue;
	Parms.CallFunc_GetPlayerName_ReturnValue = CallFunc_GetPlayerName_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ReviveBeaconOverlay.ReviveBeaconOverlay_C.BindPlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AValPlayerStateBase*         PlayerState                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AValPlayerState*             K2Node_DynamicCast_AsVal_Player_State                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UReviveBeaconOverlay_C::BindPlayer(class AValPlayerStateBase* PlayerState, class AValPlayerState* K2Node_DynamicCast_AsVal_Player_State, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReviveBeaconOverlay_C", "BindPlayer");

	Params::UReviveBeaconOverlay_C_BindPlayer_Params Parms{};

	Parms.PlayerState = PlayerState;
	Parms.K2Node_DynamicCast_AsVal_Player_State = K2Node_DynamicCast_AsVal_Player_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ReviveBeaconOverlay.ReviveBeaconOverlay_C.BindLocal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AValCharacter*               CallFunc_GetLocalChar_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AValPlayerController*        CallFunc_GetLocalPlayer_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValPlayerState*             K2Node_DynamicCast_AsVal_Player_State                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UReviveBeaconOverlay_C::BindLocal(class AValCharacter* CallFunc_GetLocalChar_ReturnValue, class AValPlayerController* CallFunc_GetLocalPlayer_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AValPlayerState* K2Node_DynamicCast_AsVal_Player_State, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReviveBeaconOverlay_C", "BindLocal");

	Params::UReviveBeaconOverlay_C_BindLocal_Params Parms{};

	Parms.CallFunc_GetLocalChar_ReturnValue = CallFunc_GetLocalChar_ReturnValue;
	Parms.CallFunc_GetLocalPlayer_ReturnValue = CallFunc_GetLocalPlayer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsVal_Player_State = K2Node_DynamicCast_AsVal_Player_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ReviveBeaconOverlay.ReviveBeaconOverlay_C.BindAll
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_ReviveBeacon_C*          K2Node_DynamicCast_AsBP_Revive_Beacon                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsBindingReady_Value                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UReviveBeaconOverlay_C::BindAll(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ABP_ReviveBeacon_C* K2Node_DynamicCast_AsBP_Revive_Beacon, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsBindingReady_Value, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReviveBeaconOverlay_C", "BindAll");

	Params::UReviveBeaconOverlay_C_BindAll_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_DynamicCast_AsBP_Revive_Beacon = K2Node_DynamicCast_AsBP_Revive_Beacon;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsBindingReady_Value = CallFunc_IsBindingReady_Value;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ReviveBeaconOverlay.ReviveBeaconOverlay_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UReviveBeaconOverlay_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReviveBeaconOverlay_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReviveBeaconOverlay.ReviveBeaconOverlay_C.OnUpdateVisibility
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               Visible                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Hovered                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bClose                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bShowHealthBar                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UReviveBeaconOverlay_C::OnUpdateVisibility(bool Visible, bool Hovered, bool bClose, bool bShowHealthBar)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReviveBeaconOverlay_C", "OnUpdateVisibility");

	Params::UReviveBeaconOverlay_C_OnUpdateVisibility_Params Parms{};

	Parms.Visible = Visible;
	Parms.Hovered = Hovered;
	Parms.bClose = bClose;
	Parms.bShowHealthBar = bShowHealthBar;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ReviveBeaconOverlay.ReviveBeaconOverlay_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct SlateCore_Geometry          MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UReviveBeaconOverlay_C::Tick(const struct SlateCore_Geometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReviveBeaconOverlay_C", "Tick");

	Params::UReviveBeaconOverlay_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ReviveBeaconOverlay.ReviveBeaconOverlay_C.ExecuteUbergraph_ReviveBeaconOverlay
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Visible                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Hovered                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bClose                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bShowHealthBar                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct SlateCore_Geometry          K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UReviveBeaconOverlay_C::ExecuteUbergraph_ReviveBeaconOverlay(int32 EntryPoint, bool K2Node_Event_Visible, bool K2Node_Event_Hovered, bool K2Node_Event_bClose, bool K2Node_Event_bShowHealthBar, const struct SlateCore_Geometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReviveBeaconOverlay_C", "ExecuteUbergraph_ReviveBeaconOverlay");

	Params::UReviveBeaconOverlay_C_ExecuteUbergraph_ReviveBeaconOverlay_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Visible = K2Node_Event_Visible;
	Parms.K2Node_Event_Hovered = K2Node_Event_Hovered;
	Parms.K2Node_Event_bClose = K2Node_Event_bClose;
	Parms.K2Node_Event_bShowHealthBar = K2Node_Event_bShowHealthBar;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


