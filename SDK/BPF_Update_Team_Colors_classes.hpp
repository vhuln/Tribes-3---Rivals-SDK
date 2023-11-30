#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPF_Update_Team_Colors.BPF_Update_Team_Colors_C
class UBPF_Update_Team_Colors_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBPF_Update_Team_Colors_C* GetDefaultObj();

	void UpdateTeamColors(class AActor* Instigator, class UFXSystemComponent* ParticleSystem, class UObject* __WorldContext, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsEnemyWith_ReturnValue, class AValCharacter* K2Node_DynamicCast_AsVal_Character, bool K2Node_DynamicCast_bSuccess, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_IsCybrid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2);
};

}


