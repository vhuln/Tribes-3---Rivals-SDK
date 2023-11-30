#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C
// (None)

class UClass* UWBP_Social_Friends_Tab_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Social_Friends_Tab_C");

	return Clss;
}


// WBP_Social_Friends_Tab_C WBP_Social_Friends_Tab.Default__WBP_Social_Friends_Tab_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Social_Friends_Tab_C* UWBP_Social_Friends_Tab_C::GetDefaultObj()
{
	static class UWBP_Social_Friends_Tab_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Social_Friends_Tab_C*>(UWBP_Social_Friends_Tab_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.FocusFirstItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UObject*>             CallFunc_GetListItems_ReturnValue                                (ConstParm, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Social_Friends_Tab_C::FocusFirstItem(TArray<class UObject*>& CallFunc_GetListItems_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UObject* CallFunc_Array_Get_Item, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Friends_Tab_C", "FocusFirstItem");

	Params::UWBP_Social_Friends_Tab_C_FocusFirstItem_Params Parms{};

	Parms.CallFunc_GetListItems_ReturnValue = CallFunc_GetListItems_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.TryGetFirstItemForCategory
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ERHSocialOverlaySection Category                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Output                                                           (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct RallyHereStart_RHSocialOverlaySectionInfoK2Node_MakeStruct_RHSocialOverlaySectionInfo                     (HasGetValueTypeHash)
// class URHSocialOverlay*            CallFunc_GetDataSource_ReturnValue                               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class URHDataSocialCategory*       CallFunc_GetCategory_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Num_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class URHDataSocialPlayer*> CallFunc_GetPlayerList_ReturnValue                               (ReferenceParm)
// class URHDataSocialPlayer*         CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Social_Friends_Tab_C::TryGetFirstItemForCategory(enum class ERHSocialOverlaySection Category, class UObject** Output, const struct RallyHereStart_RHSocialOverlaySectionInfo& K2Node_MakeStruct_RHSocialOverlaySectionInfo, class URHSocialOverlay* CallFunc_GetDataSource_ReturnValue, class URHDataSocialCategory* CallFunc_GetCategory_ReturnValue, int32 CallFunc_Num_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, TArray<class URHDataSocialPlayer*>& CallFunc_GetPlayerList_ReturnValue, class URHDataSocialPlayer* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Friends_Tab_C", "TryGetFirstItemForCategory");

	Params::UWBP_Social_Friends_Tab_C_TryGetFirstItemForCategory_Params Parms{};

	Parms.Category = Category;
	Parms.K2Node_MakeStruct_RHSocialOverlaySectionInfo = K2Node_MakeStruct_RHSocialOverlaySectionInfo;
	Parms.CallFunc_GetDataSource_ReturnValue = CallFunc_GetDataSource_ReturnValue;
	Parms.CallFunc_GetCategory_ReturnValue = CallFunc_GetCategory_ReturnValue;
	Parms.CallFunc_Num_ReturnValue = CallFunc_Num_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetPlayerList_ReturnValue = CallFunc_GetPlayerList_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	if (Output != nullptr)
		*Output = Parms.Output;

}


// Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.FindFirstOnlinePlayerOrDefault
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Item                                                             (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_TryGetFirstItemForCategory_Output                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_TryGetFirstItemForCategory_Output_1                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTreeView*                   CallFunc_GetTreeView_ReturnValue                                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<class UObject*>             CallFunc_GetListItems_ReturnValue                                (ConstParm, ReferenceParm)
// class UObject*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Social_Friends_Tab_C::FindFirstOnlinePlayerOrDefault(class UObject** Item, class UObject* CallFunc_TryGetFirstItemForCategory_Output, class UObject* CallFunc_TryGetFirstItemForCategory_Output_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UTreeView* CallFunc_GetTreeView_ReturnValue, TArray<class UObject*>& CallFunc_GetListItems_ReturnValue, class UObject* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Friends_Tab_C", "FindFirstOnlinePlayerOrDefault");

	Params::UWBP_Social_Friends_Tab_C_FindFirstOnlinePlayerOrDefault_Params Parms{};

	Parms.CallFunc_TryGetFirstItemForCategory_Output = CallFunc_TryGetFirstItemForCategory_Output;
	Parms.CallFunc_TryGetFirstItemForCategory_Output_1 = CallFunc_TryGetFirstItemForCategory_Output_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetTreeView_ReturnValue = CallFunc_GetTreeView_ReturnValue;
	Parms.CallFunc_GetListItems_ReturnValue = CallFunc_GetListItems_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	if (Item != nullptr)
		*Item = Parms.Item;

}


// Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.FocusFirstOnlinePlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     CallFunc_FindFirstOnlinePlayerOrDefault_Item                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Social_Friends_Tab_C::FocusFirstOnlinePlayer(class UObject* CallFunc_FindFirstOnlinePlayerOrDefault_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Friends_Tab_C", "FocusFirstOnlinePlayer");

	Params::UWBP_Social_Friends_Tab_C_FocusFirstOnlinePlayer_Params Parms{};

	Parms.CallFunc_FindFirstOnlinePlayerOrDefault_Item = CallFunc_FindFirstOnlinePlayerOrDefault_Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct SlateCore_Geometry          MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct SlateCore_FocusEvent        InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct UMG_EventReply              ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct UMG_EventReply              CallFunc_Handled_ReturnValue                                     (None)
// struct UMG_EventReply              CallFunc_OnFocusReceived_ReturnValue                             (None)

struct UMG_EventReply UWBP_Social_Friends_Tab_C::OnFocusReceived(const struct SlateCore_Geometry& MyGeometry, const struct SlateCore_FocusEvent& InFocusEvent, const struct UMG_EventReply& CallFunc_Handled_ReturnValue, const struct UMG_EventReply& CallFunc_OnFocusReceived_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Friends_Tab_C", "OnFocusReceived");

	Params::UWBP_Social_Friends_Tab_C_OnFocusReceived_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InFocusEvent = InFocusEvent;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_OnFocusReceived_ReturnValue = CallFunc_OnFocusReceived_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.HandleItemClicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Item                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_BP_GetEntryWidgetFromItem_OutWidget                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BP_GetEntryWidgetFromItem_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_Player_Card_Social_Entry_C*K2Node_DynamicCast_AsWBP_Player_Card_Social_Entry                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URHWidget*                   CallFunc_GetDisplayItem_ActiveDisplayItem                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_player_card_module_C*   K2Node_DynamicCast_AsWBP_Player_Card_Module                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_Social_Accordian_Header_C*K2Node_DynamicCast_AsWBP_Social_Accordian_Header                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Social_Friends_Tab_C::HandleItemClicked(class UObject* Item, class UUserWidget* CallFunc_BP_GetEntryWidgetFromItem_OutWidget, bool CallFunc_BP_GetEntryWidgetFromItem_ReturnValue, class UWBP_Player_Card_Social_Entry_C* K2Node_DynamicCast_AsWBP_Player_Card_Social_Entry, bool K2Node_DynamicCast_bSuccess, class URHWidget* CallFunc_GetDisplayItem_ActiveDisplayItem, class UWBP_player_card_module_C* K2Node_DynamicCast_AsWBP_Player_Card_Module, bool K2Node_DynamicCast_bSuccess_1, class UWBP_Social_Accordian_Header_C* K2Node_DynamicCast_AsWBP_Social_Accordian_Header, bool K2Node_DynamicCast_bSuccess_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Friends_Tab_C", "HandleItemClicked");

	Params::UWBP_Social_Friends_Tab_C_HandleItemClicked_Params Parms{};

	Parms.Item = Item;
	Parms.CallFunc_BP_GetEntryWidgetFromItem_OutWidget = CallFunc_BP_GetEntryWidgetFromItem_OutWidget;
	Parms.CallFunc_BP_GetEntryWidgetFromItem_ReturnValue = CallFunc_BP_GetEntryWidgetFromItem_ReturnValue;
	Parms.K2Node_DynamicCast_AsWBP_Player_Card_Social_Entry = K2Node_DynamicCast_AsWBP_Player_Card_Social_Entry;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetDisplayItem_ActiveDisplayItem = CallFunc_GetDisplayItem_ActiveDisplayItem;
	Parms.K2Node_DynamicCast_AsWBP_Player_Card_Module = K2Node_DynamicCast_AsWBP_Player_Card_Module;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsWBP_Social_Accordian_Header = K2Node_DynamicCast_AsWBP_Social_Accordian_Header;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.NavigateConfirm
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NavigateConfirm_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_BP_GetSelectedItem_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class URH_PlayerInfo*              K2Node_DynamicCast_AsRH_Player_Info                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URHDataSocialCategory*       K2Node_DynamicCast_AsRHData_Social_Category                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsItemExpanded_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UWBP_Social_Friends_Tab_C::NavigateConfirm(bool CallFunc_NavigateConfirm_ReturnValue, class UObject* CallFunc_BP_GetSelectedItem_ReturnValue, class URH_PlayerInfo* K2Node_DynamicCast_AsRH_Player_Info, bool K2Node_DynamicCast_bSuccess, class URHDataSocialCategory* K2Node_DynamicCast_AsRHData_Social_Category, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsItemExpanded_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Friends_Tab_C", "NavigateConfirm");

	Params::UWBP_Social_Friends_Tab_C_NavigateConfirm_Params Parms{};

	Parms.CallFunc_NavigateConfirm_ReturnValue = CallFunc_NavigateConfirm_ReturnValue;
	Parms.CallFunc_BP_GetSelectedItem_ReturnValue = CallFunc_BP_GetSelectedItem_ReturnValue;
	Parms.K2Node_DynamicCast_AsRH_Player_Info = K2Node_DynamicCast_AsRH_Player_Info;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsRHData_Social_Category = K2Node_DynamicCast_AsRHData_Social_Category;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsItemExpanded_ReturnValue = CallFunc_IsItemExpanded_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.GetFocusTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     Target                                                           (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Social_Friends_Tab_C::GetFocusTarget(class UWidget** Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Friends_Tab_C", "GetFocusTarget");

	Params::UWBP_Social_Friends_Tab_C_GetFocusTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Target != nullptr)
		*Target = Parms.Target;

}


// Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Social_Friends_Tab_C::InitializeWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Friends_Tab_C", "InitializeWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.UninitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Social_Friends_Tab_C::UninitializeWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Friends_Tab_C", "UninitializeWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.OnShown
// (Event, Public, BlueprintEvent)
// Parameters:

void UWBP_Social_Friends_Tab_C::OnShown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Friends_Tab_C", "OnShown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.BndEvt__PlayerList_K2Node_ComponentBoundEvent_1_SimpleListItemEventDynamic__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UObject*                     Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Social_Friends_Tab_C::BndEvt__PlayerList_K2Node_ComponentBoundEvent_1_SimpleListItemEventDynamic__DelegateSignature(class UObject* Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Friends_Tab_C", "BndEvt__PlayerList_K2Node_ComponentBoundEvent_1_SimpleListItemEventDynamic__DelegateSignature");

	Params::UWBP_Social_Friends_Tab_C_BndEvt__PlayerList_K2Node_ComponentBoundEvent_1_SimpleListItemEventDynamic__DelegateSignature_Params Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.OnInputStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ERH_INPUT_STATE         InputState                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Social_Friends_Tab_C::OnInputStateChanged(enum class ERH_INPUT_STATE InputState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Friends_Tab_C", "OnInputStateChanged");

	Params::UWBP_Social_Friends_Tab_C_OnInputStateChanged_Params Parms{};

	Parms.InputState = InputState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.InitializeWidgetNavigation
// (Event, Public, BlueprintEvent)
// Parameters:

void UWBP_Social_Friends_Tab_C::InitializeWidgetNavigation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Friends_Tab_C", "InitializeWidgetNavigation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.OnItemScrolledIntoView
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Social_Friends_Tab_C::OnItemScrolledIntoView(class UObject* Item, class UUserWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Friends_Tab_C", "OnItemScrolledIntoView");

	Params::UWBP_Social_Friends_Tab_C_OnItemScrolledIntoView_Params Parms{};

	Parms.Item = Item;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.ExecuteUbergraph_WBP_Social_Friends_Tab
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_ComponentBoundEvent_Item                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ERH_INPUT_STATE         CallFunc_GetCurrentInputState_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERH_INPUT_STATE         K2Node_CustomEvent_InputState                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 K2Node_CustomEvent_Widget                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Social_Friends_Tab_C::ExecuteUbergraph_WBP_Social_Friends_Tab(int32 EntryPoint, class UObject* K2Node_ComponentBoundEvent_Item, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class ERH_INPUT_STATE CallFunc_GetCurrentInputState_ReturnValue, enum class ERH_INPUT_STATE K2Node_CustomEvent_InputState, bool K2Node_SwitchEnum_CmpSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UObject* K2Node_CustomEvent_Item, class UUserWidget* K2Node_CustomEvent_Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Friends_Tab_C", "ExecuteUbergraph_WBP_Social_Friends_Tab");

	Params::UWBP_Social_Friends_Tab_C_ExecuteUbergraph_WBP_Social_Friends_Tab_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Item = K2Node_ComponentBoundEvent_Item;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetCurrentInputState_ReturnValue = CallFunc_GetCurrentInputState_ReturnValue;
	Parms.K2Node_CustomEvent_InputState = K2Node_CustomEvent_InputState;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_Item = K2Node_CustomEvent_Item;
	Parms.K2Node_CustomEvent_Widget = K2Node_CustomEvent_Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.OnPlayerListScrolled__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Social_Friends_Tab_C::OnPlayerListScrolled__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Friends_Tab_C", "OnPlayerListScrolled__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


