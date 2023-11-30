#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_WidgetInteraction.BP_WidgetInteraction_C
// (Actor)

class UClass* ABP_WidgetInteraction_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_WidgetInteraction_C");

	return Clss;
}


// BP_WidgetInteraction_C BP_WidgetInteraction.Default__BP_WidgetInteraction_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_WidgetInteraction_C* ABP_WidgetInteraction_C::GetDefaultObj()
{
	static class ABP_WidgetInteraction_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_WidgetInteraction_C*>(ABP_WidgetInteraction_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_WidgetInteraction.BP_WidgetInteraction_C.PlayWidgetSuccess
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 CallFunc_GetWidget_ReturnValue                                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_InteractWidget_C*        K2Node_DynamicCast_AsUI_Interact_Widget                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WidgetInteraction_C::PlayWidgetSuccess(class UUserWidget* CallFunc_GetWidget_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UUI_InteractWidget_C* K2Node_DynamicCast_AsUI_Interact_Widget, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WidgetInteraction_C", "PlayWidgetSuccess");

	Params::ABP_WidgetInteraction_C_PlayWidgetSuccess_Params Parms{};

	Parms.CallFunc_GetWidget_ReturnValue = CallFunc_GetWidget_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsUI_Interact_Widget = K2Node_DynamicCast_AsUI_Interact_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WidgetInteraction.BP_WidgetInteraction_C.OnPlayerUnhoveredWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AValCharacter*               UnhoveredCharacter                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_WidgetInteraction_C::OnPlayerUnhoveredWidget(class AValCharacter* UnhoveredCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WidgetInteraction_C", "OnPlayerUnhoveredWidget");

	Params::ABP_WidgetInteraction_C_OnPlayerUnhoveredWidget_Params Parms{};

	Parms.UnhoveredCharacter = UnhoveredCharacter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WidgetInteraction.BP_WidgetInteraction_C.UpdateHackableTerminalButtonUseCount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ButtonIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NewUseCount                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WidgetInteraction_C::UpdateHackableTerminalButtonUseCount(int32 ButtonIndex, int32 NewUseCount, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WidgetInteraction_C", "UpdateHackableTerminalButtonUseCount");

	Params::ABP_WidgetInteraction_C_UpdateHackableTerminalButtonUseCount_Params Parms{};

	Parms.ButtonIndex = ButtonIndex;
	Parms.NewUseCount = NewUseCount;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WidgetInteraction.BP_WidgetInteraction_C.InitializeHackableTerminal
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct HackableButtonOption_HackableButtonOption>HackableButtonOptions                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WidgetInteraction_C::InitializeHackableTerminal(TArray<struct HackableButtonOption_HackableButtonOption>& HackableButtonOptions, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WidgetInteraction_C", "InitializeHackableTerminal");

	Params::ABP_WidgetInteraction_C_InitializeHackableTerminal_Params Parms{};

	Parms.HackableButtonOptions = HackableButtonOptions;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WidgetInteraction.BP_WidgetInteraction_C.OnHackableOptionSelectedFromWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EHackableTerminalButtonTypeButtonType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ButtonIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WidgetInteraction_C::OnHackableOptionSelectedFromWidget(enum class EHackableTerminalButtonType ButtonType, int32 ButtonIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WidgetInteraction_C", "OnHackableOptionSelectedFromWidget");

	Params::ABP_WidgetInteraction_C_OnHackableOptionSelectedFromWidget_Params Parms{};

	Parms.ButtonType = ButtonType;
	Parms.ButtonIndex = ButtonIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WidgetInteraction.BP_WidgetInteraction_C.OnBotAlarm
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AValPlayerController*        CallFunc_GetLocalClientValPlayerController_ReturnValue           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_ValPlayerController_C*   K2Node_DynamicCast_AsBP_Val_Player_Controller                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WidgetInteraction_C::OnBotAlarm(class AValPlayerController* CallFunc_GetLocalClientValPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ABP_ValPlayerController_C* K2Node_DynamicCast_AsBP_Val_Player_Controller, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WidgetInteraction_C", "OnBotAlarm");

	Params::ABP_WidgetInteraction_C_OnBotAlarm_Params Parms{};

	Parms.CallFunc_GetLocalClientValPlayerController_ReturnValue = CallFunc_GetLocalClientValPlayerController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Val_Player_Controller = K2Node_DynamicCast_AsBP_Val_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WidgetInteraction.BP_WidgetInteraction_C.SetWidgetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        InText                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class UUserWidget*                 CallFunc_GetWidget_ReturnValue                                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_InteractWidget_C*        K2Node_DynamicCast_AsUI_Interact_Widget                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WidgetInteraction_C::SetWidgetText(class FText InText, class UUserWidget* CallFunc_GetWidget_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UUI_InteractWidget_C* K2Node_DynamicCast_AsUI_Interact_Widget, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WidgetInteraction_C", "SetWidgetText");

	Params::ABP_WidgetInteraction_C_SetWidgetText_Params Parms{};

	Parms.InText = InText;
	Parms.CallFunc_GetWidget_ReturnValue = CallFunc_GetWidget_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsUI_Interact_Widget = K2Node_DynamicCast_AsUI_Interact_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WidgetInteraction.BP_WidgetInteraction_C.OnRep_IsActivatable
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WidgetInteraction_C::OnRep_IsActivatable(bool CallFunc_IsDedicatedServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WidgetInteraction_C", "OnRep_IsActivatable");

	Params::ABP_WidgetInteraction_C_OnRep_IsActivatable_Params Parms{};

	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WidgetInteraction.BP_WidgetInteraction_C.EndChanneling
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_WidgetInteraction_C::EndChanneling()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WidgetInteraction_C", "EndChanneling");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_WidgetInteraction.BP_WidgetInteraction_C.StartChanneling
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_WidgetInteraction_C::StartChanneling()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WidgetInteraction_C", "StartChanneling");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_WidgetInteraction.BP_WidgetInteraction_C.OnWidgetHovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_WidgetInteraction_C::OnWidgetHovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WidgetInteraction_C", "OnWidgetHovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_WidgetInteraction.BP_WidgetInteraction_C.OnRep_IsAuthoritativelyInteracting
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WidgetInteraction_C::OnRep_IsAuthoritativelyInteracting(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WidgetInteraction_C", "OnRep_IsAuthoritativelyInteracting");

	Params::ABP_WidgetInteraction_C_OnRep_IsAuthoritativelyInteracting_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WidgetInteraction.BP_WidgetInteraction_C.On Widget Unhovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_WidgetInteraction_C::On_Widget_Unhovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WidgetInteraction_C", "On Widget Unhovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_WidgetInteraction.BP_WidgetInteraction_C.OnParentInteractionActorUpdated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IInteractWidgetInterface_C>K2Node_DynamicCast_AsInteract_Widget_Interface                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EInteractWidgetType     CallFunc_GetInteractWidgetType_Type                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WidgetInteraction_C::OnParentInteractionActorUpdated(bool CallFunc_EqualEqual_ByteByte_ReturnValue, TScriptInterface<class IInteractWidgetInterface_C> K2Node_DynamicCast_AsInteract_Widget_Interface, bool K2Node_DynamicCast_bSuccess, enum class EInteractWidgetType CallFunc_GetInteractWidgetType_Type, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WidgetInteraction_C", "OnParentInteractionActorUpdated");

	Params::ABP_WidgetInteraction_C_OnParentInteractionActorUpdated_Params Parms{};

	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_DynamicCast_AsInteract_Widget_Interface = K2Node_DynamicCast_AsInteract_Widget_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetInteractWidgetType_Type = CallFunc_GetInteractWidgetType_Type;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WidgetInteraction.BP_WidgetInteraction_C.OnRep_ParentInteractionActor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IInteractWidgetInterface_C>K2Node_DynamicCast_AsInteract_Widget_Interface                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WidgetInteraction_C::OnRep_ParentInteractionActor(bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IInteractWidgetInterface_C> K2Node_DynamicCast_AsInteract_Widget_Interface, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WidgetInteraction_C", "OnRep_ParentInteractionActor");

	Params::ABP_WidgetInteraction_C_OnRep_ParentInteractionActor_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsInteract_Widget_Interface = K2Node_DynamicCast_AsInteract_Widget_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WidgetInteraction.BP_WidgetInteraction_C.Enable Disable Interaction SFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Is_Channeling                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WidgetInteraction_C::Enable_Disable_Interaction_SFX(bool Is_Channeling)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WidgetInteraction_C", "Enable Disable Interaction SFX");

	Params::ABP_WidgetInteraction_C_Enable_Disable_Interaction_SFX_Params Parms{};

	Parms.Is_Channeling = Is_Channeling;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WidgetInteraction.BP_WidgetInteraction_C.OnLiftSummoned
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AValPlayerController*        CallFunc_GetLocalClientValPlayerController_ReturnValue           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_ValPlayerController_C*   K2Node_DynamicCast_AsBP_Val_Player_Controller                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WidgetInteraction_C::OnLiftSummoned(class AValPlayerController* CallFunc_GetLocalClientValPlayerController_ReturnValue, class ABP_ValPlayerController_C* K2Node_DynamicCast_AsBP_Val_Player_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WidgetInteraction_C", "OnLiftSummoned");

	Params::ABP_WidgetInteraction_C_OnLiftSummoned_Params Parms{};

	Parms.CallFunc_GetLocalClientValPlayerController_ReturnValue = CallFunc_GetLocalClientValPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Val_Player_Controller = K2Node_DynamicCast_AsBP_Val_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WidgetInteraction.BP_WidgetInteraction_C.OnLiftActivated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AValPlayerController*        CallFunc_GetLocalClientValPlayerController_ReturnValue           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_ValPlayerController_C*   K2Node_DynamicCast_AsBP_Val_Player_Controller                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WidgetInteraction_C::OnLiftActivated(class AValPlayerController* CallFunc_GetLocalClientValPlayerController_ReturnValue, class ABP_ValPlayerController_C* K2Node_DynamicCast_AsBP_Val_Player_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WidgetInteraction_C", "OnLiftActivated");

	Params::ABP_WidgetInteraction_C_OnLiftActivated_Params Parms{};

	Parms.CallFunc_GetLocalClientValPlayerController_ReturnValue = CallFunc_GetLocalClientValPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Val_Player_Controller = K2Node_DynamicCast_AsBP_Val_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WidgetInteraction.BP_WidgetInteraction_C.OnChannelingUpdatedFromAuthority
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsAuthoritativelyChanneling                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WidgetInteraction_C::OnChannelingUpdatedFromAuthority(bool IsAuthoritativelyChanneling, bool CallFunc_IsDedicatedServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WidgetInteraction_C", "OnChannelingUpdatedFromAuthority");

	Params::ABP_WidgetInteraction_C_OnChannelingUpdatedFromAuthority_Params Parms{};

	Parms.IsAuthoritativelyChanneling = IsAuthoritativelyChanneling;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WidgetInteraction.BP_WidgetInteraction_C.GetTotalChannelTime
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             Total_Channel_Time                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IInteractWidgetInterface_C>K2Node_DynamicCast_AsInteract_Widget_Interface                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetTotalChannelTime_ChannelTime                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_DestructibleDoor_C*      K2Node_DynamicCast_AsBP_Destructible_Door                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WidgetInteraction_C::GetTotalChannelTime(double* Total_Channel_Time, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IInteractWidgetInterface_C> K2Node_DynamicCast_AsInteract_Widget_Interface, bool K2Node_DynamicCast_bSuccess, double CallFunc_GetTotalChannelTime_ChannelTime, class ABP_DestructibleDoor_C* K2Node_DynamicCast_AsBP_Destructible_Door, bool K2Node_DynamicCast_bSuccess_1, double CallFunc_Multiply_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WidgetInteraction_C", "GetTotalChannelTime");

	Params::ABP_WidgetInteraction_C_GetTotalChannelTime_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsInteract_Widget_Interface = K2Node_DynamicCast_AsInteract_Widget_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetTotalChannelTime_ChannelTime = CallFunc_GetTotalChannelTime_ChannelTime;
	Parms.K2Node_DynamicCast_AsBP_Destructible_Door = K2Node_DynamicCast_AsBP_Destructible_Door;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Total_Channel_Time != nullptr)
		*Total_Channel_Time = Parms.Total_Channel_Time;

}


// Function BP_WidgetInteraction.BP_WidgetInteraction_C.OnChannelPctUpdated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             NewChannelPct                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WidgetInteraction_C::OnChannelPctUpdated(double NewChannelPct, bool CallFunc_IsDedicatedServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WidgetInteraction_C", "OnChannelPctUpdated");

	Params::ABP_WidgetInteraction_C_OnChannelPctUpdated_Params Parms{};

	Parms.NewChannelPct = NewChannelPct;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WidgetInteraction.BP_WidgetInteraction_C.OnChannelingToggled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsChanneling                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_InteractWidget_C*        InteractWidget                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AValPlayerController*        PlayerController                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_ValPlayerController_C*   K2Node_DynamicCast_AsBP_Val_Player_Controller                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WidgetInteraction_C::OnChannelingToggled(bool IsChanneling, class UUI_InteractWidget_C* InteractWidget, class AValPlayerController* PlayerController, class ABP_ValPlayerController_C* K2Node_DynamicCast_AsBP_Val_Player_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WidgetInteraction_C", "OnChannelingToggled");

	Params::ABP_WidgetInteraction_C_OnChannelingToggled_Params Parms{};

	Parms.IsChanneling = IsChanneling;
	Parms.InteractWidget = InteractWidget;
	Parms.PlayerController = PlayerController;
	Parms.K2Node_DynamicCast_AsBP_Val_Player_Controller = K2Node_DynamicCast_AsBP_Val_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WidgetInteraction.BP_WidgetInteraction_C.Set Is Opened
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewIsOpened                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            (None)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WidgetInteraction_C::Set_Is_Opened(bool NewIsOpened, class FText Temp_text_Variable, class FText Temp_text_Variable_1, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, class FText K2Node_Select_Default, bool CallFunc_NotEqual_BoolBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WidgetInteraction_C", "Set Is Opened");

	Params::ABP_WidgetInteraction_C_Set_Is_Opened_Params Parms{};

	Parms.NewIsOpened = NewIsOpened;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WidgetInteraction.BP_WidgetInteraction_C.CacheParentInteractionActor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class USceneComponent*>     CallFunc_GetParentComponents_Parents                             (ReferenceParm, ContainsInstancedReference)
// class USceneComponent*             CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UChildActorComponent*        K2Node_DynamicCast_AsChild_Actor_Component                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetAttachParentActor_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesImplementInterface_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesImplementInterface_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WidgetInteraction_C::CacheParentInteractionActor(bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, TArray<class USceneComponent*>& CallFunc_GetParentComponents_Parents, class USceneComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UChildActorComponent* K2Node_DynamicCast_AsChild_Actor_Component, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetAttachParentActor_ReturnValue, bool CallFunc_DoesImplementInterface_ReturnValue, bool CallFunc_DoesImplementInterface_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WidgetInteraction_C", "CacheParentInteractionActor");

	Params::ABP_WidgetInteraction_C_CacheParentInteractionActor_Params Parms{};

	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetParentComponents_Parents = CallFunc_GetParentComponents_Parents;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsChild_Actor_Component = K2Node_DynamicCast_AsChild_Actor_Component;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetAttachParentActor_ReturnValue = CallFunc_GetAttachParentActor_ReturnValue;
	Parms.CallFunc_DoesImplementInterface_ReturnValue = CallFunc_DoesImplementInterface_ReturnValue;
	Parms.CallFunc_DoesImplementInterface_ReturnValue_1 = CallFunc_DoesImplementInterface_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WidgetInteraction.BP_WidgetInteraction_C.OnKeycodeEntered
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                      EnteredKeycode                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UUI_InteractWidget_C*        InteractWidget                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AValPlayerController*        CallFunc_GetLocalClientValPlayerController_ReturnValue           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_ValPlayerController_C*   K2Node_DynamicCast_AsBP_Val_Player_Controller                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WidgetInteraction_C::OnKeycodeEntered(TArray<int32>& EnteredKeycode, class UUI_InteractWidget_C* InteractWidget, class AValPlayerController* CallFunc_GetLocalClientValPlayerController_ReturnValue, class ABP_ValPlayerController_C* K2Node_DynamicCast_AsBP_Val_Player_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WidgetInteraction_C", "OnKeycodeEntered");

	Params::ABP_WidgetInteraction_C_OnKeycodeEntered_Params Parms{};

	Parms.EnteredKeycode = EnteredKeycode;
	Parms.InteractWidget = InteractWidget;
	Parms.CallFunc_GetLocalClientValPlayerController_ReturnValue = CallFunc_GetLocalClientValPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Val_Player_Controller = K2Node_DynamicCast_AsBP_Val_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WidgetInteraction.BP_WidgetInteraction_C.BindWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetWidget_ReturnValue                                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UUI_InteractWidget_C*        K2Node_DynamicCast_AsUI_Interact_Widget                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WidgetInteraction_C::BindWidget(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class UUserWidget* CallFunc_GetWidget_ReturnValue, class UUI_InteractWidget_C* K2Node_DynamicCast_AsUI_Interact_Widget, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WidgetInteraction_C", "BindWidget");

	Params::ABP_WidgetInteraction_C_BindWidget_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.CallFunc_GetWidget_ReturnValue = CallFunc_GetWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsUI_Interact_Widget = K2Node_DynamicCast_AsUI_Interact_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WidgetInteraction.BP_WidgetInteraction_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_WidgetInteraction_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WidgetInteraction_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_WidgetInteraction.BP_WidgetInteraction_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WidgetInteraction_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WidgetInteraction_C", "ReceiveTick");

	Params::ABP_WidgetInteraction_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WidgetInteraction.BP_WidgetInteraction_C.ExecuteUbergraph_BP_WidgetInteraction
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETickMode               Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETickMode               Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IInteractWidgetInterface_C>K2Node_DynamicCast_AsInteract_Widget_Interface                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_HackableTerminal_C*      K2Node_DynamicCast_AsBP_Hackable_Terminal                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetViewTarget_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetSquaredDistanceTo_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETickMode               K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Less_DoubleDouble_A_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WidgetInteraction_C::ExecuteUbergraph_BP_WidgetInteraction(int32 EntryPoint, enum class ETickMode Temp_byte_Variable, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue_1, enum class ETickMode Temp_byte_Variable_1, TScriptInterface<class IInteractWidgetInterface_C> K2Node_DynamicCast_AsInteract_Widget_Interface, bool K2Node_DynamicCast_bSuccess, class ABP_HackableTerminal_C* K2Node_DynamicCast_AsBP_Hackable_Terminal, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, float K2Node_Event_DeltaSeconds, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AActor* CallFunc_GetViewTarget_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, float CallFunc_GetSquaredDistanceTo_ReturnValue, bool Temp_bool_Variable, bool CallFunc_Less_DoubleDouble_ReturnValue, enum class ETickMode K2Node_Select_Default, double CallFunc_Less_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WidgetInteraction_C", "ExecuteUbergraph_BP_WidgetInteraction");

	Params::ABP_WidgetInteraction_C_ExecuteUbergraph_BP_WidgetInteraction_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue_1 = CallFunc_IsDedicatedServer_ReturnValue_1;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_DynamicCast_AsInteract_Widget_Interface = K2Node_DynamicCast_AsInteract_Widget_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsBP_Hackable_Terminal = K2Node_DynamicCast_AsBP_Hackable_Terminal;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetViewTarget_ReturnValue = CallFunc_GetViewTarget_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetSquaredDistanceTo_ReturnValue = CallFunc_GetSquaredDistanceTo_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Less_DoubleDouble_A_ImplicitCast = CallFunc_Less_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WidgetInteraction.BP_WidgetInteraction_C.OnPlayerUnhoveredWidgetComponent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AValCharacter*               UnhoveredCharacter                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_WidgetInteraction_C::OnPlayerUnhoveredWidgetComponent__DelegateSignature(class AValCharacter* UnhoveredCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WidgetInteraction_C", "OnPlayerUnhoveredWidgetComponent__DelegateSignature");

	Params::ABP_WidgetInteraction_C_OnPlayerUnhoveredWidgetComponent__DelegateSignature_Params Parms{};

	Parms.UnhoveredCharacter = UnhoveredCharacter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WidgetInteraction.BP_WidgetInteraction_C.OnHackableOptionSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EHackableTerminalButtonTypeButtonType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ButtonIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WidgetInteraction_C::OnHackableOptionSelected__DelegateSignature(enum class EHackableTerminalButtonType ButtonType, int32 ButtonIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WidgetInteraction_C", "OnHackableOptionSelected__DelegateSignature");

	Params::ABP_WidgetInteraction_C_OnHackableOptionSelected__DelegateSignature_Params Parms{};

	Parms.ButtonType = ButtonType;
	Parms.ButtonIndex = ButtonIndex;

	UObject::ProcessEvent(Func, &Parms);

}

}


