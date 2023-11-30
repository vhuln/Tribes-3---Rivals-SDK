#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_PlayerContextMenu.WBP_PlayerContextMenu_C
// (None)

class UClass* UWBP_PlayerContextMenu_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_PlayerContextMenu_C");

	return Clss;
}


// WBP_PlayerContextMenu_C WBP_PlayerContextMenu.Default__WBP_PlayerContextMenu_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_PlayerContextMenu_C* UWBP_PlayerContextMenu_C::GetDefaultObj()
{
	static class UWBP_PlayerContextMenu_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_PlayerContextMenu_C*>(UWBP_PlayerContextMenu_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.GetOptionWidgets
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UWBP_PlayerContextMenuOption_C*>Option_Widgets                                                   (Parm, OutParm, ContainsInstancedReference)
// TArray<class UWidget*>             LocalIterationWidgets                                            (Edit, BlueprintVisible, ContainsInstancedReference)
// TArray<class UWBP_PlayerContextMenuOption_C*>ComboArray                                                       (Edit, BlueprintVisible, ContainsInstancedReference)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_PlayerContextMenuOption_C*K2Node_DynamicCast_AsWBP_Player_Context_Menu_Option              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_PlayerContextMenuOption_C*K2Node_DynamicCast_AsWBP_Player_Context_Menu_Option_1            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue_1                            (ReferenceParm, ContainsInstancedReference)

void UWBP_PlayerContextMenu_C::GetOptionWidgets(TArray<class UWBP_PlayerContextMenuOption_C*>* Option_Widgets, const TArray<class UWidget*>& LocalIterationWidgets, const TArray<class UWBP_PlayerContextMenuOption_C*>& ComboArray, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class UWidget* CallFunc_Array_Get_Item, class UWidget* CallFunc_Array_Get_Item_1, class UWBP_PlayerContextMenuOption_C* K2Node_DynamicCast_AsWBP_Player_Context_Menu_Option, bool K2Node_DynamicCast_bSuccess, class UWBP_PlayerContextMenuOption_C* K2Node_DynamicCast_AsWBP_Player_Context_Menu_Option_1, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerContextMenu_C", "GetOptionWidgets");

	Params::UWBP_PlayerContextMenu_C_GetOptionWidgets_Params Parms{};

	Parms.LocalIterationWidgets = LocalIterationWidgets;
	Parms.ComboArray = ComboArray;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.K2Node_DynamicCast_AsWBP_Player_Context_Menu_Option = K2Node_DynamicCast_AsWBP_Player_Context_Menu_Option;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsWBP_Player_Context_Menu_Option_1 = K2Node_DynamicCast_AsWBP_Player_Context_Menu_Option_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_GetAllChildren_ReturnValue_1 = CallFunc_GetAllChildren_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Option_Widgets != nullptr)
		*Option_Widgets = std::move(Parms.Option_Widgets);

}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.OnUpdateContextButtons
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UWidget*>             CallFunc_GetAllActiveButtons_Buttons                             (ReferenceParm, ContainsInstancedReference)
// class UWidget*                     CallFunc_GetFirstActiveButton_FocusWidget                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerContextMenu_C::OnUpdateContextButtons(TArray<class UWidget*>& CallFunc_GetAllActiveButtons_Buttons, class UWidget* CallFunc_GetFirstActiveButton_FocusWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerContextMenu_C", "OnUpdateContextButtons");

	Params::UWBP_PlayerContextMenu_C_OnUpdateContextButtons_Params Parms{};

	Parms.CallFunc_GetAllActiveButtons_Buttons = CallFunc_GetAllActiveButtons_Buttons;
	Parms.CallFunc_GetFirstActiveButton_FocusWidget = CallFunc_GetFirstActiveButton_FocusWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.HandleOptionSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPlayerContextOptions   ContextOption                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_OnOptionSelected_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerContextMenu_C::HandleOptionSelected(enum class EPlayerContextOptions ContextOption, bool CallFunc_OnOptionSelected_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerContextMenu_C", "HandleOptionSelected");

	Params::UWBP_PlayerContextMenu_C_HandleOptionSelected_Params Parms{};

	Parms.ContextOption = ContextOption;
	Parms.CallFunc_OnOptionSelected_ReturnValue = CallFunc_OnOptionSelected_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.IsShowingPlayer
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class URH_RHFriendAndPlatformFriend*Friend                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Showing                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsContextMenuOpen_IsOpen                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerContextMenu_C::IsShowingPlayer(class URH_RHFriendAndPlatformFriend* Friend, bool* Showing, bool CallFunc_IsContextMenuOpen_IsOpen, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerContextMenu_C", "IsShowingPlayer");

	Params::UWBP_PlayerContextMenu_C_IsShowingPlayer_Params Parms{};

	Parms.Friend = Friend;
	Parms.CallFunc_IsContextMenuOpen_IsOpen = CallFunc_IsContextMenuOpen_IsOpen;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Showing != nullptr)
		*Showing = Parms.Showing;

}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.IsContextMenuOpen
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsOpen                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerContextMenu_C::IsContextMenuOpen(bool* IsOpen, bool CallFunc_IsVisible_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerContextMenu_C", "IsContextMenuOpen");

	Params::UWBP_PlayerContextMenu_C_IsContextMenuOpen_Params Parms{};

	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsOpen != nullptr)
		*IsOpen = Parms.IsOpen;

}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.ShowForPlayerCard
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_player_card_module_C*   PlayerCard                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IIKSContextMenuTarget_C>CallFunc_ShowForPlayer_TargetWidget_CastInput                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerContextMenu_C::ShowForPlayerCard(class UWBP_player_card_module_C* PlayerCard, TScriptInterface<class IIKSContextMenuTarget_C> CallFunc_ShowForPlayer_TargetWidget_CastInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerContextMenu_C", "ShowForPlayerCard");

	Params::UWBP_PlayerContextMenu_C_ShowForPlayerCard_Params Parms{};

	Parms.PlayerCard = PlayerCard;
	Parms.CallFunc_ShowForPlayer_TargetWidget_CastInput = CallFunc_ShowForPlayer_TargetWidget_CastInput;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.MoveToWidgetSide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class EViewSide               Side                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct SlateCore_Margin            Padding                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class URHWidget*                   K2Node_DynamicCast_AsRHWidget                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerContextMenu_C::MoveToWidgetSide(class UWidget* Widget, enum class EViewSide Side, const struct SlateCore_Margin& Padding, class URHWidget* K2Node_DynamicCast_AsRHWidget, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerContextMenu_C", "MoveToWidgetSide");

	Params::UWBP_PlayerContextMenu_C_MoveToWidgetSide_Params Parms{};

	Parms.Widget = Widget;
	Parms.Side = Side;
	Parms.Padding = Padding;
	Parms.K2Node_DynamicCast_AsRHWidget = K2Node_DynamicCast_AsRHWidget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.MoveToWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             Pad                                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URHWidget*                   K2Node_DynamicCast_AsRHWidget                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct SlateCore_Margin            K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_PlayerContextMenu_C::MoveToWidget(class UWidget* Widget, double Pad, class URHWidget* K2Node_DynamicCast_AsRHWidget, bool K2Node_DynamicCast_bSuccess, const struct SlateCore_Margin& K2Node_MakeStruct_Margin)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerContextMenu_C", "MoveToWidget");

	Params::UWBP_PlayerContextMenu_C_MoveToWidget_Params Parms{};

	Parms.Widget = Widget;
	Parms.Pad = Pad;
	Parms.K2Node_DynamicCast_AsRHWidget = K2Node_DynamicCast_AsRHWidget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.IsCurrentAccountId
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      AccountId                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               IsAccountId                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Guid            CallFunc_GetRHPlayerUuid_ReturnValue                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetVoiceIdByPlayerUuid_ReturnValue                      (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerContextMenu_C::IsCurrentAccountId(const class FString& AccountId, bool* IsAccountId, bool CallFunc_IsValid_ReturnValue, const struct CoreUObject_Guid& CallFunc_GetRHPlayerUuid_ReturnValue, const class FString& CallFunc_GetVoiceIdByPlayerUuid_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerContextMenu_C", "IsCurrentAccountId");

	Params::UWBP_PlayerContextMenu_C_IsCurrentAccountId_Params Parms{};

	Parms.AccountId = AccountId;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetRHPlayerUuid_ReturnValue = CallFunc_GetRHPlayerUuid_ReturnValue;
	Parms.CallFunc_GetVoiceIdByPlayerUuid_ReturnValue = CallFunc_GetVoiceIdByPlayerUuid_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsAccountId != nullptr)
		*IsAccountId = Parms.IsAccountId;

}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.RefreshOptionsPadding
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Found_First_Visible                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct SlateCore_Margin            K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct SlateCore_Margin            K2Node_MakeStruct_Margin_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct SlateCore_Margin            K2Node_MakeStruct_Margin_2                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_SlotAsVerticalBoxSlot_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_SlotAsVerticalBoxSlot_ReturnValue_1                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct SlateCore_Margin            K2Node_MakeStruct_Margin_3                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Is_Past_First_Visible_Child_Variable                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Is_Past_First_Visible_Child_Variable_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue_1                            (ReferenceParm, ContainsInstancedReference)

void UWBP_PlayerContextMenu_C::RefreshOptionsPadding(bool Found_First_Visible, const struct SlateCore_Margin& K2Node_MakeStruct_Margin, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, const struct SlateCore_Margin& K2Node_MakeStruct_Margin_1, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, const struct SlateCore_Margin& K2Node_MakeStruct_Margin_2, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, class UWidget* CallFunc_Array_Get_Item, class UWidget* CallFunc_Array_Get_Item_1, class UVerticalBoxSlot* CallFunc_SlotAsVerticalBoxSlot_ReturnValue, class UVerticalBoxSlot* CallFunc_SlotAsVerticalBoxSlot_ReturnValue_1, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_IsVisible_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, const struct SlateCore_Margin& K2Node_MakeStruct_Margin_3, enum class ESlateVisibility Temp_byte_Variable_2, bool Temp_bool_Is_Past_First_Visible_Child_Variable, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Is_Past_First_Visible_Child_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerContextMenu_C", "RefreshOptionsPadding");

	Params::UWBP_PlayerContextMenu_C_RefreshOptionsPadding_Params Parms{};

	Parms.Found_First_Visible = Found_First_Visible;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_MakeStruct_Margin_1 = K2Node_MakeStruct_Margin_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.K2Node_MakeStruct_Margin_2 = K2Node_MakeStruct_Margin_2;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_SlotAsVerticalBoxSlot_ReturnValue = CallFunc_SlotAsVerticalBoxSlot_ReturnValue;
	Parms.CallFunc_SlotAsVerticalBoxSlot_ReturnValue_1 = CallFunc_SlotAsVerticalBoxSlot_ReturnValue_1;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_IsVisible_ReturnValue_1 = CallFunc_IsVisible_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.K2Node_MakeStruct_Margin_3 = K2Node_MakeStruct_Margin_3;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_bool_Is_Past_First_Visible_Child_Variable = Temp_bool_Is_Past_First_Visible_Child_Variable;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_bool_Is_Past_First_Visible_Child_Variable_1 = Temp_bool_Is_Past_First_Visible_Child_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_GetAllChildren_ReturnValue_1 = CallFunc_GetAllChildren_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.HideContextMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsContextMenuOpen_IsOpen                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_InterfaceToObject_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerContextMenu_C::HideContextMenu(bool CallFunc_IsContextMenuOpen_IsOpen, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerContextMenu_C", "HideContextMenu");

	Params::UWBP_PlayerContextMenu_C_HideContextMenu_Params Parms{};

	Parms.CallFunc_IsContextMenuOpen_IsOpen = CallFunc_IsContextMenuOpen_IsOpen;
	Parms.CallFunc_Conv_InterfaceToObject_ReturnValue = CallFunc_Conv_InterfaceToObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.Move To Player Card And Show
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_player_card_module_C*   Selected_Player_Card                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerContextMenu_C::Move_To_Player_Card_And_Show(class UWBP_player_card_module_C* Selected_Player_Card)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerContextMenu_C", "Move To Player Card And Show");

	Params::UWBP_PlayerContextMenu_C_Move_To_Player_Card_And_Show_Params Parms{};

	Parms.Selected_Player_Card = Selected_Player_Card;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.Is Any Option Visible
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Return_Value                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             FoundButtons                                                     (Edit, BlueprintVisible, ContainsInstancedReference)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URHContextMenuButton*        CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_PlayerContextMenuOption_C*K2Node_DynamicCast_AsWBP_Player_Context_Menu_Option              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerContextMenu_C::Is_Any_Option_Visible(bool* Return_Value, const TArray<class UWidget*>& FoundButtons, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class URHContextMenuButton* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UWBP_PlayerContextMenuOption_C* K2Node_DynamicCast_AsWBP_Player_Context_Menu_Option, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsVisible_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerContextMenu_C", "Is Any Option Visible");

	Params::UWBP_PlayerContextMenu_C_Is_Any_Option_Visible_Params Parms{};

	Parms.FoundButtons = FoundButtons;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsWBP_Player_Context_Menu_Option = K2Node_DynamicCast_AsWBP_Player_Context_Menu_Option;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_Value != nullptr)
		*Return_Value = Parms.Return_Value;

}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct SlateCore_Geometry          MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct SlateCore_KeyEvent          InKeyEvent                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct UMG_EventReply              ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct UMG_EventReply              CallFunc_Handled_ReturnValue                                     (None)
// struct InputCore_Key               CallFunc_GetKey_ReturnValue                                      (HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct UMG_EventReply              CallFunc_OnKeyUp_ReturnValue                                     (None)

struct UMG_EventReply UWBP_PlayerContextMenu_C::OnKeyUp(const struct SlateCore_Geometry& MyGeometry, const struct SlateCore_KeyEvent& InKeyEvent, const struct UMG_EventReply& CallFunc_Handled_ReturnValue, const struct InputCore_Key& CallFunc_GetKey_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, const struct UMG_EventReply& CallFunc_OnKeyUp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerContextMenu_C", "OnKeyUp");

	Params::UWBP_PlayerContextMenu_C_OnKeyUp_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InKeyEvent = InKeyEvent;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_GetKey_ReturnValue = CallFunc_GetKey_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_OnKeyUp_ReturnValue = CallFunc_OnKeyUp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct SlateCore_Geometry          MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct SlateCore_KeyEvent          InKeyEvent                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct UMG_EventReply              ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct InputCore_Key               CallFunc_GetKey_ReturnValue                                      (HasGetValueTypeHash)
// struct UMG_EventReply              CallFunc_Handled_ReturnValue                                     (None)
// struct UMG_EventReply              CallFunc_OnKeyUp_ReturnValue                                     (None)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct UMG_EventReply UWBP_PlayerContextMenu_C::OnKeyDown(const struct SlateCore_Geometry& MyGeometry, const struct SlateCore_KeyEvent& InKeyEvent, const struct InputCore_Key& CallFunc_GetKey_ReturnValue, const struct UMG_EventReply& CallFunc_Handled_ReturnValue, const struct UMG_EventReply& CallFunc_OnKeyUp_ReturnValue, bool CallFunc_Array_Contains_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerContextMenu_C", "OnKeyDown");

	Params::UWBP_PlayerContextMenu_C_OnKeyDown_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InKeyEvent = InKeyEvent;
	Parms.CallFunc_GetKey_ReturnValue = CallFunc_GetKey_ReturnValue;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_OnKeyUp_ReturnValue = CallFunc_OnKeyUp_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.GetAllActiveButtons
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UWidget*>             Buttons                                                          (Parm, OutParm, ContainsInstancedReference)
// TArray<class UWidget*>             FocusableButtons                                                 (Edit, BlueprintVisible, ContainsInstancedReference)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWBP_PlayerContextMenuOption_C*>CallFunc_GetOptionWidgets_Option_Widgets                         (ReferenceParm, ContainsInstancedReference)
// class URHContextMenuButton*        CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_PlayerContextMenuOption_C*K2Node_DynamicCast_AsWBP_Player_Context_Menu_Option              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsActiveForNavigation_Return_Value                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerContextMenu_C::GetAllActiveButtons(TArray<class UWidget*>* Buttons, const TArray<class UWidget*>& FocusableButtons, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWBP_PlayerContextMenuOption_C*>& CallFunc_GetOptionWidgets_Option_Widgets, class URHContextMenuButton* CallFunc_Array_Get_Item, class UWBP_PlayerContextMenuOption_C* K2Node_DynamicCast_AsWBP_Player_Context_Menu_Option, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsActiveForNavigation_Return_Value, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerContextMenu_C", "GetAllActiveButtons");

	Params::UWBP_PlayerContextMenu_C_GetAllActiveButtons_Params Parms{};

	Parms.FocusableButtons = FocusableButtons;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetOptionWidgets_Option_Widgets = CallFunc_GetOptionWidgets_Option_Widgets;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsWBP_Player_Context_Menu_Option = K2Node_DynamicCast_AsWBP_Player_Context_Menu_Option;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_IsActiveForNavigation_Return_Value = CallFunc_IsActiveForNavigation_Return_Value;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Buttons != nullptr)
		*Buttons = std::move(Parms.Buttons);

}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.GetFirstActiveButton
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     FocusWidget                                                      (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             LocalOptionsB                                                    (Edit, BlueprintVisible, ContainsInstancedReference)
// TArray<class UWidget*>             LocalOptionsA                                                    (Edit, BlueprintVisible, ContainsInstancedReference)
// class UWidget*                     FocusableWidget                                                  (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_PlayerContextMenuOption_C*K2Node_DynamicCast_AsWBP_Player_Context_Menu_Option              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_PlayerContextMenuOption_C*K2Node_DynamicCast_AsWBP_Player_Context_Menu_Option_1            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsActiveForNavigation_Return_Value                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsActiveForNavigation_Return_Value_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue_1                            (ReferenceParm, ContainsInstancedReference)

void UWBP_PlayerContextMenu_C::GetFirstActiveButton(class UWidget** FocusWidget, const TArray<class UWidget*>& LocalOptionsB, const TArray<class UWidget*>& LocalOptionsA, class UWidget* FocusableWidget, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class UWidget* CallFunc_Array_Get_Item, class UWidget* CallFunc_Array_Get_Item_1, class UWBP_PlayerContextMenuOption_C* K2Node_DynamicCast_AsWBP_Player_Context_Menu_Option, bool K2Node_DynamicCast_bSuccess, class UWBP_PlayerContextMenuOption_C* K2Node_DynamicCast_AsWBP_Player_Context_Menu_Option_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsActiveForNavigation_Return_Value, bool CallFunc_IsActiveForNavigation_Return_Value_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerContextMenu_C", "GetFirstActiveButton");

	Params::UWBP_PlayerContextMenu_C_GetFirstActiveButton_Params Parms{};

	Parms.LocalOptionsB = LocalOptionsB;
	Parms.LocalOptionsA = LocalOptionsA;
	Parms.FocusableWidget = FocusableWidget;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.K2Node_DynamicCast_AsWBP_Player_Context_Menu_Option = K2Node_DynamicCast_AsWBP_Player_Context_Menu_Option;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsWBP_Player_Context_Menu_Option_1 = K2Node_DynamicCast_AsWBP_Player_Context_Menu_Option_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsActiveForNavigation_Return_Value = CallFunc_IsActiveForNavigation_Return_Value;
	Parms.CallFunc_IsActiveForNavigation_Return_Value_1 = CallFunc_IsActiveForNavigation_Return_Value_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_GetAllChildren_ReturnValue_1 = CallFunc_GetAllChildren_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (FocusWidget != nullptr)
		*FocusWidget = Parms.FocusWidget;

}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.ShowForPlayer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URH_RHFriendAndPlatformFriend*Friend_Info                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IIKSContextMenuTarget_C>TargetWidget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsPendingFriend                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsRequestingFriend                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsFriend                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsCrossplayEnabled                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               InParty                                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_player_card_module_C*   K2Node_DynamicCast_AsWBP_Player_Card_Module                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_InterfaceToObject_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_InterfaceToObject_ReturnValue_1                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetFirstActiveButton_FocusWidget                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Is_Any_Option_Visible_Return_Value                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllActiveButtons_Buttons                             (ReferenceParm, ContainsInstancedReference)
// class UWidget*                     CallFunc_GetFirstActiveButton_FocusWidget_1                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerContextMenu_C::ShowForPlayer(class URH_RHFriendAndPlatformFriend* Friend_Info, TScriptInterface<class IIKSContextMenuTarget_C> TargetWidget, bool IsPendingFriend, bool IsRequestingFriend, bool IsFriend, bool IsCrossplayEnabled, bool InParty, bool CallFunc_IsVisible_ReturnValue, class UWBP_player_card_module_C* K2Node_DynamicCast_AsWBP_Player_Card_Module, bool K2Node_DynamicCast_bSuccess, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UWidget* CallFunc_GetFirstActiveButton_FocusWidget, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_Is_Any_Option_Visible_Return_Value, TArray<class UWidget*>& CallFunc_GetAllActiveButtons_Buttons, class UWidget* CallFunc_GetFirstActiveButton_FocusWidget_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerContextMenu_C", "ShowForPlayer");

	Params::UWBP_PlayerContextMenu_C_ShowForPlayer_Params Parms{};

	Parms.Friend_Info = Friend_Info;
	Parms.TargetWidget = TargetWidget;
	Parms.IsPendingFriend = IsPendingFriend;
	Parms.IsRequestingFriend = IsRequestingFriend;
	Parms.IsFriend = IsFriend;
	Parms.IsCrossplayEnabled = IsCrossplayEnabled;
	Parms.InParty = InParty;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.K2Node_DynamicCast_AsWBP_Player_Card_Module = K2Node_DynamicCast_AsWBP_Player_Card_Module;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Conv_InterfaceToObject_ReturnValue = CallFunc_Conv_InterfaceToObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Conv_InterfaceToObject_ReturnValue_1 = CallFunc_Conv_InterfaceToObject_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_GetFirstActiveButton_FocusWidget = CallFunc_GetFirstActiveButton_FocusWidget;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_Is_Any_Option_Visible_Return_Value = CallFunc_Is_Any_Option_Visible_Return_Value;
	Parms.CallFunc_GetAllActiveButtons_Buttons = CallFunc_GetAllActiveButtons_Buttons;
	Parms.CallFunc_GetFirstActiveButton_FocusWidget_1 = CallFunc_GetFirstActiveButton_FocusWidget_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerContextMenu_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerContextMenu_C", "PreConstruct");

	Params::UWBP_PlayerContextMenu_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.Handle Input State Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ERH_INPUT_STATE         InputState                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerContextMenu_C::Handle_Input_State_Changed(enum class ERH_INPUT_STATE InputState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerContextMenu_C", "Handle Input State Changed");

	Params::UWBP_PlayerContextMenu_C_Handle_Input_State_Changed_Params Parms{};

	Parms.InputState = InputState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.Handle View State Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CurrentRoute                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        PreviousRoute                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EViewManagerLayer       Layer                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerContextMenu_C::Handle_View_State_Changed(class FName CurrentRoute, class FName PreviousRoute, enum class EViewManagerLayer Layer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerContextMenu_C", "Handle View State Changed");

	Params::UWBP_PlayerContextMenu_C_Handle_View_State_Changed_Params Parms{};

	Parms.CurrentRoute = CurrentRoute;
	Parms.PreviousRoute = PreviousRoute;
	Parms.Layer = Layer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.BndEvt__WBP_VoiceActivityContainer_K2Node_ComponentBoundEvent_0_OnVoiceParticipantUpdated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      AccountId                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               bIsTalking                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsMuted                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      ChannelName                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_PlayerContextMenu_C::BndEvt__WBP_VoiceActivityContainer_K2Node_ComponentBoundEvent_0_OnVoiceParticipantUpdated__DelegateSignature(const class FString& AccountId, bool bIsTalking, bool bIsMuted, const class FString& ChannelName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerContextMenu_C", "BndEvt__WBP_VoiceActivityContainer_K2Node_ComponentBoundEvent_0_OnVoiceParticipantUpdated__DelegateSignature");

	Params::UWBP_PlayerContextMenu_C_BndEvt__WBP_VoiceActivityContainer_K2Node_ComponentBoundEvent_0_OnVoiceParticipantUpdated__DelegateSignature_Params Parms{};

	Parms.AccountId = AccountId;
	Parms.bIsTalking = bIsTalking;
	Parms.bIsMuted = bIsMuted;
	Parms.ChannelName = ChannelName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.BndEvt__WBP_VoiceActivityContainer_K2Node_ComponentBoundEvent_1_OnVoiceAudioStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// enum class ERHVoiceActivityAudioStateAudioState                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerContextMenu_C::BndEvt__WBP_VoiceActivityContainer_K2Node_ComponentBoundEvent_1_OnVoiceAudioStateChange__DelegateSignature(enum class ERHVoiceActivityAudioState AudioState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerContextMenu_C", "BndEvt__WBP_VoiceActivityContainer_K2Node_ComponentBoundEvent_1_OnVoiceAudioStateChange__DelegateSignature");

	Params::UWBP_PlayerContextMenu_C_BndEvt__WBP_VoiceActivityContainer_K2Node_ComponentBoundEvent_1_OnVoiceAudioStateChange__DelegateSignature_Params Parms{};

	Parms.AudioState = AudioState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.DelayMoveMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class URHWidget*                   Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct SlateCore_Margin            Padding                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EViewSide               Side                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerContextMenu_C::DelayMoveMenu(class URHWidget* Widget, const struct SlateCore_Margin& Padding, enum class EViewSide Side)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerContextMenu_C", "DelayMoveMenu");

	Params::UWBP_PlayerContextMenu_C_DelayMoveMenu_Params Parms{};

	Parms.Widget = Widget;
	Parms.Padding = Padding;
	Parms.Side = Side;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.On Player Card Update
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_player_card_module_C*   Player_Card                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerContextMenu_C::On_Player_Card_Update(class UWBP_player_card_module_C* Player_Card)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerContextMenu_C", "On Player Card Update");

	Params::UWBP_PlayerContextMenu_C_On_Player_Card_Update_Params Parms{};

	Parms.Player_Card = Player_Card;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.OnHudInitComplete
// (Event, Public, BlueprintEvent)
// Parameters:

void UWBP_PlayerContextMenu_C::OnHudInitComplete()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerContextMenu_C", "OnHudInitComplete");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.ExecuteUbergraph_WBP_PlayerContextMenu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetEnumeratorValueFromIndex_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERH_INPUT_STATE         CallFunc_GetCurrentInputState_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERH_INPUT_STATE         K2Node_CustomEvent_InputState                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_CurrentRoute                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_PreviousRoute                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EViewManagerLayer       K2Node_CustomEvent_Layer                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetFirstActiveButton_FocusWidget                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_AccountId                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bIsTalking                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bIsMuted                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_ChannelName                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsCurrentAccountId_IsAccountId                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERHVoiceActivityAudioStateK2Node_ComponentBoundEvent_AudioState                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EPlayerContextOptions>K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// TArray<enum class EPlayerContextOptions>K2Node_MakeArray_Array_1                                         (ReferenceParm)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllActiveButtons_Buttons                             (ReferenceParm, ContainsInstancedReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class URHWidget*                   K2Node_CustomEvent_Widget                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct SlateCore_Margin            K2Node_CustomEvent_Padding                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EViewSide               K2Node_CustomEvent_Side                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector2D        CallFunc_GetDesiredSize_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector2D        CallFunc_SetMenuPosition_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_player_card_module_C*   K2Node_CustomEvent_Player_Card                                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsShowingPlayer_Showing                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_PlayerContextMenuOption_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class ERHVoiceActivityAudioStateTemp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UVerticalBox*                K2Node_Select_Default_2                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetMenuPosition_menuHeight_ImplicitCast                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerContextMenu_C::ExecuteUbergraph_WBP_PlayerContextMenu(int32 EntryPoint, int32 CallFunc_MakeLiteralInt_ReturnValue, int32 Temp_int_Variable, int32 Temp_int_Variable_1, uint8 CallFunc_Conv_IntToByte_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, uint8 CallFunc_GetEnumeratorValueFromIndex_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, int32 Temp_int_Array_Index_Variable, bool K2Node_Event_IsDesignTime, enum class ESlateVisibility K2Node_Select_Default, int32 Temp_int_Loop_Counter_Variable, enum class ERH_INPUT_STATE CallFunc_GetCurrentInputState_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, enum class ERH_INPUT_STATE K2Node_CustomEvent_InputState, class FName K2Node_CustomEvent_CurrentRoute, class FName K2Node_CustomEvent_PreviousRoute, enum class EViewManagerLayer K2Node_CustomEvent_Layer, class UWidget* CallFunc_GetFirstActiveButton_FocusWidget, bool Temp_bool_Variable_2, const class FString& K2Node_ComponentBoundEvent_AccountId, bool K2Node_ComponentBoundEvent_bIsTalking, bool K2Node_ComponentBoundEvent_bIsMuted, const class FString& K2Node_ComponentBoundEvent_ChannelName, bool CallFunc_IsCurrentAccountId_IsAccountId, enum class ERHVoiceActivityAudioState K2Node_ComponentBoundEvent_AudioState, TArray<enum class EPlayerContextOptions>& K2Node_MakeArray_Array, TArray<enum class EPlayerContextOptions>& K2Node_MakeArray_Array_1, bool CallFunc_Array_Contains_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, TArray<class UWidget*>& CallFunc_GetAllActiveButtons_Buttons, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class URHWidget* K2Node_CustomEvent_Widget, const struct SlateCore_Margin& K2Node_CustomEvent_Padding, enum class EViewSide K2Node_CustomEvent_Side, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, const struct CoreUObject_Vector2D& CallFunc_GetDesiredSize_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, bool Temp_bool_Variable_3, const struct CoreUObject_Vector2D& CallFunc_SetMenuPosition_ReturnValue, bool Temp_bool_Variable_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UWBP_player_card_module_C* K2Node_CustomEvent_Player_Card, bool CallFunc_IsShowingPlayer_Showing, bool Temp_bool_Variable_5, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UWBP_PlayerContextMenuOption_C* CallFunc_Create_ReturnValue, enum class ERHVoiceActivityAudioState Temp_byte_Variable_2, bool K2Node_Select_Default_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class UVerticalBox* K2Node_Select_Default_2, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, float CallFunc_SetMenuPosition_menuHeight_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerContextMenu_C", "ExecuteUbergraph_WBP_PlayerContextMenu");

	Params::UWBP_PlayerContextMenu_C_ExecuteUbergraph_WBP_PlayerContextMenu_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_1 = CallFunc_Conv_IntToByte_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetEnumeratorValueFromIndex_ReturnValue = CallFunc_GetEnumeratorValueFromIndex_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetCurrentInputState_ReturnValue = CallFunc_GetCurrentInputState_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.K2Node_CustomEvent_InputState = K2Node_CustomEvent_InputState;
	Parms.K2Node_CustomEvent_CurrentRoute = K2Node_CustomEvent_CurrentRoute;
	Parms.K2Node_CustomEvent_PreviousRoute = K2Node_CustomEvent_PreviousRoute;
	Parms.K2Node_CustomEvent_Layer = K2Node_CustomEvent_Layer;
	Parms.CallFunc_GetFirstActiveButton_FocusWidget = CallFunc_GetFirstActiveButton_FocusWidget;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.K2Node_ComponentBoundEvent_AccountId = K2Node_ComponentBoundEvent_AccountId;
	Parms.K2Node_ComponentBoundEvent_bIsTalking = K2Node_ComponentBoundEvent_bIsTalking;
	Parms.K2Node_ComponentBoundEvent_bIsMuted = K2Node_ComponentBoundEvent_bIsMuted;
	Parms.K2Node_ComponentBoundEvent_ChannelName = K2Node_ComponentBoundEvent_ChannelName;
	Parms.CallFunc_IsCurrentAccountId_IsAccountId = CallFunc_IsCurrentAccountId_IsAccountId;
	Parms.K2Node_ComponentBoundEvent_AudioState = K2Node_ComponentBoundEvent_AudioState;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_GetAllActiveButtons_Buttons = CallFunc_GetAllActiveButtons_Buttons;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_Widget = K2Node_CustomEvent_Widget;
	Parms.K2Node_CustomEvent_Padding = K2Node_CustomEvent_Padding;
	Parms.K2Node_CustomEvent_Side = K2Node_CustomEvent_Side;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue = CallFunc_SlotAsCanvasSlot_ReturnValue;
	Parms.CallFunc_GetDesiredSize_ReturnValue = CallFunc_GetDesiredSize_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.CallFunc_SetMenuPosition_ReturnValue = CallFunc_SetMenuPosition_ReturnValue;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_Player_Card = K2Node_CustomEvent_Player_Card;
	Parms.CallFunc_IsShowingPlayer_Showing = CallFunc_IsShowingPlayer_Showing;
	Parms.Temp_bool_Variable_5 = Temp_bool_Variable_5;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;
	Parms.CallFunc_SetMenuPosition_menuHeight_ImplicitCast = CallFunc_SetMenuPosition_menuHeight_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.OnReportPlayer_0__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     PlayerInfo                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerContextMenu_C::OnReportPlayer_0__DelegateSignature(class UObject* PlayerInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerContextMenu_C", "OnReportPlayer_0__DelegateSignature");

	Params::UWBP_PlayerContextMenu_C_OnReportPlayer_0__DelegateSignature_Params Parms{};

	Parms.PlayerInfo = PlayerInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.OnMenuStart__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     FocusWidget                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerContextMenu_C::OnMenuStart__DelegateSignature(class UWidget* FocusWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerContextMenu_C", "OnMenuStart__DelegateSignature");

	Params::UWBP_PlayerContextMenu_C_OnMenuStart__DelegateSignature_Params Parms{};

	Parms.FocusWidget = FocusWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.OnMenuHidden__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PlayerContextMenu_C::OnMenuHidden__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerContextMenu_C", "OnMenuHidden__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.OnReadyForNavigation__DelegateSignature
// (Public, Delegate, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UWidget*>             NavWidgets                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// class UWidget*                     Default_Widget                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerContextMenu_C::OnReadyForNavigation__DelegateSignature(TArray<class UWidget*>& NavWidgets, class UWidget* Default_Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerContextMenu_C", "OnReadyForNavigation__DelegateSignature");

	Params::UWBP_PlayerContextMenu_C_OnReadyForNavigation__DelegateSignature_Params Parms{};

	Parms.NavWidgets = NavWidgets;
	Parms.Default_Widget = Default_Widget;

	UObject::ProcessEvent(Func, &Parms);

}

}


