#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class PlatformInterface.PlatformInterfaceCustomDataLibrary
class UPlatformInterfaceCustomDataLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UPlatformInterfaceCustomDataLibrary* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class PlatformInterface.PlatformInterfaceLibrary
class UPlatformInterfaceLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UPlatformInterfaceLibrary* GetDefaultObj();

	struct CoreUObject_Guid GetPlayerUuidForPlayerState(class APlayerState* PlayerState);
	struct CoreUObject_Guid GetPlayerUuidForController(class AController* Controller);
	class APlayerState* GetPlayerStateForController(class AController* Controller);
	class UPlayer* GetNetPlayerForController(class AController* Controller);
	class APlayerController* GetLocalPlayerController(class UObject* WorldContextObject, int32 PlayerIndex);
	enum class EPlatformInterfaceType GetInterfaceType(class UObject* WorldContextObject);
};

// 0x80 (0xB0 - 0x30)
// Class PlatformInterface.PlatformInterfaceDataAsset
class UPlatformInterfaceDataAsset : public UPrimaryDataAsset
{
public:
	bool                                         Enabled;                                           // 0x30(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_BA3[0x3];                                      // Fixing Size After Last Property  
	int32                                        ItemId;                                            // 0x34(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, DuplicateTransient, IsPlainOldData, NoDestructor, AssetRegistrySearchable, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FText                                  DisplayName;                                       // 0x38(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, DuplicateTransient, Protected, NativeAccessSpecifierProtected)
	class FText                                  Description;                                       // 0x50(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, DuplicateTransient, Protected, NativeAccessSpecifierProtected)
	TSoftObjectPtr<class UTexture2D>             Icon;                                              // 0x68(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct GameplayTags_GameplayTagContainer     GameplayTags;                                      // 0x90(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UPlatformInterfaceDataAsset* GetDefaultObj();

};

// 0x58 (0x80 - 0x28)
// Class PlatformInterface.PlatformXPTable
class UPlatformXPTable : public UObject
{
public:
	TMap<int32, int32>                           XPLevels;                                          // 0x28(0x50)(Protected, NativeAccessSpecifierProtected)
	int32                                        MinXPLevel;                                        // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        TableId;                                           // 0x7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UPlatformXPTable* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class PlatformInterface.PlatformInterfaceObject
class UPlatformInterfaceObject : public UObject
{
public:
	uint8                                        Pad_BC0[0x10];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UPlatformInterfaceObject* GetDefaultObj();

};

}


