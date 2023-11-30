#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass InteractWidgetInterface.InteractWidgetInterface_C
// (None)

class UClass* IInteractWidgetInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InteractWidgetInterface_C");

	return Clss;
}


// InteractWidgetInterface_C InteractWidgetInterface.Default__InteractWidgetInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IInteractWidgetInterface_C* IInteractWidgetInterface_C::GetDefaultObj()
{
	static class IInteractWidgetInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IInteractWidgetInterface_C*>(IInteractWidgetInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function InteractWidgetInterface.InteractWidgetInterface_C.GetWidgetBlockInteractReason
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AValCharacter*               Initiator                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EInteractionFailureType Reason                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IInteractWidgetInterface_C::GetWidgetBlockInteractReason(class AValCharacter* Initiator, enum class EInteractionFailureType* Reason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InteractWidgetInterface_C", "GetWidgetBlockInteractReason");

	Params::IInteractWidgetInterface_C_GetWidgetBlockInteractReason_Params Parms{};

	Parms.Initiator = Initiator;

	UObject::ProcessEvent(Func, &Parms);

	if (Reason != nullptr)
		*Reason = Parms.Reason;

}


// Function InteractWidgetInterface.InteractWidgetInterface_C.OnInstantActivation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*                 Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IInteractWidgetInterface_C::OnInstantActivation(class AController* Controller)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InteractWidgetInterface_C", "OnInstantActivation");

	Params::IInteractWidgetInterface_C_OnInstantActivation_Params Parms{};

	Parms.Controller = Controller;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InteractWidgetInterface.InteractWidgetInterface_C.OnLiftSummoned
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              LiftLevel                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IInteractWidgetInterface_C::OnLiftSummoned(int32 LiftLevel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InteractWidgetInterface_C", "OnLiftSummoned");

	Params::IInteractWidgetInterface_C_OnLiftSummoned_Params Parms{};

	Parms.LiftLevel = LiftLevel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InteractWidgetInterface.InteractWidgetInterface_C.OnLiftActivated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IInteractWidgetInterface_C::OnLiftActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InteractWidgetInterface_C", "OnLiftActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InteractWidgetInterface.InteractWidgetInterface_C.GetTotalChannelTime
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             ChannelTime                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IInteractWidgetInterface_C::GetTotalChannelTime(double* ChannelTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InteractWidgetInterface_C", "GetTotalChannelTime");

	Params::IInteractWidgetInterface_C_GetTotalChannelTime_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ChannelTime != nullptr)
		*ChannelTime = Parms.ChannelTime;

}


// Function InteractWidgetInterface.InteractWidgetInterface_C.OnChannellingToggled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsChanneling                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_WidgetInteraction_C*     WidgetInteractionActor                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IInteractWidgetInterface_C::OnChannellingToggled(bool IsChanneling, class AController* Controller, class ABP_WidgetInteraction_C* WidgetInteractionActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InteractWidgetInterface_C", "OnChannellingToggled");

	Params::IInteractWidgetInterface_C_OnChannellingToggled_Params Parms{};

	Parms.IsChanneling = IsChanneling;
	Parms.Controller = Controller;
	Parms.WidgetInteractionActor = WidgetInteractionActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InteractWidgetInterface.InteractWidgetInterface_C.AddChildInteractionActor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_WidgetInteraction_C*     ChildToAdd                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IInteractWidgetInterface_C::AddChildInteractionActor(class ABP_WidgetInteraction_C* ChildToAdd)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InteractWidgetInterface_C", "AddChildInteractionActor");

	Params::IInteractWidgetInterface_C_AddChildInteractionActor_Params Parms{};

	Parms.ChildToAdd = ChildToAdd;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InteractWidgetInterface.InteractWidgetInterface_C.OnKeycodeEntered
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                      EnteredKeycode                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class AActor*                      InteractingActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IInteractWidgetInterface_C::OnKeycodeEntered(TArray<int32>& EnteredKeycode, class AActor* InteractingActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InteractWidgetInterface_C", "OnKeycodeEntered");

	Params::IInteractWidgetInterface_C_OnKeycodeEntered_Params Parms{};

	Parms.EnteredKeycode = EnteredKeycode;
	Parms.InteractingActor = InteractingActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InteractWidgetInterface.InteractWidgetInterface_C.GetKeycode
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                      Keycode                                                          (Parm, OutParm)

void IInteractWidgetInterface_C::GetKeycode(TArray<int32>* Keycode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InteractWidgetInterface_C", "GetKeycode");

	Params::IInteractWidgetInterface_C_GetKeycode_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Keycode != nullptr)
		*Keycode = std::move(Parms.Keycode);

}


// Function InteractWidgetInterface.InteractWidgetInterface_C.GetInteractWidgetType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EInteractWidgetType     Type                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IInteractWidgetInterface_C::GetInteractWidgetType(enum class EInteractWidgetType* Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InteractWidgetInterface_C", "GetInteractWidgetType");

	Params::IInteractWidgetInterface_C_GetInteractWidgetType_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Type != nullptr)
		*Type = Parms.Type;

}

}


