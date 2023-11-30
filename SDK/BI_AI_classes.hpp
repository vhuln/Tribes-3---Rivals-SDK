#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BI_AI.BI_AI_C
class IBI_AI_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBI_AI_C* GetDefaultObj();

	void GetFacingDirection(struct CoreUObject_Vector* Direction);
	void GetMuzzleLocation(struct CoreUObject_Vector* MuzzleLocation);
	void GetThreatSystem(class UValThreatComponent** ThreatSystem);
	void GetAbilitySystem(class UAbilitySystemComponent** AbilitySystem);
	void GetAIMuzzle(class USceneComponent** Muzzle);
};

}


