#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class OnlineSubsystemUtils.AchievementBlueprintLibrary
class UAchievementBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UAchievementBlueprintLibrary* GetDefaultObj();

	void GetCachedAchievementProgress(class UObject* WorldContextObject, class APlayerController* PlayerController, class FName AchievementID, bool* bFoundID, float* Progress);
	void GetCachedAchievementDescription(class UObject* WorldContextObject, class APlayerController* PlayerController, class FName AchievementID, bool* bFoundID, class FText* Title, class FText* LockedDescription, class FText* UnlockedDescription, bool* bHidden);
};

// 0x38 (0x68 - 0x30)
// Class OnlineSubsystemUtils.AchievementQueryCallbackProxy
class UAchievementQueryCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_621[0x18];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UAchievementQueryCallbackProxy* GetDefaultObj();

	class UAchievementQueryCallbackProxy* CacheAchievements(class UObject* WorldContextObject, class APlayerController* PlayerController);
	class UAchievementQueryCallbackProxy* CacheAchievementDescriptions(class UObject* WorldContextObject, class APlayerController* PlayerController);
};

// 0x50 (0x80 - 0x30)
// Class OnlineSubsystemUtils.AchievementWriteCallbackProxy
class UAchievementWriteCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_67D[0x30];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UAchievementWriteCallbackProxy* GetDefaultObj();

	class UAchievementWriteCallbackProxy* WriteAchievementProgress(class UObject* WorldContextObject, class APlayerController* PlayerController, class FName AchievementName, float Progress, int32 UserTag);
};

// 0x48 (0x78 - 0x30)
// Class OnlineSubsystemUtils.ConnectionCallbackProxy
class UConnectionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_6BF[0x28];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UConnectionCallbackProxy* GetDefaultObj();

	class UConnectionCallbackProxy* ConnectToService(class UObject* WorldContextObject, class APlayerController* PlayerController);
};

// 0x68 (0x98 - 0x30)
// Class OnlineSubsystemUtils.CreateSessionCallbackProxy
class UCreateSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_714[0x48];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UCreateSessionCallbackProxy* GetDefaultObj();

	class UCreateSessionCallbackProxy* CreateSession(class UObject* WorldContextObject, class APlayerController* PlayerController, int32 PublicConnections, bool bUseLAN);
};

// 0x48 (0x78 - 0x30)
// Class OnlineSubsystemUtils.DestroySessionCallbackProxy
class UDestroySessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_744[0x28];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UDestroySessionCallbackProxy* GetDefaultObj();

	class UDestroySessionCallbackProxy* DestroySession(class UObject* WorldContextObject, class APlayerController* PlayerController);
};

// 0x50 (0x80 - 0x30)
// Class OnlineSubsystemUtils.EndMatchCallbackProxy
class UEndMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_790[0x30];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UEndMatchCallbackProxy* GetDefaultObj();

	class UEndMatchCallbackProxy* EndMatch(class UObject* WorldContextObject, class APlayerController* PlayerController, TScriptInterface<class ITurnBasedMatchInterface> MatchActor, const class FString& MatchID, enum class EMPMatchOutcome LocalPlayerOutcome, enum class EMPMatchOutcome OtherPlayersOutcome);
};

// 0x48 (0x78 - 0x30)
// Class OnlineSubsystemUtils.EndTurnCallbackProxy
class UEndTurnCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_7BA[0x28];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UEndTurnCallbackProxy* GetDefaultObj();

	class UEndTurnCallbackProxy* EndTurn(class UObject* WorldContextObject, class APlayerController* PlayerController, const class FString& MatchID, TScriptInterface<class ITurnBasedMatchInterface> TurnBasedMatchInterface);
};

// 0x60 (0x90 - 0x30)
// Class OnlineSubsystemUtils.FindSessionsCallbackProxy
class UFindSessionsCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_885[0x40];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UFindSessionsCallbackProxy* GetDefaultObj();

	class FString GetServerName(struct OnlineSubsystemUtils_BlueprintSessionResult& Result);
	int32 GetPingInMs(struct OnlineSubsystemUtils_BlueprintSessionResult& Result);
	int32 GetMaxPlayers(struct OnlineSubsystemUtils_BlueprintSessionResult& Result);
	int32 GetCurrentPlayers(struct OnlineSubsystemUtils_BlueprintSessionResult& Result);
	class UFindSessionsCallbackProxy* FindSessions(class UObject* WorldContextObject, class APlayerController* PlayerController, int32 MaxResults, bool bUseLAN);
};

