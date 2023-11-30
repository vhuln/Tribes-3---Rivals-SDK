#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xA0 - 0xA0)
// BlueprintGeneratedClass BTD_HaveAmmoInClip.BTD_HaveAmmoInClip_C
class UBTD_HaveAmmoInClip_C : public UBTDecorator_BlueprintBase
{
public:

	static class UClass* StaticClass();
	static class UBTD_HaveAmmoInClip_C* GetDefaultObj();

	bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn, class AValCharacter* K2Node_DynamicCast_AsVal_Character, bool K2Node_DynamicCast_bSuccess, const struct Valhalla_ValAmmoData& CallFunc_GetCurrentAmmo_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Greater_DoubleDouble_A_ImplicitCast);
};

}


