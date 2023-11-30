#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_SettingsContainer.WBP_SettingsContainer_C
// (None)

class UClass* UWBP_SettingsContainer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_SettingsContainer_C");

	return Clss;
}


// WBP_SettingsContainer_C WBP_SettingsContainer.Default__WBP_SettingsContainer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_SettingsContainer_C* UWBP_SettingsContainer_C::GetDefaultObj()
{
	static class UWBP_SettingsContainer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_SettingsContainer_C*>(UWBP_SettingsContainer_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_SettingsContainer.WBP_SettingsContainer_C.GetPreviewWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class URHWidget*                   PreviewWidget                                                    (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_SettingsContainer_C::GetPreviewWidget(class URHWidget** PreviewWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsContainer_C", "GetPreviewWidget");

	Params::UWBP_SettingsContainer_C_GetPreviewWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (PreviewWidget != nullptr)
		*PreviewWidget = Parms.PreviewWidget;

}


// Function WBP_SettingsContainer.WBP_SettingsContainer_C.Add Setting Widget To Box
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URHSettingsWidget*           Setting_Widget                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_SettingsContainer_C::Add_Setting_Widget_To_Box(class URHSettingsWidget* Setting_Widget, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsContainer_C", "Add Setting Widget To Box");

	Params::UWBP_SettingsContainer_C_Add_Setting_Widget_To_Box_Params Parms{};

	Parms.Setting_Widget = Setting_Widget;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue = CallFunc_AddChildToHorizontalBox_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SettingsContainer.WBP_SettingsContainer_C.OnContainerConfigSet
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_SettingsContainer_C::OnContainerConfigSet()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsContainer_C", "OnContainerConfigSet");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_SettingsContainer.WBP_SettingsContainer_C.AddSettingsWidget
// (Event, Protected, BlueprintEvent)
// Parameters:
// class URHSettingsWidget*           SettingsWidget                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_SettingsContainer_C::AddSettingsWidget(class URHSettingsWidget* SettingsWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsContainer_C", "AddSettingsWidget");

	Params::UWBP_SettingsContainer_C_AddSettingsWidget_Params Parms{};

	Parms.SettingsWidget = SettingsWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SettingsContainer.WBP_SettingsContainer_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct SlateCore_Geometry          MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct SlateCore_PointerEvent      MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_SettingsContainer_C::OnMouseEnter(const struct SlateCore_Geometry& MyGeometry, struct SlateCore_PointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsContainer_C", "OnMouseEnter");

	Params::UWBP_SettingsContainer_C_OnMouseEnter_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SettingsContainer.WBP_SettingsContainer_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct SlateCore_PointerEvent      MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_SettingsContainer_C::OnMouseLeave(struct SlateCore_PointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsContainer_C", "OnMouseLeave");

	Params::UWBP_SettingsContainer_C_OnMouseLeave_Params Parms{};

	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SettingsContainer.WBP_SettingsContainer_C.PlayHoverAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_SettingsContainer_C::PlayHoverAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsContainer_C", "PlayHoverAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_SettingsContainer.WBP_SettingsContainer_C.PlayUnhoverAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_SettingsContainer_C::PlayUnhoverAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsContainer_C", "PlayUnhoverAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_SettingsContainer.WBP_SettingsContainer_C.AddPreviewWidget
// (Event, Protected, BlueprintEvent)
// Parameters:
// class URHSettingsPreview*          PreviewWidget                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_SettingsContainer_C::AddPreviewWidget(class URHSettingsPreview* PreviewWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsContainer_C", "AddPreviewWidget");

	Params::UWBP_SettingsContainer_C_AddPreviewWidget_Params Parms{};

	Parms.PreviewWidget = PreviewWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SettingsContainer.WBP_SettingsContainer_C.ExecuteUbergraph_WBP_SettingsContainer
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetSettingName_ReturnValue                              (ConstParm)
// class URHSettingsWidget*           K2Node_Event_SettingsWidget                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct SlateCore_Geometry          K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// struct SlateCore_PointerEvent      K2Node_Event_MouseEvent_1                                        (ConstParm)
// struct SlateCore_PointerEvent      K2Node_Event_MouseEvent                                          (ConstParm)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class URHSettingsPreview*          K2Node_Event_PreviewWidget                                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_SettingsContainer_C::ExecuteUbergraph_WBP_SettingsContainer(int32 EntryPoint, class FText CallFunc_GetSettingName_ReturnValue, class URHSettingsWidget* K2Node_Event_SettingsWidget, const struct SlateCore_Geometry& K2Node_Event_MyGeometry, const struct SlateCore_PointerEvent& K2Node_Event_MouseEvent_1, const struct SlateCore_PointerEvent& K2Node_Event_MouseEvent, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class URHSettingsPreview* K2Node_Event_PreviewWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsContainer_C", "ExecuteUbergraph_WBP_SettingsContainer");

	Params::UWBP_SettingsContainer_C_ExecuteUbergraph_WBP_SettingsContainer_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetSettingName_ReturnValue = CallFunc_GetSettingName_ReturnValue;
	Parms.K2Node_Event_SettingsWidget = K2Node_Event_SettingsWidget;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_MouseEvent_1 = K2Node_Event_MouseEvent_1;
	Parms.K2Node_Event_MouseEvent = K2Node_Event_MouseEvent;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.K2Node_Event_PreviewWidget = K2Node_Event_PreviewWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SettingsContainer.WBP_SettingsContainer_C.OnAddToPreview__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URHWidget*                   PreviewWidget                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_SettingsContainer_C::OnAddToPreview__DelegateSignature(class URHWidget* PreviewWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsContainer_C", "OnAddToPreview__DelegateSignature");

	Params::UWBP_SettingsContainer_C_OnAddToPreview__DelegateSignature_Params Parms{};

	Parms.PreviewWidget = PreviewWidget;

	UObject::ProcessEvent(Func, &Parms);

}

}


