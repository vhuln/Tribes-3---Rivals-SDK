#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class AudioGameplay.AudioComponentGroupExtension
class IAudioComponentGroupExtension : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IAudioComponentGroupExtension* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class AudioGameplay.AudioGameplayCondition
class IAudioGameplayCondition : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IAudioGameplayCondition* GetDefaultObj();

	bool ConditionMet_Position(struct CoreUObject_Vector& Position);
	bool ConditionMet();
};

// 0x0 (0x28 - 0x28)
// Class AudioGameplay.AudioGameplayVolumeInteraction
class IAudioGameplayVolumeInteraction : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IAudioGameplayVolumeInteraction* GetDefaultObj();

	void OnListenerExit();
	void OnListenerEnter();
};

// 0x1B0 (0x450 - 0x2A0)
// Class AudioGameplay.AudioComponentGroup
class UAudioComponentGroup : public USceneComponent
{
public:
	uint8                                        Pad_FDE[0x8];                                      // Fixing Size After Last Property  
	FMulticastInlineDelegateProperty_            OnStopped;                                         // 0x2A8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnKilled;                                          // 0x2B8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnVirtualized;                                     // 0x2C8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnUnvirtualized;                                   // 0x2D8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<class UAudioComponent*>               Components;                                        // 0x2E8(0x10)(Edit, ExportObject, ZeroConstructor, EditConst, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<struct AudioExtensions_AudioParameter> ParamsToSet;                                       // 0x2F8(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	TArray<struct AudioExtensions_AudioParameter> PersistentParams;                                  // 0x308(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, Protected, NativeAccessSpecifierProtected)
	TArray<TScriptInterface<class IAudioComponentGroupExtension>> Extensions;                                        // 0x318(0x10)(ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_FF1[0x128];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UAudioComponentGroup* GetDefaultObj();

	void UnsubscribeObject(class UObject* Object);
	void SubscribeToStringParam(class FName ParamName, FDelegateProperty_ Delegate);
	void SubscribeToEvent(class FName EventName, FDelegateProperty_ Delegate);
	void SubscribeToBool(class FName ParamName, FDelegateProperty_ Delegate);
	void StopSound(class USoundBase* Sound, float FadeTime);
	class UAudioComponentGroup* StaticGetOrCreateComponentGroup(class AActor* Actor);
	void SetVolumeMultiplier(float InVolume);
	void SetPitchMultiplier(float InPitch);
	void SetLowPassFilter(float InFrequency);
	void RemoveExtension(TScriptInterface<class IAudioComponentGroupExtension> NewExtension);
	bool IsVirtualized();
	bool IsPlayingAny();
	class FString GetStringParamValue(class FName ParamName);
	float GetFloatParamValue(class FName ParamName);
	bool GetBoolParamValue(class FName ParamName);
	void EnableVirtualization();
	void DisableVirtualization();
	void BroadcastStopAll();
	void BroadcastKill();
	void BroadcastEvent(class FName EventName);
	void AddExternalComponent(class UAudioComponent* ComponentToAdd);
	void AddExtension(TScriptInterface<class IAudioComponentGroupExtension> NewExtension);
};

// 0x8 (0xA8 - 0xA0)
// Class AudioGameplay.AudioGameplayComponent
class UAudioGameplayComponent : public UActorComponent
{
public:
	uint8                                        Pad_100B[0x8];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UAudioGameplayComponent* GetDefaultObj();

};

// 0x48 (0x78 - 0x30)
// Class AudioGameplay.AudioRequirementPreset
class UAudioRequirementPreset : public UDataAsset
{
public:
	struct GameplayTags_GameplayTagQuery         Query;                                             // 0x30(0x48)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAudioRequirementPreset* GetDefaultObj();

};

// 0x30 (0xD8 - 0xA8)
// Class AudioGameplay.AudioParameterComponent
class UAudioParameterComponent : public UAudioGameplayComponent
{
public:
	uint8                                        Pad_1033[0x10];                                    // Fixing Size After Last Property  
	TArray<TWeakObjectPtr<class UAudioComponent>> ActiveComponents;                                  // 0xB8(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<struct AudioExtensions_AudioParameter> Parameters;                                        // 0xC8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UAudioParameterComponent* GetDefaultObj();

	TArray<struct AudioExtensions_AudioParameter> GetParameters();
};

}


