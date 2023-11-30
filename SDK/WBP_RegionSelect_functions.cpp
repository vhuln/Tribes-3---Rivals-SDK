#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_RegionSelect.WBP_RegionSelect_C
// (None)

class UClass* UWBP_RegionSelect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_RegionSelect_C");

	return Clss;
}


// WBP_RegionSelect_C WBP_RegionSelect.Default__WBP_RegionSelect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_RegionSelect_C* UWBP_RegionSelect_C::GetDefaultObj()
{
	static class UWBP_RegionSelect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_RegionSelect_C*>(UWBP_RegionSelect_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_RegionSelect.WBP_RegionSelect_C.OnRegionHovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URHWidget*                   Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               bHovered                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_RegionSelect_C::OnRegionHovered(class URHWidget* Widget, bool bHovered)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RegionSelect_C", "OnRegionHovered");

	Params::UWBP_RegionSelect_C_OnRegionHovered_Params Parms{};

	Parms.Widget = Widget;
	Parms.bHovered = bHovered;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_RegionSelect.WBP_RegionSelect_C.GetRegionSelectEntries
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UWBP_RegionSelect_Entry_C*>RegionSelectEntries                                              (Parm, OutParm, ContainsInstancedReference)

void UWBP_RegionSelect_C::GetRegionSelectEntries(TArray<class UWBP_RegionSelect_Entry_C*>* RegionSelectEntries)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RegionSelect_C", "GetRegionSelectEntries");

	Params::UWBP_RegionSelect_C_GetRegionSelectEntries_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (RegionSelectEntries != nullptr)
		*RegionSelectEntries = std::move(Parms.RegionSelectEntries);

}


// Function WBP_RegionSelect.WBP_RegionSelect_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_RegionSelect_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RegionSelect_C", "PreConstruct");

	Params::UWBP_RegionSelect_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_RegionSelect.WBP_RegionSelect_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_RegionSelect_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RegionSelect_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_RegionSelect.WBP_RegionSelect_C.LoginState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ERHLoginState           LoginState                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_RegionSelect_C::LoginState(enum class ERHLoginState LoginState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RegionSelect_C", "LoginState");

	Params::UWBP_RegionSelect_C_LoginState_Params Parms{};

	Parms.LoginState = LoginState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_RegionSelect.WBP_RegionSelect_C.Populate Regions
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_RegionSelect_C::Populate_Regions()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RegionSelect_C", "Populate Regions");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_RegionSelect.WBP_RegionSelect_C.OnChildButtonSelectedRegion
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_RegionSelect_C::OnChildButtonSelectedRegion()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RegionSelect_C", "OnChildButtonSelectedRegion");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_RegionSelect.WBP_RegionSelect_C.BndEvt__WBP_ModalPopupContainer_K2Node_ComponentBoundEvent_0_CloseButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_RegionSelect_C::BndEvt__WBP_ModalPopupContainer_K2Node_ComponentBoundEvent_0_CloseButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RegionSelect_C", "BndEvt__WBP_ModalPopupContainer_K2Node_ComponentBoundEvent_0_CloseButtonClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_RegionSelect.WBP_RegionSelect_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_RegionSelect_C::InitializeWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RegionSelect_C", "InitializeWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_RegionSelect.WBP_RegionSelect_C.OnShown
// (Event, Public, BlueprintEvent)
// Parameters:

void UWBP_RegionSelect_C::OnShown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RegionSelect_C", "OnShown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_RegionSelect.WBP_RegionSelect_C.UpdatePreferredSiteSelection
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_RegionSelect_C::UpdatePreferredSiteSelection()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RegionSelect_C", "UpdatePreferredSiteSelection");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_RegionSelect.WBP_RegionSelect_C.ExecuteUbergraph_WBP_RegionSelect
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERHLoginState           K2Node_CustomEvent_LoginState                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_RegionSelect_Entry_C*   CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class ARHLobbyHUD*                 K2Node_DynamicCast_AsRHLobby_HUD                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScrollBoxSlot*              K2Node_DynamicCast_AsScroll_Box_Slot                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetPreferredRegionId_OutRegionId                        (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_GetPreferredRegionId_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<class FString, class FText>   CallFunc_GetRegionList_OutRegionIdToNameMap                      (None)
// TArray<class FString>              CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URHLoginDataFactory*         CallFunc_GetLoginDataFactory_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct SlateCore_Margin            K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UWBP_RegionSelect_Entry_C*>CallFunc_GetRegionSelectEntries_RegionSelectEntries              (ReferenceParm, ContainsInstancedReference)
// class UWBP_RegionSelect_Entry_C*   CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ARHLobbyHUD*                 K2Node_DynamicCast_AsRHLobby_HUD_1                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetFontByName_HasFound                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct SlateCore_SlateFontInfo     CallFunc_GetFontByName_FontInfo                                  (HasGetValueTypeHash)
// class FString                      CallFunc_GetPreferredRegionId_OutRegionId_1                      (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_GetPreferredRegionId_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item_1                                        (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_RegionSelect_C::ExecuteUbergraph_WBP_RegionSelect(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Array_Index_Variable, bool K2Node_Event_IsDesignTime, enum class ERHLoginState K2Node_CustomEvent_LoginState, bool K2Node_SwitchEnum_CmpSuccess, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UWBP_RegionSelect_Entry_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class ARHLobbyHUD* K2Node_DynamicCast_AsRHLobby_HUD, bool K2Node_DynamicCast_bSuccess, class UScrollBoxSlot* K2Node_DynamicCast_AsScroll_Box_Slot, bool K2Node_DynamicCast_bSuccess_1, const class FString& CallFunc_GetPreferredRegionId_OutRegionId, bool CallFunc_GetPreferredRegionId_ReturnValue, TMap<class FString, class FText> CallFunc_GetRegionList_OutRegionIdToNameMap, TArray<class FString>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class URHLoginDataFactory* CallFunc_GetLoginDataFactory_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 CallFunc_Array_Add_ReturnValue, const struct SlateCore_Margin& K2Node_MakeStruct_Margin, TArray<class UWBP_RegionSelect_Entry_C*>& CallFunc_GetRegionSelectEntries_RegionSelectEntries, class UWBP_RegionSelect_Entry_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, class ARHLobbyHUD* K2Node_DynamicCast_AsRHLobby_HUD_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_GetFontByName_HasFound, const struct SlateCore_SlateFontInfo& CallFunc_GetFontByName_FontInfo, const class FString& CallFunc_GetPreferredRegionId_OutRegionId_1, bool CallFunc_GetPreferredRegionId_ReturnValue_1, bool CallFunc_EqualEqual_StriStri_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, int32 Temp_int_Array_Index_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const class FString& CallFunc_Array_Get_Item_1, bool CallFunc_EqualEqual_StriStri_ReturnValue_1, class FText CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RegionSelect_C", "ExecuteUbergraph_WBP_RegionSelect");

	Params::UWBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_CustomEvent_LoginState = K2Node_CustomEvent_LoginState;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.K2Node_DynamicCast_AsRHLobby_HUD = K2Node_DynamicCast_AsRHLobby_HUD;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsScroll_Box_Slot = K2Node_DynamicCast_AsScroll_Box_Slot;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetPreferredRegionId_OutRegionId = CallFunc_GetPreferredRegionId_OutRegionId;
	Parms.CallFunc_GetPreferredRegionId_ReturnValue = CallFunc_GetPreferredRegionId_ReturnValue;
	Parms.CallFunc_GetRegionList_OutRegionIdToNameMap = CallFunc_GetRegionList_OutRegionIdToNameMap;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetLoginDataFactory_ReturnValue = CallFunc_GetLoginDataFactory_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.CallFunc_GetRegionSelectEntries_RegionSelectEntries = CallFunc_GetRegionSelectEntries_RegionSelectEntries;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsRHLobby_HUD_1 = K2Node_DynamicCast_AsRHLobby_HUD_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetFontByName_HasFound = CallFunc_GetFontByName_HasFound;
	Parms.CallFunc_GetFontByName_FontInfo = CallFunc_GetFontByName_FontInfo;
	Parms.CallFunc_GetPreferredRegionId_OutRegionId_1 = CallFunc_GetPreferredRegionId_OutRegionId_1;
	Parms.CallFunc_GetPreferredRegionId_ReturnValue_1 = CallFunc_GetPreferredRegionId_ReturnValue_1;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue = CallFunc_EqualEqual_StriStri_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue_1 = CallFunc_EqualEqual_StriStri_ReturnValue_1;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_RegionSelect.WBP_RegionSelect_C.OnRegionSelectEntriesCreated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_RegionSelect_C::OnRegionSelectEntriesCreated__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RegionSelect_C", "OnRegionSelectEntriesCreated__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_RegionSelect.WBP_RegionSelect_C.OnRegionSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_RegionSelect_C::OnRegionSelected__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RegionSelect_C", "OnRegionSelected__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


