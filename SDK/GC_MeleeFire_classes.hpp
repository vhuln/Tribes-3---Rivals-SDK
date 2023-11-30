#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x40 - 0x40)
// BlueprintGeneratedClass GC_MeleeFire.GC_MeleeFire_C
class UGC_MeleeFire_C : public UGameplayCueNotify_Static
{
public:

	static class UClass* StaticClass();
	static class UGC_MeleeFire_C* GetDefaultObj();

	bool OnExecute(class AActor* MyTarget, struct GameplayAbilities_GameplayCueParameters& Parameters, bool CallFunc_OnExecute_ReturnValue);
};

}


