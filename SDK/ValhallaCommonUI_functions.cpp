#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class ValhallaCommonUI.ValActivatableWidget
// (None)

class UClass* UValActivatableWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ValActivatableWidget");

	return Clss;
}


// ValActivatableWidget ValhallaCommonUI.Default__ValActivatableWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UValActivatableWidget* UValActivatableWidget::GetDefaultObj()
{
	static class UValActivatableWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UValActivatableWidget*>(UValActivatableWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function ValhallaCommonUI.ValActivatableWidget.OnBindingReady
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EBindingType            Type                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UValActivatableWidget::OnBindingReady(enum class EBindingType Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ValActivatableWidget", "OnBindingReady");

	Params::UValActivatableWidget_OnBindingReady_Params Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValhallaCommonUI.ValActivatableWidget.GetHUD
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AValHUD*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AValHUD* UValActivatableWidget::GetHUD()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ValActivatableWidget", "GetHUD");

	Params::UValActivatableWidget_GetHUD_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ValhallaCommonUI.ValActivatableWidget.BindingReady
// (Final, Native, Protected)
// Parameters:
// enum class EBindingType            Type                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UValActivatableWidget::BindingReady(enum class EBindingType Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ValActivatableWidget", "BindingReady");

	Params::UValActivatableWidget_BindingReady_Params Parms{};

	Parms.Type = Type;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ValhallaCommonUI.ValBoundActionButton
// (None)

class UClass* UValBoundActionButton::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ValBoundActionButton");

	return Clss;
}


// ValBoundActionButton ValhallaCommonUI.Default__ValBoundActionButton
// (Public, ClassDefaultObject, ArchetypeObject)

class UValBoundActionButton* UValBoundActionButton::GetDefaultObj()
{
	static class UValBoundActionButton* Default = nullptr;

	if (!Default)
		Default = static_cast<UValBoundActionButton*>(UValBoundActionButton::StaticClass()->DefaultObject);

	return Default;
}


// Class ValhallaCommonUI.ValHUD
// (Actor)

class UClass* AValHUD::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ValHUD");

	return Clss;
}


// ValHUD ValhallaCommonUI.Default__ValHUD
// (Public, ClassDefaultObject, ArchetypeObject)

class AValHUD* AValHUD::GetDefaultObj()
{
	static class AValHUD* Default = nullptr;

	if (!Default)
		Default = static_cast<AValHUD*>(AValHUD::StaticClass()->DefaultObject);

	return Default;
}


// Function ValhallaCommonUI.ValHUD.SetQueued
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AValHUD::SetQueued(bool Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ValHUD", "SetQueued");

	Params::AValHUD_SetQueued_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ValhallaCommonUI.ValHUD.RequestMessage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FText                        Title                                                            (Parm, NativeAccessSpecifierPublic)
// class FText                        Message                                                          (Parm, NativeAccessSpecifierPublic)

void AValHUD::RequestMessage(class FText Title, class FText Message)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ValHUD", "RequestMessage");

	Params::AValHUD_RequestMessage_Params Parms{};

	Parms.Title = Title;
	Parms.Message = Message;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ValhallaCommonUI.ValHUD.PushLayer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        LayerName                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCommonActivatableWidget*    ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCommonActivatableWidget* AValHUD::PushLayer(class FName LayerName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ValHUD", "PushLayer");

	Params::AValHUD_PushLayer_Params Parms{};

	Parms.LayerName = LayerName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ValhallaCommonUI.ValHUD.PopLayer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UCommonActivatableWidget*    Widget                                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AValHUD::PopLayer(class UCommonActivatableWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ValHUD", "PopLayer");

	Params::AValHUD_PopLayer_Params Parms{};

	Parms.Widget = Widget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ValhallaCommonUI.ValHUD.NavigateQuickPlay
// (Final, Native, Protected)
// Parameters:

void AValHUD::NavigateQuickPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ValHUD", "NavigateQuickPlay");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ValhallaCommonUI.ValHUD.IsOfflineMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AValHUD::IsOfflineMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ValHUD", "IsOfflineMode");

	Params::AValHUD_IsOfflineMode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ValhallaCommonUI.ValHUD.IsDemoMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AValHUD::IsDemoMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ValHUD", "IsDemoMode");

	Params::AValHUD_IsDemoMode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ValhallaCommonUI.ValHUD.CancelQueue
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void AValHUD::CancelQueue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ValHUD", "CancelQueue");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ValhallaCommonUI.ValHUD.BindingReady
// (Final, Native, Protected)
// Parameters:
// enum class EBindingType            Type                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AValHUD::BindingReady(enum class EBindingType Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ValHUD", "BindingReady");

	Params::AValHUD_BindingReady_Params Parms{};

	Parms.Type = Type;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ValhallaCommonUI.ValHUDLobby
// (Actor)

class UClass* AValHUDLobby::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ValHUDLobby");

	return Clss;
}


// ValHUDLobby ValhallaCommonUI.Default__ValHUDLobby
// (Public, ClassDefaultObject, ArchetypeObject)

class AValHUDLobby* AValHUDLobby::GetDefaultObj()
{
	static class AValHUDLobby* Default = nullptr;

	if (!Default)
		Default = static_cast<AValHUDLobby*>(AValHUDLobby::StaticClass()->DefaultObject);

	return Default;
}


// Function ValhallaCommonUI.ValHUDLobby.JoinSocialHub
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void AValHUDLobby::JoinSocialHub()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ValHUDLobby", "JoinSocialHub");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class ValhallaCommonUI.ValLayer
// (None)

class UClass* UValLayer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ValLayer");

	return Clss;
}


// ValLayer ValhallaCommonUI.Default__ValLayer
// (Public, ClassDefaultObject, ArchetypeObject)

class UValLayer* UValLayer::GetDefaultObj()
{
	static class UValLayer* Default = nullptr;

	if (!Default)
		Default = static_cast<UValLayer*>(UValLayer::StaticClass()->DefaultObject);

	return Default;
}


// Function ValhallaCommonUI.ValLayer.ShowMe
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UValLayer::ShowMe()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ValLayer", "ShowMe");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ValhallaCommonUI.ValLayer.PushMe
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UValLayer::PushMe()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ValLayer", "PushMe");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ValhallaCommonUI.ValLayer.PopMe
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UValLayer::PopMe()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ValLayer", "PopMe");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ValhallaCommonUI.ValLayer.HideMe
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UValLayer::HideMe()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ValLayer", "HideMe");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class ValhallaCommonUI.ValUILibrary
// (None)

class UClass* UValUILibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ValUILibrary");

	return Clss;
}


