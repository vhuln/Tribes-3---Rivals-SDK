#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TookDamage_CamMod.TookDamage_CamMod_C
// (None)

class UClass* UTookDamage_CamMod_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TookDamage_CamMod_C");

	return Clss;
}


// TookDamage_CamMod_C TookDamage_CamMod.Default__TookDamage_CamMod_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTookDamage_CamMod_C* UTookDamage_CamMod_C::GetDefaultObj()
{
	static class UTookDamage_CamMod_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTookDamage_CamMod_C*>(UTookDamage_CamMod_C::StaticClass()->DefaultObject);

	return Default;
}


// Function TookDamage_CamMod.TookDamage_CamMod_C.BlueprintModifyPostProcess
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              PostProcessBlendWeight                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct Engine_PostProcessSettings  PostProcessSettings                                              (Parm, OutParm)
// struct CoreUObject_Vector4         CallFunc_MakeVector4_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct Engine_PostProcessSettings  K2Node_MakeStruct_PostProcessSettings                            (None)

void UTookDamage_CamMod_C::BlueprintModifyPostProcess(float DeltaTime, float* PostProcessBlendWeight, struct Engine_PostProcessSettings* PostProcessSettings, const struct CoreUObject_Vector4& CallFunc_MakeVector4_ReturnValue, const struct Engine_PostProcessSettings& K2Node_MakeStruct_PostProcessSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TookDamage_CamMod_C", "BlueprintModifyPostProcess");

	Params::UTookDamage_CamMod_C_BlueprintModifyPostProcess_Params Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.CallFunc_MakeVector4_ReturnValue = CallFunc_MakeVector4_ReturnValue;
	Parms.K2Node_MakeStruct_PostProcessSettings = K2Node_MakeStruct_PostProcessSettings;

	UObject::ProcessEvent(Func, &Parms);

	if (PostProcessBlendWeight != nullptr)
		*PostProcessBlendWeight = Parms.PostProcessBlendWeight;

	if (PostProcessSettings != nullptr)
		*PostProcessSettings = std::move(Parms.PostProcessSettings);

}

}