// 0x58 (0x88 - 0x30)
// Class OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy
class UFindTurnBasedMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_903[0x38];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UFindTurnBasedMatchCallbackProxy* GetDefaultObj();

	class UFindTurnBasedMatchCallbackProxy* FindTurnBasedMatch(class UObject* WorldContextObject, class APlayerController* PlayerController, TScriptInterface<class ITurnBasedMatchInterface> MatchActor, int32 MinPlayers, int32 MaxPlayers, int32 PlayerGroup, bool ShowExistingMatches);
};

// 0x80 (0xA8 - 0x28)
// Class OnlineSubsystemUtils.InAppPurchaseCallbackProxy2
class UInAppPurchaseCallbackProxy2 : public UObject
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_97C[0x60];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UInAppPurchaseCallbackProxy2* GetDefaultObj();

	class UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchaseUnprocessedPurchases(class APlayerController* PlayerController);
	class UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchaseQueryOwned(class APlayerController* PlayerController);
	class UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchase(class APlayerController* PlayerController, struct OnlineSubsystemUtils_InAppPurchaseProductRequest2& ProductRequest);
};

// 0x78 (0xA0 - 0x28)
// Class OnlineSubsystemUtils.InAppPurchaseCheckoutCallbackProxy
class UInAppPurchaseCheckoutCallbackProxy : public UObject
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_9CB[0x58];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UInAppPurchaseCheckoutCallbackProxy* GetDefaultObj();

	class UInAppPurchaseCheckoutCallbackProxy* CreateProxyObjectForInAppPurchaseCheckout(class APlayerController* PlayerController, struct OnlineSubsystemUtils_InAppPurchaseProductRequest2& ProductRequest);
};

// 0x0 (0x28 - 0x28)
// Class OnlineSubsystemUtils.InAppPurchaseFinalizeProxy
class UInAppPurchaseFinalizeProxy : public UObject
{
public:

	static class UClass* StaticClass();
	static class UInAppPurchaseFinalizeProxy* GetDefaultObj();

	class UInAppPurchaseFinalizeProxy* CreateProxyObjectForInAppPurchaseFinalize(struct OnlineSubsystemUtils_InAppPurchaseReceiptInfo2& InAppPurchaseReceipt, class APlayerController* PlayerController);
};

// 0x40 (0x68 - 0x28)
// Class OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy2
class UInAppPurchaseQueryCallbackProxy2 : public UObject
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_A36[0x20];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UInAppPurchaseQueryCallbackProxy2* GetDefaultObj();

	class UInAppPurchaseQueryCallbackProxy2* CreateProxyObjectForInAppPurchaseQuery(class APlayerController* PlayerController, TArray<class FString>& ProductIdentifiers);
};

// 0x60 (0x88 - 0x28)
// Class OnlineSubsystemUtils.InAppPurchaseReceiptsCallbackProxy
class UInAppPurchaseReceiptsCallbackProxy : public UObject
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_AA1[0x40];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UInAppPurchaseReceiptsCallbackProxy* GetDefaultObj();

	class UInAppPurchaseReceiptsCallbackProxy* CreateProxyObjectForInAppPurchaseRestoreOwnedProducts(class APlayerController* PlayerController);
	class UInAppPurchaseReceiptsCallbackProxy* CreateProxyObjectForInAppPurchaseQueryOwnedProducts(class APlayerController* PlayerController);
	class UInAppPurchaseReceiptsCallbackProxy* CreateProxyObjectForInAppPurchaseGetKnownReceipts(class APlayerController* PlayerController);
};

// 0x88 (0xB0 - 0x28)
// Class OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy2
class UInAppPurchaseRestoreCallbackProxy2 : public UObject
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_ADB[0x68];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UInAppPurchaseRestoreCallbackProxy2* GetDefaultObj();

	class UInAppPurchaseRestoreCallbackProxy2* CreateProxyObjectForInAppPurchaseRestore(TArray<struct OnlineSubsystemUtils_InAppPurchaseProductRequest2>& ConsumableProductFlags, class APlayerController* PlayerController);
};

