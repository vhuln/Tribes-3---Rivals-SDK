#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x738 - 0x738)
// BlueprintGeneratedClass BP_LootCrate_ScavengerMastery.BP_LootCrate_ScavengerMastery_C
class ABP_LootCrate_ScavengerMastery_C : public ABP_Loot_Crate_Master_Dungeon_UI_Inventory_C
{
public:

	static class UClass* StaticClass();
	static class ABP_LootCrate_ScavengerMastery_C* GetDefaultObj();

	enum class EInteractionFailureType DetermineInteractEligibility(class AValCharacter* Initiator, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue);
};

}


