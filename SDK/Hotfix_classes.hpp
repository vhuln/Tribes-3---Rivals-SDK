#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x240 (0x268 - 0x28)
// Class Hotfix.OnlineHotfixManager
class UOnlineHotfixManager : public UObject
{
public:
	uint8                                        Pad_7C1[0x200];                                    // Fixing Size After Last Property  
	class FString                                OSSName;                                           // 0x228(0x10)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                HotfixManagerClassName;                            // 0x238(0x10)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DebugPrefix;                                       // 0x248(0x10)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UObject*>                       AssetsHotfixedFromIniFiles;                        // 0x258(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UOnlineHotfixManager* GetDefaultObj();

	void StartHotfixProcess();
};

// 0x1D0 (0x1F8 - 0x28)
// Class Hotfix.UpdateManager
class UUpdateManager : public UObject
{
public:
	uint8                                        Pad_7D0[0x60];                                     // Fixing Size After Last Property  
	float                                        UpdateCheckStartDelay;                             // 0x88(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        UpdateCheckCachedResponseDelay;                    // 0x8C(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        HotfixCheckCompleteDelay;                          // 0x90(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        UpdateCheckCompleteDelay;                          // 0x94(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        HotfixAvailabilityCheckCompleteDelay;              // 0x98(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        UpdateCheckAvailabilityCompleteDelay;              // 0x9C(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_7DB[0x4];                                      // Fixing Size After Last Property  
	int32                                        AppSuspendedUpdateCheckTimeSeconds;                // 0xA4(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_7DD[0x8];                                      // Fixing Size After Last Property  
	bool                                         bPlatformEnvironmentDetected;                      // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bInitialUpdateFinished;                            // 0xB1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bCheckHotfixAvailabilityOnly;                      // 0xB2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EUpdateState                      CurrentUpdateState;                                // 0xB3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        WorstNumFilesPendingLoadViewed;                    // 0xB4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_7E7[0x4];                                      // Fixing Size After Last Property  
	enum class EHotfixResult                     LastHotfixResult;                                  // 0xBC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_7ED[0x23];                                     // Fixing Size After Last Property  
	struct CoreUObject_DateTime                  LastUpdateCheck[0x2];                              // 0xE0(0x10)(ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EUpdateCompletionStatus           LastCompletionResult[0x2];                         // 0xF0(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_7F4[0x26];                                     // Fixing Size After Last Property  
	class UEnum*                                 UpdateStateEnum;                                   // 0x118(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UEnum*                                 UpdateCompletionEnum;                              // 0x120(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct Hotfix_UpdateContextDefinition        UpdateContextDefinitionUnknown;                    // 0x128(0x68)(Config, NativeAccessSpecifierPrivate)
	TArray<struct Hotfix_UpdateContextDefinition> UpdateContextDefinitions;                          // 0x190(0x10)(ZeroConstructor, Config, NativeAccessSpecifierPrivate)
	uint8                                        Pad_809[0x58];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UUpdateManager* GetDefaultObj();

};

}


