#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x88 (0x3B0 - 0x328)
// Class Lobby.LobbyBeaconClient
class ALobbyBeaconClient : public AOnlineBeaconClient
{
public:
	class ALobbyBeaconState*                     LobbyState;                                        // 0x328(0x8)(Net, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ALobbyBeaconPlayerState*               PlayerState;                                       // 0x330(0x8)(Net, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1001[0x1];                                     // Fixing Size After Last Property  
	enum class ELobbyBeaconJoinState             LobbyJoinServerState;                              // 0x339(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1002[0x76];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class ALobbyBeaconClient* GetDefaultObj();

	void ServerSetPartyOwner(struct Engine_UniqueNetIdRepl& InUniqueId, struct Engine_UniqueNetIdRepl& InPartyOwnerId);
	void ServerNotifyJoiningServer();
	void ServerLoginPlayer(const class FString& InSessionId, struct Engine_UniqueNetIdRepl& InUniqueId, const class FString& UrlString);
	void ServerKickPlayer(struct Engine_UniqueNetIdRepl& PlayerToKick, class FText& Reason);
	void ServerDisconnectFromLobby();
	void ServerCheat(const class FString& Msg);
	void ClientWasKicked(class FText& KickReason);
	void ClientSetInviteFlags(struct CoreOnline_JoinabilitySettings& Settings);
	void ClientPlayerLeft(struct Engine_UniqueNetIdRepl& InUniqueId);
	void ClientPlayerJoined(class FText& NewPlayerName, struct Engine_UniqueNetIdRepl& InUniqueId);
	void ClientLoginComplete(struct Engine_UniqueNetIdRepl& InUniqueId, bool bWasSuccessful);
	void ClientJoinGame();
	void ClientAckJoiningServer();
};

// 0x38 (0x2F8 - 0x2C0)
// Class Lobby.LobbyBeaconHost
class ALobbyBeaconHost : public AOnlineBeaconHostObject
{
public:
	uint8                                        Pad_1015[0x8];                                     // Fixing Size After Last Property  
	TSoftClassPtr<class ALobbyBeaconState>       LobbyStateClass;                                   // 0x2C8(0x28)(Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ALobbyBeaconState*                     LobbyState;                                        // 0x2F0(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class ALobbyBeaconHost* GetDefaultObj();

};

// 0xD0 (0x368 - 0x298)
// Class Lobby.LobbyBeaconPlayerState
class ALobbyBeaconPlayerState : public AInfo
{
public:
	class FText                                  DisplayName;                                       // 0x298(0x18)(Net, NativeAccessSpecifierPublic)
	struct Engine_UniqueNetIdRepl                UniqueID;                                          // 0x2B0(0x30)(Net, RepNotify, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Engine_UniqueNetIdRepl                PartyOwnerUniqueId;                                // 0x2E0(0x30)(Net, RepNotify, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInLobby;                                          // 0x310(0x1)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_102D[0x7];                                     // Fixing Size After Last Property  
	class AOnlineBeaconClient*                   ClientActor;                                       // 0x318(0x8)(Net, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_102E[0x48];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class ALobbyBeaconPlayerState* GetDefaultObj();

	void OnRep_UniqueId();
	void OnRep_PartyOwner();
	void OnRep_InLobby();
};

// 0x1A8 (0x440 - 0x298)
// Class Lobby.LobbyBeaconState
class ALobbyBeaconState : public AInfo
{
public:
	int32                                        MaxPlayers;                                        // 0x298(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1042[0x4];                                     // Fixing Size After Last Property  
	TSubclassOf<class ALobbyBeaconPlayerState>   LobbyBeaconPlayerStateClass;                       // 0x2A0(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1044[0x8];                                     // Fixing Size After Last Property  
	bool                                         bLobbyStarted;                                     // 0x2B0(0x1)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1046[0x3];                                     // Fixing Size After Last Property  
	float                                        WaitForPlayersTimeRemaining;                       // 0x2B4(0x4)(Net, ZeroConstructor, Config, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct Lobby_LobbyPlayerStateInfoArray       Players;                                           // 0x2B8(0x120)(Net, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1047[0x68];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class ALobbyBeaconState* GetDefaultObj();

	void OnRep_WaitForPlayersTimeRemaining();
	void OnRep_LobbyStarted();
};

}