// 0x90 (0x1E88 - 0x1DF8)
// Class OnlineSubsystemUtils.IpConnection
class UIpConnection : public UNetConnection
{
public:
	uint8                                        Pad_AEE[0x74];                                     // Fixing Size After Last Property  
	float                                        SocketErrorDisconnectDelay;                        // 0x1E6C(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_AF0[0x18];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UIpConnection* GetDefaultObj();

};

// 0xB0 (0x8A0 - 0x7F0)
// Class OnlineSubsystemUtils.IpNetDriver
class UIpNetDriver : public UNetDriver
{
public:
	uint8                                        LogPortUnreach : 1;                                // Mask: 0x1, PropSize: 0x10x7F0(0x1)(Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        AllowPlayerPortUnreach : 1;                        // Mask: 0x2, PropSize: 0x10x7F0(0x1)(Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bExitOnBindFailure : 1;                            // Mask: 0x4, PropSize: 0x10x7F0(0x1)(Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_44 : 5;                                     // Fixing Bit-Field Size  
	uint8                                        Pad_AFF[0x3];                                      // Fixing Size After Last Property  
	uint32                                       MaxPortCountToTry;                                 // 0x7F4(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B01[0x4];                                      // Fixing Size After Last Property  
	uint32                                       ServerDesiredSocketReceiveBufferBytes;             // 0x7FC(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint32                                       ServerDesiredSocketSendBufferBytes;                // 0x800(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint32                                       ClientDesiredSocketReceiveBufferBytes;             // 0x804(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint32                                       ClientDesiredSocketSendBufferBytes;                // 0x808(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_B08[0x4];                                      // Fixing Size After Last Property  
	double                                       MaxSecondsInReceive;                               // 0x810(0x8)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        NbPacketsBetweenReceiveTimeTest;                   // 0x818(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        ResolutionConnectionTimeout;                       // 0x81C(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_B0C[0x80];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UIpNetDriver* GetDefaultObj();

};

// 0x168 (0x198 - 0x30)
// Class OnlineSubsystemUtils.JoinSessionCallbackProxy
class UJoinSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_B5A[0x148];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UJoinSessionCallbackProxy* GetDefaultObj();

	class UJoinSessionCallbackProxy* JoinSession(class UObject* WorldContextObject, class APlayerController* PlayerController, struct OnlineSubsystemUtils_BlueprintSessionResult& SearchResult);
};

// 0x0 (0x28 - 0x28)
// Class OnlineSubsystemUtils.LeaderboardBlueprintLibrary
class ULeaderboardBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class ULeaderboardBlueprintLibrary* GetDefaultObj();

	bool WriteLeaderboardInteger(class APlayerController* PlayerController, class FName StatName, int32 StatValue);
};

// 0x40 (0x68 - 0x28)
// Class OnlineSubsystemUtils.LeaderboardFlushCallbackProxy
class ULeaderboardFlushCallbackProxy : public UObject
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_BED[0x20];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class ULeaderboardFlushCallbackProxy* GetDefaultObj();

	class ULeaderboardFlushCallbackProxy* CreateProxyObjectForFlush(class APlayerController* PlayerController, class FName SessionName);
};

// 0x70 (0x98 - 0x28)
// Class OnlineSubsystemUtils.LeaderboardQueryCallbackProxy
class ULeaderboardQueryCallbackProxy : public UObject
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_C38[0x50];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class ULeaderboardQueryCallbackProxy* GetDefaultObj();

	class ULeaderboardQueryCallbackProxy* CreateProxyObjectForIntQuery(class APlayerController* PlayerController, class FName StatName);
};

// 0x38 (0x68 - 0x30)
// Class OnlineSubsystemUtils.LogoutCallbackProxy
class ULogoutCallbackProxy : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_C70[0x18];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class ULogoutCallbackProxy* GetDefaultObj();

	class ULogoutCallbackProxy* Logout(class UObject* WorldContextObject, class APlayerController* PlayerController);
};

// 0x30 (0x2C8 - 0x298)
// Class OnlineSubsystemUtils.OnlineBeacon
class AOnlineBeacon : public AActor
{
public:
	uint8                                        Pad_C7E[0x8];                                      // Fixing Size After Last Property  
	float                                        BeaconConnectionInitialTimeout;                    // 0x2A0(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        BeaconConnectionTimeout;                           // 0x2A4(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNetDriver*                            NetDriver;                                         // 0x2A8(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_C82[0x18];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class AOnlineBeacon* GetDefaultObj();

};

