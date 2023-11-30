#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Social_Search_Tab.WBP_Social_Search_Tab_C
// (None)

class UClass* UWBP_Social_Search_Tab_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Social_Search_Tab_C");

	return Clss;
}


// WBP_Social_Search_Tab_C WBP_Social_Search_Tab.Default__WBP_Social_Search_Tab_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Social_Search_Tab_C* UWBP_Social_Search_Tab_C::GetDefaultObj()
{
	static class UWBP_Social_Search_Tab_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Social_Search_Tab_C*>(UWBP_Social_Search_Tab_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_Social_Search_Tab.WBP_Social_Search_Tab_C.ClearListFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     CallFunc_BP_GetSelectedItem_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_BP_GetSelectedItem_ReturnValue_1                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Social_Search_Tab_C::ClearListFocus(class UObject* CallFunc_BP_GetSelectedItem_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UObject* CallFunc_BP_GetSelectedItem_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Search_Tab_C", "ClearListFocus");

	Params::UWBP_Social_Search_Tab_C_ClearListFocus_Params Parms{};

	Parms.CallFunc_BP_GetSelectedItem_ReturnValue = CallFunc_BP_GetSelectedItem_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_BP_GetSelectedItem_ReturnValue_1 = CallFunc_BP_GetSelectedItem_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Social_Search_Tab.WBP_Social_Search_Tab_C.TryRecoverLastKnownListFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     CallFunc_GetFirstVisibleItem_Item                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ERH_INPUT_STATE         CallFunc_GetCurrentInputState_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BP_IsItemVisible_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Social_Search_Tab_C::TryRecoverLastKnownListFocus(class UObject* CallFunc_GetFirstVisibleItem_Item, enum class ERH_INPUT_STATE CallFunc_GetCurrentInputState_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_BP_IsItemVisible_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Search_Tab_C", "TryRecoverLastKnownListFocus");

	Params::UWBP_Social_Search_Tab_C_TryRecoverLastKnownListFocus_Params Parms{};

	Parms.CallFunc_GetFirstVisibleItem_Item = CallFunc_GetFirstVisibleItem_Item;
	Parms.CallFunc_GetCurrentInputState_ReturnValue = CallFunc_GetCurrentInputState_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_BP_IsItemVisible_ReturnValue = CallFunc_BP_IsItemVisible_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Social_Search_Tab.WBP_Social_Search_Tab_C.GetFirstVisibleItem
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URHTreeView*                 List                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Item                                                             (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumItems_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetItemAt_ReturnValue                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BP_IsItemVisible_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Social_Search_Tab_C::GetFirstVisibleItem(class URHTreeView* List, class UObject** Item, int32 CallFunc_GetNumItems_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UObject* CallFunc_GetItemAt_ReturnValue, bool CallFunc_BP_IsItemVisible_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Search_Tab_C", "GetFirstVisibleItem");

	Params::UWBP_Social_Search_Tab_C_GetFirstVisibleItem_Params Parms{};

	Parms.List = List;
	Parms.CallFunc_GetNumItems_ReturnValue = CallFunc_GetNumItems_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetItemAt_ReturnValue = CallFunc_GetItemAt_ReturnValue;
	Parms.CallFunc_BP_IsItemVisible_ReturnValue = CallFunc_BP_IsItemVisible_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Item != nullptr)
		*Item = Parms.Item;

}


// Function WBP_Social_Search_Tab.WBP_Social_Search_Tab_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct SlateCore_Geometry          MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct SlateCore_KeyEvent          InKeyEvent                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct UMG_EventReply              ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct InputCore_Key               CallFunc_GetKey_ReturnValue                                      (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct UMG_EventReply              CallFunc_Handled_ReturnValue                                     (None)
// struct UMG_EventReply              CallFunc_Unhandled_ReturnValue                                   (None)

struct UMG_EventReply UWBP_Social_Search_Tab_C::OnKeyUp(const struct SlateCore_Geometry& MyGeometry, const struct SlateCore_KeyEvent& InKeyEvent, const struct InputCore_Key& CallFunc_GetKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, const struct UMG_EventReply& CallFunc_Handled_ReturnValue, const struct UMG_EventReply& CallFunc_Unhandled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Search_Tab_C", "OnKeyUp");

	Params::UWBP_Social_Search_Tab_C_OnKeyUp_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InKeyEvent = InKeyEvent;
	Parms.CallFunc_GetKey_ReturnValue = CallFunc_GetKey_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_Social_Search_Tab.WBP_Social_Search_Tab_C.GetFocusTargets
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UWidget*>             Target                                                           (Parm, OutParm, ContainsInstancedReference)
// TArray<class UWidget*>             K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)

void UWBP_Social_Search_Tab_C::GetFocusTargets(TArray<class UWidget*>* Target, TArray<class UWidget*>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Search_Tab_C", "GetFocusTargets");

	Params::UWBP_Social_Search_Tab_C_GetFocusTargets_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

	if (Target != nullptr)
		*Target = std::move(Parms.Target);

}


// Function WBP_Social_Search_Tab.WBP_Social_Search_Tab_C.ClearSearch
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Social_Search_Tab_C::ClearSearch()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Search_Tab_C", "ClearSearch");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Social_Search_Tab.WBP_Social_Search_Tab_C.HandlePlayerCardClicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Object                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_BP_GetEntryWidgetFromItem_OutWidget                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BP_GetEntryWidgetFromItem_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_Player_Card_Social_Entry_C*K2Node_DynamicCast_AsWBP_Player_Card_Social_Entry                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URHWidget*                   CallFunc_GetDisplayItem_ActiveDisplayItem                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_player_card_module_C*   K2Node_DynamicCast_AsWBP_Player_Card_Module                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Social_Search_Tab_C::HandlePlayerCardClicked(class UObject* Object, class UUserWidget* CallFunc_BP_GetEntryWidgetFromItem_OutWidget, bool CallFunc_BP_GetEntryWidgetFromItem_ReturnValue, class UWBP_Player_Card_Social_Entry_C* K2Node_DynamicCast_AsWBP_Player_Card_Social_Entry, bool K2Node_DynamicCast_bSuccess, class URHWidget* CallFunc_GetDisplayItem_ActiveDisplayItem, class UWBP_player_card_module_C* K2Node_DynamicCast_AsWBP_Player_Card_Module, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Search_Tab_C", "HandlePlayerCardClicked");

	Params::UWBP_Social_Search_Tab_C_HandlePlayerCardClicked_Params Parms{};

	Parms.Object = Object;
	Parms.CallFunc_BP_GetEntryWidgetFromItem_OutWidget = CallFunc_BP_GetEntryWidgetFromItem_OutWidget;
	Parms.CallFunc_BP_GetEntryWidgetFromItem_ReturnValue = CallFunc_BP_GetEntryWidgetFromItem_ReturnValue;
	Parms.K2Node_DynamicCast_AsWBP_Player_Card_Social_Entry = K2Node_DynamicCast_AsWBP_Player_Card_Social_Entry;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetDisplayItem_ActiveDisplayItem = CallFunc_GetDisplayItem_ActiveDisplayItem;
	Parms.K2Node_DynamicCast_AsWBP_Player_Card_Module = K2Node_DynamicCast_AsWBP_Player_Card_Module;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Social_Search_Tab.WBP_Social_Search_Tab_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Social_Search_Tab_C::InitializeWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Search_Tab_C", "InitializeWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Social_Search_Tab.WBP_Social_Search_Tab_C.UninitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Social_Search_Tab_C::UninitializeWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Search_Tab_C", "UninitializeWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Social_Search_Tab.WBP_Social_Search_Tab_C.OnHide
// (Event, Public, BlueprintEvent)
// Parameters:

void UWBP_Social_Search_Tab_C::OnHide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Search_Tab_C", "OnHide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Social_Search_Tab.WBP_Social_Search_Tab_C.BndEvt__Results_K2Node_ComponentBoundEvent_0_SimpleListItemEventDynamic__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UObject*                     Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Social_Search_Tab_C::BndEvt__Results_K2Node_ComponentBoundEvent_0_SimpleListItemEventDynamic__DelegateSignature(class UObject* Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Search_Tab_C", "BndEvt__Results_K2Node_ComponentBoundEvent_0_SimpleListItemEventDynamic__DelegateSignature");

	Params::UWBP_Social_Search_Tab_C_BndEvt__Results_K2Node_ComponentBoundEvent_0_SimpleListItemEventDynamic__DelegateSignature_Params Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Social_Search_Tab.WBP_Social_Search_Tab_C.BndEvt__Results_K2Node_ComponentBoundEvent_1_SimpleListItemEventDynamic__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UObject*                     Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Social_Search_Tab_C::BndEvt__Results_K2Node_ComponentBoundEvent_1_SimpleListItemEventDynamic__DelegateSignature(class UObject* Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Search_Tab_C", "BndEvt__Results_K2Node_ComponentBoundEvent_1_SimpleListItemEventDynamic__DelegateSignature");

	Params::UWBP_Social_Search_Tab_C_BndEvt__Results_K2Node_ComponentBoundEvent_1_SimpleListItemEventDynamic__DelegateSignature_Params Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Social_Search_Tab.WBP_Social_Search_Tab_C.OnInputStateChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ERH_INPUT_STATE         InputState                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Social_Search_Tab_C::OnInputStateChange(enum class ERH_INPUT_STATE InputState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Search_Tab_C", "OnInputStateChange");

	Params::UWBP_Social_Search_Tab_C_OnInputStateChange_Params Parms{};

	Parms.InputState = InputState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Social_Search_Tab.WBP_Social_Search_Tab_C.InitializeWidgetNavigation
// (Event, Public, BlueprintEvent)
// Parameters:

void UWBP_Social_Search_Tab_C::InitializeWidgetNavigation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Search_Tab_C", "InitializeWidgetNavigation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Social_Search_Tab.WBP_Social_Search_Tab_C.BndEvt__SearchBar_K2Node_ComponentBoundEvent_2_OnHovered__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_Social_Search_Tab_C::BndEvt__SearchBar_K2Node_ComponentBoundEvent_2_OnHovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Search_Tab_C", "BndEvt__SearchBar_K2Node_ComponentBoundEvent_2_OnHovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Social_Search_Tab.WBP_Social_Search_Tab_C.BndEvt__SearchBar_K2Node_ComponentBoundEvent_3_OnUnhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_Social_Search_Tab_C::BndEvt__SearchBar_K2Node_ComponentBoundEvent_3_OnUnhovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Search_Tab_C", "BndEvt__SearchBar_K2Node_ComponentBoundEvent_3_OnUnhovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Social_Search_Tab.WBP_Social_Search_Tab_C.BndEvt__SearchBar_K2Node_ComponentBoundEvent_4_OnSearchTermChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FText                        SearchTerm                                                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_Social_Search_Tab_C::BndEvt__SearchBar_K2Node_ComponentBoundEvent_4_OnSearchTermChange__DelegateSignature(class FText SearchTerm)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Search_Tab_C", "BndEvt__SearchBar_K2Node_ComponentBoundEvent_4_OnSearchTermChange__DelegateSignature");

	Params::UWBP_Social_Search_Tab_C_BndEvt__SearchBar_K2Node_ComponentBoundEvent_4_OnSearchTermChange__DelegateSignature_Params Parms{};

	Parms.SearchTerm = SearchTerm;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Social_Search_Tab.WBP_Social_Search_Tab_C.ExecuteUbergraph_WBP_Social_Search_Tab
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_ComponentBoundEvent_Item_1                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_ComponentBoundEvent_Item                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ERH_INPUT_STATE         K2Node_CustomEvent_InputState                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_ComponentBoundEvent_SearchTerm                            (None)

void UWBP_Social_Search_Tab_C::ExecuteUbergraph_WBP_Social_Search_Tab(int32 EntryPoint, class UObject* K2Node_ComponentBoundEvent_Item_1, class UObject* K2Node_ComponentBoundEvent_Item, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class ERH_INPUT_STATE K2Node_CustomEvent_InputState, bool K2Node_SwitchEnum_CmpSuccess, class FText K2Node_ComponentBoundEvent_SearchTerm)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Search_Tab_C", "ExecuteUbergraph_WBP_Social_Search_Tab");

	Params::UWBP_Social_Search_Tab_C_ExecuteUbergraph_WBP_Social_Search_Tab_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Item_1 = K2Node_ComponentBoundEvent_Item_1;
	Parms.K2Node_ComponentBoundEvent_Item = K2Node_ComponentBoundEvent_Item;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_InputState = K2Node_CustomEvent_InputState;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_ComponentBoundEvent_SearchTerm = K2Node_ComponentBoundEvent_SearchTerm;

	UObject::ProcessEvent(Func, &Parms);

}

}


