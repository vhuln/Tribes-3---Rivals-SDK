#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x50 - 0x48)
// BlueprintGeneratedClass TookDamage_CamMod.TookDamage_CamMod_C
class UTookDamage_CamMod_C : public UCameraModifier
{
public:
	double                                       GainAmount;                                        // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UTookDamage_CamMod_C* GetDefaultObj();

	void BlueprintModifyPostProcess(float DeltaTime, float* PostProcessBlendWeight, struct Engine_PostProcessSettings* PostProcessSettings, const struct CoreUObject_Vector4& CallFunc_MakeVector4_ReturnValue, const struct Engine_PostProcessSettings& K2Node_MakeStruct_PostProcessSettings);
};

}


