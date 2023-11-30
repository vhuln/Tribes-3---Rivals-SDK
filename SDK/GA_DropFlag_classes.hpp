#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x608 - 0x600)
// BlueprintGeneratedClass GA_DropFlag.GA_DropFlag_C
class UGA_DropFlag_C : public UValGameplayAbility
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x600(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UGA_DropFlag_C* GetDefaultObj();

	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_DropFlag(int32 EntryPoint, const struct GameplayAbilities_GameplayAbilityActorInfo& CallFunc_GetActorInfo_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class ATopGameState_TopazCTF* K2Node_DynamicCast_AsTop_Game_State_Topaz_CTF, bool K2Node_DynamicCast_bSuccess, class AValCharacter* K2Node_DynamicCast_AsVal_Character, bool K2Node_DynamicCast_bSuccess_1, TMap<class AValCharacter*, class ATopPickup_Flag*> CallFunc_GetFlagHolders_ReturnValue, class ATopPickup_Flag* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_K2_HasAuthority_ReturnValue);
};

}


