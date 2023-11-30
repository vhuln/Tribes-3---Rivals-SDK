#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LootCrate_ScavengerMastery.BP_LootCrate_ScavengerMastery_C
// (Actor)

class UClass* ABP_LootCrate_ScavengerMastery_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LootCrate_ScavengerMastery_C");

	return Clss;
}


// BP_LootCrate_ScavengerMastery_C BP_LootCrate_ScavengerMastery.Default__BP_LootCrate_ScavengerMastery_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_LootCrate_ScavengerMastery_C* ABP_LootCrate_ScavengerMastery_C::GetDefaultObj()
{
	static class ABP_LootCrate_ScavengerMastery_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_LootCrate_ScavengerMastery_C*>(ABP_LootCrate_ScavengerMastery_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_LootCrate_ScavengerMastery.BP_LootCrate_ScavengerMastery_C.DetermineInteractEligibility
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AValCharacter*               Initiator                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EInteractionFailureType ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameplayTagAssetInterface>CallFunc_HasMatchingGameplayTag_self_CastInput                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasMatchingGameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class EInteractionFailureType ABP_LootCrate_ScavengerMastery_C::DetermineInteractEligibility(class AValCharacter* Initiator, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LootCrate_ScavengerMastery_C", "DetermineInteractEligibility");

	Params::ABP_LootCrate_ScavengerMastery_C_DetermineInteractEligibility_Params Parms{};

	Parms.Initiator = Initiator;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_HasMatchingGameplayTag_self_CastInput = CallFunc_HasMatchingGameplayTag_self_CastInput;
	Parms.CallFunc_HasMatchingGameplayTag_ReturnValue = CallFunc_HasMatchingGameplayTag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


