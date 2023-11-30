#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class ValhallaUI.UIWidget
// (None)

class UClass* UUIWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UIWidget");

	return Clss;
}


// UIWidget ValhallaUI.Default__UIWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UUIWidget* UUIWidget::GetDefaultObj()
{
	static class UUIWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UUIWidget*>(UUIWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function ValhallaUI.UIWidget.StartNewJiggle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUIJiggle*                   NewJiggle                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCanvasPanel*                CanvasToJiggle                                                   (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUIWidget::StartNewJiggle(class UUIJiggle* NewJiggle, class UCanvasPanel* CanvasToJiggle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIWidget", "StartNewJiggle");

	Params::UUIWidget_StartNewJiggle_Params Parms{};

	Parms.NewJiggle = NewJiggle;
	Parms.CanvasToJiggle = CanvasToJiggle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ValhallaUI.UIWidget.RequestShow
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// bool                               Visible                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUIWidget::RequestShow(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIWidget", "RequestShow");

	Params::UUIWidget_RequestShow_Params Parms{};

	Parms.Visible = Visible;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ValhallaUI.UIWidget.OnShown
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// bool                               Visible                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUIWidget::OnShown(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIWidget", "OnShown");

	Params::UUIWidget_OnShown_Params Parms{};

	Parms.Visible = Visible;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ValhallaUI.UIWidget.OnBindingReady
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EBindingType            Type                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUIWidget::OnBindingReady(enum class EBindingType Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIWidget", "OnBindingReady");

	Params::UUIWidget_OnBindingReady_Params Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValhallaUI.UIWidget.GetHUD
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AUIHUD*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AUIHUD* UUIWidget::GetHUD()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIWidget", "GetHUD");

	Params::UUIWidget_GetHUD_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ValhallaUI.UIWidget.BindingReady
// (Final, Native, Protected)
// Parameters:
// enum class EBindingType            Type                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUIWidget::BindingReady(enum class EBindingType Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIWidget", "BindingReady");

	Params::UUIWidget_BindingReady_Params Parms{};

	Parms.Type = Type;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ValhallaUI.UIWidget.Animate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EUIAnimation            Type                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Time                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Delay                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Quadratic                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUIWidget::Animate(enum class EUIAnimation Type, float Value, float Time, float Delay, bool Quadratic)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIWidget", "Animate");

	Params::UUIWidget_Animate_Params Parms{};

	Parms.Type = Type;
	Parms.Value = Value;
	Parms.Time = Time;
	Parms.Delay = Delay;
	Parms.Quadratic = Quadratic;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ValhallaUI.UIFPS
// (None)

class UClass* UUIFPS::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UIFPS");

	return Clss;
}


// UIFPS ValhallaUI.Default__UIFPS
// (Public, ClassDefaultObject, ArchetypeObject)

class UUIFPS* UUIFPS::GetDefaultObj()
{
	static class UUIFPS* Default = nullptr;

	if (!Default)
		Default = static_cast<UUIFPS*>(UUIFPS::StaticClass()->DefaultObject);

	return Default;
}


// Function ValhallaUI.UIFPS.GetFPS
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UUIFPS::GetFPS()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIFPS", "GetFPS");

	Params::UUIFPS_GetFPS_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ValhallaUI.UIGameMinimapMarker
// (None)

class UClass* UUIGameMinimapMarker::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UIGameMinimapMarker");

	return Clss;
}


// UIGameMinimapMarker ValhallaUI.Default__UIGameMinimapMarker
// (Public, ClassDefaultObject, ArchetypeObject)

class UUIGameMinimapMarker* UUIGameMinimapMarker::GetDefaultObj()
{
	static class UUIGameMinimapMarker* Default = nullptr;

	if (!Default)
		Default = static_cast<UUIGameMinimapMarker*>(UUIGameMinimapMarker::StaticClass()->DefaultObject);

	return Default;
}


// Function ValhallaUI.UIGameMinimapMarker.UpdateLocation
// (Final, Native, Protected, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector          ObjectiveLocation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUIGameMinimapMarker::UpdateLocation(class UObject* WorldContextObject, const struct CoreUObject_Vector& ObjectiveLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIGameMinimapMarker", "UpdateLocation");

	Params::UUIGameMinimapMarker_UpdateLocation_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ObjectiveLocation = ObjectiveLocation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ValhallaUI.UIGameMinimapMarker.UpdateActorLocation
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      ObjectiveActor                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUIGameMinimapMarker::UpdateActorLocation(class UObject* WorldContextObject, class AActor* ObjectiveActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIGameMinimapMarker", "UpdateActorLocation");

	Params::UUIGameMinimapMarker_UpdateActorLocation_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ObjectiveActor = ObjectiveActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ValhallaUI.UIGameMinimapMarker.UpdateActive
// (Event, Protected, BlueprintEvent)
// Parameters:

void UUIGameMinimapMarker::UpdateActive()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIGameMinimapMarker", "UpdateActive");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ValhallaUI.UIGameMinimapMarker.IsActive
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUIGameMinimapMarker::IsActive()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIGameMinimapMarker", "IsActive");

	Params::UUIGameMinimapMarker_IsActive_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ValhallaUI.UIGameMinimapPlayer
// (None)

class UClass* UUIGameMinimapPlayer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UIGameMinimapPlayer");

	return Clss;
}


// UIGameMinimapPlayer ValhallaUI.Default__UIGameMinimapPlayer
// (Public, ClassDefaultObject, ArchetypeObject)

class UUIGameMinimapPlayer* UUIGameMinimapPlayer::GetDefaultObj()
{
	static class UUIGameMinimapPlayer* Default = nullptr;

	if (!Default)
		Default = static_cast<UUIGameMinimapPlayer*>(UUIGameMinimapPlayer::StaticClass()->DefaultObject);

	return Default;
}


// Function ValhallaUI.UIGameMinimapPlayer.UpdatePlayerLocation
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector          RepLocation                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUIGameMinimapPlayer::UpdatePlayerLocation(class UObject* WorldContextObject, struct CoreUObject_Vector& RepLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIGameMinimapPlayer", "UpdatePlayerLocation");

	Params::UUIGameMinimapPlayer_UpdatePlayerLocation_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.RepLocation = RepLocation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ValhallaUI.UIGameMinimapPlayer.ReturnWidgetToFreeList
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UUIGameMinimapPlayer::ReturnWidgetToFreeList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIGameMinimapPlayer", "ReturnWidgetToFreeList");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ValhallaUI.UIGameMinimapPlayer.GetWidgetRotationAngle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               bRevealCheck                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UUIGameMinimapPlayer::GetWidgetRotationAngle(bool bRevealCheck)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIGameMinimapPlayer", "GetWidgetRotationAngle");

	Params::UUIGameMinimapPlayer_GetWidgetRotationAngle_Params Parms{};

	Parms.bRevealCheck = bRevealCheck;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ValhallaUI.UIGameMinimapPlayer.GetPlayerLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               bRevealCheck                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct CoreUObject_Vector UUIGameMinimapPlayer::GetPlayerLocation(bool bRevealCheck)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIGameMinimapPlayer", "GetPlayerLocation");

	Params::UUIGameMinimapPlayer_GetPlayerLocation_Params Parms{};

	Parms.bRevealCheck = bRevealCheck;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ValhallaUI.UIGameOverlay
// (None)

class UClass* UUIGameOverlay::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UIGameOverlay");

	return Clss;
}


// UIGameOverlay ValhallaUI.Default__UIGameOverlay
// (Public, ClassDefaultObject, ArchetypeObject)

class UUIGameOverlay* UUIGameOverlay::GetDefaultObj()
{
	static class UUIGameOverlay* Default = nullptr;

	if (!Default)
		Default = static_cast<UUIGameOverlay*>(UUIGameOverlay::StaticClass()->DefaultObject);

	return Default;
}


// Function ValhallaUI.UIGameOverlay.UpdatePosition_Vector
// (Final, Native, Protected, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector          ObjectiveLocation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUIGameOverlay::UpdatePosition_Vector(class UObject* WorldContextObject, const struct CoreUObject_Vector& ObjectiveLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIGameOverlay", "UpdatePosition_Vector");

	Params::UUIGameOverlay_UpdatePosition_Vector_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ObjectiveLocation = ObjectiveLocation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ValhallaUI.UIGameOverlay.UpdatePosition
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      ObjectiveActor                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUIGameOverlay::UpdatePosition(class UObject* WorldContextObject, class AActor* ObjectiveActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIGameOverlay", "UpdatePosition");

	Params::UUIGameOverlay_UpdatePosition_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ObjectiveActor = ObjectiveActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ValhallaUI.UIGameOverlay.UpdateDistance_Vector
// (Final, Native, Protected, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector          ObjectiveLocation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTextBlock*                  TextBlock                                                        (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUIGameOverlay::UpdateDistance_Vector(class UObject* WorldContextObject, const struct CoreUObject_Vector& ObjectiveLocation, class UTextBlock* TextBlock)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIGameOverlay", "UpdateDistance_Vector");

	Params::UUIGameOverlay_UpdateDistance_Vector_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ObjectiveLocation = ObjectiveLocation;
	Parms.TextBlock = TextBlock;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ValhallaUI.UIGameOverlay.UpdateDistance
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      ObjectiveActor                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTextBlock*                  TextBlock                                                        (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUIGameOverlay::UpdateDistance(class UObject* WorldContextObject, class AActor* ObjectiveActor, class UTextBlock* TextBlock)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIGameOverlay", "UpdateDistance");

	Params::UUIGameOverlay_UpdateDistance_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ObjectiveActor = ObjectiveActor;
	Parms.TextBlock = TextBlock;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ValhallaUI.UIGameOverlay.ShowOverlay
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bShouldShow                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUIGameOverlay::ShowOverlay(bool bShouldShow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIGameOverlay", "ShowOverlay");

	Params::UUIGameOverlay_ShowOverlay_Params Parms{};

	Parms.bShouldShow = bShouldShow;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ValhallaUI.UIGameOverlay.OnViewportResized
// (Final, Native, Public)
// Parameters:

void UUIGameOverlay::OnViewportResized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIGameOverlay", "OnViewportResized");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ValhallaUI.UIGameOverlay.OnOffScreenChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsNowOffScreen                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUIGameOverlay::OnOffScreenChanged(bool bIsNowOffScreen)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIGameOverlay", "OnOffScreenChanged");

	Params::UUIGameOverlay_OnOffScreenChanged_Params Parms{};

	Parms.bIsNowOffScreen = bIsNowOffScreen;

	UObject::ProcessEvent(Func, &Parms);

}


// Class ValhallaUI.UIGameRadar
// (None)

class UClass* UUIGameRadar::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UIGameRadar");

	return Clss;
}


// UIGameRadar ValhallaUI.Default__UIGameRadar
// (Public, ClassDefaultObject, ArchetypeObject)

class UUIGameRadar* UUIGameRadar::GetDefaultObj()
{
	static class UUIGameRadar* Default = nullptr;

	if (!Default)
		Default = static_cast<UUIGameRadar*>(UUIGameRadar::StaticClass()->DefaultObject);

	return Default;
}


// Function ValhallaUI.UIGameRadar.UpdateRadarPlayers
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TMap<class APlayerState*, class UUIGameMinimapPlayer*>Players                                                          (Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UUIGameRadar::UpdateRadarPlayers(class UObject* WorldContextObject, TMap<class APlayerState*, class UUIGameMinimapPlayer*>& Players)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIGameRadar", "UpdateRadarPlayers");

	Params::UUIGameRadar_UpdateRadarPlayers_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Players = Players;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ValhallaUI.UIGameRadar.Get2DLocation
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct CoreUObject_Vector          Location                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector2D        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct CoreUObject_Vector2D UUIGameRadar::Get2DLocation(struct CoreUObject_Vector& Location)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIGameRadar", "Get2DLocation");

	Params::UUIGameRadar_Get2DLocation_Params Parms{};

	Parms.Location = Location;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ValhallaUI.UIHUD
// (Actor)

class UClass* AUIHUD::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UIHUD");

	return Clss;
}


// UIHUD ValhallaUI.Default__UIHUD
// (Public, ClassDefaultObject, ArchetypeObject)

class AUIHUD* AUIHUD::GetDefaultObj()
{
	static class AUIHUD* Default = nullptr;

	if (!Default)
		Default = static_cast<AUIHUD*>(AUIHUD::StaticClass()->DefaultObject);

	return Default;
}


// Function ValhallaUI.UIHUD.UpdateConstrainedViewportSize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AUIHUD::UpdateConstrainedViewportSize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIHUD", "UpdateConstrainedViewportSize");

	Params::AUIHUD_UpdateConstrainedViewportSize_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ValhallaUI.UIHUD.SimulateKeyInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct InputCore_Key               Key                                                              (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AUIHUD::SimulateKeyInput(const struct InputCore_Key& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIHUD", "SimulateKeyInput");

	Params::AUIHUD_SimulateKeyInput_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ValhallaUI.UIHUD.ShowScene
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        SceneName                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AUIHUD::ShowScene(class FName SceneName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIHUD", "ShowScene");

	Params::AUIHUD_ShowScene_Params Parms{};

	Parms.SceneName = SceneName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ValhallaUI.UIHUD.SetQueued
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AUIHUD::SetQueued(bool Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIHUD", "SetQueued");

	Params::AUIHUD_SetQueued_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ValhallaUI.UIHUD.SetOptionsChanged
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bHasOptionsChanged                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bDifferentFromDefaults                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AUIHUD::SetOptionsChanged(bool bHasOptionsChanged, bool bDifferentFromDefaults)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIHUD", "SetOptionsChanged");

	Params::AUIHUD_SetOptionsChanged_Params Parms{};

	Parms.bHasOptionsChanged = bHasOptionsChanged;
	Parms.bDifferentFromDefaults = bDifferentFromDefaults;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ValhallaUI.UIHUD.RevertOptions
// (Final, Native, Protected)
// Parameters:

void AUIHUD::RevertOptions()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIHUD", "RevertOptions");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ValhallaUI.UIHUD.ReturnToLobby
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void AUIHUD::ReturnToLobby()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIHUD", "ReturnToLobby");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ValhallaUI.UIHUD.RestoreDefaultOptions
// (Final, Native, Protected)
// Parameters:

void AUIHUD::RestoreDefaultOptions()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIHUD", "RestoreDefaultOptions");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ValhallaUI.UIHUD.RequestMessage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FText                        Title                                                            (Parm, NativeAccessSpecifierPublic)
// class FText                        Message                                                          (Parm, NativeAccessSpecifierPublic)

void AUIHUD::RequestMessage(class FText Title, class FText Message)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIHUD", "RequestMessage");

	Params::AUIHUD_RequestMessage_Params Parms{};

	Parms.Title = Title;
	Parms.Message = Message;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ValhallaUI.UIHUD.PushScene
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        SceneName                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AUIHUD::PushScene(class FName SceneName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIHUD", "PushScene");

	Params::AUIHUD_PushScene_Params Parms{};

	Parms.SceneName = SceneName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ValhallaUI.UIHUD.PopScene
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        SceneName                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AUIHUD::PopScene(class FName SceneName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIHUD", "PopScene");

	Params::AUIHUD_PopScene_Params Parms{};

	Parms.SceneName = SceneName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ValhallaUI.UIHUD.OpenSocialOverlay
// (Final, Native, Protected)
// Parameters:

void AUIHUD::OpenSocialOverlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIHUD", "OpenSocialOverlay");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ValhallaUI.UIHUD.OnScenesReady
// (Event, Public, BlueprintEvent)
// Parameters:

void AUIHUD::OnScenesReady()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIHUD", "OnScenesReady");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ValhallaUI.UIHUD.OnMapLoadComplete
// (Final, Native, Protected)
// Parameters:

void AUIHUD::OnMapLoadComplete()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIHUD", "OnMapLoadComplete");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ValhallaUI.UIHUD.NavigateOverlay
// (Final, Native, Protected)
// Parameters:

void AUIHUD::NavigateOverlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIHUD", "NavigateOverlay");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ValhallaUI.UIHUD.NavigateMenu
// (Final, Native, Protected)
// Parameters:

void AUIHUD::NavigateMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIHUD", "NavigateMenu");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ValhallaUI.UIHUD.NavigateInfo
// (Final, Native, Protected)
// Parameters:

void AUIHUD::NavigateInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIHUD", "NavigateInfo");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ValhallaUI.UIHUD.NavigateDetails
// (Final, Native, Protected)
// Parameters:

void AUIHUD::NavigateDetails()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIHUD", "NavigateDetails");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ValhallaUI.UIHUD.NavigateBack
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void AUIHUD::NavigateBack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIHUD", "NavigateBack");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ValhallaUI.UIHUD.IsSceneInStack
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        SceneName                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AUIHUD::IsSceneInStack(class FName SceneName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIHUD", "IsSceneInStack");

	Params::AUIHUD_IsSceneInStack_Params Parms{};

	Parms.SceneName = SceneName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ValhallaUI.UIHUD.IsOfflineMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AUIHUD::IsOfflineMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIHUD", "IsOfflineMode");

	Params::AUIHUD_IsOfflineMode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ValhallaUI.UIHUD.IsDemoMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AUIHUD::IsDemoMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIHUD", "IsDemoMode");

	Params::AUIHUD_IsDemoMode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ValhallaUI.UIHUD.HideScene
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        SceneName                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AUIHUD::HideScene(class FName SceneName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIHUD", "HideScene");

	Params::AUIHUD_HideScene_Params Parms{};

	Parms.SceneName = SceneName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ValhallaUI.UIHUD.GetQueued
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AUIHUD::GetQueued()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIHUD", "GetQueued");

	Params::AUIHUD_GetQueued_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ValhallaUI.UIHUD.GetPromptData
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct ValhallaUI_PromptData>Data                                                             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void AUIHUD::GetPromptData(TArray<struct ValhallaUI_PromptData>* Data)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIHUD", "GetPromptData");

	Params::AUIHUD_GetPromptData_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Data != nullptr)
		*Data = std::move(Parms.Data);

}


// Function ValhallaUI.UIHUD.GetConstrainedViewportSize
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct CoreUObject_Vector2D        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct CoreUObject_Vector2D AUIHUD::GetConstrainedViewportSize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIHUD", "GetConstrainedViewportSize");

	Params::AUIHUD_GetConstrainedViewportSize_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ValhallaUI.UIHUD.FindSceneByName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        SceneName                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UUIScene*                    ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UUIScene* AUIHUD::FindSceneByName(class FName SceneName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIHUD", "FindSceneByName");

	Params::AUIHUD_FindSceneByName_Params Parms{};

	Parms.SceneName = SceneName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ValhallaUI.UIHUD.CloseDeathCrate
// (Final, Native, Protected)
// Parameters:

void AUIHUD::CloseDeathCrate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIHUD", "CloseDeathCrate");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ValhallaUI.UIHUD.ChangeLoadout
// (Final, Native, Protected)
// Parameters:

void AUIHUD::ChangeLoadout()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIHUD", "ChangeLoadout");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ValhallaUI.UIHUD.CancelQueue
// (Final, Native, Protected)
// Parameters:

void AUIHUD::CancelQueue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIHUD", "CancelQueue");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ValhallaUI.UIHUD.BindingReady
// (Final, Native, Protected)
// Parameters:
// enum class EBindingType            Type                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AUIHUD::BindingReady(enum class EBindingType Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIHUD", "BindingReady");

	Params::AUIHUD_BindingReady_Params Parms{};

	Parms.Type = Type;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ValhallaUI.UIHUD.ApplyOptions
// (Final, Native, Protected)
// Parameters:

void AUIHUD::ApplyOptions()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIHUD", "ApplyOptions");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class ValhallaUI.UIHUDCity
// (Actor)

class UClass* AUIHUDCity::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UIHUDCity");

	return Clss;
}


// UIHUDCity ValhallaUI.Default__UIHUDCity
// (Public, ClassDefaultObject, ArchetypeObject)

class AUIHUDCity* AUIHUDCity::GetDefaultObj()
{
	static class AUIHUDCity* Default = nullptr;

	if (!Default)
		Default = static_cast<AUIHUDCity*>(AUIHUDCity::StaticClass()->DefaultObject);

	return Default;
}


// Function ValhallaUI.UIHUDCity.OnLobbyBeaconQueuePopped
// (Final, Native, Protected)
// Parameters:
// bool                               bAccepted                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AUIHUDCity::OnLobbyBeaconQueuePopped(bool bAccepted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIHUDCity", "OnLobbyBeaconQueuePopped");

	Params::AUIHUDCity_OnLobbyBeaconQueuePopped_Params Parms{};

	Parms.bAccepted = bAccepted;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ValhallaUI.UIHUDCity.KickIt
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:

void AUIHUDCity::KickIt()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIHUDCity", "KickIt");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ValhallaUI.UIHUDCity.JoinLobbyBeacon
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void AUIHUDCity::JoinLobbyBeacon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIHUDCity", "JoinLobbyBeacon");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ValhallaUI.UIHUDCity.GetLobbyBeacon
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AValLobbyBeaconClient*       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AValLobbyBeaconClient* AUIHUDCity::GetLobbyBeacon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIHUDCity", "GetLobbyBeacon");

	Params::AUIHUDCity_GetLobbyBeacon_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ValhallaUI.UIHUDCity.CancelLobbyBeaconQueue
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void AUIHUDCity::CancelLobbyBeaconQueue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIHUDCity", "CancelLobbyBeaconQueue");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class ValhallaUI.UIHUDLobby
// (Actor)

class UClass* AUIHUDLobby::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UIHUDLobby");

	return Clss;
}


// UIHUDLobby ValhallaUI.Default__UIHUDLobby
// (Public, ClassDefaultObject, ArchetypeObject)

class AUIHUDLobby* AUIHUDLobby::GetDefaultObj()
{
	static class AUIHUDLobby* Default = nullptr;

	if (!Default)
		Default = static_cast<AUIHUDLobby*>(AUIHUDLobby::StaticClass()->DefaultObject);

	return Default;
}


// Function ValhallaUI.UIHUDLobby.JoinSocialHub
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void AUIHUDLobby::JoinSocialHub()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIHUDLobby", "JoinSocialHub");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class ValhallaUI.UIMinimap
// (None)

class UClass* UUIMinimap::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UIMinimap");

	return Clss;
}


// UIMinimap ValhallaUI.Default__UIMinimap
// (Public, ClassDefaultObject, ArchetypeObject)

class UUIMinimap* UUIMinimap::GetDefaultObj()
{
	static class UUIMinimap* Default = nullptr;

	if (!Default)
		Default = static_cast<UUIMinimap*>(UUIMinimap::StaticClass()->DefaultObject);

	return Default;
}


// Function ValhallaUI.UIMinimap.UpdateMapPlayers
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TMap<class APlayerState*, class UUIGameMinimapPlayer*>Players                                                          (Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector2D        MapTranslation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUIMinimap::UpdateMapPlayers(class UObject* WorldContextObject, TMap<class APlayerState*, class UUIGameMinimapPlayer*>& Players, const struct CoreUObject_Vector2D& MapTranslation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIMinimap", "UpdateMapPlayers");

	Params::UUIMinimap_UpdateMapPlayers_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Players = Players;
	Parms.MapTranslation = MapTranslation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ValhallaUI.UIMinimap.ReleaseEnemyBlipWidget
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UUIWidget*                   WidgetToRelease                                                  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUIMinimap::ReleaseEnemyBlipWidget(class UUIWidget* WidgetToRelease)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIMinimap", "ReleaseEnemyBlipWidget");

	Params::UUIMinimap_ReleaseEnemyBlipWidget_Params Parms{};

	Parms.WidgetToRelease = WidgetToRelease;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ValhallaUI.UIMinimap.OnMinimapLoaded
// (Event, Public, BlueprintEvent)
// Parameters:

void UUIMinimap::OnMinimapLoaded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIMinimap", "OnMinimapLoaded");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ValhallaUI.UIMinimap.GetOrCreateEnemyBlipWidget
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UUIWidget*                   ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UUIWidget* UUIMinimap::GetOrCreateEnemyBlipWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIMinimap", "GetOrCreateEnemyBlipWidget");

	Params::UUIMinimap_GetOrCreateEnemyBlipWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ValhallaUI.UIMinimap.GetMinimapTexture
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UTexture2D*                  Texture                                                          (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUIMinimap::GetMinimapTexture(class UTexture2D** Texture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIMinimap", "GetMinimapTexture");

	Params::UUIMinimap_GetMinimapTexture_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Texture != nullptr)
		*Texture = Parms.Texture;

}


// Function ValhallaUI.UIMinimap.GetFreeCybridWidget
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UUIGameMinimapPlayer*        ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UUIGameMinimapPlayer* UUIMinimap::GetFreeCybridWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIMinimap", "GetFreeCybridWidget");

	Params::UUIMinimap_GetFreeCybridWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ValhallaUI.UIMinimap.DebugShowAIOnMinimap
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIMinimap::DebugShowAIOnMinimap()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIMinimap", "DebugShowAIOnMinimap");



	UObject::ProcessEvent(Func, nullptr);

}


// Class ValhallaUI.UINetworkIssueItem
// (None)

class UClass* UUINetworkIssueItem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UINetworkIssueItem");

	return Clss;
}


// UINetworkIssueItem ValhallaUI.Default__UINetworkIssueItem
// (Public, ClassDefaultObject, ArchetypeObject)

class UUINetworkIssueItem* UUINetworkIssueItem::GetDefaultObj()
{
	static class UUINetworkIssueItem* Default = nullptr;

	if (!Default)
		Default = static_cast<UUINetworkIssueItem*>(UUINetworkIssueItem::StaticClass()->DefaultObject);

	return Default;
}


// Function ValhallaUI.UINetworkIssueItem.OnUpdateSeverity
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsSevere                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUINetworkIssueItem::OnUpdateSeverity(bool bIsSevere)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UINetworkIssueItem", "OnUpdateSeverity");

	Params::UUINetworkIssueItem_OnUpdateSeverity_Params Parms{};

	Parms.bIsSevere = bIsSevere;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValhallaUI.UINetworkIssueItem.DisplayIssueManual
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bShow                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSevere                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUINetworkIssueItem::DisplayIssueManual(bool bShow, bool bSevere)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UINetworkIssueItem", "DisplayIssueManual");

	Params::UUINetworkIssueItem_DisplayIssueManual_Params Parms{};

	Parms.bShow = bShow;
	Parms.bSevere = bSevere;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ValhallaUI.UINetworkIssueItem.DisplayIssue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bSevere                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUINetworkIssueItem::DisplayIssue(bool bSevere)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UINetworkIssueItem", "DisplayIssue");

	Params::UUINetworkIssueItem_DisplayIssue_Params Parms{};

	Parms.bSevere = bSevere;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ValhallaUI.UIScene
// (None)

class UClass* UUIScene::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UIScene");

	return Clss;
}


// UIScene ValhallaUI.Default__UIScene
// (Public, ClassDefaultObject, ArchetypeObject)

class UUIScene* UUIScene::GetDefaultObj()
{
	static class UUIScene* Default = nullptr;

	if (!Default)
		Default = static_cast<UUIScene*>(UUIScene::StaticClass()->DefaultObject);

	return Default;
}


// Function ValhallaUI.UIScene.ShowMe
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UUIScene::ShowMe()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIScene", "ShowMe");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ValhallaUI.UIScene.RequestPrompts
// (Native, Event, Public, BlueprintEvent)
// Parameters:

void UUIScene::RequestPrompts()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIScene", "RequestPrompts");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ValhallaUI.UIScene.RequestBack
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUIScene::RequestBack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIScene", "RequestBack");

	Params::UUIScene_RequestBack_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ValhallaUI.UIScene.RegisterPrompts
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct ValhallaUI_PromptData>Data                                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UUIScene::RegisterPrompts(TArray<struct ValhallaUI_PromptData>& Data)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIScene", "RegisterPrompts");

	Params::UUIScene_RegisterPrompts_Params Parms{};

	Parms.Data = Data;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ValhallaUI.UIScene.PushMe
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UUIScene::PushMe()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIScene", "PushMe");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ValhallaUI.UIScene.PopMe
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UUIScene::PopMe()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIScene", "PopMe");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ValhallaUI.UIScene.IsInStack
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUIScene::IsInStack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIScene", "IsInStack");

	Params::UUIScene_IsInStack_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ValhallaUI.UIScene.HideMe
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UUIScene::HideMe()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIScene", "HideMe");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ValhallaUI.UIScene.GetScenePath
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UUIScene::GetScenePath()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIScene", "GetScenePath");

	Params::UUIScene_GetScenePath_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ValhallaUI.UIScene_Demo
// (None)

class UClass* UUIScene_Demo::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UIScene_Demo");

	return Clss;
}


// UIScene_Demo ValhallaUI.Default__UIScene_Demo
// (Public, ClassDefaultObject, ArchetypeObject)

class UUIScene_Demo* UUIScene_Demo::GetDefaultObj()
{
	static class UUIScene_Demo* Default = nullptr;

	if (!Default)
		Default = static_cast<UUIScene_Demo*>(UUIScene_Demo::StaticClass()->DefaultObject);

	return Default;
}


// Class ValhallaUI.UIValColorConfigData
// (None)

class UClass* UUIValColorConfigData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UIValColorConfigData");

	return Clss;
}


// UIValColorConfigData ValhallaUI.Default__UIValColorConfigData
// (Public, ClassDefaultObject, ArchetypeObject)

class UUIValColorConfigData* UUIValColorConfigData::GetDefaultObj()
{
	static class UUIValColorConfigData* Default = nullptr;

	if (!Default)
		Default = static_cast<UUIValColorConfigData*>(UUIValColorConfigData::StaticClass()->DefaultObject);

	return Default;
}


// Function ValhallaUI.UIValColorConfigData.GetColorConfigFromId
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        ID                                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UUIValColorConfigData*       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UUIValColorConfigData* UUIValColorConfigData::GetColorConfigFromId(class FName& ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIValColorConfigData", "GetColorConfigFromId");

	Params::UUIValColorConfigData_GetColorConfigFromId_Params Parms{};

	Parms.ID = ID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ValhallaUI.UIValPingDataAsset
// (None)

class UClass* UUIValPingDataAsset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UIValPingDataAsset");

	return Clss;
}


// UIValPingDataAsset ValhallaUI.Default__UIValPingDataAsset
// (Public, ClassDefaultObject, ArchetypeObject)

class UUIValPingDataAsset* UUIValPingDataAsset::GetDefaultObj()
{
	static class UUIValPingDataAsset* Default = nullptr;

	if (!Default)
		Default = static_cast<UUIValPingDataAsset*>(UUIValPingDataAsset::StaticClass()->DefaultObject);

	return Default;
}


// Function ValhallaUI.UIValPingDataAsset.GetPingUIDataFromPingType
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UUIValPingDataAsset*         PingData                                                         (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EValPingType            PingType                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct ValhallaUI_ValPingUIData    OutPingData                                                      (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUIValPingDataAsset::GetPingUIDataFromPingType(class UUIValPingDataAsset* PingData, enum class EValPingType& PingType, struct ValhallaUI_ValPingUIData* OutPingData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIValPingDataAsset", "GetPingUIDataFromPingType");

	Params::UUIValPingDataAsset_GetPingUIDataFromPingType_Params Parms{};

	Parms.PingData = PingData;
	Parms.PingType = PingType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutPingData != nullptr)
		*OutPingData = std::move(Parms.OutPingData);

	return Parms.ReturnValue;

}


// Function ValhallaUI.UIValPingDataAsset.AssignPingData
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUIValPingDataAsset*         PingData                                                         (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AValPing*                    Ping                                                             (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UImage*                      Icon                                                             (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UImage*>              ColorsToSet                                                      (Parm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// TArray<class UTextBlock*>          TextColorsToSet                                                  (Parm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// class UTextBlock*                  PingText                                                         (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUIValPingDataAsset::AssignPingData(class UUIValPingDataAsset* PingData, class AValPing* Ping, class UImage* Icon, const TArray<class UImage*>& ColorsToSet, const TArray<class UTextBlock*>& TextColorsToSet, class UTextBlock* PingText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIValPingDataAsset", "AssignPingData");

	Params::UUIValPingDataAsset_AssignPingData_Params Parms{};

	Parms.PingData = PingData;
	Parms.Ping = Ping;
	Parms.Icon = Icon;
	Parms.ColorsToSet = ColorsToSet;
	Parms.TextColorsToSet = TextColorsToSet;
	Parms.PingText = PingText;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ValhallaUI.UIValPingDataAsset.AssignInteractTypeData
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUIValPingDataAsset*         PingData                                                         (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TScriptInterface<class IValContextPingActor>ContextActor                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UImage*                      Background                                                       (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UImage*                      Icon                                                             (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTextBlock*                  TitleText                                                        (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTextBlock*                  DescriptionText                                                  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUIValPingDataAsset::AssignInteractTypeData(class UUIValPingDataAsset* PingData, TScriptInterface<class IValContextPingActor> ContextActor, class UImage* Background, class UImage* Icon, class UTextBlock* TitleText, class UTextBlock* DescriptionText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIValPingDataAsset", "AssignInteractTypeData");

	Params::UUIValPingDataAsset_AssignInteractTypeData_Params Parms{};

	Parms.PingData = PingData;
	Parms.ContextActor = ContextActor;
	Parms.Background = Background;
	Parms.Icon = Icon;
	Parms.TitleText = TitleText;
	Parms.DescriptionText = DescriptionText;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ValhallaUI.ValErrorDisplayViewRedirecter
// (None)

class UClass* UValErrorDisplayViewRedirecter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ValErrorDisplayViewRedirecter");

	return Clss;
}


// ValErrorDisplayViewRedirecter ValhallaUI.Default__ValErrorDisplayViewRedirecter
// (Public, ClassDefaultObject, ArchetypeObject)

class UValErrorDisplayViewRedirecter* UValErrorDisplayViewRedirecter::GetDefaultObj()
{
	static class UValErrorDisplayViewRedirecter* Default = nullptr;

	if (!Default)
		Default = static_cast<UValErrorDisplayViewRedirecter*>(UValErrorDisplayViewRedirecter::StaticClass()->DefaultObject);

	return Default;
}


// Class ValhallaUI.ValErrorDisplay
// (None)

class UClass* UValErrorDisplay::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ValErrorDisplay");

	return Clss;
}


// ValErrorDisplay ValhallaUI.Default__ValErrorDisplay
// (Public, ClassDefaultObject, ArchetypeObject)

class UValErrorDisplay* UValErrorDisplay::GetDefaultObj()
{
	static class UValErrorDisplay* Default = nullptr;

	if (!Default)
		Default = static_cast<UValErrorDisplay*>(UValErrorDisplay::StaticClass()->DefaultObject);

	return Default;
}


// Function ValhallaUI.ValErrorDisplay.GetKickErrorCode
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FText                        OutErrorCode                                                     (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UValErrorDisplay::GetKickErrorCode(class FText* OutErrorCode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ValErrorDisplay", "GetKickErrorCode");

	Params::UValErrorDisplay_GetKickErrorCode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutErrorCode != nullptr)
		*OutErrorCode = Parms.OutErrorCode;

	return Parms.ReturnValue;

}


// Function ValhallaUI.ValErrorDisplay.GetDisconnectErrorCode
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FText                        OutErrorCode                                                     (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UValErrorDisplay::GetDisconnectErrorCode(class FText* OutErrorCode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ValErrorDisplay", "GetDisconnectErrorCode");

	Params::UValErrorDisplay_GetDisconnectErrorCode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutErrorCode != nullptr)
		*OutErrorCode = Parms.OutErrorCode;

	return Parms.ReturnValue;

}


// Class ValhallaUI.ValHUDStateTracker
// (None)

class UClass* UValHUDStateTracker::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ValHUDStateTracker");

	return Clss;
}


// ValHUDStateTracker ValhallaUI.Default__ValHUDStateTracker
// (Public, ClassDefaultObject, ArchetypeObject)

class UValHUDStateTracker* UValHUDStateTracker::GetDefaultObj()
{
	static class UValHUDStateTracker* Default = nullptr;

	if (!Default)
		Default = static_cast<UValHUDStateTracker*>(UValHUDStateTracker::StaticClass()->DefaultObject);

	return Default;
}


// Function ValhallaUI.ValHUDStateTracker.PollMatchPhase
// (Final, Native, Protected)
// Parameters:

void UValHUDStateTracker::PollMatchPhase()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ValHUDStateTracker", "PollMatchPhase");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ValhallaUI.ValHUDStateTracker.HandleUpdateMatchPhase
// (Final, Native, Protected)
// Parameters:
// struct Valhalla_GameplayPhaseInfo  GameplayPhaseInfo                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UValHUDStateTracker::HandleUpdateMatchPhase(const struct Valhalla_GameplayPhaseInfo& GameplayPhaseInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ValHUDStateTracker", "HandleUpdateMatchPhase");

	Params::UValHUDStateTracker_HandleUpdateMatchPhase_Params Parms{};

	Parms.GameplayPhaseInfo = GameplayPhaseInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ValhallaUI.ValHUDStateTracker.HandlePlayerStateReady
// (Final, Native, Protected)
// Parameters:
// class AValPlayerStateBase*         PlayerState                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UValHUDStateTracker::HandlePlayerStateReady(class AValPlayerStateBase* PlayerState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ValHUDStateTracker", "HandlePlayerStateReady");

	Params::UValHUDStateTracker_HandlePlayerStateReady_Params Parms{};

	Parms.PlayerState = PlayerState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ValhallaUI.ValHUDStateTracker.HandlePlayerClientReady
// (Final, Native, Protected)
// Parameters:
// bool                               bIsClientReady                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UValHUDStateTracker::HandlePlayerClientReady(bool bIsClientReady)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ValHUDStateTracker", "HandlePlayerClientReady");

	Params::UValHUDStateTracker_HandlePlayerClientReady_Params Parms{};

	Parms.bIsClientReady = bIsClientReady;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ValhallaUI.ValHUDStateTracker.HandleOnTeamChangeEvent
// (Final, Native, Protected)
// Parameters:
// int32                              OldTeam                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NewTeam                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UValHUDStateTracker::HandleOnTeamChangeEvent(int32 OldTeam, int32 NewTeam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ValHUDStateTracker", "HandleOnTeamChangeEvent");

	Params::UValHUDStateTracker_HandleOnTeamChangeEvent_Params Parms{};

	Parms.OldTeam = OldTeam;
	Parms.NewTeam = NewTeam;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ValhallaUI.ValQueueForRemoteLobbyViewRedirecter
// (None)

class UClass* UValQueueForRemoteLobbyViewRedirecter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ValQueueForRemoteLobbyViewRedirecter");

	return Clss;
}


// ValQueueForRemoteLobbyViewRedirecter ValhallaUI.Default__ValQueueForRemoteLobbyViewRedirecter
// (Public, ClassDefaultObject, ArchetypeObject)

class UValQueueForRemoteLobbyViewRedirecter* UValQueueForRemoteLobbyViewRedirecter::GetDefaultObj()
{
	static class UValQueueForRemoteLobbyViewRedirecter* Default = nullptr;

	if (!Default)
		Default = static_cast<UValQueueForRemoteLobbyViewRedirecter*>(UValQueueForRemoteLobbyViewRedirecter::StaticClass()->DefaultObject);

	return Default;
}


// Class ValhallaUI.ValQueueForRemoteLobby
// (None)

class UClass* UValQueueForRemoteLobby::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ValQueueForRemoteLobby");

	return Clss;
}


// ValQueueForRemoteLobby ValhallaUI.Default__ValQueueForRemoteLobby
// (Public, ClassDefaultObject, ArchetypeObject)

class UValQueueForRemoteLobby* UValQueueForRemoteLobby::GetDefaultObj()
{
	static class UValQueueForRemoteLobby* Default = nullptr;

	if (!Default)
		Default = static_cast<UValQueueForRemoteLobby*>(UValQueueForRemoteLobby::StaticClass()->DefaultObject);

	return Default;
}


// Function ValhallaUI.ValQueueForRemoteLobby.OnSessionRetryTimer
// (Final, Native, Private)
// Parameters:

void UValQueueForRemoteLobby::OnSessionRetryTimer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ValQueueForRemoteLobby", "OnSessionRetryTimer");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ValhallaUI.ValQueueForRemoteLobby.OnRemoteLobbyStateChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EQueueForRemoteLobbyStateState                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UValQueueForRemoteLobby::OnRemoteLobbyStateChanged(enum class EQueueForRemoteLobbyState State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ValQueueForRemoteLobby", "OnRemoteLobbyStateChanged");

	Params::UValQueueForRemoteLobby_OnRemoteLobbyStateChanged_Params Parms{};

	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValhallaUI.ValQueueForRemoteLobby.OnGameSessionsLeaveTimeout
// (Final, Native, Private)
// Parameters:

void UValQueueForRemoteLobby::OnGameSessionsLeaveTimeout()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ValQueueForRemoteLobby", "OnGameSessionsLeaveTimeout");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class ValhallaUI.ValRHUIGameMinimapMarker
// (None)

class UClass* UValRHUIGameMinimapMarker::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ValRHUIGameMinimapMarker");

	return Clss;
}


// ValRHUIGameMinimapMarker ValhallaUI.Default__ValRHUIGameMinimapMarker
// (Public, ClassDefaultObject, ArchetypeObject)

class UValRHUIGameMinimapMarker* UValRHUIGameMinimapMarker::GetDefaultObj()
{
	static class UValRHUIGameMinimapMarker* Default = nullptr;

	if (!Default)
		Default = static_cast<UValRHUIGameMinimapMarker*>(UValRHUIGameMinimapMarker::StaticClass()->DefaultObject);

	return Default;
}


// Function ValhallaUI.ValRHUIGameMinimapMarker.UpdateLocation
// (Final, Native, Protected, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector          ObjectiveLocation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UValRHUIGameMinimapMarker::UpdateLocation(class UObject* WorldContextObject, const struct CoreUObject_Vector& ObjectiveLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ValRHUIGameMinimapMarker", "UpdateLocation");

	Params::UValRHUIGameMinimapMarker_UpdateLocation_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ObjectiveLocation = ObjectiveLocation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ValhallaUI.ValRHUIGameMinimapMarker.UpdateActorLocation
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      ObjectiveActor                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UValRHUIGameMinimapMarker::UpdateActorLocation(class UObject* WorldContextObject, class AActor* ObjectiveActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ValRHUIGameMinimapMarker", "UpdateActorLocation");

	Params::UValRHUIGameMinimapMarker_UpdateActorLocation_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ObjectiveActor = ObjectiveActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ValhallaUI.ValRHUIGameMinimapMarker.UpdateActive
// (Event, Protected, BlueprintEvent)
// Parameters:

void UValRHUIGameMinimapMarker::UpdateActive()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ValRHUIGameMinimapMarker", "UpdateActive");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ValhallaUI.ValRHUIGameMinimapMarker.IsActive
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UValRHUIGameMinimapMarker::IsActive()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ValRHUIGameMinimapMarker", "IsActive");

	Params::UValRHUIGameMinimapMarker_IsActive_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ValhallaUI.ValRHUIGameMinimapPlayer
// (None)

class UClass* UValRHUIGameMinimapPlayer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ValRHUIGameMinimapPlayer");

	return Clss;
}


// ValRHUIGameMinimapPlayer ValhallaUI.Default__ValRHUIGameMinimapPlayer
// (Public, ClassDefaultObject, ArchetypeObject)

class UValRHUIGameMinimapPlayer* UValRHUIGameMinimapPlayer::GetDefaultObj()
{
	static class UValRHUIGameMinimapPlayer* Default = nullptr;

	if (!Default)
		Default = static_cast<UValRHUIGameMinimapPlayer*>(UValRHUIGameMinimapPlayer::StaticClass()->DefaultObject);

	return Default;
}


// Function ValhallaUI.ValRHUIGameMinimapPlayer.UpdatePlayerLocation
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector          RepLocation                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UValRHUIGameMinimapPlayer::UpdatePlayerLocation(class UObject* WorldContextObject, struct CoreUObject_Vector& RepLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ValRHUIGameMinimapPlayer", "UpdatePlayerLocation");

	Params::UValRHUIGameMinimapPlayer_UpdatePlayerLocation_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.RepLocation = RepLocation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ValhallaUI.ValRHUIGameMinimapPlayer.ReturnWidgetToFreeList
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UValRHUIGameMinimapPlayer::ReturnWidgetToFreeList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ValRHUIGameMinimapPlayer", "ReturnWidgetToFreeList");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ValhallaUI.ValRHUIGameMinimapPlayer.GetWidgetRotationAngle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               bRevealCheck                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UValRHUIGameMinimapPlayer::GetWidgetRotationAngle(bool bRevealCheck)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ValRHUIGameMinimapPlayer", "GetWidgetRotationAngle");

	Params::UValRHUIGameMinimapPlayer_GetWidgetRotationAngle_Params Parms{};

	Parms.bRevealCheck = bRevealCheck;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ValhallaUI.ValRHUIGameMinimapPlayer.GetPlayerLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               bRevealCheck                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct CoreUObject_Vector UValRHUIGameMinimapPlayer::GetPlayerLocation(bool bRevealCheck)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ValRHUIGameMinimapPlayer", "GetPlayerLocation");

	Params::UValRHUIGameMinimapPlayer_GetPlayerLocation_Params Parms{};

	Parms.bRevealCheck = bRevealCheck;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ValhallaUI.ValRHUIGameOverlay
// (None)

class UClass* UValRHUIGameOverlay::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ValRHUIGameOverlay");

	return Clss;
}


// ValRHUIGameOverlay ValhallaUI.Default__ValRHUIGameOverlay
// (Public, ClassDefaultObject, ArchetypeObject)

class UValRHUIGameOverlay* UValRHUIGameOverlay::GetDefaultObj()
{
	static class UValRHUIGameOverlay* Default = nullptr;

	if (!Default)
		Default = static_cast<UValRHUIGameOverlay*>(UValRHUIGameOverlay::StaticClass()->DefaultObject);

	return Default;
}


// Function ValhallaUI.ValRHUIGameOverlay.UpdateViewportSize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UValRHUIGameOverlay::UpdateViewportSize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ValRHUIGameOverlay", "UpdateViewportSize");

	Params::UValRHUIGameOverlay_UpdateViewportSize_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ValhallaUI.ValRHUIGameOverlay.UpdatePosition_Vector
// (Final, Native, Protected, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector          ObjectiveLocation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UValRHUIGameOverlay::UpdatePosition_Vector(class UObject* WorldContextObject, const struct CoreUObject_Vector& ObjectiveLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ValRHUIGameOverlay", "UpdatePosition_Vector");

	Params::UValRHUIGameOverlay_UpdatePosition_Vector_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ObjectiveLocation = ObjectiveLocation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ValhallaUI.ValRHUIGameOverlay.UpdatePosition
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      ObjectiveActor                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UValRHUIGameOverlay::UpdatePosition(class UObject* WorldContextObject, class AActor* ObjectiveActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ValRHUIGameOverlay", "UpdatePosition");

	Params::UValRHUIGameOverlay_UpdatePosition_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ObjectiveActor = ObjectiveActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ValhallaUI.ValRHUIGameOverlay.UpdateDistance_Vector
// (Final, Native, Protected, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector          ObjectiveLocation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTextBlock*                  TextBlock                                                        (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UValRHUIGameOverlay::UpdateDistance_Vector(class UObject* WorldContextObject, const struct CoreUObject_Vector& ObjectiveLocation, class UTextBlock* TextBlock)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ValRHUIGameOverlay", "UpdateDistance_Vector");

	Params::UValRHUIGameOverlay_UpdateDistance_Vector_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ObjectiveLocation = ObjectiveLocation;
	Parms.TextBlock = TextBlock;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ValhallaUI.ValRHUIGameOverlay.UpdateDistance
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      ObjectiveActor                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTextBlock*                  TextBlock                                                        (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UValRHUIGameOverlay::UpdateDistance(class UObject* WorldContextObject, class AActor* ObjectiveActor, class UTextBlock* TextBlock)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ValRHUIGameOverlay", "UpdateDistance");

	Params::UValRHUIGameOverlay_UpdateDistance_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ObjectiveActor = ObjectiveActor;
	Parms.TextBlock = TextBlock;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ValhallaUI.ValRHUIGameOverlay.UpdateConstrainedViewportSize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UValRHUIGameOverlay::UpdateConstrainedViewportSize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ValRHUIGameOverlay", "UpdateConstrainedViewportSize");

	Params::UValRHUIGameOverlay_UpdateConstrainedViewportSize_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ValhallaUI.ValRHUIGameOverlay.ShowOverlay
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bShouldShow                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UValRHUIGameOverlay::ShowOverlay(bool bShouldShow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ValRHUIGameOverlay", "ShowOverlay");

	Params::UValRHUIGameOverlay_ShowOverlay_Params Parms{};

	Parms.bShouldShow = bShouldShow;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ValhallaUI.ValRHUIGameOverlay.OnOffScreenChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsNowOffScreen                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UValRHUIGameOverlay::OnOffScreenChanged(bool bIsNowOffScreen)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ValRHUIGameOverlay", "OnOffScreenChanged");

	Params::UValRHUIGameOverlay_OnOffScreenChanged_Params Parms{};

	Parms.bIsNowOffScreen = bIsNowOffScreen;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValhallaUI.ValRHUIGameOverlay.GetViewportSize
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct CoreUObject_Vector2D        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct CoreUObject_Vector2D UValRHUIGameOverlay::GetViewportSize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ValRHUIGameOverlay", "GetViewportSize");

	Params::UValRHUIGameOverlay_GetViewportSize_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ValhallaUI.ValRHUIGameOverlay.GetConstrainedViewportSize
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct CoreUObject_Vector2D        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct CoreUObject_Vector2D UValRHUIGameOverlay::GetConstrainedViewportSize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ValRHUIGameOverlay", "GetConstrainedViewportSize");

	Params::UValRHUIGameOverlay_GetConstrainedViewportSize_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ValhallaUI.ValRHUIGameRadar
// (None)

class UClass* UValRHUIGameRadar::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ValRHUIGameRadar");

	return Clss;
}


// ValRHUIGameRadar ValhallaUI.Default__ValRHUIGameRadar
// (Public, ClassDefaultObject, ArchetypeObject)

class UValRHUIGameRadar* UValRHUIGameRadar::GetDefaultObj()
{
	static class UValRHUIGameRadar* Default = nullptr;

	if (!Default)
		Default = static_cast<UValRHUIGameRadar*>(UValRHUIGameRadar::StaticClass()->DefaultObject);

	return Default;
}


// Function ValhallaUI.ValRHUIGameRadar.UpdateRadarPlayers
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TMap<class APlayerState*, class UValRHUIGameMinimapPlayer*>Players                                                          (Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UValRHUIGameRadar::UpdateRadarPlayers(class UObject* WorldContextObject, TMap<class APlayerState*, class UValRHUIGameMinimapPlayer*>& Players)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ValRHUIGameRadar", "UpdateRadarPlayers");

	Params::UValRHUIGameRadar_UpdateRadarPlayers_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Players = Players;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ValhallaUI.ValRHUIGameRadar.Get2DLocation
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct CoreUObject_Vector          Location                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector2D        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct CoreUObject_Vector2D UValRHUIGameRadar::Get2DLocation(struct CoreUObject_Vector& Location)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ValRHUIGameRadar", "Get2DLocation");

	Params::UValRHUIGameRadar_Get2DLocation_Params Parms{};

	Parms.Location = Location;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ValhallaUI.ValRHUIMinimap
// (None)

class UClass* UValRHUIMinimap::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ValRHUIMinimap");

	return Clss;
}


// ValRHUIMinimap ValhallaUI.Default__ValRHUIMinimap
// (Public, ClassDefaultObject, ArchetypeObject)

class UValRHUIMinimap* UValRHUIMinimap::GetDefaultObj()
{
	static class UValRHUIMinimap* Default = nullptr;

	if (!Default)
		Default = static_cast<UValRHUIMinimap*>(UValRHUIMinimap::StaticClass()->DefaultObject);

	return Default;
}


// Function ValhallaUI.ValRHUIMinimap.UpdateMapPlayers
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TMap<class APlayerState*, class UValRHUIGameMinimapPlayer*>Players                                                          (Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector2D        MapTranslation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ZoomedRenderScale                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UValRHUIMinimap::UpdateMapPlayers(class UObject* WorldContextObject, TMap<class APlayerState*, class UValRHUIGameMinimapPlayer*>& Players, const struct CoreUObject_Vector2D& MapTranslation, float ZoomedRenderScale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ValRHUIMinimap", "UpdateMapPlayers");

	Params::UValRHUIMinimap_UpdateMapPlayers_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Players = Players;
	Parms.MapTranslation = MapTranslation;
	Parms.ZoomedRenderScale = ZoomedRenderScale;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ValhallaUI.ValRHUIMinimap.ReleaseEnemyBlipWidget
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UValRHWidget*                WidgetToRelease                                                  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UValRHUIMinimap::ReleaseEnemyBlipWidget(class UValRHWidget* WidgetToRelease)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ValRHUIMinimap", "ReleaseEnemyBlipWidget");

	Params::UValRHUIMinimap_ReleaseEnemyBlipWidget_Params Parms{};

	Parms.WidgetToRelease = WidgetToRelease;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ValhallaUI.ValRHUIMinimap.PanToMouse
// (Final, Native, Protected, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct CoreUObject_Vector2D        MousePos                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidget*                     MapWidget                                                        (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector2D        CurrentTranslation                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector2D        TargetTranslation                                                (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              CurrentZoom                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TargetZoom                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UValRHUIMinimap::PanToMouse(struct CoreUObject_Vector2D& MousePos, class UWidget* MapWidget, struct CoreUObject_Vector2D& CurrentTranslation, struct CoreUObject_Vector2D& TargetTranslation, float CurrentZoom, float TargetZoom)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ValRHUIMinimap", "PanToMouse");

	Params::UValRHUIMinimap_PanToMouse_Params Parms{};

	Parms.MousePos = MousePos;
	Parms.MapWidget = MapWidget;
	Parms.CurrentTranslation = CurrentTranslation;
	Parms.TargetTranslation = TargetTranslation;
	Parms.CurrentZoom = CurrentZoom;
	Parms.TargetZoom = TargetZoom;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ValhallaUI.ValRHUIMinimap.OnMinimapLoaded
// (Event, Public, BlueprintEvent)
// Parameters:

void UValRHUIMinimap::OnMinimapLoaded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ValRHUIMinimap", "OnMinimapLoaded");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ValhallaUI.ValRHUIMinimap.GetOrCreateEnemyBlipWidget
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UValRHWidget*                ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UValRHWidget* UValRHUIMinimap::GetOrCreateEnemyBlipWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ValRHUIMinimap", "GetOrCreateEnemyBlipWidget");

	Params::UValRHUIMinimap_GetOrCreateEnemyBlipWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ValhallaUI.ValRHUIMinimap.GetMinimapTexture
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UTexture2D*                  Texture                                                          (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UValRHUIMinimap::GetMinimapTexture(class UTexture2D** Texture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ValRHUIMinimap", "GetMinimapTexture");

	Params::UValRHUIMinimap_GetMinimapTexture_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Texture != nullptr)
		*Texture = Parms.Texture;

}


// Function ValhallaUI.ValRHUIMinimap.GetFreeCybridWidget
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UValRHUIGameMinimapPlayer*   ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UValRHUIGameMinimapPlayer* UValRHUIMinimap::GetFreeCybridWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ValRHUIMinimap", "GetFreeCybridWidget");

	Params::UValRHUIMinimap_GetFreeCybridWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ValhallaUI.ValRHUIMinimap.DebugShowAIOnMinimap
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UValRHUIMinimap::DebugShowAIOnMinimap()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ValRHUIMinimap", "DebugShowAIOnMinimap");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ValhallaUI.ValRHUIMinimap.CounterScaleWidget
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UWidget*                     Widget                                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ZoomedRenderScale                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UValRHUIMinimap::CounterScaleWidget(class UWidget* Widget, float ZoomedRenderScale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ValRHUIMinimap", "CounterScaleWidget");

	Params::UValRHUIMinimap_CounterScaleWidget_Params Parms{};

	Parms.Widget = Widget;
	Parms.ZoomedRenderScale = ZoomedRenderScale;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ValhallaUI.ValRHUIMinimap.ClampTranslation
// (Final, Native, Protected, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct CoreUObject_Vector2D        Translation                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector2D        MapSize                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ExtentMultiplier                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector2D        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct CoreUObject_Vector2D UValRHUIMinimap::ClampTranslation(struct CoreUObject_Vector2D& Translation, struct CoreUObject_Vector2D& MapSize, float ExtentMultiplier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ValRHUIMinimap", "ClampTranslation");

	Params::UValRHUIMinimap_ClampTranslation_Params Parms{};

	Parms.Translation = Translation;
	Parms.MapSize = MapSize;
	Parms.ExtentMultiplier = ExtentMultiplier;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ValhallaUI.ValViewRedirector_ShowPostMatch
// (None)

class UClass* UValViewRedirector_ShowPostMatch::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ValViewRedirector_ShowPostMatch");

	return Clss;
}


// ValViewRedirector_ShowPostMatch ValhallaUI.Default__ValViewRedirector_ShowPostMatch
// (Public, ClassDefaultObject, ArchetypeObject)

class UValViewRedirector_ShowPostMatch* UValViewRedirector_ShowPostMatch::GetDefaultObj()
{
	static class UValViewRedirector_ShowPostMatch* Default = nullptr;

	if (!Default)
		Default = static_cast<UValViewRedirector_ShowPostMatch*>(UValViewRedirector_ShowPostMatch::StaticClass()->DefaultObject);

	return Default;
}


// Function ValhallaUI.ValViewRedirector_ShowPostMatch.ShowEOM
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class ARHHUDCommon*                HUD                                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UValViewRedirector_ShowPostMatch::ShowEOM(class ARHHUDCommon* HUD)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ValViewRedirector_ShowPostMatch", "ShowEOM");

	Params::UValViewRedirector_ShowPostMatch_ShowEOM_Params Parms{};

	Parms.HUD = HUD;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ValhallaUI.ValVoiceActivityWidget
// (None)

class UClass* UValVoiceActivityWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ValVoiceActivityWidget");

	return Clss;
}


// ValVoiceActivityWidget ValhallaUI.Default__ValVoiceActivityWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UValVoiceActivityWidget* UValVoiceActivityWidget::GetDefaultObj()
{
	static class UValVoiceActivityWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UValVoiceActivityWidget*>(UValVoiceActivityWidget::StaticClass()->DefaultObject);

	return Default;
}


// Class ValhallaUI.UIWidget_MatchInfo
// (None)

class UClass* UUIWidget_MatchInfo::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UIWidget_MatchInfo");

	return Clss;
}


// UIWidget_MatchInfo ValhallaUI.Default__UIWidget_MatchInfo
// (Public, ClassDefaultObject, ArchetypeObject)

class UUIWidget_MatchInfo* UUIWidget_MatchInfo::GetDefaultObj()
{
	static class UUIWidget_MatchInfo* Default = nullptr;

	if (!Default)
		Default = static_cast<UUIWidget_MatchInfo*>(UUIWidget_MatchInfo::StaticClass()->DefaultObject);

	return Default;
}


// Function ValhallaUI.UIWidget_MatchInfo.GetRallyHereUuid
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UUIWidget_MatchInfo::GetRallyHereUuid()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIWidget_MatchInfo", "GetRallyHereUuid");

	Params::UUIWidget_MatchInfo_GetRallyHereUuid_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ValhallaUI.UIWidget_MatchInfo.GetMatchId
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UUIWidget_MatchInfo::GetMatchId()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIWidget_MatchInfo", "GetMatchId");

	Params::UUIWidget_MatchInfo_GetMatchId_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ValhallaUI.ValAntiCheatViolationViewRedirector
// (None)

class UClass* UValAntiCheatViolationViewRedirector::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ValAntiCheatViolationViewRedirector");

	return Clss;
}


// ValAntiCheatViolationViewRedirector ValhallaUI.Default__ValAntiCheatViolationViewRedirector
// (Public, ClassDefaultObject, ArchetypeObject)

class UValAntiCheatViolationViewRedirector* UValAntiCheatViolationViewRedirector::GetDefaultObj()
{
	static class UValAntiCheatViolationViewRedirector* Default = nullptr;

	if (!Default)
		Default = static_cast<UValAntiCheatViolationViewRedirector*>(UValAntiCheatViolationViewRedirector::StaticClass()->DefaultObject);

	return Default;
}


// Class ValhallaUI.ValAntiCheatViolationWidget
// (None)

class UClass* UValAntiCheatViolationWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ValAntiCheatViolationWidget");

	return Clss;
}


// ValAntiCheatViolationWidget ValhallaUI.Default__ValAntiCheatViolationWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UValAntiCheatViolationWidget* UValAntiCheatViolationWidget::GetDefaultObj()
{
	static class UValAntiCheatViolationWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UValAntiCheatViolationWidget*>(UValAntiCheatViolationWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function ValhallaUI.ValAntiCheatViolationWidget.GetClientViolationMessages
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class FText>                OutMessages                                                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UValAntiCheatViolationWidget::GetClientViolationMessages(TArray<class FText>* OutMessages)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ValAntiCheatViolationWidget", "GetClientViolationMessages");

	Params::UValAntiCheatViolationWidget_GetClientViolationMessages_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutMessages != nullptr)
		*OutMessages = std::move(Parms.OutMessages);

}


// Class ValhallaUI.ValRHLobbyHUD
// (Actor)

class UClass* AValRHLobbyHUD::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ValRHLobbyHUD");

	return Clss;
}


// ValRHLobbyHUD ValhallaUI.Default__ValRHLobbyHUD
// (Public, ClassDefaultObject, ArchetypeObject)

class AValRHLobbyHUD* AValRHLobbyHUD::GetDefaultObj()
{
	static class AValRHLobbyHUD* Default = nullptr;

	if (!Default)
		Default = static_cast<AValRHLobbyHUD*>(AValRHLobbyHUD::StaticClass()->DefaultObject);

	return Default;
}


// Function ValhallaUI.ValRHLobbyHUD.OnSelectedRegionChanged
// (Final, Native, Protected)
// Parameters:

void AValRHLobbyHUD::OnSelectedRegionChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ValRHLobbyHUD", "OnSelectedRegionChanged");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ValhallaUI.ValRHLobbyHUD.LeaveAllGameSessions
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void AValRHLobbyHUD::LeaveAllGameSessions()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ValRHLobbyHUD", "LeaveAllGameSessions");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class ValhallaUI.ValRHQuickPlayWidget
// (None)

class UClass* UValRHQuickPlayWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ValRHQuickPlayWidget");

	return Clss;
}


// ValRHQuickPlayWidget ValhallaUI.Default__ValRHQuickPlayWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UValRHQuickPlayWidget* UValRHQuickPlayWidget::GetDefaultObj()
{
	static class UValRHQuickPlayWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UValRHQuickPlayWidget*>(UValRHQuickPlayWidget::StaticClass()->DefaultObject);

	return Default;
}


// Class ValhallaUI.ValTotalPlayerCountWidget
// (None)

class UClass* UValTotalPlayerCountWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ValTotalPlayerCountWidget");

	return Clss;
}


// ValTotalPlayerCountWidget ValhallaUI.Default__ValTotalPlayerCountWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UValTotalPlayerCountWidget* UValTotalPlayerCountWidget::GetDefaultObj()
{
	static class UValTotalPlayerCountWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UValTotalPlayerCountWidget*>(UValTotalPlayerCountWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function ValhallaUI.ValTotalPlayerCountWidget.GetTotalPlayerCount
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              OutPlayerCount                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UValTotalPlayerCountWidget::GetTotalPlayerCount(int32* OutPlayerCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ValTotalPlayerCountWidget", "GetTotalPlayerCount");

	Params::UValTotalPlayerCountWidget_GetTotalPlayerCount_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutPlayerCount != nullptr)
		*OutPlayerCount = Parms.OutPlayerCount;

	return Parms.ReturnValue;

}


// Class ValhallaUI.UILibrary
// (None)

class UClass* UUILibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UILibrary");

	return Clss;
}


// UILibrary ValhallaUI.Default__UILibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UUILibrary* UUILibrary::GetDefaultObj()
{
	static class UUILibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UUILibrary*>(UUILibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function ValhallaUI.UILibrary.SetWidgetGrandchildrenRotation
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UPanelWidget*                ParentWidget                                                     (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Angle                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUILibrary::SetWidgetGrandchildrenRotation(class UPanelWidget* ParentWidget, float Angle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UILibrary", "SetWidgetGrandchildrenRotation");

	Params::UUILibrary_SetWidgetGrandchildrenRotation_Params Parms{};

	Parms.ParentWidget = ParentWidget;
	Parms.Angle = Angle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ValhallaUI.UILibrary.SetupReportPlayerFromDamageSummary
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Valhalla_DamageSummaryData  DamageSummary                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct RallyHereStart_ReportPlayerParamsReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct RallyHereStart_ReportPlayerParams UUILibrary::SetupReportPlayerFromDamageSummary(class UObject* WorldContextObject, struct Valhalla_DamageSummaryData& DamageSummary)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UILibrary", "SetupReportPlayerFromDamageSummary");

	Params::UUILibrary_SetupReportPlayerFromDamageSummary_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.DamageSummary = DamageSummary;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ValhallaUI.UILibrary.SetBool
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// bool                               Var                                                              (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUILibrary::SetBool(bool& Var, bool Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UILibrary", "SetBool");

	Params::UUILibrary_SetBool_Params Parms{};

	Parms.Var = Var;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ValhallaUI.UILibrary.ProjectWorldToScreenBidirectional
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class APlayerController*           Player                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector          WorldPosition                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector2D        ScreenPosition                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bTargetBehindCamera                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bPlayerViewportRelative                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUILibrary::ProjectWorldToScreenBidirectional(class APlayerController* Player, struct CoreUObject_Vector& WorldPosition, struct CoreUObject_Vector2D* ScreenPosition, bool* bTargetBehindCamera, bool bPlayerViewportRelative)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UILibrary", "ProjectWorldToScreenBidirectional");

	Params::UUILibrary_ProjectWorldToScreenBidirectional_Params Parms{};

	Parms.Player = Player;
	Parms.WorldPosition = WorldPosition;
	Parms.bPlayerViewportRelative = bPlayerViewportRelative;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ScreenPosition != nullptr)
		*ScreenPosition = std::move(Parms.ScreenPosition);

	if (bTargetBehindCamera != nullptr)
		*bTargetBehindCamera = Parms.bTargetBehindCamera;

	return Parms.ReturnValue;

}


// Function ValhallaUI.UILibrary.GetSecondaryColorFromName
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        ID                                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_LinearColor     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct CoreUObject_LinearColor UUILibrary::GetSecondaryColorFromName(class FName& ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UILibrary", "GetSecondaryColorFromName");

	Params::UUILibrary_GetSecondaryColorFromName_Params Parms{};

	Parms.ID = ID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ValhallaUI.UILibrary.GetRadialOptionSelected
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UWidget*                     RelativeWidget                                                   (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NumOptions                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MouseAngle                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DeadZone                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UUILibrary::GetRadialOptionSelected(class UWidget* RelativeWidget, int32 NumOptions, float* MouseAngle, float DeadZone)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UILibrary", "GetRadialOptionSelected");

	Params::UUILibrary_GetRadialOptionSelected_Params Parms{};

	Parms.RelativeWidget = RelativeWidget;
	Parms.NumOptions = NumOptions;
	Parms.DeadZone = DeadZone;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (MouseAngle != nullptr)
		*MouseAngle = Parms.MouseAngle;

	return Parms.ReturnValue;

}


// Function ValhallaUI.UILibrary.GetPlayerCameraManager
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AValPlayerCameraManager*     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AValPlayerCameraManager* UUILibrary::GetPlayerCameraManager(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UILibrary", "GetPlayerCameraManager");

	Params::UUILibrary_GetPlayerCameraManager_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ValhallaUI.UILibrary.GetPlayer
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AValPlayerController*        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AValPlayerController* UUILibrary::GetPlayer(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UILibrary", "GetPlayer");

	Params::UUILibrary_GetPlayer_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ValhallaUI.UILibrary.GetGameState
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AValGameState*               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AValGameState* UUILibrary::GetGameState(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UILibrary", "GetGameState");

	Params::UUILibrary_GetGameState_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ValhallaUI.UILibrary.GetGamepadButtonForAction
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        Action                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct InputCore_Key               Button                                                           (Parm, OutParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUILibrary::GetGamepadButtonForAction(class FName Action, struct InputCore_Key* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UILibrary", "GetGamepadButtonForAction");

	Params::UUILibrary_GetGamepadButtonForAction_Params Parms{};

	Parms.Action = Action;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Button != nullptr)
		*Button = std::move(Parms.Button);

	return Parms.ReturnValue;

}


// Function ValhallaUI.UILibrary.GetGameInstance
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UValGameInstance*            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UValGameInstance* UUILibrary::GetGameInstance(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UILibrary", "GetGameInstance");

	Params::UUILibrary_GetGameInstance_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ValhallaUI.UILibrary.GetColorFromRarity
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        ID                                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ERarity                 Rarity                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_LinearColor     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct CoreUObject_LinearColor UUILibrary::GetColorFromRarity(class FName& ID, enum class ERarity Rarity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UILibrary", "GetColorFromRarity");

	Params::UUILibrary_GetColorFromRarity_Params Parms{};

	Parms.ID = ID;
	Parms.Rarity = Rarity;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ValhallaUI.UILibrary.GetColorFromName
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        ID                                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_LinearColor     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct CoreUObject_LinearColor UUILibrary::GetColorFromName(class FName& ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UILibrary", "GetColorFromName");

	Params::UUILibrary_GetColorFromName_Params Parms{};

	Parms.ID = ID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ValhallaUI.UILibrary.GetCharacter
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AValCharacter*               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AValCharacter* UUILibrary::GetCharacter(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UILibrary", "GetCharacter");

	Params::UUILibrary_GetCharacter_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ValhallaUI.UILibrary.GetButtonForAxisMapping
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        Axis                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct InputCore_Key               Button                                                           (Parm, OutParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Scale                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               IsGamepadKey                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUILibrary::GetButtonForAxisMapping(class FName Axis, struct InputCore_Key* Button, float Scale, bool IsGamepadKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UILibrary", "GetButtonForAxisMapping");

	Params::UUILibrary_GetButtonForAxisMapping_Params Parms{};

	Parms.Axis = Axis;
	Parms.Scale = Scale;
	Parms.IsGamepadKey = IsGamepadKey;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Button != nullptr)
		*Button = std::move(Parms.Button);

	return Parms.ReturnValue;

}


// Function ValhallaUI.UILibrary.GetButtonForActionMappingUsingWidget
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UWidget*                     InWidget                                                         (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        Action                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct InputCore_Key               Button                                                           (Parm, OutParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUILibrary::GetButtonForActionMappingUsingWidget(class UWidget* InWidget, class FName Action, struct InputCore_Key* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UILibrary", "GetButtonForActionMappingUsingWidget");

	Params::UUILibrary_GetButtonForActionMappingUsingWidget_Params Parms{};

	Parms.InWidget = InWidget;
	Parms.Action = Action;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Button != nullptr)
		*Button = std::move(Parms.Button);

	return Parms.ReturnValue;

}


// Function ValhallaUI.UILibrary.GetButtonForActionMapping
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        Action                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct InputCore_Key               Button                                                           (Parm, OutParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               IsGamepadKey                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUILibrary::GetButtonForActionMapping(class FName Action, struct InputCore_Key* Button, bool IsGamepadKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UILibrary", "GetButtonForActionMapping");

	Params::UUILibrary_GetButtonForActionMapping_Params Parms{};

	Parms.Action = Action;
	Parms.IsGamepadKey = IsGamepadKey;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Button != nullptr)
		*Button = std::move(Parms.Button);

	return Parms.ReturnValue;

}


// Function ValhallaUI.UILibrary.GetBackendServiceInterface
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UBackendService*             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UBackendService* UUILibrary::GetBackendServiceInterface(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UILibrary", "GetBackendServiceInterface");

	Params::UUILibrary_GetBackendServiceInterface_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ValhallaUI.UILibrary.GetAllButtonsForAxisMapping
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        Axis                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct InputCore_Key>       Buttons                                                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// float                              Scale                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               IsGamepadKey                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUILibrary::GetAllButtonsForAxisMapping(class FName Axis, TArray<struct InputCore_Key>* Buttons, float Scale, bool IsGamepadKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UILibrary", "GetAllButtonsForAxisMapping");

	Params::UUILibrary_GetAllButtonsForAxisMapping_Params Parms{};

	Parms.Axis = Axis;
	Parms.Scale = Scale;
	Parms.IsGamepadKey = IsGamepadKey;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Buttons != nullptr)
		*Buttons = std::move(Parms.Buttons);

	return Parms.ReturnValue;

}


// Function ValhallaUI.UILibrary.GetAllButtonsForActionMappingUsingWidget
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UWidget*                     InWidget                                                         (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        Action                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct InputCore_Key>       Buttons                                                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUILibrary::GetAllButtonsForActionMappingUsingWidget(class UWidget* InWidget, class FName Action, TArray<struct InputCore_Key>* Buttons)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UILibrary", "GetAllButtonsForActionMappingUsingWidget");

	Params::UUILibrary_GetAllButtonsForActionMappingUsingWidget_Params Parms{};

	Parms.InWidget = InWidget;
	Parms.Action = Action;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Buttons != nullptr)
		*Buttons = std::move(Parms.Buttons);

	return Parms.ReturnValue;

}


// Function ValhallaUI.UILibrary.GetAllButtonsForActionMapping
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        Action                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct InputCore_Key>       Buttons                                                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               IsGamepadKey                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUILibrary::GetAllButtonsForActionMapping(class FName Action, TArray<struct InputCore_Key>* Buttons, bool IsGamepadKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UILibrary", "GetAllButtonsForActionMapping");

	Params::UUILibrary_GetAllButtonsForActionMapping_Params Parms{};

	Parms.Action = Action;
	Parms.IsGamepadKey = IsGamepadKey;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Buttons != nullptr)
		*Buttons = std::move(Parms.Buttons);

	return Parms.ReturnValue;

}


// Function ValhallaUI.UILibrary.CanSubmitPlayerReport
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct RallyHereStart_ReportPlayerParamsParams                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUILibrary::CanSubmitPlayerReport(class UObject* WorldContextObject, struct RallyHereStart_ReportPlayerParams& Params)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UILibrary", "CanSubmitPlayerReport");

	Params::UUILibrary_CanSubmitPlayerReport_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Params = Params;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ValhallaUI.ValRHHUDCommon
// (Actor)

class UClass* AValRHHUDCommon::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ValRHHUDCommon");

	return Clss;
}


// ValRHHUDCommon ValhallaUI.Default__ValRHHUDCommon
// (Public, ClassDefaultObject, ArchetypeObject)

class AValRHHUDCommon* AValRHHUDCommon::GetDefaultObj()
{
	static class AValRHHUDCommon* Default = nullptr;

	if (!Default)
		Default = static_cast<AValRHHUDCommon*>(AValRHHUDCommon::StaticClass()->DefaultObject);

	return Default;
}

}


