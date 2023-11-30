#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass FirstTimeSafeZoneWidget.FirstTimeSafeZoneWidget_C
// (None)

class UClass* UFirstTimeSafeZoneWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FirstTimeSafeZoneWidget_C");

	return Clss;
}


// FirstTimeSafeZoneWidget_C FirstTimeSafeZoneWidget.Default__FirstTimeSafeZoneWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFirstTimeSafeZoneWidget_C* UFirstTimeSafeZoneWidget_C::GetDefaultObj()
{
	static class UFirstTimeSafeZoneWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFirstTimeSafeZoneWidget_C*>(UFirstTimeSafeZoneWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function FirstTimeSafeZoneWidget.FirstTimeSafeZoneWidget_C.InitializeWidgetNavigation
// (Event, Public, BlueprintEvent)
// Parameters:

void UFirstTimeSafeZoneWidget_C::InitializeWidgetNavigation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstTimeSafeZoneWidget_C", "InitializeWidgetNavigation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FirstTimeSafeZoneWidget.FirstTimeSafeZoneWidget_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFirstTimeSafeZoneWidget_C::InitializeWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstTimeSafeZoneWidget_C", "InitializeWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FirstTimeSafeZoneWidget.FirstTimeSafeZoneWidget_C.OnShown
// (Event, Public, BlueprintEvent)
// Parameters:

void UFirstTimeSafeZoneWidget_C::OnShown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstTimeSafeZoneWidget_C", "OnShown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FirstTimeSafeZoneWidget.FirstTimeSafeZoneWidget_C.BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UFirstTimeSafeZoneWidget_C::BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstTimeSafeZoneWidget_C", "BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	Params::UFirstTimeSafeZoneWidget_C_BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstTimeSafeZoneWidget.FirstTimeSafeZoneWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFirstTimeSafeZoneWidget_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstTimeSafeZoneWidget_C", "PreConstruct");

	Params::UFirstTimeSafeZoneWidget_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstTimeSafeZoneWidget.FirstTimeSafeZoneWidget_C.ExecuteUbergraph_FirstTimeSafeZoneWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URHSettingsWidget*           CallFunc_CreateSettingsWidgetWithConfig_ReturnValue              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class URHGameUserSettings*         K2Node_DynamicCast_AsRHGame_User_Settings                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_BrightLobbyHUD_C*        K2Node_DynamicCast_AsBP_Bright_Lobby_HUD                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Remove_Top_View_Route_ViewChanged                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_ComponentBoundEvent_Widget                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UOverlaySlot*                CallFunc_AddChildToOverlay_ReturnValue                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetFontByName_HasFound                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct SlateCore_SlateFontInfo     CallFunc_GetFontByName_FontInfo                                  (HasGetValueTypeHash)
// bool                               CallFunc_GetColorByName_HasFound                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_LinearColor     CallFunc_GetColorByName_Color                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFirstTimeSafeZoneWidget_C::ExecuteUbergraph_FirstTimeSafeZoneWidget(int32 EntryPoint, class URHSettingsWidget* CallFunc_CreateSettingsWidgetWithConfig_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, class URHGameUserSettings* K2Node_DynamicCast_AsRHGame_User_Settings, bool K2Node_DynamicCast_bSuccess, class FName CallFunc_MakeLiteralName_ReturnValue, class ABP_BrightLobbyHUD_C* K2Node_DynamicCast_AsBP_Bright_Lobby_HUD, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Remove_Top_View_Route_ViewChanged, bool CallFunc_IsValid_ReturnValue_1, class UWidget* K2Node_ComponentBoundEvent_Widget, class UOverlaySlot* CallFunc_AddChildToOverlay_ReturnValue, bool K2Node_Event_IsDesignTime, bool CallFunc_GetFontByName_HasFound, const struct SlateCore_SlateFontInfo& CallFunc_GetFontByName_FontInfo, bool CallFunc_GetColorByName_HasFound, const struct CoreUObject_LinearColor& CallFunc_GetColorByName_Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstTimeSafeZoneWidget_C", "ExecuteUbergraph_FirstTimeSafeZoneWidget");

	Params::UFirstTimeSafeZoneWidget_C_ExecuteUbergraph_FirstTimeSafeZoneWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_CreateSettingsWidgetWithConfig_ReturnValue = CallFunc_CreateSettingsWidgetWithConfig_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.K2Node_DynamicCast_AsRHGame_User_Settings = K2Node_DynamicCast_AsRHGame_User_Settings;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Bright_Lobby_HUD = K2Node_DynamicCast_AsBP_Bright_Lobby_HUD;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Remove_Top_View_Route_ViewChanged = CallFunc_Remove_Top_View_Route_ViewChanged;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_Widget = K2Node_ComponentBoundEvent_Widget;
	Parms.CallFunc_AddChildToOverlay_ReturnValue = CallFunc_AddChildToOverlay_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetFontByName_HasFound = CallFunc_GetFontByName_HasFound;
	Parms.CallFunc_GetFontByName_FontInfo = CallFunc_GetFontByName_FontInfo;
	Parms.CallFunc_GetColorByName_HasFound = CallFunc_GetColorByName_HasFound;
	Parms.CallFunc_GetColorByName_Color = CallFunc_GetColorByName_Color;

	UObject::ProcessEvent(Func, &Parms);

}

}


