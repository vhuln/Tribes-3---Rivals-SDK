#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CharacterOverlay_Health.CharacterOverlay_Health_C
// (None)

class UClass* UCharacterOverlay_Health_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CharacterOverlay_Health_C");

	return Clss;
}


// CharacterOverlay_Health_C CharacterOverlay_Health.Default__CharacterOverlay_Health_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCharacterOverlay_Health_C* UCharacterOverlay_Health_C::GetDefaultObj()
{
	static class UCharacterOverlay_Health_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCharacterOverlay_Health_C*>(UCharacterOverlay_Health_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CharacterOverlay_Health.CharacterOverlay_Health_C.UpdateHaveHealth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharacterOverlay_Health_C::UpdateHaveHealth(bool Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterOverlay_Health_C", "UpdateHaveHealth");

	Params::UCharacterOverlay_Health_C_UpdateHaveHealth_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CharacterOverlay_Health.CharacterOverlay_Health_C.UpdateHealthPercent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             LocalValue                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetSmoothProgress_NewValue_ImplicitCast                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharacterOverlay_Health_C::UpdateHealthPercent(double Value, double LocalValue, float CallFunc_SetSmoothProgress_NewValue_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterOverlay_Health_C", "UpdateHealthPercent");

	Params::UCharacterOverlay_Health_C_UpdateHealthPercent_Params Parms{};

	Parms.Value = Value;
	Parms.LocalValue = LocalValue;
	Parms.CallFunc_SetSmoothProgress_NewValue_ImplicitCast = CallFunc_SetSmoothProgress_NewValue_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CharacterOverlay_Health.CharacterOverlay_Health_C.UpdateShieldPercent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetSmoothProgress_NewValue_ImplicitCast                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharacterOverlay_Health_C::UpdateShieldPercent(double Value, float CallFunc_SetSmoothProgress_NewValue_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterOverlay_Health_C", "UpdateShieldPercent");

	Params::UCharacterOverlay_Health_C_UpdateShieldPercent_Params Parms{};

	Parms.Value = Value;
	Parms.CallFunc_SetSmoothProgress_NewValue_ImplicitCast = CallFunc_SetSmoothProgress_NewValue_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CharacterOverlay_Health.CharacterOverlay_Health_C.UpdateHaveShield
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharacterOverlay_Health_C::UpdateHaveShield(bool Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterOverlay_Health_C", "UpdateHaveShield");

	Params::UCharacterOverlay_Health_C_UpdateHaveShield_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}

}


