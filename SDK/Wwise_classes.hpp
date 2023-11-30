#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x4B0 - 0x480)
// Class Wwise.WwiseAudioLinkComponent
class UWwiseAudioLinkComponent : public UAkComponent
{
public:
	uint8                                        Pad_4F9[0x8];                                      // Fixing Size After Last Property  
	class UWwiseAudioLinkSettings*               Settings;                                          // 0x488(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                            Sound;                                             // 0x490(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAutoPlay;                                         // 0x498(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4FB[0x7];                                      // Fixing Size After Last Property  
	class UAudioComponent*                       AudioComponent;                                    // 0x4A0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4FC[0x8];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UWwiseAudioLinkComponent* GetDefaultObj();

};

// 0x50 (0x88 - 0x38)
// Class Wwise.WwiseAudioLinkSettings
class UWwiseAudioLinkSettings : public UAudioLinkSettingsAbstract
{
public:
	TSoftObjectPtr<class UAkAudioEvent>          StartEvent;                                        // 0x38(0x28)(Edit, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldClearBufferOnReceipt;                       // 0x60(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_50F[0x3];                                      // Fixing Size After Last Property  
	float                                        ProducerToConsumerBufferRatio;                     // 0x64(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InitialSilenceFillRatio;                           // 0x68(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_513[0x14];                                     // Fixing Size After Last Property  
	class UAkAudioEvent*                         StartEventResolved;                                // 0x80(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UWwiseAudioLinkSettings* GetDefaultObj();

};

}


