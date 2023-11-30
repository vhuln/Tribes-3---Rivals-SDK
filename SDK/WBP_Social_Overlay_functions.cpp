#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Social_Overlay.WBP_Social_Overlay_C
// (None)

class UClass* UWBP_Social_Overlay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Social_Overlay_C");

	return Clss;
}


// WBP_Social_Overlay_C WBP_Social_Overlay.Default__WBP_Social_Overlay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Social_Overlay_C* UWBP_Social_Overlay_C::GetDefaultObj()
{
	static class UWBP_Social_Overlay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Social_Overlay_C*>(UWBP_Social_Overlay_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_Social_Overlay.WBP_Social_Overlay_C.OnFriendsScrolled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Social_Overlay_C::OnFriendsScrolled(bool CallFunc_IsVisible_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Overlay_C", "OnFriendsScrolled");

	Params::UWBP_Social_Overlay_C_OnFriendsScrolled_Params Parms{};

	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Social_Overlay.WBP_Social_Overlay_C.Toggle Context Menu for Player Card
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URHWidget*                   KSWidget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_player_card_module_C*   K2Node_DynamicCast_AsWBP_Player_Card_Module                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct SlateCore_Margin            K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_Conv_InterfaceToObject_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Social_Overlay_C::Toggle_Context_Menu_for_Player_Card(class URHWidget* KSWidget, class UWBP_player_card_module_C* K2Node_DynamicCast_AsWBP_Player_Card_Module, bool K2Node_DynamicCast_bSuccess, const struct SlateCore_Margin& K2Node_MakeStruct_Margin, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Overlay_C", "Toggle Context Menu for Player Card");

	Params::UWBP_Social_Overlay_C_Toggle_Context_Menu_for_Player_Card_Params Parms{};

	Parms.KSWidget = KSWidget;
	Parms.K2Node_DynamicCast_AsWBP_Player_Card_Module = K2Node_DynamicCast_AsWBP_Player_Card_Module;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.CallFunc_Conv_InterfaceToObject_ReturnValue = CallFunc_Conv_InterfaceToObject_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Social_Overlay.WBP_Social_Overlay_C.HandleStatusMenuHidden
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Social_Overlay_C::HandleStatusMenuHidden(int32 CallFunc_GetActiveWidgetIndex_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Overlay_C", "HandleStatusMenuHidden");

	Params::UWBP_Social_Overlay_C_HandleStatusMenuHidden_Params Parms{};

	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue = CallFunc_GetActiveWidgetIndex_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Social_Overlay.WBP_Social_Overlay_C.HandleStatusMenuShown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PlayerStatus_ContextMenuOption_C*FocusWidget                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Social_Overlay_C::HandleStatusMenuShown(class UWBP_PlayerStatus_ContextMenuOption_C* FocusWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Overlay_C", "HandleStatusMenuShown");

	Params::UWBP_Social_Overlay_C_HandleStatusMenuShown_Params Parms{};

	Parms.FocusWidget = FocusWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Social_Overlay.WBP_Social_Overlay_C.HandleStatusNavigationReady
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UWBP_PlayerStatus_ContextMenuOption_C*>StatusButtons                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// class UWBP_PlayerStatus_ContextMenuOption_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Social_Overlay_C::HandleStatusNavigationReady(TArray<class UWBP_PlayerStatus_ContextMenuOption_C*>& StatusButtons, class UWBP_PlayerStatus_ContextMenuOption_C* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Overlay_C", "HandleStatusNavigationReady");

	Params::UWBP_Social_Overlay_C_HandleStatusNavigationReady_Params Parms{};

	Parms.StatusButtons = StatusButtons;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Social_Overlay.WBP_Social_Overlay_C.SetupHeader
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Social_Overlay_C::SetupHeader(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Overlay_C", "SetupHeader");

	Params::UWBP_Social_Overlay_C_SetupHeader_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Social_Overlay.WBP_Social_Overlay_C.SetTabIndex
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWBP_subscreen_nav_tab_C*>CallFunc_Map_Keys_Keys                                           (ReferenceParm, ContainsInstancedReference)
// class UWBP_subscreen_nav_tab_C*    CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Social_Overlay_C::SetTabIndex(int32 Index, TArray<class UWBP_subscreen_nav_tab_C*>& CallFunc_Map_Keys_Keys, class UWBP_subscreen_nav_tab_C* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Overlay_C", "SetTabIndex");

	Params::UWBP_Social_Overlay_C_SetTabIndex_Params Parms{};

	Parms.Index = Index;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Social_Overlay.WBP_Social_Overlay_C.OnTabChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_subscreen_nav_tab_C*    ActiveTabButton                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Social_Overlay_C::OnTabChange(class UWBP_subscreen_nav_tab_C* ActiveTabButton, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Overlay_C", "OnTabChange");

	Params::UWBP_Social_Overlay_C_OnTabChange_Params Parms{};

	Parms.ActiveTabButton = ActiveTabButton;
	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue = CallFunc_GetActiveWidgetIndex_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Social_Overlay.WBP_Social_Overlay_C.SetActiveTabByWidget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWBP_subscreen_nav_tab_C*>CallFunc_Map_Keys_Keys                                           (ReferenceParm, ContainsInstancedReference)
// class UWBP_subscreen_nav_tab_C*    CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URHWidget*                   CallFunc_Map_Find_Value                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Social_Overlay_C::SetActiveTabByWidget(class UWidget* Widget, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWBP_subscreen_nav_tab_C*>& CallFunc_Map_Keys_Keys, class UWBP_subscreen_nav_tab_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class URHWidget* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Overlay_C", "SetActiveTabByWidget");

	Params::UWBP_Social_Overlay_C_SetActiveTabByWidget_Params Parms{};

	Parms.Widget = Widget;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Social_Overlay.WBP_Social_Overlay_C.OnMouseButtonUp
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct SlateCore_Geometry          MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct SlateCore_PointerEvent      MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct UMG_EventReply              ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct UMG_EventReply              CallFunc_Unhandled_ReturnValue                                   (None)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct UMG_EventReply              CallFunc_Handled_ReturnValue                                     (None)

struct UMG_EventReply UWBP_Social_Overlay_C::OnMouseButtonUp(const struct SlateCore_Geometry& MyGeometry, struct SlateCore_PointerEvent& MouseEvent, const struct UMG_EventReply& CallFunc_Unhandled_ReturnValue, bool CallFunc_IsVisible_ReturnValue, const struct UMG_EventReply& CallFunc_Handled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Overlay_C", "OnMouseButtonUp");

	Params::UWBP_Social_Overlay_C_OnMouseButtonUp_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_Social_Overlay.WBP_Social_Overlay_C.MoveTabBy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumWidgets_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Social_Overlay_C::MoveTabBy(int32 Value, int32 CallFunc_GetNumWidgets_ReturnValue, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Percent_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Overlay_C", "MoveTabBy");

	Params::UWBP_Social_Overlay_C_MoveTabBy_Params Parms{};

	Parms.Value = Value;
	Parms.CallFunc_GetNumWidgets_ReturnValue = CallFunc_GetNumWidgets_ReturnValue;
	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue = CallFunc_GetActiveWidgetIndex_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Percent_IntInt_ReturnValue = CallFunc_Percent_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Social_Overlay.WBP_Social_Overlay_C.SetupNavTabs
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ARHHUDCommon*                HUD                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UWBP_subscreen_nav_tab_C*>CallFunc_Map_Keys_Keys                                           (ReferenceParm, ContainsInstancedReference)
// class UWBP_subscreen_nav_tab_C*    CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TMap<class UWBP_subscreen_nav_tab_C*, class URHWidget*>K2Node_MakeMap_Map                                               (ContainsInstancedReference)
// class URHWidget*                   CallFunc_Map_Find_Value                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URHSocialPanelBase*          K2Node_DynamicCast_AsRHSocial_Panel_Base                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Social_Overlay_C::SetupNavTabs(class ARHHUDCommon* HUD, int32 Temp_int_Array_Index_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, TArray<class UWBP_subscreen_nav_tab_C*>& CallFunc_Map_Keys_Keys, class UWBP_subscreen_nav_tab_C* CallFunc_Array_Get_Item, TMap<class UWBP_subscreen_nav_tab_C*, class URHWidget*> K2Node_MakeMap_Map, class URHWidget* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class URHSocialPanelBase* K2Node_DynamicCast_AsRHSocial_Panel_Base, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Overlay_C", "SetupNavTabs");

	Params::UWBP_Social_Overlay_C_SetupNavTabs_Params Parms{};

	Parms.HUD = HUD;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_MakeMap_Map = K2Node_MakeMap_Map;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.K2Node_DynamicCast_AsRHSocial_Panel_Base = K2Node_DynamicCast_AsRHSocial_Panel_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Social_Overlay.WBP_Social_Overlay_C.NavigateBack
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentFocusGroup_OutFocusGroup                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCurrentFocusGroup_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentFocusGroup_OutFocusGroup_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCurrentFocusGroup_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NavigateBack_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UWBP_Social_Overlay_C::NavigateBack(int32 CallFunc_GetCurrentFocusGroup_OutFocusGroup, bool CallFunc_GetCurrentFocusGroup_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_GetCurrentFocusGroup_OutFocusGroup_1, bool CallFunc_GetCurrentFocusGroup_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_NavigateBack_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Overlay_C", "NavigateBack");

	Params::UWBP_Social_Overlay_C_NavigateBack_Params Parms{};

	Parms.CallFunc_GetCurrentFocusGroup_OutFocusGroup = CallFunc_GetCurrentFocusGroup_OutFocusGroup;
	Parms.CallFunc_GetCurrentFocusGroup_ReturnValue = CallFunc_GetCurrentFocusGroup_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetCurrentFocusGroup_OutFocusGroup_1 = CallFunc_GetCurrentFocusGroup_OutFocusGroup_1;
	Parms.CallFunc_GetCurrentFocusGroup_ReturnValue_1 = CallFunc_GetCurrentFocusGroup_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_NavigateBack_ReturnValue = CallFunc_NavigateBack_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_Social_Overlay.WBP_Social_Overlay_C.ClosePanel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_RemoveViewRoute_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Social_Overlay_C::ClosePanel(bool CallFunc_RemoveViewRoute_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Overlay_C", "ClosePanel");

	Params::UWBP_Social_Overlay_C_ClosePanel_Params Parms{};

	Parms.CallFunc_RemoveViewRoute_ReturnValue = CallFunc_RemoveViewRoute_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Social_Overlay.WBP_Social_Overlay_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Social_Overlay_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Overlay_C", "PreConstruct");

	Params::UWBP_Social_Overlay_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Social_Overlay.WBP_Social_Overlay_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_Social_Overlay_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Overlay_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Social_Overlay.WBP_Social_Overlay_C.OnShown
// (Event, Public, BlueprintEvent)
// Parameters:

void UWBP_Social_Overlay_C::OnShown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Overlay_C", "OnShown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Social_Overlay.WBP_Social_Overlay_C.BndEvt__Blocker_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_Social_Overlay_C::BndEvt__Blocker_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Overlay_C", "BndEvt__Blocker_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Social_Overlay.WBP_Social_Overlay_C.StartShowSequence
// (Event, Public, BlueprintEvent)
// Parameters:
// class FName                        FromRoute                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ToRoute                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Social_Overlay_C::StartShowSequence(class FName FromRoute, class FName ToRoute)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Overlay_C", "StartShowSequence");

	Params::UWBP_Social_Overlay_C_StartShowSequence_Params Parms{};

	Parms.FromRoute = FromRoute;
	Parms.ToRoute = ToRoute;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Social_Overlay.WBP_Social_Overlay_C.StartHideSequence
// (Event, Public, BlueprintEvent)
// Parameters:
// class FName                        FromRoute                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ToRoute                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Social_Overlay_C::StartHideSequence(class FName FromRoute, class FName ToRoute)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Overlay_C", "StartHideSequence");

	Params::UWBP_Social_Overlay_C_StartHideSequence_Params Parms{};

	Parms.FromRoute = FromRoute;
	Parms.ToRoute = ToRoute;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Social_Overlay.WBP_Social_Overlay_C.UninitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Social_Overlay_C::UninitializeWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Overlay_C", "UninitializeWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Social_Overlay.WBP_Social_Overlay_C.OnPlayerCardClick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class URHWidget*                   PlayerCard                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Social_Overlay_C::OnPlayerCardClick(class URHWidget* PlayerCard)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Overlay_C", "OnPlayerCardClick");

	Params::UWBP_Social_Overlay_C_OnPlayerCardClick_Params Parms{};

	Parms.PlayerCard = PlayerCard;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Social_Overlay.WBP_Social_Overlay_C.OnInputStateChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ERH_INPUT_STATE         InputState                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Social_Overlay_C::OnInputStateChange(enum class ERH_INPUT_STATE InputState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Overlay_C", "OnInputStateChange");

	Params::UWBP_Social_Overlay_C_OnInputStateChange_Params Parms{};

	Parms.InputState = InputState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Social_Overlay.WBP_Social_Overlay_C.InitializeWidgetNavigation
// (Event, Public, BlueprintEvent)
// Parameters:

void UWBP_Social_Overlay_C::InitializeWidgetNavigation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Overlay_C", "InitializeWidgetNavigation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Social_Overlay.WBP_Social_Overlay_C.OnHide
// (Event, Public, BlueprintEvent)
// Parameters:

void UWBP_Social_Overlay_C::OnHide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Overlay_C", "OnHide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Social_Overlay.WBP_Social_Overlay_C.OnTabLeft
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Social_Overlay_C::OnTabLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Overlay_C", "OnTabLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Social_Overlay.WBP_Social_Overlay_C.OnTabRight
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Social_Overlay_C::OnTabRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Overlay_C", "OnTabRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Social_Overlay.WBP_Social_Overlay_C.OnToggleSocial
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Social_Overlay_C::OnToggleSocial()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Overlay_C", "OnToggleSocial");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Social_Overlay.WBP_Social_Overlay_C.OnViewStateChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CurrentRoute                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        PreviousRoute                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EViewManagerLayer       Layer                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Social_Overlay_C::OnViewStateChange(class FName CurrentRoute, class FName PreviousRoute, enum class EViewManagerLayer Layer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Overlay_C", "OnViewStateChange");

	Params::UWBP_Social_Overlay_C_OnViewStateChange_Params Parms{};

	Parms.CurrentRoute = CurrentRoute;
	Parms.PreviousRoute = PreviousRoute;
	Parms.Layer = Layer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Social_Overlay.WBP_Social_Overlay_C.OnToggleStatusMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Social_Overlay_C::OnToggleStatusMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Overlay_C", "OnToggleStatusMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Social_Overlay.WBP_Social_Overlay_C.HandlePlayerInvitesChanged
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URHDataSocialCategory*       Category                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class URHDataSocialPlayer*> Players                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_Social_Overlay_C::HandlePlayerInvitesChanged(class URHDataSocialCategory* Category, TArray<class URHDataSocialPlayer*>& Players)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Overlay_C", "HandlePlayerInvitesChanged");

	Params::UWBP_Social_Overlay_C_HandlePlayerInvitesChanged_Params Parms{};

	Parms.Category = Category;
	Parms.Players = Players;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Social_Overlay.WBP_Social_Overlay_C.BndEvt__ContextBlocker_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_Social_Overlay_C::BndEvt__ContextBlocker_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Overlay_C", "BndEvt__ContextBlocker_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Social_Overlay.WBP_Social_Overlay_C.BndEvt__ContextMenu_K2Node_ComponentBoundEvent_5_OnReadyForNavigation__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// TArray<class UWidget*>             NavWidgets                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// class UWidget*                     Default_Widget                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Social_Overlay_C::BndEvt__ContextMenu_K2Node_ComponentBoundEvent_5_OnReadyForNavigation__DelegateSignature(TArray<class UWidget*>& NavWidgets, class UWidget* Default_Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Overlay_C", "BndEvt__ContextMenu_K2Node_ComponentBoundEvent_5_OnReadyForNavigation__DelegateSignature");

	Params::UWBP_Social_Overlay_C_BndEvt__ContextMenu_K2Node_ComponentBoundEvent_5_OnReadyForNavigation__DelegateSignature_Params Parms{};

	Parms.NavWidgets = NavWidgets;
	Parms.Default_Widget = Default_Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Social_Overlay.WBP_Social_Overlay_C.BndEvt__ContextMenu_K2Node_ComponentBoundEvent_6_OnMenuStart__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget*                     FocusWidget                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Social_Overlay_C::BndEvt__ContextMenu_K2Node_ComponentBoundEvent_6_OnMenuStart__DelegateSignature(class UWidget* FocusWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Overlay_C", "BndEvt__ContextMenu_K2Node_ComponentBoundEvent_6_OnMenuStart__DelegateSignature");

	Params::UWBP_Social_Overlay_C_BndEvt__ContextMenu_K2Node_ComponentBoundEvent_6_OnMenuStart__DelegateSignature_Params Parms{};

	Parms.FocusWidget = FocusWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Social_Overlay.WBP_Social_Overlay_C.BndEvt__ContextMenu_K2Node_ComponentBoundEvent_7_OnMenuHidden__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_Social_Overlay_C::BndEvt__ContextMenu_K2Node_ComponentBoundEvent_7_OnMenuHidden__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Overlay_C", "BndEvt__ContextMenu_K2Node_ComponentBoundEvent_7_OnMenuHidden__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Social_Overlay.WBP_Social_Overlay_C.HandleNavTabSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class URHNavTabWidget*             NavTab                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Social_Overlay_C::HandleNavTabSelected(class URHNavTabWidget* NavTab)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Overlay_C", "HandleNavTabSelected");

	Params::UWBP_Social_Overlay_C_HandleNavTabSelected_Params Parms{};

	Parms.NavTab = NavTab;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Social_Overlay.WBP_Social_Overlay_C.OnHeaderClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class URHWidget*                   Header                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Social_Overlay_C::OnHeaderClicked(class URHWidget* Header)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Overlay_C", "OnHeaderClicked");

	Params::UWBP_Social_Overlay_C_OnHeaderClicked_Params Parms{};

	Parms.Header = Header;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Social_Overlay.WBP_Social_Overlay_C.OnCycleBumpers
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bNext                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Social_Overlay_C::OnCycleBumpers(bool bNext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Overlay_C", "OnCycleBumpers");

	Params::UWBP_Social_Overlay_C_OnCycleBumpers_Params Parms{};

	Parms.bNext = bNext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Social_Overlay.WBP_Social_Overlay_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Social_Overlay_C::InitializeWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Overlay_C", "InitializeWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Social_Overlay.WBP_Social_Overlay_C.ExecuteUbergraph_WBP_Social_Overlay
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_FromRoute_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_ToRoute_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_FromRoute                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_ToRoute                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URHWidget*                   K2Node_CustomEvent_PlayerCard                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class ERH_INPUT_STATE         K2Node_CustomEvent_InputState                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetFocusTargets_Target                                  (ReferenceParm, ContainsInstancedReference)
// class UWidget*                     CallFunc_GetFocusTarget_Target                                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_CurrentRoute                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_PreviousRoute                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EViewManagerLayer       K2Node_CustomEvent_Layer                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URHDataSocialCategory*       K2Node_CustomEvent_Category                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class URHDataSocialPlayer*> K2Node_CustomEvent_Players                                       (ConstParm, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NavigateBack_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             K2Node_ComponentBoundEvent_NavWidgets                            (ReferenceParm, ContainsInstancedReference)
// class UWidget*                     K2Node_ComponentBoundEvent_Default_Widget                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_ComponentBoundEvent_FocusWidget                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class ERH_INPUT_STATE         Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URHNavTabWidget*             K2Node_CustomEvent_NavTab                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_subscreen_nav_tab_C*    K2Node_DynamicCast_AsWBP_Subscreen_Nav_Tab                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URHWidget*                   K2Node_CustomEvent_Header                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class URHWidget*                   CallFunc_Map_Find_Value                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class URHViewManager*              CallFunc_GetViewManager_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ERH_INPUT_STATE         CallFunc_GetCurrentInputState_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct RallyHereStart_RHSocialOverlaySectionInfoK2Node_MakeStruct_RHSocialOverlaySectionInfo                     (HasGetValueTypeHash)
// TArray<class FName>                K2Node_MakeArray_Array                                           (ReferenceParm)
// class URHDataSocialCategory*       CallFunc_GetCategory_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bNext                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class URH_PlayerInfo*              CallFunc_GetLocalPlayerInfo_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class URHViewManager*              CallFunc_GetViewManager_ReturnValue_1                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetPendingRouteData_Data                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetPendingRouteData_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URHInputManager*             CallFunc_GetInputManager_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveOverrideRoute_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Social_Overlay_C::ExecuteUbergraph_WBP_Social_Overlay(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_IsDesignTime, class FName K2Node_Event_FromRoute_1, class FName K2Node_Event_ToRoute_1, class FName K2Node_Event_FromRoute, class FName K2Node_Event_ToRoute, class URHWidget* K2Node_CustomEvent_PlayerCard, enum class ERH_INPUT_STATE K2Node_CustomEvent_InputState, TArray<class UWidget*>& CallFunc_GetFocusTargets_Target, class UWidget* CallFunc_GetFocusTarget_Target, enum class ESlateVisibility Temp_byte_Variable_1, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, class FName K2Node_CustomEvent_CurrentRoute, class FName K2Node_CustomEvent_PreviousRoute, enum class EViewManagerLayer K2Node_CustomEvent_Layer, bool K2Node_SwitchEnum_CmpSuccess, class URHDataSocialCategory* K2Node_CustomEvent_Category, TArray<class URHDataSocialPlayer*>& K2Node_CustomEvent_Players, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_NavigateBack_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, TArray<class UWidget*>& K2Node_ComponentBoundEvent_NavWidgets, class UWidget* K2Node_ComponentBoundEvent_Default_Widget, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, class UWidget* K2Node_ComponentBoundEvent_FocusWidget, enum class ERH_INPUT_STATE Temp_byte_Variable_4, enum class ESlateVisibility K2Node_Select_Default, class URHNavTabWidget* K2Node_CustomEvent_NavTab, class UWBP_subscreen_nav_tab_C* K2Node_DynamicCast_AsWBP_Subscreen_Nav_Tab, bool K2Node_DynamicCast_bSuccess, class URHWidget* K2Node_CustomEvent_Header, class URHWidget* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class URHViewManager* CallFunc_GetViewManager_ReturnValue, enum class ERH_INPUT_STATE CallFunc_GetCurrentInputState_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, const struct RallyHereStart_RHSocialOverlaySectionInfo& K2Node_MakeStruct_RHSocialOverlaySectionInfo, TArray<class FName>& K2Node_MakeArray_Array, class URHDataSocialCategory* CallFunc_GetCategory_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, bool K2Node_CustomEvent_bNext, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class URH_PlayerInfo* CallFunc_GetLocalPlayerInfo_ReturnValue, class URHViewManager* CallFunc_GetViewManager_ReturnValue_1, class UObject* CallFunc_GetPendingRouteData_Data, bool CallFunc_GetPendingRouteData_ReturnValue, class URHInputManager* CallFunc_GetInputManager_ReturnValue, bool CallFunc_RemoveOverrideRoute_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Overlay_C", "ExecuteUbergraph_WBP_Social_Overlay");

	Params::UWBP_Social_Overlay_C_ExecuteUbergraph_WBP_Social_Overlay_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Event_FromRoute_1 = K2Node_Event_FromRoute_1;
	Parms.K2Node_Event_ToRoute_1 = K2Node_Event_ToRoute_1;
	Parms.K2Node_Event_FromRoute = K2Node_Event_FromRoute;
	Parms.K2Node_Event_ToRoute = K2Node_Event_ToRoute;
	Parms.K2Node_CustomEvent_PlayerCard = K2Node_CustomEvent_PlayerCard;
	Parms.K2Node_CustomEvent_InputState = K2Node_CustomEvent_InputState;
	Parms.CallFunc_GetFocusTargets_Target = CallFunc_GetFocusTargets_Target;
	Parms.CallFunc_GetFocusTarget_Target = CallFunc_GetFocusTarget_Target;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue = CallFunc_GetActiveWidgetIndex_ReturnValue;
	Parms.K2Node_CustomEvent_CurrentRoute = K2Node_CustomEvent_CurrentRoute;
	Parms.K2Node_CustomEvent_PreviousRoute = K2Node_CustomEvent_PreviousRoute;
	Parms.K2Node_CustomEvent_Layer = K2Node_CustomEvent_Layer;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_CustomEvent_Category = K2Node_CustomEvent_Category;
	Parms.K2Node_CustomEvent_Players = K2Node_CustomEvent_Players;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_NavigateBack_ReturnValue = CallFunc_NavigateBack_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_NavWidgets = K2Node_ComponentBoundEvent_NavWidgets;
	Parms.K2Node_ComponentBoundEvent_Default_Widget = K2Node_ComponentBoundEvent_Default_Widget;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.K2Node_ComponentBoundEvent_FocusWidget = K2Node_ComponentBoundEvent_FocusWidget;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_CustomEvent_NavTab = K2Node_CustomEvent_NavTab;
	Parms.K2Node_DynamicCast_AsWBP_Subscreen_Nav_Tab = K2Node_DynamicCast_AsWBP_Subscreen_Nav_Tab;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_Header = K2Node_CustomEvent_Header;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetViewManager_ReturnValue = CallFunc_GetViewManager_ReturnValue;
	Parms.CallFunc_GetCurrentInputState_ReturnValue = CallFunc_GetCurrentInputState_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.K2Node_MakeStruct_RHSocialOverlaySectionInfo = K2Node_MakeStruct_RHSocialOverlaySectionInfo;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetCategory_ReturnValue = CallFunc_GetCategory_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.K2Node_CustomEvent_bNext = K2Node_CustomEvent_bNext;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.CallFunc_GetLocalPlayerInfo_ReturnValue = CallFunc_GetLocalPlayerInfo_ReturnValue;
	Parms.CallFunc_GetViewManager_ReturnValue_1 = CallFunc_GetViewManager_ReturnValue_1;
	Parms.CallFunc_GetPendingRouteData_Data = CallFunc_GetPendingRouteData_Data;
	Parms.CallFunc_GetPendingRouteData_ReturnValue = CallFunc_GetPendingRouteData_ReturnValue;
	Parms.CallFunc_GetInputManager_ReturnValue = CallFunc_GetInputManager_ReturnValue;
	Parms.CallFunc_RemoveOverrideRoute_ReturnValue = CallFunc_RemoveOverrideRoute_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


