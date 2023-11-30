#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x70 - 0x28)
// Class BackendServices.BackendService
class UBackendService : public UObject
{
public:
	uint8                                        Pad_800[0x10];                                     // Fixing Size After Last Property  
	class UBSInternalInterface*                  InternalSvc;                                       // 0x38(0x8)(ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBSPubSubInterface*                    PubSubInterface;                                   // 0x40(0x8)(ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBSScripting*                          ScriptingInterface;                                // 0x48(0x8)(ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                GameVersion;                                       // 0x50(0x10)(ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UBSComponent*>                  AllComponents;                                     // 0x60(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UBackendService* GetDefaultObj();

	class UBSScripting* GetScriptingInterface();
	class UBSPubSubInterface* GetPubSubInterface();
	class FString GetGameVersion();
};

// 0x0 (0x28 - 0x28)
// Class BackendServices.BackendServiceOwner
class IBackendServiceOwner : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBackendServiceOwner* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class BackendServices.BSBlueprintFunctionLibrary
class UBSBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBSBlueprintFunctionLibrary* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class BackendServices.BSComponent
class UBSComponent : public UObject
{
public:
	bool                                         bEnabled;                                          // 0x28(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_827[0x7];                                      // Fixing Size After Last Property  
	class UBSInternalInterface*                  InternalSvc;                                       // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UBSComponent* GetDefaultObj();

};

// 0x68 (0x90 - 0x28)
// Class BackendServices.BSInternalInterface
class UBSInternalInterface : public UObject
{
public:
	uint8                                        Pad_87D[0x8];                                      // Fixing Size After Last Property  
	class FString                                UnityProjectId;                                    // 0x30(0x10)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                UnityEnvironmentId;                                // 0x40(0x10)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                UnityEnvironmentName;                              // 0x50(0x10)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                MultiplayFleetId;                                  // 0x60(0x10)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                ClanforgeAccessKey;                                // 0x70(0x10)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                ClanforgeSecretKey;                                // 0x80(0x10)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UBSInternalInterface* GetDefaultObj();

	class FString GetUnityProjectId();
	class FString GetUnityEnvironmentName();
	class FString GetUnityEnvironmentId();
	class FString GetMultiplayFleetId();
	class FString GetClanforgeSecretKey();
	class FString GetClanforgeAccessKey();
};

// 0xB8 (0xF0 - 0x38)
// Class BackendServices.BSPubSubInterface
class UBSPubSubInterface : public UBSComponent
{
public:
	FMulticastInlineDelegateProperty_            DelegatePubSubConnectStateUpdated;                 // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	enum class EPubSubConnectState               ConnectState;                                      // 0x48(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B4[0x7];                                      // Fixing Size After Last Property  
	class FString                                ConnectionId;                                      // 0x50(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B7[0x10];                                     // Fixing Size After Last Property  
	struct BackendServices_PubSubConnectData     PubSubConnectData;                                 // 0x70(0x18)(NativeAccessSpecifierPrivate)
	uint8                                        Pad_8B9[0x68];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UBSPubSubInterface* GetDefaultObj();

	bool IsConnected();
	void InitiatePubSubConnect();
	void BS_PubSubConnectStateUpdated__DelegateSignature(enum class EPubSubConnectState NewState, enum class EPubSubDisconnectReason DisconnectReason);
};

// 0x0 (0x38 - 0x38)
// Class BackendServices.BSScripting
class UBSScripting : public UBSComponent
{
public:

	static class UClass* StaticClass();
	static class UBSScripting* GetDefaultObj();

	bool PostLoginHook(const class FString& GameVersion, FDelegateProperty_& ResultDelegate);
	void OnPostLoginHookComplete__DelegateSignature(bool bSuccess, struct BackendServices_PostLoginHookResponse& ResponseData, class FText& Error);
};

}