// 0x60 (0x328 - 0x2C8)
// Class OnlineSubsystemUtils.OnlineBeaconClient
class AOnlineBeaconClient : public AOnlineBeacon
{
public:
	class AOnlineBeaconHostObject*               BeaconOwner;                                       // 0x2C8(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNetConnection*                        BeaconConnection;                                  // 0x2D0(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EBeaconConnectionState            ConnectionState;                                   // 0x2D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_C91[0x4F];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class AOnlineBeaconClient* GetDefaultObj();

	void ClientOnConnected();
};

// 0x110 (0x3D8 - 0x2C8)
// Class OnlineSubsystemUtils.OnlineBeaconHost
class AOnlineBeaconHost : public AOnlineBeacon
{
public:
	int32                                        ListenPort;                                        // 0x2C8(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReuseAddressAndPort;                              // 0x2CC(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAuthRequired;                                     // 0x2CD(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_CA5[0x2];                                      // Fixing Size After Last Property  
	uint32                                       MaxAuthTokenSize;                                  // 0x2D0(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_CA6[0x54];                                     // Fixing Size After Last Property  
	TArray<class AOnlineBeaconClient*>           ClientActors;                                      // 0x328(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_CA7[0xA0];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class AOnlineBeaconHost* GetDefaultObj();

};

// 0x28 (0x2C0 - 0x298)
// Class OnlineSubsystemUtils.OnlineBeaconHostObject
class AOnlineBeaconHostObject : public AActor
{
public:
	class FString                                BeaconTypeName;                                    // 0x298(0x10)(ZeroConstructor, Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class AOnlineBeaconClient>       ClientBeaconActorClass;                            // 0x2A8(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class AOnlineBeaconClient*>           ClientActors;                                      // 0x2B0(0x10)(ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class AOnlineBeaconHostObject* GetDefaultObj();

};

// 0x160 (0x188 - 0x28)
// Class OnlineSubsystemUtils.OnlineEngineInterfaceImpl
class UOnlineEngineInterfaceImpl : public UOnlineEngineInterface
{
public:
	TMap<class FName, class FName>               MappedUniqueNetIdTypes;                            // 0x28(0x50)(Config, NativeAccessSpecifierPrivate)
	TArray<class FName>                          CompatibleUniqueNetIdTypes;                        // 0x78(0x10)(ZeroConstructor, Config, NativeAccessSpecifierPrivate)
	class FName                                  VoiceSubsystemNameOverride;                        // 0x88(0x8)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_CE6[0xF8];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UOnlineEngineInterfaceImpl* GetDefaultObj();

};

// 0x18 (0x50 - 0x38)
// Class OnlineSubsystemUtils.OnlinePIESettings
class UOnlinePIESettings : public UDeveloperSettings
{
public:
	bool                                         bOnlinePIEEnabled;                                 // 0x38(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D07[0x7];                                      // Fixing Size After Last Property  
	TArray<struct OnlineSubsystemUtils_PIELoginSettingsInternal> Logins;                                            // 0x40(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UOnlinePIESettings* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class OnlineSubsystemUtils.OnlineServicesEngineInterfaceImpl
class UOnlineServicesEngineInterfaceImpl : public UOnlineEngineInterface
{
public:

	static class UClass* StaticClass();
	static class UOnlineServicesEngineInterfaceImpl* GetDefaultObj();

};

// 0x1B8 (0x1E0 - 0x28)
// Class OnlineSubsystemUtils.OnlineSessionClient
class UOnlineSessionClient : public UOnlineSession
{
public:
	uint8                                        Pad_D47[0x1B0];                                    // Fixing Size After Last Property  
	bool                                         bIsFromInvite;                                     // 0x1D8(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bHandlingDisconnect;                               // 0x1D9(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_D4C[0x6];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UOnlineSessionClient* GetDefaultObj();

};

// 0xC8 (0x3F0 - 0x328)
// Class OnlineSubsystemUtils.PartyBeaconClient
class APartyBeaconClient : public AOnlineBeaconClient
{
public:
	uint8                                        Pad_F68[0x30];                                     // Fixing Size After Last Property  
	class FString                                DestSessionId;                                     // 0x358(0x10)(ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct OnlineSubsystemUtils_PartyReservation PendingReservation;                                // 0x368(0x58)(Protected, NativeAccessSpecifierProtected)
	enum class EClientRequestType                RequestType;                                       // 0x3C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bPendingReservationSent;                           // 0x3C1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bCancelReservation;                                // 0x3C2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_F7D[0x2D];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class APartyBeaconClient* GetDefaultObj();

