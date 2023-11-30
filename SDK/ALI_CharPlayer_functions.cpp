#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ALI_CharPlayer.ALI_CharPlayer_C
// (None)

class UClass* IALI_CharPlayer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ALI_CharPlayer_C");

	return Clss;
}


// ALI_CharPlayer_C ALI_CharPlayer.Default__ALI_CharPlayer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IALI_CharPlayer_C* IALI_CharPlayer_C::GetDefaultObj()
{
	static class IALI_CharPlayer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IALI_CharPlayer_C*>(IALI_CharPlayer_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ALI_CharPlayer.ALI_CharPlayer_C.WeaponLayer
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Engine_PoseLink             WeaponLayer                                                      (Parm, OutParm, NoDestructor)

void IALI_CharPlayer_C::WeaponLayer(struct Engine_PoseLink* WeaponLayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALI_CharPlayer_C", "WeaponLayer");

	Params::IALI_CharPlayer_C_WeaponLayer_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (WeaponLayer != nullptr)
		*WeaponLayer = std::move(Parms.WeaponLayer);

}

}


