#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x90 - 0x28)
// Class WwiseSimpleExternalSource.WwiseExternalSourceSettings
class UWwiseExternalSourceSettings : public UObject
{
public:
	struct CoreUObject_SoftObjectPath            MediaInfoTable;                                    // 0x28(0x20)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_SoftObjectPath            ExternalSourceDefaultMedia;                        // 0x48(0x20)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_DirectoryPath             ExternalSourceStagingDirectory;                    // 0x68(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FCB[0x18];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UWwiseExternalSourceSettings* GetDefaultObj();

};

}


