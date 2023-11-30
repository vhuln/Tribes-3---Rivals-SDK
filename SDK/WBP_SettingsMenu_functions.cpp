#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_SettingsMenu.WBP_SettingsMenu_C
// (None)

class UClass* UWBP_SettingsMenu_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_SettingsMenu_C");

	return Clss;
}


// WBP_SettingsMenu_C WBP_SettingsMenu.Default__WBP_SettingsMenu_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_SettingsMenu_C* UWBP_SettingsMenu_C::GetDefaultObj()
{
	static class UWBP_SettingsMenu_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_SettingsMenu_C*>(UWBP_SettingsMenu_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.OnMenuConfigSet
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class URHSettingsPage*>     CachedSettingsPages                                              (Edit, BlueprintVisible, ContainsInstancedReference)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class URHSettingsPage*>     CallFunc_GetSettingsPages_ReturnValue                            (ReferenceParm, ContainsInstancedReference)
// class URHSettingsPage*             CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SettingsMenu_C::OnMenuConfigSet(const TArray<class URHSettingsPage*>& CachedSettingsPages, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class URHSettingsPage*>& CallFunc_GetSettingsPages_ReturnValue, class URHSettingsPage* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsMenu_C", "OnMenuConfigSet");

	Params::UWBP_SettingsMenu_C_OnMenuConfigSet_Params Parms{};

	Parms.CachedSettingsPages = CachedSettingsPages;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetSettingsPages_ReturnValue = CallFunc_GetSettingsPages_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.Add Settings Nav Tab
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_subscreen_nav_tab_C*    InNavTab                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct SlateCore_Margin            K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_MakeStruct_Left_ImplicitCast                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SettingsMenu_C::Add_Settings_Nav_Tab(class UWBP_subscreen_nav_tab_C* InNavTab, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, double CallFunc_SelectFloat_ReturnValue, const struct SlateCore_Margin& K2Node_MakeStruct_Margin, float K2Node_MakeStruct_Left_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsMenu_C", "Add Settings Nav Tab");

	Params::UWBP_SettingsMenu_C_Add_Settings_Nav_Tab_Params Parms{};

	Parms.InNavTab = InNavTab;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue = CallFunc_AddChildToHorizontalBox_ReturnValue;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.K2Node_MakeStruct_Left_ImplicitCast = K2Node_MakeStruct_Left_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.ResetPreviewWidgets
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URHWidget*                   CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SettingsMenu_C::ResetPreviewWidgets(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class URHWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsMenu_C", "ResetPreviewWidgets");

	Params::UWBP_SettingsMenu_C_ResetPreviewWidgets_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.HandlePreviewHovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URHWidget*                   PreviewWidget                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SettingsMenu_C::HandlePreviewHovered(class URHWidget* PreviewWidget, bool CallFunc_Array_Contains_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsMenu_C", "HandlePreviewHovered");

	Params::UWBP_SettingsMenu_C_HandlePreviewHovered_Params Parms{};

	Parms.PreviewWidget = PreviewWidget;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.AddPreviewToSettingMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URHWidget*                   PreviewWidget                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOverlaySlot*                CallFunc_AddChildToOverlay_ReturnValue                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_SettingsMenu_C::AddPreviewToSettingMenu(class URHWidget* PreviewWidget, int32 CallFunc_Array_AddUnique_ReturnValue, class UOverlaySlot* CallFunc_AddChildToOverlay_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsMenu_C", "AddPreviewToSettingMenu");

	Params::UWBP_SettingsMenu_C_AddPreviewToSettingMenu_Params Parms{};

	Parms.PreviewWidget = PreviewWidget;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_AddChildToOverlay_ReturnValue = CallFunc_AddChildToOverlay_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.SetupPreviewWidgets
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class URHSettingsPage*>     CallFunc_GetSettingsPages_ReturnValue                            (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URHSettingsPage*             CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class URHSettingsContainer*>CallFunc_GetSettingsContainersForPage_SettingsContainers         (ReferenceParm, ContainsInstancedReference)
// TArray<class URHWidget*>           CallFunc_GetSettingsContainersForPage_SettingsContainersAsPUMG   (ReferenceParm, ContainsInstancedReference)
// class URHSettingsContainer*        CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_SettingsContainer_C*    K2Node_DynamicCast_AsWBP_Settings_Container                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URHWidget*                   CallFunc_GetPreviewWidget_PreviewWidget                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SettingsMenu_C::SetupPreviewWidgets(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TArray<class URHSettingsPage*>& CallFunc_GetSettingsPages_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class URHSettingsPage* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, TArray<class URHSettingsContainer*>& CallFunc_GetSettingsContainersForPage_SettingsContainers, TArray<class URHWidget*>& CallFunc_GetSettingsContainersForPage_SettingsContainersAsPUMG, class URHSettingsContainer* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, class UWBP_SettingsContainer_C* K2Node_DynamicCast_AsWBP_Settings_Container, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue_1, class URHWidget* CallFunc_GetPreviewWidget_PreviewWidget, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsMenu_C", "SetupPreviewWidgets");

	Params::UWBP_SettingsMenu_C_SetupPreviewWidgets_Params Parms{};

	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetSettingsPages_ReturnValue = CallFunc_GetSettingsPages_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetSettingsContainersForPage_SettingsContainers = CallFunc_GetSettingsContainersForPage_SettingsContainers;
	Parms.CallFunc_GetSettingsContainersForPage_SettingsContainersAsPUMG = CallFunc_GetSettingsContainersForPage_SettingsContainersAsPUMG;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsWBP_Settings_Container = K2Node_DynamicCast_AsWBP_Settings_Container;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_GetPreviewWidget_PreviewWidget = CallFunc_GetPreviewWidget_PreviewWidget;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.On Tab Clicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URHNavTabWidget*             Tab_Selected                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SettingsMenu_C::On_Tab_Clicked(class URHNavTabWidget* Tab_Selected, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsMenu_C", "On Tab Clicked");

	Params::UWBP_SettingsMenu_C_On_Tab_Clicked_Params Parms{};

	Parms.Tab_Selected = Tab_Selected;
	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue = CallFunc_GetActiveWidgetIndex_ReturnValue;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.ResetPageState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URHSettingsPage*             CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_SettingsPage_C*         K2Node_DynamicCast_AsWBP_Settings_Page                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SettingsMenu_C::ResetPageState(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class URHSettingsPage* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UWBP_SettingsPage_C* K2Node_DynamicCast_AsWBP_Settings_Page, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsVisible_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsMenu_C", "ResetPageState");

	Params::UWBP_SettingsMenu_C_ResetPageState_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsWBP_Settings_Page = K2Node_DynamicCast_AsWBP_Settings_Page;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.GetContainerWidgetForPUMGWidgetOnPage
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class URHSettingsPage*             Page                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class URHWidget*                   PUMG_Widget                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class URHSettingsContainer*        KSSettingsContainerWidget                                        (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<class URHSettingsContainer*>CallFunc_GetSettingsContainersForPage_SettingsContainers         (ReferenceParm, ContainsInstancedReference)
// TArray<class URHWidget*>           CallFunc_GetSettingsContainersForPage_SettingsContainersAsPUMG   (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URHSettingsContainer*        CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_SettingsMenu_C::GetContainerWidgetForPUMGWidgetOnPage(class URHSettingsPage* Page, class URHWidget* PUMG_Widget, class URHSettingsContainer** KSSettingsContainerWidget, TArray<class URHSettingsContainer*>& CallFunc_GetSettingsContainersForPage_SettingsContainers, TArray<class URHWidget*>& CallFunc_GetSettingsContainersForPage_SettingsContainersAsPUMG, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, class URHSettingsContainer* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsMenu_C", "GetContainerWidgetForPUMGWidgetOnPage");

	Params::UWBP_SettingsMenu_C_GetContainerWidgetForPUMGWidgetOnPage_Params Parms{};

	Parms.Page = Page;
	Parms.PUMG_Widget = PUMG_Widget;
	Parms.CallFunc_GetSettingsContainersForPage_SettingsContainers = CallFunc_GetSettingsContainersForPage_SettingsContainers;
	Parms.CallFunc_GetSettingsContainersForPage_SettingsContainersAsPUMG = CallFunc_GetSettingsContainersForPage_SettingsContainersAsPUMG;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	if (KSSettingsContainerWidget != nullptr)
		*KSSettingsContainerWidget = Parms.KSSettingsContainerWidget;

}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.On Widget Mouse Entered
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URHWidget*                   PUMG_Widget                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               bEntered                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URHSettingsPage*             CallFunc_Get_Current_Page_KSSettingsPage                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class URHSettingsContainer*        CallFunc_GetContainerWidgetForPUMGWidgetOnPage_KSSettingsContainerWidget(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetWidgetContainerTitle_ReturnValue                     (None)
// class URHSettingsPreview*          CallFunc_GetWidgetContainerPreview_ReturnValue                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetWidgetContainerDescription_ReturnValue               (None)

void UWBP_SettingsMenu_C::On_Widget_Mouse_Entered(class URHWidget* PUMG_Widget, bool bEntered, class URHSettingsPage* CallFunc_Get_Current_Page_KSSettingsPage, class URHSettingsContainer* CallFunc_GetContainerWidgetForPUMGWidgetOnPage_KSSettingsContainerWidget, class FText CallFunc_GetWidgetContainerTitle_ReturnValue, class URHSettingsPreview* CallFunc_GetWidgetContainerPreview_ReturnValue, class FText CallFunc_GetWidgetContainerDescription_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsMenu_C", "On Widget Mouse Entered");

	Params::UWBP_SettingsMenu_C_On_Widget_Mouse_Entered_Params Parms{};

	Parms.PUMG_Widget = PUMG_Widget;
	Parms.bEntered = bEntered;
	Parms.CallFunc_Get_Current_Page_KSSettingsPage = CallFunc_Get_Current_Page_KSSettingsPage;
	Parms.CallFunc_GetContainerWidgetForPUMGWidgetOnPage_KSSettingsContainerWidget = CallFunc_GetContainerWidgetForPUMGWidgetOnPage_KSSettingsContainerWidget;
	Parms.CallFunc_GetWidgetContainerTitle_ReturnValue = CallFunc_GetWidgetContainerTitle_ReturnValue;
	Parms.CallFunc_GetWidgetContainerPreview_ReturnValue = CallFunc_GetWidgetContainerPreview_ReturnValue;
	Parms.CallFunc_GetWidgetContainerDescription_ReturnValue = CallFunc_GetWidgetContainerDescription_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.Setup Hover Handling
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class URHSettingsPage*>     CallFunc_GetSettingsPages_ReturnValue                            (ReferenceParm, ContainsInstancedReference)
// class URHSettingsPage*             CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class URHSettingsContainer*>CallFunc_GetSettingsContainersForPage_SettingsContainers         (ReferenceParm, ContainsInstancedReference)
// TArray<class URHWidget*>           CallFunc_GetSettingsContainersForPage_SettingsContainersAsPUMG   (ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URHSettingsContainer*        CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<class URHSettingsWidget*>   CallFunc_GetSettingsWidgets_ReturnValue                          (ReferenceParm, ContainsInstancedReference)
// class URHSettingsWidget*           CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_SettingsMenu_C::Setup_Hover_Handling(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Loop_Counter_Variable_2, TArray<class URHSettingsPage*>& CallFunc_GetSettingsPages_ReturnValue, class URHSettingsPage* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, TArray<class URHSettingsContainer*>& CallFunc_GetSettingsContainersForPage_SettingsContainers, TArray<class URHWidget*>& CallFunc_GetSettingsContainersForPage_SettingsContainersAsPUMG, bool CallFunc_Less_IntInt_ReturnValue, class URHSettingsContainer* CallFunc_Array_Get_Item_1, TArray<class URHSettingsWidget*>& CallFunc_GetSettingsWidgets_ReturnValue, class URHSettingsWidget* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsMenu_C", "Setup Hover Handling");

	Params::UWBP_SettingsMenu_C_Setup_Hover_Handling_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_GetSettingsPages_ReturnValue = CallFunc_GetSettingsPages_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetSettingsContainersForPage_SettingsContainers = CallFunc_GetSettingsContainersForPage_SettingsContainers;
	Parms.CallFunc_GetSettingsContainersForPage_SettingsContainersAsPUMG = CallFunc_GetSettingsContainersForPage_SettingsContainersAsPUMG;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_GetSettingsWidgets_ReturnValue = CallFunc_GetSettingsWidgets_ReturnValue;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.GetSettingsContainersForPage
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class URHSettingsPage*             SettingsPage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<class URHSettingsContainer*>SettingsContainers                                               (Parm, OutParm, ContainsInstancedReference)
// TArray<class URHWidget*>           SettingsContainersAsPUMG                                         (Parm, OutParm, ContainsInstancedReference)
// TArray<class URHSettingsContainer*>KSSettingsContainers                                             (Edit, BlueprintVisible, ContainsInstancedReference)
// TArray<class URHSettingsSection*>  CallFunc_GetSettingsSections_ReturnValue                         (ReferenceParm, ContainsInstancedReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URHSettingsSection*          CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<class URHSettingsGroup*>    CallFunc_GetSettingsGroups_ReturnValue                           (ReferenceParm, ContainsInstancedReference)
// class URHSettingsGroup*            CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class URHSettingsContainer*>CallFunc_GetSettingsContainers_ReturnValue                       (ReferenceParm, ContainsInstancedReference)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SettingsMenu_C::GetSettingsContainersForPage(class URHSettingsPage* SettingsPage, TArray<class URHSettingsContainer*>* SettingsContainers, TArray<class URHWidget*>* SettingsContainersAsPUMG, const TArray<class URHSettingsContainer*>& KSSettingsContainers, TArray<class URHSettingsSection*>& CallFunc_GetSettingsSections_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, class URHSettingsSection* CallFunc_Array_Get_Item, TArray<class URHSettingsGroup*>& CallFunc_GetSettingsGroups_ReturnValue, class URHSettingsGroup* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, TArray<class URHSettingsContainer*>& CallFunc_GetSettingsContainers_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsMenu_C", "GetSettingsContainersForPage");

	Params::UWBP_SettingsMenu_C_GetSettingsContainersForPage_Params Parms{};

	Parms.SettingsPage = SettingsPage;
	Parms.KSSettingsContainers = KSSettingsContainers;
	Parms.CallFunc_GetSettingsSections_ReturnValue = CallFunc_GetSettingsSections_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetSettingsGroups_ReturnValue = CallFunc_GetSettingsGroups_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_GetSettingsContainers_ReturnValue = CallFunc_GetSettingsContainers_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (SettingsContainers != nullptr)
		*SettingsContainers = std::move(Parms.SettingsContainers);

	if (SettingsContainersAsPUMG != nullptr)
		*SettingsContainersAsPUMG = std::move(Parms.SettingsContainersAsPUMG);

}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.GetSettingsWidgetForPUMGWidgetOnPage
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class URHSettingsPage*             Page                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class URHWidget*                   PUMG_Widget                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class URHSettingsWidget*           KSSettingsWidget                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<class URHSettingsWidget*>   CallFunc_GetSettingsWidgetsForPage_OutSettingsWidgets            (ReferenceParm, ContainsInstancedReference)
// TArray<class URHWidget*>           CallFunc_GetSettingsWidgetsForPage_OutSettingsWidgetsAsRH        (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URHSettingsWidget*           CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_SettingsMenu_C::GetSettingsWidgetForPUMGWidgetOnPage(class URHSettingsPage* Page, class URHWidget* PUMG_Widget, class URHSettingsWidget** KSSettingsWidget, TArray<class URHSettingsWidget*>& CallFunc_GetSettingsWidgetsForPage_OutSettingsWidgets, TArray<class URHWidget*>& CallFunc_GetSettingsWidgetsForPage_OutSettingsWidgetsAsRH, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, class URHSettingsWidget* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsMenu_C", "GetSettingsWidgetForPUMGWidgetOnPage");

	Params::UWBP_SettingsMenu_C_GetSettingsWidgetForPUMGWidgetOnPage_Params Parms{};

	Parms.Page = Page;
	Parms.PUMG_Widget = PUMG_Widget;
	Parms.CallFunc_GetSettingsWidgetsForPage_OutSettingsWidgets = CallFunc_GetSettingsWidgetsForPage_OutSettingsWidgets;
	Parms.CallFunc_GetSettingsWidgetsForPage_OutSettingsWidgetsAsRH = CallFunc_GetSettingsWidgetsForPage_OutSettingsWidgetsAsRH;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	if (KSSettingsWidget != nullptr)
		*KSSettingsWidget = Parms.KSSettingsWidget;

}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.Get Current Page
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class URHSettingsPage*             KSSettingsPage                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class URHSettingsPage*>     CallFunc_GetSettingsPages_ReturnValue                            (ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URHSettingsPage*             CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_SettingsMenu_C::Get_Current_Page(class URHSettingsPage** KSSettingsPage, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, TArray<class URHSettingsPage*>& CallFunc_GetSettingsPages_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, class URHSettingsPage* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsMenu_C", "Get Current Page");

	Params::UWBP_SettingsMenu_C_Get_Current_Page_Params Parms{};

	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue = CallFunc_GetActiveWidgetIndex_ReturnValue;
	Parms.CallFunc_GetSettingsPages_ReturnValue = CallFunc_GetSettingsPages_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	if (KSSettingsPage != nullptr)
		*KSSettingsPage = Parms.KSSettingsPage;

}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.On Input State Changed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ERH_INPUT_STATE         Input_State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERH_INPUT_STATE         Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentFocusGroup_OutFocusGroup                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCurrentFocusGroup_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SettingsMenu_C::On_Input_State_Changed(enum class ERH_INPUT_STATE Input_State, enum class ERH_INPUT_STATE Temp_byte_Variable, bool K2Node_SwitchEnum_CmpSuccess, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility Temp_byte_Variable_4, enum class ESlateVisibility K2Node_Select_Default, int32 CallFunc_GetCurrentFocusGroup_OutFocusGroup, bool CallFunc_GetCurrentFocusGroup_ReturnValue, bool CallFunc_IsVisible_ReturnValue, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsMenu_C", "On Input State Changed");

	Params::UWBP_SettingsMenu_C_On_Input_State_Changed_Params Parms{};

	Parms.Input_State = Input_State;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetCurrentFocusGroup_OutFocusGroup = CallFunc_GetCurrentFocusGroup_OutFocusGroup;
	Parms.CallFunc_GetCurrentFocusGroup_ReturnValue = CallFunc_GetCurrentFocusGroup_ReturnValue;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue = CallFunc_GetActiveWidgetIndex_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.Setup Input State Handling
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ERH_INPUT_STATE         CallFunc_GetCurrentInputState_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SettingsMenu_C::Setup_Input_State_Handling(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class ERH_INPUT_STATE CallFunc_GetCurrentInputState_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsMenu_C", "Setup Input State Handling");

	Params::UWBP_SettingsMenu_C_Setup_Input_State_Handling_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetCurrentInputState_ReturnValue = CallFunc_GetCurrentInputState_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.Setup Login Handling
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class URHLoginDataFactory*         CallFunc_GetLoginDataFactory_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ERHLoginState           CallFunc_GetCurrentLoginState_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SettingsMenu_C::Setup_Login_Handling(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class URHLoginDataFactory* CallFunc_GetLoginDataFactory_ReturnValue, enum class ERHLoginState CallFunc_GetCurrentLoginState_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsMenu_C", "Setup Login Handling");

	Params::UWBP_SettingsMenu_C_Setup_Login_Handling_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetLoginDataFactory_ReturnValue = CallFunc_GetLoginDataFactory_ReturnValue;
	Parms.CallFunc_GetCurrentLoginState_ReturnValue = CallFunc_GetCurrentLoginState_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.Handle Login State
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ERHLoginState           Login_State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URHLoginDataFactory*         CallFunc_GetLoginDataFactory_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLoggedIn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class URHSettingsPage*>     CallFunc_GetSettingsPages_ReturnValue                            (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URHSettingsPage*             CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class URHSettingsContainer*>CallFunc_GetSettingsContainersForPage_SettingsContainers         (ReferenceParm, ContainsInstancedReference)
// TArray<class URHWidget*>           CallFunc_GetSettingsContainersForPage_SettingsContainersAsPUMG   (ReferenceParm, ContainsInstancedReference)
// class URHSettingsContainer*        CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SettingsMenu_C::Handle_Login_State(enum class ERHLoginState Login_State, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, bool K2Node_SwitchEnum_CmpSuccess, class URHLoginDataFactory* CallFunc_GetLoginDataFactory_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_IsLoggedIn_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, TArray<class URHSettingsPage*>& CallFunc_GetSettingsPages_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class URHSettingsPage* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, TArray<class URHSettingsContainer*>& CallFunc_GetSettingsContainersForPage_SettingsContainers, TArray<class URHWidget*>& CallFunc_GetSettingsContainersForPage_SettingsContainersAsPUMG, class URHSettingsContainer* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsMenu_C", "Handle Login State");

	Params::UWBP_SettingsMenu_C_Handle_Login_State_Params Parms{};

	Parms.Login_State = Login_State;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetLoginDataFactory_ReturnValue = CallFunc_GetLoginDataFactory_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_IsLoggedIn_ReturnValue = CallFunc_IsLoggedIn_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GetSettingsPages_ReturnValue = CallFunc_GetSettingsPages_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetSettingsContainersForPage_SettingsContainers = CallFunc_GetSettingsContainersForPage_SettingsContainers;
	Parms.CallFunc_GetSettingsContainersForPage_SettingsContainersAsPUMG = CallFunc_GetSettingsContainersForPage_SettingsContainersAsPUMG;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.Tab Right
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SettingsMenu_C::Tab_Right(int32 Temp_int_Variable, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsMenu_C", "Tab Right");

	Params::UWBP_SettingsMenu_C_Tab_Right_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue = CallFunc_GetActiveWidgetIndex_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.Tab Left
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SettingsMenu_C::Tab_Left(int32 Temp_int_Variable, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsMenu_C", "Tab Left");

	Params::UWBP_SettingsMenu_C_Tab_Left_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue = CallFunc_GetActiveWidgetIndex_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.Go To Active Tab
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bInstantSwitch                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URHSettingsPage*             CallFunc_Get_Current_Page_KSSettingsPage                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_SetFocusToThis_ReturnValue                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<class URHSettingsWidget*>   CallFunc_GetSettingsWidgetsForPage_OutSettingsWidgets            (ReferenceParm, ContainsInstancedReference)
// TArray<class URHWidget*>           CallFunc_GetSettingsWidgetsForPage_OutSettingsWidgetsAsRH        (ReferenceParm, ContainsInstancedReference)
// class URHSettingsWidget*           CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanGamepadNavigate_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsEnabled_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_subscreen_nav_tab_C*    CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_SettingsMenu_C::Go_To_Active_Tab(bool bInstantSwitch, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, class URHSettingsPage* CallFunc_Get_Current_Page_KSSettingsPage, class UWidget* CallFunc_SetFocusToThis_ReturnValue, TArray<class URHSettingsWidget*>& CallFunc_GetSettingsWidgetsForPage_OutSettingsWidgets, TArray<class URHWidget*>& CallFunc_GetSettingsWidgetsForPage_OutSettingsWidgetsAsRH, class URHSettingsWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_CanGamepadNavigate_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_GetIsEnabled_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, class UWBP_subscreen_nav_tab_C* CallFunc_Array_Get_Item_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsMenu_C", "Go To Active Tab");

	Params::UWBP_SettingsMenu_C_Go_To_Active_Tab_Params Parms{};

	Parms.bInstantSwitch = bInstantSwitch;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Get_Current_Page_KSSettingsPage = CallFunc_Get_Current_Page_KSSettingsPage;
	Parms.CallFunc_SetFocusToThis_ReturnValue = CallFunc_SetFocusToThis_ReturnValue;
	Parms.CallFunc_GetSettingsWidgetsForPage_OutSettingsWidgets = CallFunc_GetSettingsWidgetsForPage_OutSettingsWidgets;
	Parms.CallFunc_GetSettingsWidgetsForPage_OutSettingsWidgetsAsRH = CallFunc_GetSettingsWidgetsForPage_OutSettingsWidgetsAsRH;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_CanGamepadNavigate_ReturnValue = CallFunc_CanGamepadNavigate_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetIsEnabled_ReturnValue = CallFunc_GetIsEnabled_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue = CallFunc_GetActiveWidgetIndex_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.Recover From Navigate Failure
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URHWidget*                   PUMG_Widget                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Index_Offset                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentFocusGroup_OutFocusGroup                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCurrentFocusGroup_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URHSettingsPage*             CallFunc_Get_Current_Page_KSSettingsPage                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_SetFocusToThis_ReturnValue                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<class URHSettingsWidget*>   CallFunc_GetSettingsWidgetsForPage_OutSettingsWidgets            (ReferenceParm, ContainsInstancedReference)
// TArray<class URHWidget*>           CallFunc_GetSettingsWidgetsForPage_OutSettingsWidgetsAsRH        (ReferenceParm, ContainsInstancedReference)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URHSettingsWidget*           CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanGamepadNavigate_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SettingsMenu_C::Recover_From_Navigate_Failure(class URHWidget* PUMG_Widget, int32 Index_Offset, int32 CallFunc_GetCurrentFocusGroup_OutFocusGroup, bool CallFunc_GetCurrentFocusGroup_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class URHSettingsPage* CallFunc_Get_Current_Page_KSSettingsPage, class UWidget* CallFunc_SetFocusToThis_ReturnValue, TArray<class URHSettingsWidget*>& CallFunc_GetSettingsWidgetsForPage_OutSettingsWidgets, TArray<class URHWidget*>& CallFunc_GetSettingsWidgetsForPage_OutSettingsWidgetsAsRH, int32 Temp_int_Variable, int32 CallFunc_Array_Find_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, class URHSettingsWidget* CallFunc_Array_Get_Item, bool CallFunc_CanGamepadNavigate_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue_1, int32 Temp_int_Variable_1, bool Temp_bool_Variable, int32 K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsMenu_C", "Recover From Navigate Failure");

	Params::UWBP_SettingsMenu_C_Recover_From_Navigate_Failure_Params Parms{};

	Parms.PUMG_Widget = PUMG_Widget;
	Parms.Index_Offset = Index_Offset;
	Parms.CallFunc_GetCurrentFocusGroup_OutFocusGroup = CallFunc_GetCurrentFocusGroup_OutFocusGroup;
	Parms.CallFunc_GetCurrentFocusGroup_ReturnValue = CallFunc_GetCurrentFocusGroup_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Get_Current_Page_KSSettingsPage = CallFunc_Get_Current_Page_KSSettingsPage;
	Parms.CallFunc_SetFocusToThis_ReturnValue = CallFunc_SetFocusToThis_ReturnValue;
	Parms.CallFunc_GetSettingsWidgetsForPage_OutSettingsWidgets = CallFunc_GetSettingsWidgetsForPage_OutSettingsWidgets;
	Parms.CallFunc_GetSettingsWidgetsForPage_OutSettingsWidgetsAsRH = CallFunc_GetSettingsWidgetsForPage_OutSettingsWidgetsAsRH;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_CanGamepadNavigate_ReturnValue = CallFunc_CanGamepadNavigate_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue_1 = CallFunc_Array_IsValidIndex_ReturnValue_1;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.Widget Navigate Down Failure
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Focus_Group                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URHWidget*                   PUMG_Widget                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_SettingsMenu_C::Widget_Navigate_Down_Failure(int32 Focus_Group, class URHWidget* PUMG_Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsMenu_C", "Widget Navigate Down Failure");

	Params::UWBP_SettingsMenu_C_Widget_Navigate_Down_Failure_Params Parms{};

	Parms.Focus_Group = Focus_Group;
	Parms.PUMG_Widget = PUMG_Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.Widget Navigate Up Failure
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Focus_Group                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URHWidget*                   PUMG_Widget                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_SettingsMenu_C::Widget_Navigate_Up_Failure(int32 Focus_Group, class URHWidget* PUMG_Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsMenu_C", "Widget Navigate Up Failure");

	Params::UWBP_SettingsMenu_C_Widget_Navigate_Up_Failure_Params Parms{};

	Parms.Focus_Group = Focus_Group;
	Parms.PUMG_Widget = PUMG_Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.On Widget Gamepad Hovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URHWidget*                   PUMG_Widget                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               bHovered                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URHSettingsWidget*           SettingsWidget                                                   (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URHSettingsPage*             CallFunc_Get_Current_Page_KSSettingsPage                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class URHSettingsWidget*           CallFunc_GetSettingsWidgetForPUMGWidgetOnPage_KSSettingsWidget   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SettingsMenu_C::On_Widget_Gamepad_Hovered(class URHWidget* PUMG_Widget, bool bHovered, class URHSettingsWidget* SettingsWidget, bool CallFunc_IsValid_ReturnValue, class URHSettingsPage* CallFunc_Get_Current_Page_KSSettingsPage, class URHSettingsWidget* CallFunc_GetSettingsWidgetForPUMGWidgetOnPage_KSSettingsWidget, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Array_Contains_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsMenu_C", "On Widget Gamepad Hovered");

	Params::UWBP_SettingsMenu_C_On_Widget_Gamepad_Hovered_Params Parms{};

	Parms.PUMG_Widget = PUMG_Widget;
	Parms.bHovered = bHovered;
	Parms.SettingsWidget = SettingsWidget;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Get_Current_Page_KSSettingsPage = CallFunc_Get_Current_Page_KSSettingsPage;
	Parms.CallFunc_GetSettingsWidgetForPUMGWidgetOnPage_KSSettingsWidget = CallFunc_GetSettingsWidgetForPUMGWidgetOnPage_KSSettingsWidget;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue_1 = CallFunc_Array_Contains_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.Scroll Widget Into View
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URHWidget*                   PUMG_Widget                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<class URHSettingsPage*>     CallFunc_GetSettingsPages_ReturnValue                            (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_GetCurrentFocusGroup_OutFocusGroup                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCurrentFocusGroup_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URHSettingsPage*             CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScrollBox*                  CallFunc_GetScrollBox_ReturnValue                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SettingsMenu_C::Scroll_Widget_Into_View(class URHWidget* PUMG_Widget, TArray<class URHSettingsPage*>& CallFunc_GetSettingsPages_ReturnValue, int32 CallFunc_GetCurrentFocusGroup_OutFocusGroup, bool CallFunc_GetCurrentFocusGroup_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, class URHSettingsPage* CallFunc_Array_Get_Item, bool CallFunc_BooleanAND_ReturnValue, class UScrollBox* CallFunc_GetScrollBox_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsMenu_C", "Scroll Widget Into View");

	Params::UWBP_SettingsMenu_C_Scroll_Widget_Into_View_Params Parms{};

	Parms.PUMG_Widget = PUMG_Widget;
	Parms.CallFunc_GetSettingsPages_ReturnValue = CallFunc_GetSettingsPages_ReturnValue;
	Parms.CallFunc_GetCurrentFocusGroup_OutFocusGroup = CallFunc_GetCurrentFocusGroup_OutFocusGroup;
	Parms.CallFunc_GetCurrentFocusGroup_ReturnValue = CallFunc_GetCurrentFocusGroup_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetScrollBox_ReturnValue = CallFunc_GetScrollBox_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.Scroll To Start
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class URHSettingsPage*>     CallFunc_GetSettingsPages_ReturnValue                            (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_GetCurrentFocusGroup_OutFocusGroup                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCurrentFocusGroup_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URHSettingsPage*             CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScrollBox*                  CallFunc_GetScrollBox_ReturnValue                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SettingsMenu_C::Scroll_To_Start(TArray<class URHSettingsPage*>& CallFunc_GetSettingsPages_ReturnValue, int32 CallFunc_GetCurrentFocusGroup_OutFocusGroup, bool CallFunc_GetCurrentFocusGroup_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, class URHSettingsPage* CallFunc_Array_Get_Item, bool CallFunc_BooleanAND_ReturnValue, class UScrollBox* CallFunc_GetScrollBox_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsMenu_C", "Scroll To Start");

	Params::UWBP_SettingsMenu_C_Scroll_To_Start_Params Parms{};

	Parms.CallFunc_GetSettingsPages_ReturnValue = CallFunc_GetSettingsPages_ReturnValue;
	Parms.CallFunc_GetCurrentFocusGroup_OutFocusGroup = CallFunc_GetCurrentFocusGroup_OutFocusGroup;
	Parms.CallFunc_GetCurrentFocusGroup_ReturnValue = CallFunc_GetCurrentFocusGroup_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetScrollBox_ReturnValue = CallFunc_GetScrollBox_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.Scroll To End
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class URHSettingsPage*>     CallFunc_GetSettingsPages_ReturnValue                            (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_GetCurrentFocusGroup_OutFocusGroup                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCurrentFocusGroup_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URHSettingsPage*             CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScrollBox*                  CallFunc_GetScrollBox_ReturnValue                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SettingsMenu_C::Scroll_To_End(TArray<class URHSettingsPage*>& CallFunc_GetSettingsPages_ReturnValue, int32 CallFunc_GetCurrentFocusGroup_OutFocusGroup, bool CallFunc_GetCurrentFocusGroup_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, class URHSettingsPage* CallFunc_Array_Get_Item, bool CallFunc_BooleanAND_ReturnValue, class UScrollBox* CallFunc_GetScrollBox_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsMenu_C", "Scroll To End");

	Params::UWBP_SettingsMenu_C_Scroll_To_End_Params Parms{};

	Parms.CallFunc_GetSettingsPages_ReturnValue = CallFunc_GetSettingsPages_ReturnValue;
	Parms.CallFunc_GetCurrentFocusGroup_OutFocusGroup = CallFunc_GetCurrentFocusGroup_OutFocusGroup;
	Parms.CallFunc_GetCurrentFocusGroup_ReturnValue = CallFunc_GetCurrentFocusGroup_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetScrollBox_ReturnValue = CallFunc_GetScrollBox_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.GoBack
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_RemoveTopViewRoute_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SettingsMenu_C::GoBack(bool CallFunc_RemoveTopViewRoute_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsMenu_C", "GoBack");

	Params::UWBP_SettingsMenu_C_GoBack_Params Parms{};

	Parms.CallFunc_RemoveTopViewRoute_ReturnValue = CallFunc_RemoveTopViewRoute_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.ConfirmExit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShouldSaveSettings                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SettingsMenu_C::ConfirmExit(bool ShouldSaveSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsMenu_C", "ConfirmExit");

	Params::UWBP_SettingsMenu_C_ConfirmExit_Params Parms{};

	Parms.ShouldSaveSettings = ShouldSaveSettings;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.Restore Settings
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class URHSettingsPage*>     Pages                                                            (Edit, BlueprintVisible, ContainsInstancedReference)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class URHSettingsPage*>     CallFunc_GetSettingsPages_ReturnValue                            (ReferenceParm, ContainsInstancedReference)
// class URHSettingsPage*             CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<class URHSettingsWidget*>   CallFunc_GetSettingsWidgetsForPage_OutSettingsWidgets            (ReferenceParm, ContainsInstancedReference)
// TArray<class URHWidget*>           CallFunc_GetSettingsWidgetsForPage_OutSettingsWidgetsAsRH        (ReferenceParm, ContainsInstancedReference)
// class URHSettingsWidget*           CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SettingsMenu_C::Restore_Settings(const TArray<class URHSettingsPage*>& Pages, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, TArray<class URHSettingsPage*>& CallFunc_GetSettingsPages_ReturnValue, class URHSettingsPage* CallFunc_Array_Get_Item, TArray<class URHSettingsWidget*>& CallFunc_GetSettingsWidgetsForPage_OutSettingsWidgets, TArray<class URHWidget*>& CallFunc_GetSettingsWidgetsForPage_OutSettingsWidgetsAsRH, class URHSettingsWidget* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsMenu_C", "Restore Settings");

	Params::UWBP_SettingsMenu_C_Restore_Settings_Params Parms{};

	Parms.Pages = Pages;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_GetSettingsPages_ReturnValue = CallFunc_GetSettingsPages_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetSettingsWidgetsForPage_OutSettingsWidgets = CallFunc_GetSettingsWidgetsForPage_OutSettingsWidgets;
	Parms.CallFunc_GetSettingsWidgetsForPage_OutSettingsWidgetsAsRH = CallFunc_GetSettingsWidgetsForPage_OutSettingsWidgetsAsRH;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.ExitSettingsPage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_HasAnyUnsavedSetting_AnyUnsaved                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SettingsMenu_C::ExitSettingsPage(bool CallFunc_HasAnyUnsavedSetting_AnyUnsaved)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsMenu_C", "ExitSettingsPage");

	Params::UWBP_SettingsMenu_C_ExitSettingsPage_Params Parms{};

	Parms.CallFunc_HasAnyUnsavedSetting_AnyUnsaved = CallFunc_HasAnyUnsavedSetting_AnyUnsaved;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.HasAnyUnsavedSetting
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               AnyUnsaved                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class URHSettingsPage*>     Pages                                                            (Edit, BlueprintVisible, ContainsInstancedReference)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URHSettingsPage*             CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class URHSettingsWidget*>   CallFunc_GetSettingsWidgetsForPage_OutSettingsWidgets            (ReferenceParm, ContainsInstancedReference)
// TArray<class URHWidget*>           CallFunc_GetSettingsWidgetsForPage_OutSettingsWidgetsAsRH        (ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URHSettingsWidget*           CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSaved_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class URHSettingsPage*>     CallFunc_GetSettingsPages_ReturnValue                            (ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SettingsMenu_C::HasAnyUnsavedSetting(bool* AnyUnsaved, const TArray<class URHSettingsPage*>& Pages, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class URHSettingsPage* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, TArray<class URHSettingsWidget*>& CallFunc_GetSettingsWidgetsForPage_OutSettingsWidgets, TArray<class URHWidget*>& CallFunc_GetSettingsWidgetsForPage_OutSettingsWidgetsAsRH, bool CallFunc_Less_IntInt_ReturnValue, class URHSettingsWidget* CallFunc_Array_Get_Item_1, bool CallFunc_IsSaved_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, TArray<class URHSettingsPage*>& CallFunc_GetSettingsPages_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsMenu_C", "HasAnyUnsavedSetting");

	Params::UWBP_SettingsMenu_C_HasAnyUnsavedSetting_Params Parms{};

	Parms.Pages = Pages;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetSettingsWidgetsForPage_OutSettingsWidgets = CallFunc_GetSettingsWidgetsForPage_OutSettingsWidgets;
	Parms.CallFunc_GetSettingsWidgetsForPage_OutSettingsWidgetsAsRH = CallFunc_GetSettingsWidgetsForPage_OutSettingsWidgetsAsRH;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_IsSaved_ReturnValue = CallFunc_IsSaved_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_GetSettingsPages_ReturnValue = CallFunc_GetSettingsPages_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (AnyUnsaved != nullptr)
		*AnyUnsaved = Parms.AnyUnsaved;

}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.NavigateBack
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UWBP_SettingsMenu_C::NavigateBack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsMenu_C", "NavigateBack");

	Params::UWBP_SettingsMenu_C_NavigateBack_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.SetupNavigationForPage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URHSettingsPage*             Page                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class URHSettingsWidget*>   GamepadNavigatableWidgets                                        (Edit, BlueprintVisible, ContainsInstancedReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class URHSettingsWidget*>   CallFunc_GetSettingsWidgetsForPage_OutSettingsWidgets            (ReferenceParm, ContainsInstancedReference)
// TArray<class URHWidget*>           CallFunc_GetSettingsWidgetsForPage_OutSettingsWidgetsAsRH        (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URHSettingsWidget*           CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URHSettingsWidget*           CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URHSettingsWidget*           CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URHSettingsWidget*           CallFunc_Array_Get_Item_3                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanGamepadNavigate_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SettingsMenu_C::SetupNavigationForPage(class URHSettingsPage* Page, int32 Index, const TArray<class URHSettingsWidget*>& GamepadNavigatableWidgets, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class URHSettingsWidget*>& CallFunc_GetSettingsWidgetsForPage_OutSettingsWidgets, TArray<class URHWidget*>& CallFunc_GetSettingsWidgetsForPage_OutSettingsWidgetsAsRH, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class URHSettingsWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_LastIndex_ReturnValue, class URHSettingsWidget* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Add_ReturnValue, class URHSettingsWidget* CallFunc_Array_Get_Item_2, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Array_Add_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, int32 Temp_int_Array_Index_Variable_1, class URHSettingsWidget* CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Add_ReturnValue_2, bool CallFunc_CanGamepadNavigate_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsMenu_C", "SetupNavigationForPage");

	Params::UWBP_SettingsMenu_C_SetupNavigationForPage_Params Parms{};

	Parms.Page = Page;
	Parms.Index = Index;
	Parms.GamepadNavigatableWidgets = GamepadNavigatableWidgets;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetSettingsWidgetsForPage_OutSettingsWidgets = CallFunc_GetSettingsWidgetsForPage_OutSettingsWidgets;
	Parms.CallFunc_GetSettingsWidgetsForPage_OutSettingsWidgetsAsRH = CallFunc_GetSettingsWidgetsForPage_OutSettingsWidgetsAsRH;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_CanGamepadNavigate_ReturnValue = CallFunc_CanGamepadNavigate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.On Tab Selected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URHNavTabWidget*             Tab_Selected                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               bInstantSwitch                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URHSettingsPage*             CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_SettingsPage_C*         K2Node_DynamicCast_AsWBP_Settings_Page                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_subscreen_nav_tab_C*    CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SettingsMenu_C::On_Tab_Selected(class URHNavTabWidget* Tab_Selected, bool bInstantSwitch, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class URHSettingsPage* CallFunc_Array_Get_Item, class UWBP_SettingsPage_C* K2Node_DynamicCast_AsWBP_Settings_Page, bool K2Node_DynamicCast_bSuccess, class UWBP_subscreen_nav_tab_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsMenu_C", "On Tab Selected");

	Params::UWBP_SettingsMenu_C_On_Tab_Selected_Params Parms{};

	Parms.Tab_Selected = Tab_Selected;
	Parms.bInstantSwitch = bInstantSwitch;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsWBP_Settings_Page = K2Node_DynamicCast_AsWBP_Settings_Page;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.Add Tab For Settings Page
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URHSettingsPage*             Settings_Page_Widget                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Tab_Widget_Class                                                 (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetPageName_ReturnValue                                 (ConstParm)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_subscreen_nav_tab_C*    CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SettingsMenu_C::Add_Tab_For_Settings_Page(class URHSettingsPage* Settings_Page_Widget, class UClass* Tab_Widget_Class, class FText CallFunc_GetPageName_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UWBP_subscreen_nav_tab_C* CallFunc_Create_ReturnValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsMenu_C", "Add Tab For Settings Page");

	Params::UWBP_SettingsMenu_C_Add_Tab_For_Settings_Page_Params Parms{};

	Parms.Settings_Page_Widget = Settings_Page_Widget;
	Parms.Tab_Widget_Class = Tab_Widget_Class;
	Parms.CallFunc_GetPageName_ReturnValue = CallFunc_GetPageName_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.Add Settings Page Widget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URHSettingsPage*             Settings_Page                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidgetSwitcherSlot*         K2Node_DynamicCast_AsWidget_Switcher_Slot                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SettingsMenu_C::Add_Settings_Page_Widget(class URHSettingsPage* Settings_Page, int32 CallFunc_Array_Add_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UWidgetSwitcherSlot* K2Node_DynamicCast_AsWidget_Switcher_Slot, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsMenu_C", "Add Settings Page Widget");

	Params::UWBP_SettingsMenu_C_Add_Settings_Page_Widget_Params Parms{};

	Parms.Settings_Page = Settings_Page;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.K2Node_DynamicCast_AsWidget_Switcher_Slot = K2Node_DynamicCast_AsWidget_Switcher_Slot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.AddSettingsPageWidget
// (Event, Protected, BlueprintEvent)
// Parameters:
// class URHSettingsPage*             SettingsPage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_SettingsMenu_C::AddSettingsPageWidget(class URHSettingsPage* SettingsPage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsMenu_C", "AddSettingsPageWidget");

	Params::UWBP_SettingsMenu_C_AddSettingsPageWidget_Params Parms{};

	Parms.SettingsPage = SettingsPage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.OnShown
// (Event, Public, BlueprintEvent)
// Parameters:

void UWBP_SettingsMenu_C::OnShown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsMenu_C", "OnShown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.OnHide
// (Event, Public, BlueprintEvent)
// Parameters:

void UWBP_SettingsMenu_C::OnHide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsMenu_C", "OnHide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_SettingsMenu_C::InitializeWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsMenu_C", "InitializeWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.InitializeWidgetNavigation
// (Event, Public, BlueprintEvent)
// Parameters:

void UWBP_SettingsMenu_C::InitializeWidgetNavigation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsMenu_C", "InitializeWidgetNavigation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.RebuildNavigation
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_SettingsMenu_C::RebuildNavigation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsMenu_C", "RebuildNavigation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.OnBackButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_SettingsMenu_C::OnBackButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsMenu_C", "OnBackButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.OnApplyButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_SettingsMenu_C::OnApplyButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsMenu_C", "OnApplyButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.OnRevertButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_SettingsMenu_C::OnRevertButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsMenu_C", "OnRevertButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.OnConfirmExit
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               ShouldSaveSettings                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SettingsMenu_C::OnConfirmExit(bool ShouldSaveSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsMenu_C", "OnConfirmExit");

	Params::UWBP_SettingsMenu_C_OnConfirmExit_Params Parms{};

	Parms.ShouldSaveSettings = ShouldSaveSettings;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SettingsMenu_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsMenu_C", "PreConstruct");

	Params::UWBP_SettingsMenu_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.RevertSettings
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_SettingsMenu_C::RevertSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsMenu_C", "RevertSettings");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.OnCycleBumpers
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bNext                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SettingsMenu_C::OnCycleBumpers(bool bNext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsMenu_C", "OnCycleBumpers");

	Params::UWBP_SettingsMenu_C_OnCycleBumpers_Params Parms{};

	Parms.bNext = bNext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_SettingsMenu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsMenu_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.ExecuteUbergraph_WBP_SettingsMenu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URHSettingsPage*             K2Node_Event_SettingsPage                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_SetFocusToThis_ReturnValue                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<class URHSettingsPage*>     CallFunc_GetSettingsPages_ReturnValue                            (ReferenceParm, ContainsInstancedReference)
// class URHSettingsPage*             CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                K2Node_MakeArray_Array                                           (ReferenceParm)
// bool                               K2Node_Event_ShouldSaveSettings                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetFontByName_HasFound                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct SlateCore_SlateFontInfo     CallFunc_GetFontByName_FontInfo                                  (HasGetValueTypeHash)
// bool                               CallFunc_GetFontByName_HasFound_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct SlateCore_SlateFontInfo     CallFunc_GetFontByName_FontInfo_1                                (HasGetValueTypeHash)
// class URHSettingsPage*             CallFunc_Get_Current_Page_KSSettingsPage                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class URHSettingsWidget*>   CallFunc_GetSettingsWidgetsForPage_OutSettingsWidgets            (ReferenceParm, ContainsInstancedReference)
// TArray<class URHWidget*>           CallFunc_GetSettingsWidgetsForPage_OutSettingsWidgetsAsRH        (ReferenceParm, ContainsInstancedReference)
// class URHSettingsWidget*           CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERHSettingType          CallFunc_GetSettingType_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bNext                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldUseMobileLayout_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URHInputManager*             CallFunc_GetInputManager_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                K2Node_MakeArray_Array_1                                         (ReferenceParm)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class URHSettingsDataFactory*      CallFunc_GetSettingsDataFactory_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class URHInputManager*             CallFunc_GetInputManager_ReturnValue_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveOverrideRoute_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SettingsMenu_C::ExecuteUbergraph_WBP_SettingsMenu(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class URHSettingsPage* K2Node_Event_SettingsPage, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UWidget* CallFunc_SetFocusToThis_ReturnValue, TArray<class URHSettingsPage*>& CallFunc_GetSettingsPages_ReturnValue, class URHSettingsPage* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, TArray<class FName>& K2Node_MakeArray_Array, bool K2Node_Event_ShouldSaveSettings, bool K2Node_Event_IsDesignTime, bool CallFunc_GetFontByName_HasFound, const struct SlateCore_SlateFontInfo& CallFunc_GetFontByName_FontInfo, bool CallFunc_GetFontByName_HasFound_1, const struct SlateCore_SlateFontInfo& CallFunc_GetFontByName_FontInfo_1, class URHSettingsPage* CallFunc_Get_Current_Page_KSSettingsPage, int32 Temp_int_Loop_Counter_Variable_1, TArray<class URHSettingsWidget*>& CallFunc_GetSettingsWidgetsForPage_OutSettingsWidgets, TArray<class URHWidget*>& CallFunc_GetSettingsWidgetsForPage_OutSettingsWidgetsAsRH, class URHSettingsWidget* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, enum class ERHSettingType CallFunc_GetSettingType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool K2Node_CustomEvent_bNext, bool CallFunc_ShouldUseMobileLayout_ReturnValue, class URHInputManager* CallFunc_GetInputManager_ReturnValue, TArray<class FName>& K2Node_MakeArray_Array_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class URHSettingsDataFactory* CallFunc_GetSettingsDataFactory_ReturnValue, class URHInputManager* CallFunc_GetInputManager_ReturnValue_1, bool CallFunc_RemoveOverrideRoute_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsMenu_C", "ExecuteUbergraph_WBP_SettingsMenu");

	Params::UWBP_SettingsMenu_C_ExecuteUbergraph_WBP_SettingsMenu_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.K2Node_Event_SettingsPage = K2Node_Event_SettingsPage;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_SetFocusToThis_ReturnValue = CallFunc_SetFocusToThis_ReturnValue;
	Parms.CallFunc_GetSettingsPages_ReturnValue = CallFunc_GetSettingsPages_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_Event_ShouldSaveSettings = K2Node_Event_ShouldSaveSettings;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetFontByName_HasFound = CallFunc_GetFontByName_HasFound;
	Parms.CallFunc_GetFontByName_FontInfo = CallFunc_GetFontByName_FontInfo;
	Parms.CallFunc_GetFontByName_HasFound_1 = CallFunc_GetFontByName_HasFound_1;
	Parms.CallFunc_GetFontByName_FontInfo_1 = CallFunc_GetFontByName_FontInfo_1;
	Parms.CallFunc_Get_Current_Page_KSSettingsPage = CallFunc_Get_Current_Page_KSSettingsPage;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_GetSettingsWidgetsForPage_OutSettingsWidgets = CallFunc_GetSettingsWidgetsForPage_OutSettingsWidgets;
	Parms.CallFunc_GetSettingsWidgetsForPage_OutSettingsWidgetsAsRH = CallFunc_GetSettingsWidgetsForPage_OutSettingsWidgetsAsRH;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetSettingType_ReturnValue = CallFunc_GetSettingType_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CustomEvent_bNext = K2Node_CustomEvent_bNext;
	Parms.CallFunc_ShouldUseMobileLayout_ReturnValue = CallFunc_ShouldUseMobileLayout_ReturnValue;
	Parms.CallFunc_GetInputManager_ReturnValue = CallFunc_GetInputManager_ReturnValue;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_GetSettingsDataFactory_ReturnValue = CallFunc_GetSettingsDataFactory_ReturnValue;
	Parms.CallFunc_GetInputManager_ReturnValue_1 = CallFunc_GetInputManager_ReturnValue_1;
	Parms.CallFunc_RemoveOverrideRoute_ReturnValue = CallFunc_RemoveOverrideRoute_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


