#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x8C0 - 0x8B8)
// BlueprintGeneratedClass GA_Gun_Sniper_Rifle_Charge_Instant.GA_Gun_Sniper_Rifle_Charge_Instant_C
class UGA_Gun_Sniper_Rifle_Charge_Instant_C : public UGA_Gun_Master_Instant_C
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x8B8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UGA_Gun_Sniper_Rifle_Charge_Instant_C* GetDefaultObj();

	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_Gun_Sniper_Rifle_Charge_Instant(int32 EntryPoint);
};

}

