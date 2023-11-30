#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0xD0 - 0x88)
// Class ImgMedia.ImgMediaSource
class UImgMediaSource : public UBaseMediaSource
{
public:
	bool                                         IsPathRelativeToProjectRoot;                       // 0x88(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B22[0x3];                                     // Fixing Size After Last Property  
	struct CoreUObject_FrameRate                 FrameRateOverride;                                 // 0x8C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B2C[0x4];                                     // Fixing Size After Last Property  
	class FString                                ProxyOverride;                                     // 0x98(0x10)(Edit, BlueprintVisible, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFillGapsInSequence;                               // 0xA8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B35[0x7];                                     // Fixing Size After Last Property  
	struct CoreUObject_DirectoryPath             SequencePath;                                      // 0xB0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1B37[0x10];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UImgMediaSource* GetDefaultObj();

	void SetTokenizedSequencePath(const class FString& Path);
	void SetSequencePath(const class FString& Path);
	void SetMipLevelDistance(float Distance);
	void RemoveTargetObject(class AActor* InActor);
	void RemoveGlobalCamera(class AActor* InActor);
	class FString GetSequencePath();
	void GetProxies(TArray<class FString>* OutProxies);
	void AddTargetObject(class AActor* InActor);
	void AddGlobalCamera(class AActor* InActor);
};

}


