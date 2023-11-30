#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x40 - 0x40)
// BlueprintGeneratedClass GC_AR_Exotic_Explode.GC_AR_Exotic_Explode_C
class UGC_AR_Exotic_Explode_C : public UGameplayCueNotify_Static
{
public:

	static class UClass* StaticClass();
	static class UGC_AR_Exotic_Explode_C* GetDefaultObj();

	bool OnExecute(class AActor* MyTarget, struct GameplayAbilities_GameplayCueParameters& Parameters, const struct CoreUObject_Vector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_OnExecute_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue);
};

}