// ValUILibrary ValhallaCommonUI.Default__ValUILibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UValUILibrary* UValUILibrary::GetDefaultObj()
{
	static class UValUILibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UValUILibrary*>(UValUILibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function ValhallaCommonUI.ValUILibrary.UpdateBloom
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class UWidget*>             Widgets                                                          (Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// float                              SpreadValue                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              OffsetMultiplier                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UValUILibrary::UpdateBloom(TArray<class UWidget*>& Widgets, float SpreadValue, float OffsetMultiplier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ValUILibrary", "UpdateBloom");

	Params::UValUILibrary_UpdateBloom_Params Parms{};

	Parms.Widgets = Widgets;
	Parms.SpreadValue = SpreadValue;
	Parms.OffsetMultiplier = OffsetMultiplier;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ValhallaCommonUI.ValUILibrary.SetBool
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// bool                               Var                                                              (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UValUILibrary::SetBool(bool& Var, bool Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ValUILibrary", "SetBool");

	Params::UValUILibrary_SetBool_Params Parms{};

	Parms.Var = Var;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ValhallaCommonUI.ValUILibrary.MoveWidgetTo
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UWidget*                     Widget                                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidget*                     CompletedWidget                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector2D        TargetPosition                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TransitionTime                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EEasingFunc             XEasing                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EEasingFunc             YEasing                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Engine_LatentActionInfo     LatentInfo                                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UValUILibrary::MoveWidgetTo(class UWidget* Widget, class UWidget** CompletedWidget, const struct CoreUObject_Vector2D& TargetPosition, float TransitionTime, enum class EEasingFunc XEasing, enum class EEasingFunc YEasing, class UObject* WorldContextObject, const struct Engine_LatentActionInfo& LatentInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ValUILibrary", "MoveWidgetTo");

	Params::UValUILibrary_MoveWidgetTo_Params Parms{};

	Parms.Widget = Widget;
	Parms.TargetPosition = TargetPosition;
	Parms.TransitionTime = TransitionTime;
	Parms.XEasing = XEasing;
	Parms.YEasing = YEasing;
	Parms.WorldContextObject = WorldContextObject;
	Parms.LatentInfo = LatentInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (CompletedWidget != nullptr)
		*CompletedWidget = Parms.CompletedWidget;

}


// Function ValhallaCommonUI.ValUILibrary.GetPlayer
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AValPlayerController*        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AValPlayerController* UValUILibrary::GetPlayer(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ValUILibrary", "GetPlayer");

	Params::UValUILibrary_GetPlayer_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ValhallaCommonUI.ValUILibrary.GetMappedInputIcon
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        InputName                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ECommonInputType        InputType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        GamepadName                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct SlateCore_SlateBrush        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct SlateCore_SlateBrush UValUILibrary::GetMappedInputIcon(class FName& InputName, enum class ECommonInputType InputType, class FName& GamepadName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ValUILibrary", "GetMappedInputIcon");

	Params::UValUILibrary_GetMappedInputIcon_Params Parms{};

	Parms.InputName = InputName;
	Parms.InputType = InputType;
	Parms.GamepadName = GamepadName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ValhallaCommonUI.ValUILibrary.GetInputKey
// (Final, Native, Static, Public, HasOutParams)
// Parameters:
// class FName                        InputName                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct InputCore_Key>       OutInput                                                         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UValUILibrary::GetInputKey(class FName& InputName, TArray<struct InputCore_Key>* OutInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ValUILibrary", "GetInputKey");

	Params::UValUILibrary_GetInputKey_Params Parms{};

	Parms.InputName = InputName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutInput != nullptr)
		*OutInput = std::move(Parms.OutInput);

}


// Function ValhallaCommonUI.ValUILibrary.GetIconForInputKey
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct InputCore_Key               Key                                                              (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ECommonInputType        InputType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        GamepadName                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct SlateCore_SlateBrush        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct SlateCore_SlateBrush UValUILibrary::GetIconForInputKey(struct InputCore_Key& Key, enum class ECommonInputType InputType, class FName& GamepadName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ValUILibrary", "GetIconForInputKey");

	Params::UValUILibrary_GetIconForInputKey_Params Parms{};

	Parms.Key = Key;
	Parms.InputType = InputType;
	Parms.GamepadName = GamepadName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ValhallaCommonUI.ValUILibrary.GetGameState
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AValGameState*               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AValGameState* UValUILibrary::GetGameState(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ValUILibrary", "GetGameState");

	Params::UValUILibrary_GetGameState_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ValhallaCommonUI.ValUILibrary.GetGameInstance
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UValGameInstance*            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UValGameInstance* UValUILibrary::GetGameInstance(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ValUILibrary", "GetGameInstance");

	Params::UValUILibrary_GetGameInstance_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ValhallaCommonUI.ValUILibrary.GetCharacter
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AValCharacter*               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AValCharacter* UValUILibrary::GetCharacter(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ValUILibrary", "GetCharacter");

	Params::UValUILibrary_GetCharacter_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ValhallaCommonUI.ValUILibrary.GetBackendServiceInterface
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UBackendService*             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UBackendService* UValUILibrary::GetBackendServiceInterface(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ValUILibrary", "GetBackendServiceInterface");

	Params::UValUILibrary_GetBackendServiceInterface_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ValhallaCommonUI.ValWidget
// (None)

class UClass* UValWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ValWidget");

	return Clss;
}


// ValWidget ValhallaCommonUI.Default__ValWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UValWidget* UValWidget::GetDefaultObj()
{
	static class UValWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UValWidget*>(UValWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function ValhallaCommonUI.ValWidget.OnBindingReady
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EBindingType            Type                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UValWidget::OnBindingReady(enum class EBindingType Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ValWidget", "OnBindingReady");

	Params::UValWidget_OnBindingReady_Params Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValhallaCommonUI.ValWidget.GetHUD
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AValHUD*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AValHUD* UValWidget::GetHUD()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ValWidget", "GetHUD");

	Params::UValWidget_GetHUD_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ValhallaCommonUI.ValWidget.BindingReady
// (Final, Native, Protected)
// Parameters:
// enum class EBindingType            Type                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UValWidget::BindingReady(enum class EBindingType Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ValWidget", "BindingReady");

	Params::UValWidget_BindingReady_Params Parms{};

	Parms.Type = Type;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