	void ServerUpdateReservationRequest(const class FString& SessionId, struct OnlineSubsystemUtils_PartyReservation& ReservationUpdate);
	void ServerReservationRequest(const class FString& SessionId, struct OnlineSubsystemUtils_PartyReservation& Reservation);
	void ServerRemoveMemberFromReservationRequest(const class FString& SessionId, struct OnlineSubsystemUtils_PartyReservation& ReservationUpdate);
	void ServerCancelReservationRequest(struct Engine_UniqueNetIdRepl& PartyLeader);
	void ServerAddOrUpdateReservationRequest(const class FString& SessionId, struct OnlineSubsystemUtils_PartyReservation& Reservation);
	void ClientSendReservationUpdates(int32 NumRemainingReservations);
	void ClientSendReservationFull();
	void ClientReservationResponse(enum class EPartyReservationResult ReservationResponse);
	void ClientCancelReservationResponse(enum class EPartyReservationResult ReservationResponse);
};

// 0x78 (0x338 - 0x2C0)
// Class OnlineSubsystemUtils.PartyBeaconHost
class APartyBeaconHost : public AOnlineBeaconHostObject
{
public:
	class UPartyBeaconState*                     State;                                             // 0x2C0(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_FC5[0x60];                                     // Fixing Size After Last Property  
	bool                                         bLogoutOnSessionTimeout;                           // 0x328(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsValidationStrRequired;                          // 0x329(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_FD8[0x2];                                      // Fixing Size After Last Property  
	float                                        SessionTimeoutSecs;                                // 0x32C(0x4)(ZeroConstructor, Transient, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        TravelSessionTimeoutSecs;                          // 0x330(0x4)(ZeroConstructor, Transient, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_FE5[0x4];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class APartyBeaconHost* GetDefaultObj();

};

// 0x78 (0xA0 - 0x28)
// Class OnlineSubsystemUtils.PartyBeaconState
class UPartyBeaconState : public UObject
{
public:
	class FName                                  SessionName;                                       // 0x28(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        NumConsumedReservations;                           // 0x30(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        MaxReservations;                                   // 0x34(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        NumTeams;                                          // 0x38(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        NumPlayersPerTeam;                                 // 0x3C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  TeamAssignmentMethod;                              // 0x40(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        ReservedHostTeamNum;                               // 0x48(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        ForceTeamNum;                                      // 0x4C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bRestrictCrossConsole;                             // 0x50(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_102C[0x7];                                     // Fixing Size After Last Property  
	TArray<class FString>                        PlatformCrossplayRestrictions;                     // 0x58(0x10)(ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected)
	TArray<struct OnlineSubsystemUtils_PartyBeaconCrossplayPlatformMapping> PlatformTypeMapping;                               // 0x68(0x10)(ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected)
	bool                                         bEnableRemovalRequests;                            // 0x78(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bRespectCompetitiveIntegrity;                      // 0x79(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_104A[0x6];                                     // Fixing Size After Last Property  
	TArray<struct OnlineSubsystemUtils_PartyReservation> Reservations;                                      // 0x80(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_104C[0x10];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UPartyBeaconState* GetDefaultObj();

};

// 0x48 (0x78 - 0x30)
// Class OnlineSubsystemUtils.QuitMatchCallbackProxy
class UQuitMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_111C[0x28];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UQuitMatchCallbackProxy* GetDefaultObj();

	class UQuitMatchCallbackProxy* QuitMatch(class UObject* WorldContextObject, class APlayerController* PlayerController, const class FString& MatchID, enum class EMPMatchOutcome Outcome, int32 TurnTimeoutInSeconds);
};

// 0x30 (0x60 - 0x30)
// Class OnlineSubsystemUtils.ShowLoginUICallbackProxy
class UShowLoginUICallbackProxy : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_11ED[0x10];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UShowLoginUICallbackProxy* GetDefaultObj();

	class UShowLoginUICallbackProxy* ShowExternalLoginUI(class UObject* WorldContextObject, class APlayerController* InPlayerController);
};

