#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0xC8 - 0xA0)
// Class ImgMediaEngine.ImgMediaPlaybackComponent
class UImgMediaPlaybackComponent : public UActorComponent
{
public:
	float                                        LODBias;                                           // 0xA0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18AE[0x24];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UImgMediaPlaybackComponent* GetDefaultObj();

};

}


