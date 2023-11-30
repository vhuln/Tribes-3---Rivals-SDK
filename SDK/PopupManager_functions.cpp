#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass PopupManager.PopupManager_C
// (None)

class UClass* UPopupManager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PopupManager_C");

	return Clss;
}


// PopupManager_C PopupManager.Default__PopupManager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPopupManager_C* UPopupManager_C::GetDefaultObj()
{
	static class UPopupManager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPopupManager_C*>(UPopupManager_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PopupManager.PopupManager_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct SlateCore_Geometry          MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct SlateCore_KeyEvent          InKeyEvent                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct UMG_EventReply              ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct InputCore_Key               CallFunc_GetKey_ReturnValue                                      (HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct UMG_EventReply              CallFunc_Handled_ReturnValue                                     (None)
// struct UMG_EventReply              CallFunc_OnKeyUp_ReturnValue                                     (None)

struct UMG_EventReply UPopupManager_C::OnKeyUp(const struct SlateCore_Geometry& MyGeometry, const struct SlateCore_KeyEvent& InKeyEvent, const struct InputCore_Key& CallFunc_GetKey_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, const struct UMG_EventReply& CallFunc_Handled_ReturnValue, const struct UMG_EventReply& CallFunc_OnKeyUp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PopupManager_C", "OnKeyUp");

	Params::UPopupManager_C_OnKeyUp_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InKeyEvent = InKeyEvent;
	Parms.CallFunc_GetKey_ReturnValue = CallFunc_GetKey_ReturnValue;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_OnKeyUp_ReturnValue = CallFunc_OnKeyUp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PopupManager.PopupManager_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct SlateCore_Geometry          MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct SlateCore_KeyEvent          InKeyEvent                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct UMG_EventReply              ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct InputCore_Key               CallFunc_GetKey_ReturnValue                                      (HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct UMG_EventReply              CallFunc_OnKeyDown_ReturnValue                                   (None)
// struct UMG_EventReply              CallFunc_Handled_ReturnValue                                     (None)

struct UMG_EventReply UPopupManager_C::OnKeyDown(const struct SlateCore_Geometry& MyGeometry, const struct SlateCore_KeyEvent& InKeyEvent, bool CallFunc_IsVisible_ReturnValue, const struct InputCore_Key& CallFunc_GetKey_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, const struct UMG_EventReply& CallFunc_OnKeyDown_ReturnValue, const struct UMG_EventReply& CallFunc_Handled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PopupManager_C", "OnKeyDown");

	Params::UPopupManager_C_OnKeyDown_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InKeyEvent = InKeyEvent;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_GetKey_ReturnValue = CallFunc_GetKey_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_OnKeyDown_ReturnValue = CallFunc_OnKeyDown_ReturnValue;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PopupManager.PopupManager_C.SetupSubHeaderText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        NewSubHeaderText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPopupManager_C::SetupSubHeaderText(class FText NewSubHeaderText, enum class ESlateVisibility Temp_byte_Variable, bool CallFunc_TextIsEmpty_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PopupManager_C", "SetupSubHeaderText");

	Params::UPopupManager_C_SetupSubHeaderText_Params Parms{};

	Parms.NewSubHeaderText = NewSubHeaderText;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PopupManager.PopupManager_C.SetupButtons
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct RallyHereStart_RHPopupButtonConfig>ButtonInfo                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct UMG_SlateChildSize          K2Node_MakeStruct_SlateChildSize                                 (NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct RallyHereStart_RHPopupButtonConfigCallFunc_Array_Get_Item                                          (ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_StandardButton_02_C*    CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_StandardButton_02_C*    CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct SlateCore_Margin            K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UPopupManager_C::SetupButtons(TArray<struct RallyHereStart_RHPopupButtonConfig>& ButtonInfo, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct UMG_SlateChildSize& K2Node_MakeStruct_SlateChildSize, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct RallyHereStart_RHPopupButtonConfig& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Less_IntInt_ReturnValue, class UWBP_StandardButton_02_C* CallFunc_Array_Get_Item_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UWBP_StandardButton_02_C* CallFunc_Create_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, const struct SlateCore_Margin& K2Node_MakeStruct_Margin, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PopupManager_C", "SetupButtons");

	Params::UPopupManager_C_SetupButtons_Params Parms{};

	Parms.ButtonInfo = ButtonInfo;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_SlateChildSize = K2Node_MakeStruct_SlateChildSize;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue = CallFunc_AddChildToHorizontalBox_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PopupManager.PopupManager_C.SetupTextEntry
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               HasTextEntry                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        DefaultEntryText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPopupManager_C::SetupTextEntry(bool HasTextEntry, class FText DefaultEntryText, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PopupManager_C", "SetupTextEntry");

	Params::UPopupManager_C_SetupTextEntry_Params Parms{};

	Parms.HasTextEntry = HasTextEntry;
	Parms.DefaultEntryText = DefaultEntryText;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PopupManager.PopupManager_C.SetupWarningText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        NewWarningText                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPopupManager_C::SetupWarningText(class FText NewWarningText, bool Temp_bool_Variable, bool CallFunc_TextIsEmpty_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PopupManager_C", "SetupWarningText");

	Params::UPopupManager_C_SetupWarningText_Params Parms{};

	Parms.NewWarningText = NewWarningText;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PopupManager.PopupManager_C.SetupDescription
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        NewDescText                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPopupManager_C::SetupDescription(class FText NewDescText, bool Temp_bool_Variable, bool CallFunc_TextIsEmpty_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PopupManager_C", "SetupDescription");

	Params::UPopupManager_C_SetupDescription_Params Parms{};

	Parms.NewDescText = NewDescText;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PopupManager.PopupManager_C.SetupHeader
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        NewHeaderText                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPopupManager_C::SetupHeader(class FText NewHeaderText, bool Temp_bool_Variable, bool CallFunc_TextIsEmpty_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PopupManager_C", "SetupHeader");

	Params::UPopupManager_C_SetupHeader_Params Parms{};

	Parms.NewHeaderText = NewHeaderText;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PopupManager.PopupManager_C.NavigateBack
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UPopupManager_C::NavigateBack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PopupManager_C", "NavigateBack");

	Params::UPopupManager_C_NavigateBack_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PopupManager.PopupManager_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UPopupManager_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PopupManager_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PopupManager.PopupManager_C.ShowPopup
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct RallyHereStart_RHPopupConfigPopupData                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void UPopupManager_C::ShowPopup(const struct RallyHereStart_RHPopupConfig& PopupData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PopupManager_C", "ShowPopup");

	Params::UPopupManager_C_ShowPopup_Params Parms{};

	Parms.PopupData = PopupData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PopupManager.PopupManager_C.HidePopup
// (Event, Protected, BlueprintEvent)
// Parameters:

void UPopupManager_C::HidePopup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PopupManager_C", "HidePopup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PopupManager.PopupManager_C.ButtonPressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UPopupManager_C::ButtonPressed(class UWidget* Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PopupManager_C", "ButtonPressed");

	Params::UPopupManager_C_ButtonPressed_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PopupManager.PopupManager_C.InitializeWidgetNavigation
// (Event, Public, BlueprintEvent)
// Parameters:

void UPopupManager_C::InitializeWidgetNavigation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PopupManager_C", "InitializeWidgetNavigation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PopupManager.PopupManager_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPopupManager_C::InitializeWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PopupManager_C", "InitializeWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PopupManager.PopupManager_C.HandleCancelButtonClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     InIndex                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UPopupManager_C::HandleCancelButtonClicked(class UWidget* InIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PopupManager_C", "HandleCancelButtonClicked");

	Params::UPopupManager_C_HandleCancelButtonClicked_Params Parms{};

	Parms.InIndex = InIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PopupManager.PopupManager_C.OnShown
// (Event, Public, BlueprintEvent)
// Parameters:

void UPopupManager_C::OnShown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PopupManager_C", "OnShown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PopupManager.PopupManager_C.OnHide
// (Event, Public, BlueprintEvent)
// Parameters:

void UPopupManager_C::OnHide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PopupManager_C", "OnHide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PopupManager.PopupManager_C.OnBackButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPopupManager_C::OnBackButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PopupManager_C", "OnBackButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PopupManager.PopupManager_C.ExecuteUbergraph_PopupManager
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_CustomEvent_Index                                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_StandardButton_02_C*    K2Node_DynamicCast_AsWBP_Standard_Button_02                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct RallyHereStart_RHPopupConfigK2Node_Event_popupData                                           (ContainsInstancedReference)
// class UWidget*                     K2Node_CustomEvent_InIndex                                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct InputCore_Key               CallFunc_GetGamepadCancelButton_ReturnValue                      (HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct InputCore_Key               CallFunc_GetButtonForActionMapping_Button                        (HasGetValueTypeHash)
// bool                               CallFunc_GetButtonForActionMapping_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInputKeyDown_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInputKeyDown_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                K2Node_MakeArray_Array                                           (ReferenceParm)
// bool                               CallFunc_IsLobbyHUD_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URHInputManager*             CallFunc_GetInputManager_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_PopOverrideRoute_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URHInputManager*             CallFunc_GetInputManager_ReturnValue_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_SetFocusToThis_ReturnValue                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UPopupManager_C::ExecuteUbergraph_PopupManager(int32 EntryPoint, class UWidget* K2Node_CustomEvent_Index, class UWBP_StandardButton_02_C* K2Node_DynamicCast_AsWBP_Standard_Button_02, bool K2Node_DynamicCast_bSuccess, const struct RallyHereStart_RHPopupConfig& K2Node_Event_popupData, class UWidget* K2Node_CustomEvent_InIndex, const struct InputCore_Key& CallFunc_GetGamepadCancelButton_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, const struct InputCore_Key& CallFunc_GetButtonForActionMapping_Button, bool CallFunc_GetButtonForActionMapping_ReturnValue, bool CallFunc_IsInputKeyDown_ReturnValue, bool CallFunc_IsInputKeyDown_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, TArray<class FName>& K2Node_MakeArray_Array, bool CallFunc_IsLobbyHUD_ReturnValue, class URHInputManager* CallFunc_GetInputManager_ReturnValue, class FName CallFunc_PopOverrideRoute_ReturnValue, class URHInputManager* CallFunc_GetInputManager_ReturnValue_1, class UWidget* CallFunc_SetFocusToThis_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PopupManager_C", "ExecuteUbergraph_PopupManager");

	Params::UPopupManager_C_ExecuteUbergraph_PopupManager_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Index = K2Node_CustomEvent_Index;
	Parms.K2Node_DynamicCast_AsWBP_Standard_Button_02 = K2Node_DynamicCast_AsWBP_Standard_Button_02;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_popupData = K2Node_Event_popupData;
	Parms.K2Node_CustomEvent_InIndex = K2Node_CustomEvent_InIndex;
	Parms.CallFunc_GetGamepadCancelButton_ReturnValue = CallFunc_GetGamepadCancelButton_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_GetButtonForActionMapping_Button = CallFunc_GetButtonForActionMapping_Button;
	Parms.CallFunc_GetButtonForActionMapping_ReturnValue = CallFunc_GetButtonForActionMapping_ReturnValue;
	Parms.CallFunc_IsInputKeyDown_ReturnValue = CallFunc_IsInputKeyDown_ReturnValue;
	Parms.CallFunc_IsInputKeyDown_ReturnValue_1 = CallFunc_IsInputKeyDown_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_IsLobbyHUD_ReturnValue = CallFunc_IsLobbyHUD_ReturnValue;
	Parms.CallFunc_GetInputManager_ReturnValue = CallFunc_GetInputManager_ReturnValue;
	Parms.CallFunc_PopOverrideRoute_ReturnValue = CallFunc_PopOverrideRoute_ReturnValue;
	Parms.CallFunc_GetInputManager_ReturnValue_1 = CallFunc_GetInputManager_ReturnValue_1;
	Parms.CallFunc_SetFocusToThis_ReturnValue = CallFunc_SetFocusToThis_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}

}


