#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Player_Card_Social_Entry.WBP_Player_Card_Social_Entry_C
// (None)

class UClass* UWBP_Player_Card_Social_Entry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Player_Card_Social_Entry_C");

	return Clss;
}


// WBP_Player_Card_Social_Entry_C WBP_Player_Card_Social_Entry.Default__WBP_Player_Card_Social_Entry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Player_Card_Social_Entry_C* UWBP_Player_Card_Social_Entry_C::GetDefaultObj()
{
	static class UWBP_Player_Card_Social_Entry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Player_Card_Social_Entry_C*>(UWBP_Player_Card_Social_Entry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_Player_Card_Social_Entry.WBP_Player_Card_Social_Entry_C.OnRhPlayerInfoUpdated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URH_RHFriendAndPlatformFriend*Friend                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Player_Card_Social_Entry_C::OnRhPlayerInfoUpdated(class URH_RHFriendAndPlatformFriend* Friend)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Player_Card_Social_Entry_C", "OnRhPlayerInfoUpdated");

	Params::UWBP_Player_Card_Social_Entry_C_OnRhPlayerInfoUpdated_Params Parms{};

	Parms.Friend = Friend;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Player_Card_Social_Entry.WBP_Player_Card_Social_Entry_C.SetCurrentInfoContainer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     InfoContainer                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class URHDataSocialPlayer*         K2Node_DynamicCast_AsRHData_Social_Player                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Player_Card_Social_Entry_C::SetCurrentInfoContainer(class UObject* InfoContainer, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class URHDataSocialPlayer* K2Node_DynamicCast_AsRHData_Social_Player, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Player_Card_Social_Entry_C", "SetCurrentInfoContainer");

	Params::UWBP_Player_Card_Social_Entry_C_SetCurrentInfoContainer_Params Parms{};

	Parms.InfoContainer = InfoContainer;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_DynamicCast_AsRHData_Social_Player = K2Node_DynamicCast_AsRHData_Social_Player;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Player_Card_Social_Entry.WBP_Player_Card_Social_Entry_C.SetHoverState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsHovered                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Player_Card_Social_Entry_C::SetHoverState(bool IsHovered)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Player_Card_Social_Entry_C", "SetHoverState");

	Params::UWBP_Player_Card_Social_Entry_C_SetHoverState_Params Parms{};

	Parms.IsHovered = IsHovered;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Player_Card_Social_Entry.WBP_Player_Card_Social_Entry_C.GetDisplayItem
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URHWidget*                   ActiveDisplayItem                                                (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetActiveWidget_ReturnValue                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Player_Card_Social_Entry_C::GetDisplayItem(class URHWidget** ActiveDisplayItem, class UWidget* CallFunc_GetActiveWidget_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Player_Card_Social_Entry_C", "GetDisplayItem");

	Params::UWBP_Player_Card_Social_Entry_C_GetDisplayItem_Params Parms{};

	Parms.CallFunc_GetActiveWidget_ReturnValue = CallFunc_GetActiveWidget_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ActiveDisplayItem != nullptr)
		*ActiveDisplayItem = Parms.ActiveDisplayItem;

}


// Function WBP_Player_Card_Social_Entry.WBP_Player_Card_Social_Entry_C.UpdateDataItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Data                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class URHDataSocialPlayer*         K2Node_DynamicCast_AsRHData_Social_Player                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URH_RHFriendAndPlatformFriend*CallFunc_GetFriend_ReturnValue                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UListViewBase*               CallFunc_GetOwningListView_ReturnValue                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class URHTreeView*                 K2Node_DynamicCast_AsRHTree_View                                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsItemExpanded_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URHDataSocialCategory*       K2Node_DynamicCast_AsRHData_Social_Category                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Player_Card_Social_Entry_C::UpdateDataItem(class UObject* Data, class URHDataSocialPlayer* K2Node_DynamicCast_AsRHData_Social_Player, bool K2Node_DynamicCast_bSuccess, class URH_RHFriendAndPlatformFriend* CallFunc_GetFriend_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UListViewBase* CallFunc_GetOwningListView_ReturnValue, class URHTreeView* K2Node_DynamicCast_AsRHTree_View, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsItemExpanded_ReturnValue, class URHDataSocialCategory* K2Node_DynamicCast_AsRHData_Social_Category, bool K2Node_DynamicCast_bSuccess_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Player_Card_Social_Entry_C", "UpdateDataItem");

	Params::UWBP_Player_Card_Social_Entry_C_UpdateDataItem_Params Parms{};

	Parms.Data = Data;
	Parms.K2Node_DynamicCast_AsRHData_Social_Player = K2Node_DynamicCast_AsRHData_Social_Player;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetFriend_ReturnValue = CallFunc_GetFriend_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetOwningListView_ReturnValue = CallFunc_GetOwningListView_ReturnValue;
	Parms.K2Node_DynamicCast_AsRHTree_View = K2Node_DynamicCast_AsRHTree_View;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsItemExpanded_ReturnValue = CallFunc_IsItemExpanded_ReturnValue;
	Parms.K2Node_DynamicCast_AsRHData_Social_Category = K2Node_DynamicCast_AsRHData_Social_Category;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Player_Card_Social_Entry.WBP_Player_Card_Social_Entry_C.BP_OnItemSelectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsSelected                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Player_Card_Social_Entry_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Player_Card_Social_Entry_C", "BP_OnItemSelectionChanged");

	Params::UWBP_Player_Card_Social_Entry_C_BP_OnItemSelectionChanged_Params Parms{};

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Player_Card_Social_Entry.WBP_Player_Card_Social_Entry_C.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsExpanded                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Player_Card_Social_Entry_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Player_Card_Social_Entry_C", "BP_OnItemExpansionChanged");

	Params::UWBP_Player_Card_Social_Entry_C_BP_OnItemExpansionChanged_Params Parms{};

	Parms.bIsExpanded = bIsExpanded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Player_Card_Social_Entry.WBP_Player_Card_Social_Entry_C.BP_OnEntryReleased
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_Player_Card_Social_Entry_C::BP_OnEntryReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Player_Card_Social_Entry_C", "BP_OnEntryReleased");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Player_Card_Social_Entry.WBP_Player_Card_Social_Entry_C.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                     ListItemObject                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Player_Card_Social_Entry_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Player_Card_Social_Entry_C", "OnListItemObjectSet");

	Params::UWBP_Player_Card_Social_Entry_C_OnListItemObjectSet_Params Parms{};

	Parms.ListItemObject = ListItemObject;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Player_Card_Social_Entry.WBP_Player_Card_Social_Entry_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Player_Card_Social_Entry_C::InitializeWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Player_Card_Social_Entry_C", "InitializeWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Player_Card_Social_Entry.WBP_Player_Card_Social_Entry_C.UninitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Player_Card_Social_Entry_C::UninitializeWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Player_Card_Social_Entry_C", "UninitializeWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Player_Card_Social_Entry.WBP_Player_Card_Social_Entry_C.OnHeaderClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Player_Card_Social_Entry_C::OnHeaderClicked(class UUserWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Player_Card_Social_Entry_C", "OnHeaderClicked");

	Params::UWBP_Player_Card_Social_Entry_C_OnHeaderClicked_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Player_Card_Social_Entry.WBP_Player_Card_Social_Entry_C.OnPlayerClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_player_card_module_C*   Selected_Player_Card                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Player_Card_Social_Entry_C::OnPlayerClicked(class UWBP_player_card_module_C* Selected_Player_Card)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Player_Card_Social_Entry_C", "OnPlayerClicked");

	Params::UWBP_Player_Card_Social_Entry_C_OnPlayerClicked_Params Parms{};

	Parms.Selected_Player_Card = Selected_Player_Card;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Player_Card_Social_Entry.WBP_Player_Card_Social_Entry_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct SlateCore_Geometry          MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct SlateCore_PointerEvent      MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_Player_Card_Social_Entry_C::OnMouseEnter(const struct SlateCore_Geometry& MyGeometry, struct SlateCore_PointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Player_Card_Social_Entry_C", "OnMouseEnter");

	Params::UWBP_Player_Card_Social_Entry_C_OnMouseEnter_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Player_Card_Social_Entry.WBP_Player_Card_Social_Entry_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct SlateCore_PointerEvent      MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_Player_Card_Social_Entry_C::OnMouseLeave(struct SlateCore_PointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Player_Card_Social_Entry_C", "OnMouseLeave");

	Params::UWBP_Player_Card_Social_Entry_C_OnMouseLeave_Params Parms{};

	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Player_Card_Social_Entry.WBP_Player_Card_Social_Entry_C.OnShown
// (Event, Public, BlueprintEvent)
// Parameters:

void UWBP_Player_Card_Social_Entry_C::OnShown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Player_Card_Social_Entry_C", "OnShown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Player_Card_Social_Entry.WBP_Player_Card_Social_Entry_C.ExecuteUbergraph_WBP_Player_Card_Social_Entry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_Event_ListItemObject                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 K2Node_CustomEvent_Widget                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IUserListEntry>CallFunc_GetOwningListView_UserListEntry_CastInput               (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UListViewBase*               CallFunc_GetOwningListView_ReturnValue                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsExpanded_Expanded                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTreeView*                   K2Node_DynamicCast_AsTree_View                                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URHDataSocialCategory*       CallFunc_GetData_NewParam                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsExpanded                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsSelected                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_player_card_module_C*   K2Node_CustomEvent_Selected_Player_Card                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct SlateCore_Geometry          K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// struct SlateCore_PointerEvent      K2Node_Event_MouseEvent_1                                        (ConstParm)
// struct SlateCore_PointerEvent      K2Node_Event_MouseEvent                                          (ConstParm)
// enum class ERH_INPUT_STATE         CallFunc_GetCurrentInputState_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Player_Card_Social_Entry_C::ExecuteUbergraph_WBP_Player_Card_Social_Entry(int32 EntryPoint, class UObject* K2Node_Event_ListItemObject, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUserWidget* K2Node_CustomEvent_Widget, TScriptInterface<class IUserListEntry> CallFunc_GetOwningListView_UserListEntry_CastInput, class UListViewBase* CallFunc_GetOwningListView_ReturnValue, bool CallFunc_GetIsExpanded_Expanded, class UTreeView* K2Node_DynamicCast_AsTree_View, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue, class URHDataSocialCategory* CallFunc_GetData_NewParam, bool K2Node_Event_bIsExpanded, bool K2Node_Event_bIsSelected, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UWBP_player_card_module_C* K2Node_CustomEvent_Selected_Player_Card, const struct SlateCore_Geometry& K2Node_Event_MyGeometry, const struct SlateCore_PointerEvent& K2Node_Event_MouseEvent_1, const struct SlateCore_PointerEvent& K2Node_Event_MouseEvent, enum class ERH_INPUT_STATE CallFunc_GetCurrentInputState_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Player_Card_Social_Entry_C", "ExecuteUbergraph_WBP_Player_Card_Social_Entry");

	Params::UWBP_Player_Card_Social_Entry_C_ExecuteUbergraph_WBP_Player_Card_Social_Entry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_ListItemObject = K2Node_Event_ListItemObject;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_Widget = K2Node_CustomEvent_Widget;
	Parms.CallFunc_GetOwningListView_UserListEntry_CastInput = CallFunc_GetOwningListView_UserListEntry_CastInput;
	Parms.CallFunc_GetOwningListView_ReturnValue = CallFunc_GetOwningListView_ReturnValue;
	Parms.CallFunc_GetIsExpanded_Expanded = CallFunc_GetIsExpanded_Expanded;
	Parms.K2Node_DynamicCast_AsTree_View = K2Node_DynamicCast_AsTree_View;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetData_NewParam = CallFunc_GetData_NewParam;
	Parms.K2Node_Event_bIsExpanded = K2Node_Event_bIsExpanded;
	Parms.K2Node_Event_bIsSelected = K2Node_Event_bIsSelected;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_Selected_Player_Card = K2Node_CustomEvent_Selected_Player_Card;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_MouseEvent_1 = K2Node_Event_MouseEvent_1;
	Parms.K2Node_Event_MouseEvent = K2Node_Event_MouseEvent;
	Parms.CallFunc_GetCurrentInputState_ReturnValue = CallFunc_GetCurrentInputState_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Player_Card_Social_Entry.WBP_Player_Card_Social_Entry_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Player_Card_Social_Entry_C::OnClicked__DelegateSignature(class UUserWidget* Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Player_Card_Social_Entry_C", "OnClicked__DelegateSignature");

	Params::UWBP_Player_Card_Social_Entry_C_OnClicked__DelegateSignature_Params Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}

}