// 0xF8 (0x420 - 0x328)
// Class OnlineSubsystemUtils.SpectatorBeaconClient
class ASpectatorBeaconClient : public AOnlineBeaconClient
{
public:
	uint8                                        Pad_132D[0x30];                                    // Fixing Size After Last Property  
	class FString                                DestSessionId;                                     // 0x358(0x10)(ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct OnlineSubsystemUtils_SpectatorReservation PendingReservation;                                // 0x368(0x88)(Protected, NativeAccessSpecifierProtected)
	enum class ESpectatorClientRequestType       RequestType;                                       // 0x3F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bPendingReservationSent;                           // 0x3F1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bCancelReservation;                                // 0x3F2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_133F[0x2D];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class ASpectatorBeaconClient* GetDefaultObj();

	void ServerReservationRequest(const class FString& SessionId, struct OnlineSubsystemUtils_SpectatorReservation& Reservation);
	void ServerCancelReservationRequest(struct Engine_UniqueNetIdRepl& Spectator);
	void ClientSendReservationUpdates(int32 NumRemainingReservations);
	void ClientSendReservationFull();
	void ClientReservationResponse(enum class ESpectatorReservationResult ReservationResponse);
	void ClientCancelReservationResponse(enum class ESpectatorReservationResult ReservationResponse);
};

// 0x78 (0x338 - 0x2C0)
// Class OnlineSubsystemUtils.SpectatorBeaconHost
class ASpectatorBeaconHost : public AOnlineBeaconHostObject
{
public:
	class USpectatorBeaconState*                 State;                                             // 0x2C0(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_137F[0x60];                                    // Fixing Size After Last Property  
	bool                                         bLogoutOnSessionTimeout;                           // 0x328(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsValidationStrRequired;                          // 0x329(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1389[0x2];                                     // Fixing Size After Last Property  
	float                                        SessionTimeoutSecs;                                // 0x32C(0x4)(ZeroConstructor, Transient, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        TravelSessionTimeoutSecs;                          // 0x330(0x4)(ZeroConstructor, Transient, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_138A[0x4];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class ASpectatorBeaconHost* GetDefaultObj();

};

// 0x38 (0x60 - 0x28)
// Class OnlineSubsystemUtils.SpectatorBeaconState
class USpectatorBeaconState : public UObject
{
public:
	class FName                                  SessionName;                                       // 0x28(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        NumConsumedReservations;                           // 0x30(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        MaxReservations;                                   // 0x34(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bRestrictCrossConsole;                             // 0x38(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_13D8[0x7];                                     // Fixing Size After Last Property  
	TArray<struct OnlineSubsystemUtils_SpectatorReservation> Reservations;                                      // 0x40(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_13D9[0x10];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class USpectatorBeaconState* GetDefaultObj();

};

// 0x0 (0x328 - 0x328)
// Class OnlineSubsystemUtils.TestBeaconClient
class ATestBeaconClient : public AOnlineBeaconClient
{
public:

	static class UClass* StaticClass();
	static class ATestBeaconClient* GetDefaultObj();

	void ServerPong();
	void ClientPing();
};

// 0x0 (0x2C0 - 0x2C0)
// Class OnlineSubsystemUtils.TestBeaconHost
class ATestBeaconHost : public AOnlineBeaconHostObject
{
public:

	static class UClass* StaticClass();
	static class ATestBeaconHost* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class OnlineSubsystemUtils.TurnBasedBlueprintLibrary
class UTurnBasedBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UTurnBasedBlueprintLibrary* GetDefaultObj();

	void RegisterTurnBasedMatchInterfaceObject(class UObject* WorldContextObject, class APlayerController* PlayerController, class UObject* Object);
	void GetPlayerDisplayName(class UObject* WorldContextObject, class APlayerController* PlayerController, const class FString& MatchID, int32 PlayerIndex, class FString* PlayerDisplayName);
	void GetMyPlayerIndex(class UObject* WorldContextObject, class APlayerController* PlayerController, const class FString& MatchID, int32* PlayerIndex);
	void GetIsMyTurn(class UObject* WorldContextObject, class APlayerController* PlayerController, const class FString& MatchID, bool* bIsMyTurn);
};

// 0x60 (0x960 - 0x900)
// Class OnlineSubsystemUtils.VoipListenerSynthComponent
class UVoipListenerSynthComponent : public USynthComponent
{
public:
	uint8                                        Pad_16B0[0x60];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UVoipListenerSynthComponent* GetDefaultObj();

	bool IsIdling();
};

}


