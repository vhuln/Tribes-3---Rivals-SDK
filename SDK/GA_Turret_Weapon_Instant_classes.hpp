#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x8C0 - 0x8B8)
// BlueprintGeneratedClass GA_Turret_Weapon_Instant.GA_Turret_Weapon_Instant_C
class UGA_Turret_Weapon_Instant_C : public UGA_Gun_Master_Instant_C
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x8B8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UGA_Turret_Weapon_Instant_C* GetDefaultObj();

	bool ValCheckCost(const struct GameplayAbilities_GameplayAbilitySpecHandle& Handle, struct GameplayAbilities_GameplayAbilityActorInfo& ActorInfo);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_Turret_Weapon_Instant(int32 EntryPoint);
};

}


