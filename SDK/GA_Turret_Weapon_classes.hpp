#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB (0x788 - 0x77D)
// BlueprintGeneratedClass GA_Turret_Weapon.GA_Turret_Weapon_C
class UGA_Turret_Weapon_C : public UGA_Gun_Master_C
{
public:
	uint8                                        Pad_3396[0x3];                                     // Fixing Size After Last Property  
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x780(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UGA_Turret_Weapon_C* GetDefaultObj();

	bool ValCheckCost(const struct GameplayAbilities_GameplayAbilitySpecHandle& Handle, struct GameplayAbilities_GameplayAbilityActorInfo& ActorInfo);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_Turret_Weapon(int32 EntryPoint);
};

}


