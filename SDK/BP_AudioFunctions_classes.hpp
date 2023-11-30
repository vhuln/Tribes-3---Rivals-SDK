#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BP_AudioFunctions.BP_AudioFunctions_C
class UBP_AudioFunctions_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBP_AudioFunctions_C* GetDefaultObj();

	void Set_Play_Sound(class UAudioComponent* Aud_Comp, class USoundBase* Sound, class UObject* __WorldContext);
};

}


