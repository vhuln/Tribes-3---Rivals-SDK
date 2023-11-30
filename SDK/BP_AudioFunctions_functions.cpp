#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AudioFunctions.BP_AudioFunctions_C
// (None)

class UClass* UBP_AudioFunctions_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AudioFunctions_C");

	return Clss;
}


// BP_AudioFunctions_C BP_AudioFunctions.Default__BP_AudioFunctions_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_AudioFunctions_C* UBP_AudioFunctions_C::GetDefaultObj()
{
	static class UBP_AudioFunctions_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_AudioFunctions_C*>(UBP_AudioFunctions_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_AudioFunctions.BP_AudioFunctions_C.Set Play Sound
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAudioComponent*             Aud_Comp                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Sound                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AudioFunctions_C::Set_Play_Sound(class UAudioComponent* Aud_Comp, class USoundBase* Sound, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AudioFunctions_C", "Set Play Sound");

	Params::UBP_AudioFunctions_C_Set_Play_Sound_Params Parms{};

	Parms.Aud_Comp = Aud_Comp;
	Parms.Sound = Sound;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}

}


