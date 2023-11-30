#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class TopazUI.TopRHWidget_WheelSelector
// (None)

class UClass* UTopRHWidget_WheelSelector::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TopRHWidget_WheelSelector");

	return Clss;
}


// TopRHWidget_WheelSelector TopazUI.Default__TopRHWidget_WheelSelector
// (Public, ClassDefaultObject, ArchetypeObject)

class UTopRHWidget_WheelSelector* UTopRHWidget_WheelSelector::GetDefaultObj()
{
	static class UTopRHWidget_WheelSelector* Default = nullptr;

	if (!Default)
		Default = static_cast<UTopRHWidget_WheelSelector*>(UTopRHWidget_WheelSelector::StaticClass()->DefaultObject);

	return Default;
}


// Function TopazUI.TopRHWidget_WheelSelector.UpdateRadialSelector
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Angle                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bShow                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTopRHWidget_WheelSelector::UpdateRadialSelector(float Angle, bool bShow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopRHWidget_WheelSelector", "UpdateRadialSelector");

	Params::UTopRHWidget_WheelSelector_UpdateRadialSelector_Params Parms{};

	Parms.Angle = Angle;
	Parms.bShow = bShow;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TopazUI.TopRHWidget_WheelSelector.UpdateEntriesAngle
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UTopRHWidget_WheelSelector::UpdateEntriesAngle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopRHWidget_WheelSelector", "UpdateEntriesAngle");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function TopazUI.TopRHWidget_WheelSelector.TryBindCharacter
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UTopRHWidget_WheelSelector::TryBindCharacter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopRHWidget_WheelSelector", "TryBindCharacter");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function TopazUI.TopRHWidget_WheelSelector.ToggleLockLookInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bLock                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTopRHWidget_WheelSelector::ToggleLockLookInput(bool bLock)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopRHWidget_WheelSelector", "ToggleLockLookInput");

	Params::UTopRHWidget_WheelSelector_ToggleLockLookInput_Params Parms{};

	Parms.bLock = bLock;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TopazUI.TopRHWidget_WheelSelector.SpawnEntries
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UTopRHWidget_WheelSelector::SpawnEntries()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopRHWidget_WheelSelector", "SpawnEntries");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function TopazUI.TopRHWidget_WheelSelector.OnIndexChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                              NewIndex                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTopRHWidget_WheelSelector::OnIndexChanged(int32 NewIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopRHWidget_WheelSelector", "OnIndexChanged");

	Params::UTopRHWidget_WheelSelector_OnIndexChanged_Params Parms{};

	Parms.NewIndex = NewIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TopazUI.TopRHWidget_WheelSelector.OnEntriesSpawned
// (Event, Public, BlueprintEvent)
// Parameters:

void UTopRHWidget_WheelSelector::OnEntriesSpawned()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopRHWidget_WheelSelector", "OnEntriesSpawned");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TopazUI.TopRHWidget_WheelSelector.OnCharacterBound
// (Event, Public, BlueprintEvent)
// Parameters:

void UTopRHWidget_WheelSelector::OnCharacterBound()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopRHWidget_WheelSelector", "OnCharacterBound");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TopazUI.TopRHWidget_WheelSelector.GetRadialSelectionMouse
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// float                              InMouseDeadzone                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              OUTAngle                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UTopRHWidget_WheelSelector::GetRadialSelectionMouse(float InMouseDeadzone, float* OUTAngle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopRHWidget_WheelSelector", "GetRadialSelectionMouse");

	Params::UTopRHWidget_WheelSelector_GetRadialSelectionMouse_Params Parms{};

	Parms.InMouseDeadzone = InMouseDeadzone;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OUTAngle != nullptr)
		*OUTAngle = Parms.OUTAngle;

	return Parms.ReturnValue;

}


// Function TopazUI.TopRHWidget_WheelSelector.GetRadialSelectionConsole
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// float                              OUTAngle                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UTopRHWidget_WheelSelector::GetRadialSelectionConsole(float* OUTAngle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopRHWidget_WheelSelector", "GetRadialSelectionConsole");

	Params::UTopRHWidget_WheelSelector_GetRadialSelectionConsole_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OUTAngle != nullptr)
		*OUTAngle = Parms.OUTAngle;

	return Parms.ReturnValue;

}


// Function TopazUI.TopRHWidget_WheelSelector.BPOnShown
// (Event, Public, BlueprintEvent)
// Parameters:

void UTopRHWidget_WheelSelector::BPOnShown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopRHWidget_WheelSelector", "BPOnShown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TopazUI.TopRHWidget_WheelSelector.BPOnHide
// (Event, Public, BlueprintEvent)
// Parameters:

void UTopRHWidget_WheelSelector::BPOnHide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopRHWidget_WheelSelector", "BPOnHide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TopazUI.TopRHWidget_WheelSelector.BindCharacter
// (Final, Native, Protected)
// Parameters:
// class APawn*                       Pawn                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTopRHWidget_WheelSelector::BindCharacter(class APawn* Pawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopRHWidget_WheelSelector", "BindCharacter");

	Params::UTopRHWidget_WheelSelector_BindCharacter_Params Parms{};

	Parms.Pawn = Pawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class TopazUI.TopRHWidget_WheelSelector_Entry
// (None)

class UClass* UTopRHWidget_WheelSelector_Entry::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TopRHWidget_WheelSelector_Entry");

	return Clss;
}


// TopRHWidget_WheelSelector_Entry TopazUI.Default__TopRHWidget_WheelSelector_Entry
// (Public, ClassDefaultObject, ArchetypeObject)

class UTopRHWidget_WheelSelector_Entry* UTopRHWidget_WheelSelector_Entry::GetDefaultObj()
{
	static class UTopRHWidget_WheelSelector_Entry* Default = nullptr;

	if (!Default)
		Default = static_cast<UTopRHWidget_WheelSelector_Entry*>(UTopRHWidget_WheelSelector_Entry::StaticClass()->DefaultObject);

	return Default;
}


// Function TopazUI.TopRHWidget_WheelSelector_Entry.UpdateCounterRotation
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Angle                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTopRHWidget_WheelSelector_Entry::UpdateCounterRotation(float Angle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopRHWidget_WheelSelector_Entry", "UpdateCounterRotation");

	Params::UTopRHWidget_WheelSelector_Entry_UpdateCounterRotation_Params Parms{};

	Parms.Angle = Angle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TopazUI.TopRHWidget_WheelSelector_Entry.ToggleHighlighted
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bHighlighted                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTopRHWidget_WheelSelector_Entry::ToggleHighlighted(bool bHighlighted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopRHWidget_WheelSelector_Entry", "ToggleHighlighted");

	Params::UTopRHWidget_WheelSelector_Entry_ToggleHighlighted_Params Parms{};

	Parms.bHighlighted = bHighlighted;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TopazUI.TopRHWidget_WheelSelector_Entry.OnSelected
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTopRHWidget_WheelSelector_Entry::OnSelected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopRHWidget_WheelSelector_Entry", "OnSelected");



	UObject::ProcessEvent(Func, nullptr);

}

}


