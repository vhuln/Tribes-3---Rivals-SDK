#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BrightLobbyWidget.BrightLobbyWidget_C
// (None)

class UClass* UBrightLobbyWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BrightLobbyWidget_C");

	return Clss;
}


// BrightLobbyWidget_C BrightLobbyWidget.Default__BrightLobbyWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBrightLobbyWidget_C* UBrightLobbyWidget_C::GetDefaultObj()
{
	static class UBrightLobbyWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBrightLobbyWidget_C*>(UBrightLobbyWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BrightLobbyWidget.BrightLobbyWidget_C.SetErrorMessageDT
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBrightLobbyWidget_C::SetErrorMessageDT()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BrightLobbyWidget_C", "SetErrorMessageDT");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BrightLobbyWidget.BrightLobbyWidget_C.UninitializeSubWidgets
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPanelWidget*                Container                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class URHWidget*                   K2Node_DynamicCast_AsRHWidget                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBrightLobbyWidget_C::UninitializeSubWidgets(class UPanelWidget* Container, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, class URHWidget* K2Node_DynamicCast_AsRHWidget, bool K2Node_DynamicCast_bSuccess, bool CallFunc_LessEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BrightLobbyWidget_C", "UninitializeSubWidgets");

	Params::UBrightLobbyWidget_C_UninitializeSubWidgets_Params Parms{};

	Parms.Container = Container;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.K2Node_DynamicCast_AsRHWidget = K2Node_DynamicCast_AsRHWidget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BrightLobbyWidget.BrightLobbyWidget_C.InitializeSubWidgets
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPanelWidget*                Container                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class URHWidget*                   K2Node_DynamicCast_AsRHWidget                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelWidget*                K2Node_DynamicCast_AsPanel_Widget                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBrightLobbyWidget_C::InitializeSubWidgets(class UPanelWidget* Container, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, class URHWidget* K2Node_DynamicCast_AsRHWidget, bool K2Node_DynamicCast_bSuccess, class UPanelWidget* K2Node_DynamicCast_AsPanel_Widget, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_LessEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BrightLobbyWidget_C", "InitializeSubWidgets");

	Params::UBrightLobbyWidget_C_InitializeSubWidgets_Params Parms{};

	Parms.Container = Container;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.K2Node_DynamicCast_AsRHWidget = K2Node_DynamicCast_AsRHWidget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsPanel_Widget = K2Node_DynamicCast_AsPanel_Widget;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BrightLobbyWidget.BrightLobbyWidget_C.HidePersistentWidgets
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URHWidget*                   K2Node_DynamicCast_AsRHWidget                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBrightLobbyWidget_C::HidePersistentWidgets(int32 Temp_int_Variable, class UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, class URHWidget* K2Node_DynamicCast_AsRHWidget, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_IsVisible_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BrightLobbyWidget_C", "HidePersistentWidgets");

	Params::UBrightLobbyWidget_C_HidePersistentWidgets_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.K2Node_DynamicCast_AsRHWidget = K2Node_DynamicCast_AsRHWidget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BrightLobbyWidget.BrightLobbyWidget_C.UninitializeKSWidgets
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBrightLobbyWidget_C::UninitializeKSWidgets()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BrightLobbyWidget_C", "UninitializeKSWidgets");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BrightLobbyWidget.BrightLobbyWidget_C.InitializeKSWidgets
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBrightLobbyWidget_C::InitializeKSWidgets()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BrightLobbyWidget_C", "InitializeKSWidgets");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BrightLobbyWidget.BrightLobbyWidget_C.CreateStickyWidgetData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct RallyHereStart_StickyWidgetDataK2Node_MakeStruct_StickyWidgetData                               (NoDestructor, ContainsInstancedReference)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct RallyHereStart_StickyWidgetDataK2Node_MakeStruct_StickyWidgetData_1                             (NoDestructor, ContainsInstancedReference)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct RallyHereStart_StickyWidgetDataK2Node_MakeStruct_StickyWidgetData_2                             (NoDestructor, ContainsInstancedReference)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct RallyHereStart_StickyWidgetDataK2Node_MakeStruct_StickyWidgetData_3                             (NoDestructor, ContainsInstancedReference)
// int32                              CallFunc_Array_Add_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct RallyHereStart_StickyWidgetDataK2Node_MakeStruct_StickyWidgetData_4                             (NoDestructor, ContainsInstancedReference)
// int32                              CallFunc_Array_Add_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBrightLobbyWidget_C::CreateStickyWidgetData(const struct RallyHereStart_StickyWidgetData& K2Node_MakeStruct_StickyWidgetData, int32 CallFunc_Array_Add_ReturnValue, const struct RallyHereStart_StickyWidgetData& K2Node_MakeStruct_StickyWidgetData_1, int32 CallFunc_Array_Add_ReturnValue_1, const struct RallyHereStart_StickyWidgetData& K2Node_MakeStruct_StickyWidgetData_2, int32 CallFunc_Array_Add_ReturnValue_2, const struct RallyHereStart_StickyWidgetData& K2Node_MakeStruct_StickyWidgetData_3, int32 CallFunc_Array_Add_ReturnValue_3, const struct RallyHereStart_StickyWidgetData& K2Node_MakeStruct_StickyWidgetData_4, int32 CallFunc_Array_Add_ReturnValue_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BrightLobbyWidget_C", "CreateStickyWidgetData");

	Params::UBrightLobbyWidget_C_CreateStickyWidgetData_Params Parms{};

	Parms.K2Node_MakeStruct_StickyWidgetData = K2Node_MakeStruct_StickyWidgetData;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.K2Node_MakeStruct_StickyWidgetData_1 = K2Node_MakeStruct_StickyWidgetData_1;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.K2Node_MakeStruct_StickyWidgetData_2 = K2Node_MakeStruct_StickyWidgetData_2;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.K2Node_MakeStruct_StickyWidgetData_3 = K2Node_MakeStruct_StickyWidgetData_3;
	Parms.CallFunc_Array_Add_ReturnValue_3 = CallFunc_Array_Add_ReturnValue_3;
	Parms.K2Node_MakeStruct_StickyWidgetData_4 = K2Node_MakeStruct_StickyWidgetData_4;
	Parms.CallFunc_Array_Add_ReturnValue_4 = CallFunc_Array_Add_ReturnValue_4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BrightLobbyWidget.BrightLobbyWidget_C.Set Safe Frame
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Scale                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBrightLobbyWidget_C::Set_Safe_Frame(double Scale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BrightLobbyWidget_C", "Set Safe Frame");

	Params::UBrightLobbyWidget_C_Set_Safe_Frame_Params Parms{};

	Parms.Scale = Scale;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BrightLobbyWidget.BrightLobbyWidget_C.UninitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBrightLobbyWidget_C::UninitializeWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BrightLobbyWidget_C", "UninitializeWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BrightLobbyWidget.BrightLobbyWidget_C.OnShown
// (Event, Public, BlueprintEvent)
// Parameters:

void UBrightLobbyWidget_C::OnShown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BrightLobbyWidget_C", "OnShown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BrightLobbyWidget.BrightLobbyWidget_C.HandleSpecialRouteCases
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CurrentRoute                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        LastRoute                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EViewManagerLayer       Layer                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBrightLobbyWidget_C::HandleSpecialRouteCases(class FName CurrentRoute, class FName LastRoute, enum class EViewManagerLayer Layer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BrightLobbyWidget_C", "HandleSpecialRouteCases");

	Params::UBrightLobbyWidget_C_HandleSpecialRouteCases_Params Parms{};

	Parms.CurrentRoute = CurrentRoute;
	Parms.LastRoute = LastRoute;
	Parms.Layer = Layer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BrightLobbyWidget.BrightLobbyWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct SlateCore_Geometry          MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBrightLobbyWidget_C::Tick(const struct SlateCore_Geometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BrightLobbyWidget_C", "Tick");

	Params::UBrightLobbyWidget_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BrightLobbyWidget.BrightLobbyWidget_C.HandleViewStateChangeStarted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CurrentRoute                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        NextRoute                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EViewManagerLayer       Layer                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBrightLobbyWidget_C::HandleViewStateChangeStarted(class FName CurrentRoute, class FName NextRoute, enum class EViewManagerLayer Layer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BrightLobbyWidget_C", "HandleViewStateChangeStarted");

	Params::UBrightLobbyWidget_C_HandleViewStateChangeStarted_Params Parms{};

	Parms.CurrentRoute = CurrentRoute;
	Parms.NextRoute = NextRoute;
	Parms.Layer = Layer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BrightLobbyWidget.BrightLobbyWidget_C.OnHudBindingReady
// (Event, Public, BlueprintEvent)
// Parameters:

void UBrightLobbyWidget_C::OnHudBindingReady()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BrightLobbyWidget_C", "OnHudBindingReady");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BrightLobbyWidget.BrightLobbyWidget_C.ExecuteUbergraph_BrightLobbyWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URHViewManager*              CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_CurrentRoute_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_LastRoute                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EViewManagerLayer       K2Node_CustomEvent_Layer_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct SlateCore_Geometry          K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_CurrentRoute                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NextRoute                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EViewManagerLayer       K2Node_CustomEvent_Layer                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UCanvasPanel*>        K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URHInputManager*             CallFunc_GetInputManager_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URHInputManager*             CallFunc_GetInputManager_ReturnValue_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class URHInputManager*             CallFunc_GetInputManager_ReturnValue_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class URHInputManager*             CallFunc_GetInputManager_ReturnValue_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesDataTableRowExist_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesDataTableRowExist_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBrightLobbyWidget_C::ExecuteUbergraph_BrightLobbyWidget(int32 EntryPoint, class URHViewManager* CallFunc_SpawnObject_ReturnValue, class FName K2Node_CustomEvent_CurrentRoute_1, class FName K2Node_CustomEvent_LastRoute, enum class EViewManagerLayer K2Node_CustomEvent_Layer_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, const struct SlateCore_Geometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class FName K2Node_CustomEvent_CurrentRoute, class FName K2Node_CustomEvent_NextRoute, enum class EViewManagerLayer K2Node_CustomEvent_Layer, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_EqualEqual_NameName_ReturnValue_1, bool CallFunc_EqualEqual_NameName_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, TArray<class UCanvasPanel*>& K2Node_MakeArray_Array, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class ESlateVisibility Temp_byte_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, class URHInputManager* CallFunc_GetInputManager_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, class URHInputManager* CallFunc_GetInputManager_ReturnValue_1, class URHInputManager* CallFunc_GetInputManager_ReturnValue_2, class URHInputManager* CallFunc_GetInputManager_ReturnValue_3, bool CallFunc_DoesDataTableRowExist_ReturnValue, bool CallFunc_DoesDataTableRowExist_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BrightLobbyWidget_C", "ExecuteUbergraph_BrightLobbyWidget");

	Params::UBrightLobbyWidget_C_ExecuteUbergraph_BrightLobbyWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.K2Node_CustomEvent_CurrentRoute_1 = K2Node_CustomEvent_CurrentRoute_1;
	Parms.K2Node_CustomEvent_LastRoute = K2Node_CustomEvent_LastRoute;
	Parms.K2Node_CustomEvent_Layer_1 = K2Node_CustomEvent_Layer_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.K2Node_CustomEvent_CurrentRoute = K2Node_CustomEvent_CurrentRoute;
	Parms.K2Node_CustomEvent_NextRoute = K2Node_CustomEvent_NextRoute;
	Parms.K2Node_CustomEvent_Layer = K2Node_CustomEvent_Layer;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_1 = CallFunc_EqualEqual_NameName_ReturnValue_1;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_2 = CallFunc_EqualEqual_NameName_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetInputManager_ReturnValue = CallFunc_GetInputManager_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetInputManager_ReturnValue_1 = CallFunc_GetInputManager_ReturnValue_1;
	Parms.CallFunc_GetInputManager_ReturnValue_2 = CallFunc_GetInputManager_ReturnValue_2;
	Parms.CallFunc_GetInputManager_ReturnValue_3 = CallFunc_GetInputManager_ReturnValue_3;
	Parms.CallFunc_DoesDataTableRowExist_ReturnValue = CallFunc_DoesDataTableRowExist_ReturnValue;
	Parms.CallFunc_DoesDataTableRowExist_ReturnValue_1 = CallFunc_DoesDataTableRowExist_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BrightLobbyWidget.BrightLobbyWidget_C.BackButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBrightLobbyWidget_C::BackButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BrightLobbyWidget_C", "BackButtonClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


