#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Dropdown.Dropdown_C
// (None)

class UClass* UDropdown_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Dropdown_C");

	return Clss;
}


// Dropdown_C Dropdown.Default__Dropdown_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDropdown_C* UDropdown_C::GetDefaultObj()
{
	static class UDropdown_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDropdown_C*>(UDropdown_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Dropdown.Dropdown_C.NavigateConfirm
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NavigateConfirm_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UDropdown_C::NavigateConfirm(bool CallFunc_NavigateConfirm_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dropdown_C", "NavigateConfirm");

	Params::UDropdown_C_NavigateConfirm_Params Parms{};

	Parms.CallFunc_NavigateConfirm_ReturnValue = CallFunc_NavigateConfirm_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Dropdown.Dropdown_C.SetKeyPrompt
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct InputCore_Key               KeyPrompt                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               CallFunc_Key_IsValid_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDropdown_C::SetKeyPrompt(const struct InputCore_Key& KeyPrompt, bool CallFunc_Key_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dropdown_C", "SetKeyPrompt");

	Params::UDropdown_C_SetKeyPrompt_Params Parms{};

	Parms.KeyPrompt = KeyPrompt;
	Parms.CallFunc_Key_IsValid_ReturnValue = CallFunc_Key_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Dropdown.Dropdown_C.UpdateGamepadPromptVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERH_INPUT_STATE         CallFunc_GetCurrentInputState_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDropdown_C::UpdateGamepadPromptVisibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ERH_INPUT_STATE CallFunc_GetCurrentInputState_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dropdown_C", "UpdateGamepadPromptVisibility");

	Params::UDropdown_C_UpdateGamepadPromptVisibility_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_GetCurrentInputState_ReturnValue = CallFunc_GetCurrentInputState_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Dropdown.Dropdown_C.OnInputStateChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// uint8                              InputState                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDropdown_C::OnInputStateChanged(uint8 InputState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dropdown_C", "OnInputStateChanged");

	Params::UDropdown_C_OnInputStateChanged_Params Parms{};

	Parms.InputState = InputState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Dropdown.Dropdown_C.IsSelecting
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsSelecting                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsOpen_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDropdown_C::IsSelecting(bool* IsSelecting, bool CallFunc_IsOpen_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dropdown_C", "IsSelecting");

	Params::UDropdown_C_IsSelecting_Params Parms{};

	Parms.CallFunc_IsOpen_ReturnValue = CallFunc_IsOpen_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsSelecting != nullptr)
		*IsSelecting = Parms.IsSelecting;

}


// Function Dropdown.Dropdown_C.AppendOptions
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FText>                OptionsToAppend                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UDropdown_C::AppendOptions(TArray<class FText>& OptionsToAppend)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dropdown_C", "AppendOptions");

	Params::UDropdown_C_AppendOptions_Params Parms{};

	Parms.OptionsToAppend = OptionsToAppend;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Dropdown.Dropdown_C.ForceClose
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UDropdown_C::ForceClose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dropdown_C", "ForceClose");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Dropdown.Dropdown_C.ForceToggle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     CallFunc_SetFocusToThis_ReturnValue                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class ERH_INPUT_STATE         CallFunc_GetCurrentInputState_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsOpen_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDropdown_C::ForceToggle(class UWidget* CallFunc_SetFocusToThis_ReturnValue, enum class ERH_INPUT_STATE CallFunc_GetCurrentInputState_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsOpen_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dropdown_C", "ForceToggle");

	Params::UDropdown_C_ForceToggle_Params Parms{};

	Parms.CallFunc_SetFocusToThis_ReturnValue = CallFunc_SetFocusToThis_ReturnValue;
	Parms.CallFunc_GetCurrentInputState_ReturnValue = CallFunc_GetCurrentInputState_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_IsOpen_ReturnValue = CallFunc_IsOpen_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Dropdown.Dropdown_C.ForceOpen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UDropdown_C::ForceOpen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dropdown_C", "ForceOpen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Dropdown.Dropdown_C.InitializeDropdownList
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UDropdownList_C*             CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UDropdown_C::InitializeDropdownList(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UDropdownList_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dropdown_C", "InitializeDropdownList");

	Params::UDropdown_C_InitializeDropdownList_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Dropdown.Dropdown_C.SetSelectedOptionByIndex
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDropdown_C::SetSelectedOptionByIndex(int32 Index, bool* Success, class FText CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dropdown_C", "SetSelectedOptionByIndex");

	Params::UDropdown_C_SetSelectedOptionByIndex_Params Parms{};

	Parms.Index = Index;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function Dropdown.Dropdown_C.SetSelectedOptionByText
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Scratch                                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetSelectedOptionByIndex_Success                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDropdown_C::SetSelectedOptionByText(class FText Text, bool* Success, int32 Scratch, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_SetSelectedOptionByIndex_Success, int32 CallFunc_Array_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dropdown_C", "SetSelectedOptionByText");

	Params::UDropdown_C_SetSelectedOptionByText_Params Parms{};

	Parms.Text = Text;
	Parms.Scratch = Scratch;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_SetSelectedOptionByIndex_Success = CallFunc_SetSelectedOptionByIndex_Success;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function Dropdown.Dropdown_C.RemoveOptionByIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDropdown_C::RemoveOptionByIndex(int32 Index, bool* Success, bool CallFunc_Array_IsValidIndex_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dropdown_C", "RemoveOptionByIndex");

	Params::UDropdown_C_RemoveOptionByIndex_Params Parms{};

	Parms.Index = Index;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function Dropdown.Dropdown_C.RemoveOptionByText
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Option                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDropdown_C::RemoveOptionByText(class FText Option, bool* Success, bool CallFunc_Array_RemoveItem_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dropdown_C", "RemoveOptionByText");

	Params::UDropdown_C_RemoveOptionByText_Params Parms{};

	Parms.Option = Option;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function Dropdown.Dropdown_C.GetSelectedOption
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        Selection                                                        (Parm, OutParm)
// int32                              Index                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDropdown_C::GetSelectedOption(class FText* Selection, int32* Index, class FText CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dropdown_C", "GetSelectedOption");

	Params::UDropdown_C_GetSelectedOption_Params Parms{};

	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Selection != nullptr)
		*Selection = Parms.Selection;

	if (Index != nullptr)
		*Index = Parms.Index;

}


// Function Dropdown.Dropdown_C.GetOptionCount
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Count                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDropdown_C::GetOptionCount(int32* Count, int32 CallFunc_Array_Length_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dropdown_C", "GetOptionCount");

	Params::UDropdown_C_GetOptionCount_Params Parms{};

	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Count != nullptr)
		*Count = Parms.Count;

}


// Function Dropdown.Dropdown_C.FindIndexForOption
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Option                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Index                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDropdown_C::FindIndexForOption(class FText Option, bool* Success, int32* Index, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dropdown_C", "FindIndexForOption");

	Params::UDropdown_C_FindIndexForOption_Params Parms{};

	Parms.Option = Option;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	if (Index != nullptr)
		*Index = Parms.Index;

}


// Function Dropdown.Dropdown_C.FindOptionByIndex
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Option                                                           (Parm, OutParm)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Array_Get_Item                                          (None)

void UDropdown_C::FindOptionByIndex(int32 Index, bool* Success, class FText* Option, bool CallFunc_Array_IsValidIndex_ReturnValue, class FText CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dropdown_C", "FindOptionByIndex");

	Params::UDropdown_C_FindOptionByIndex_Params Parms{};

	Parms.Index = Index;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	if (Option != nullptr)
		*Option = Parms.Option;

}


// Function Dropdown.Dropdown_C.ClearSelection
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UDropdown_C::ClearSelection()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dropdown_C", "ClearSelection");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Dropdown.Dropdown_C.ClearOptions
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UDropdown_C::ClearOptions()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dropdown_C", "ClearOptions");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Dropdown.Dropdown_C.AddOption
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        OptionText                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDropdown_C::AddOption(class FText OptionText, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dropdown_C", "AddOption");

	Params::UDropdown_C_AddOption_Params Parms{};

	Parms.OptionText = OptionText;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Dropdown.Dropdown_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UDropdown_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dropdown_C", "BndEvt__HitTarget_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Dropdown.Dropdown_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UDropdown_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dropdown_C", "BndEvt__HitTarget_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Dropdown.Dropdown_C.SelectionMade
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Selection                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UDropdown_C::SelectionMade(int32 Index, class FText Selection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dropdown_C", "SelectionMade");

	Params::UDropdown_C_SelectionMade_Params Parms{};

	Parms.Index = Index;
	Parms.Selection = Selection;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Dropdown.Dropdown_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UDropdown_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dropdown_C", "BndEvt__HitTarget_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Dropdown.Dropdown_C.SelectionCancel
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UDropdown_C::SelectionCancel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dropdown_C", "SelectionCancel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Dropdown.Dropdown_C.BndEvt__DropdownAnchor_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bIsOpen                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDropdown_C::BndEvt__DropdownAnchor_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dropdown_C", "BndEvt__DropdownAnchor_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature");

	Params::UDropdown_C_BndEvt__DropdownAnchor_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature_Params Parms{};

	Parms.bIsOpen = bIsOpen;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Dropdown.Dropdown_C.HandleSetCurrentHoverIndex
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CurrentHoverIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDropdown_C::HandleSetCurrentHoverIndex(int32 CurrentHoverIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dropdown_C", "HandleSetCurrentHoverIndex");

	Params::UDropdown_C_HandleSetCurrentHoverIndex_Params Parms{};

	Parms.CurrentHoverIndex = CurrentHoverIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Dropdown.Dropdown_C.GamepadHover
// (Event, Public, BlueprintEvent)
// Parameters:

void UDropdown_C::GamepadHover()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dropdown_C", "GamepadHover");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Dropdown.Dropdown_C.GamepadUnhover
// (Event, Public, BlueprintEvent)
// Parameters:

void UDropdown_C::GamepadUnhover()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dropdown_C", "GamepadUnhover");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Dropdown.Dropdown_C.On Selected
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UDropdown_C::On_Selected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dropdown_C", "On Selected");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Dropdown.Dropdown_C.Hover
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UDropdown_C::Hover()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dropdown_C", "Hover");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Dropdown.Dropdown_C.Unhover
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UDropdown_C::Unhover()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dropdown_C", "Unhover");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Dropdown.Dropdown_C.HoverPreview
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDropdown_C::HoverPreview(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dropdown_C", "HoverPreview");

	Params::UDropdown_C_HoverPreview_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Dropdown.Dropdown_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UDropdown_C::InitializeWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dropdown_C", "InitializeWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Dropdown.Dropdown_C.ExecuteUbergraph_Dropdown
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bIsOpen                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_CurrentHoverIndex                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Index_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_Selection                                     (None)
// bool                               CallFunc_SetSelectedOptionByIndex_Success                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetSelectedOptionByIndex_Success_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Index                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ERH_INPUT_STATE         CallFunc_GetCurrentInputState_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDropdown_C::ExecuteUbergraph_Dropdown(int32 EntryPoint, bool K2Node_ComponentBoundEvent_bIsOpen, int32 K2Node_CustomEvent_CurrentHoverIndex, int32 K2Node_CustomEvent_Index_1, class FText K2Node_CustomEvent_Selection, bool CallFunc_SetSelectedOptionByIndex_Success, bool CallFunc_SetSelectedOptionByIndex_Success_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, int32 K2Node_CustomEvent_Index, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class ERH_INPUT_STATE CallFunc_GetCurrentInputState_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dropdown_C", "ExecuteUbergraph_Dropdown");

	Params::UDropdown_C_ExecuteUbergraph_Dropdown_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_bIsOpen = K2Node_ComponentBoundEvent_bIsOpen;
	Parms.K2Node_CustomEvent_CurrentHoverIndex = K2Node_CustomEvent_CurrentHoverIndex;
	Parms.K2Node_CustomEvent_Index_1 = K2Node_CustomEvent_Index_1;
	Parms.K2Node_CustomEvent_Selection = K2Node_CustomEvent_Selection;
	Parms.CallFunc_SetSelectedOptionByIndex_Success = CallFunc_SetSelectedOptionByIndex_Success;
	Parms.CallFunc_SetSelectedOptionByIndex_Success_1 = CallFunc_SetSelectedOptionByIndex_Success_1;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.K2Node_CustomEvent_Index = K2Node_CustomEvent_Index;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetCurrentInputState_ReturnValue = CallFunc_GetCurrentInputState_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Dropdown.Dropdown_C.OnSelectionCanceled__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UDropdown_C::OnSelectionCanceled__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dropdown_C", "OnSelectionCanceled__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Dropdown.Dropdown_C.OnHoverPreview__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDropdown_C::OnHoverPreview__DelegateSignature(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dropdown_C", "OnHoverPreview__DelegateSignature");

	Params::UDropdown_C_OnHoverPreview__DelegateSignature_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Dropdown.Dropdown_C.OnSelectionChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        SelectionText                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              SelectionIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDropdown_C::OnSelectionChanged__DelegateSignature(class FText SelectionText, int32 SelectionIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dropdown_C", "OnSelectionChanged__DelegateSignature");

	Params::UDropdown_C_OnSelectionChanged__DelegateSignature_Params Parms{};

	Parms.SelectionText = SelectionText;
	Parms.SelectionIndex = SelectionIndex;

	UObject::ProcessEvent(Func, &Parms);

}

}


