#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GC_BotPreVaulting.GC_BotPreVaulting_C
// (Actor)

class UClass* AGC_BotPreVaulting_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GC_BotPreVaulting_C");

	return Clss;
}


// GC_BotPreVaulting_C GC_BotPreVaulting.Default__GC_BotPreVaulting_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGC_BotPreVaulting_C* AGC_BotPreVaulting_C::GetDefaultObj()
{
	static class AGC_BotPreVaulting_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGC_BotPreVaulting_C*>(AGC_BotPreVaulting_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GC_BotPreVaulting.GC_BotPreVaulting_C.OnExecute
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      MyTarget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct GameplayAbilities_GameplayCueParametersParameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValCharacter*               K2Node_DynamicCast_AsVal_Character                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetMesh3P_ReturnValue                                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UValCharacterAnimInstance*   K2Node_DynamicCast_AsVal_Character_Anim_Instance                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool AGC_BotPreVaulting_C::OnExecute(class AActor* MyTarget, struct GameplayAbilities_GameplayCueParameters& Parameters, class AValCharacter* K2Node_DynamicCast_AsVal_Character, bool K2Node_DynamicCast_bSuccess, class USkeletalMeshComponent* CallFunc_GetMesh3P_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UValCharacterAnimInstance* K2Node_DynamicCast_AsVal_Character_Anim_Instance, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GC_BotPreVaulting_C", "OnExecute");

	Params::AGC_BotPreVaulting_C_OnExecute_Params Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = Parameters;
	Parms.K2Node_DynamicCast_AsVal_Character = K2Node_DynamicCast_AsVal_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetMesh3P_ReturnValue = CallFunc_GetMesh3P_ReturnValue;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsVal_Character_Anim_Instance = K2Node_DynamicCast_AsVal_Character_Anim_Instance;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


