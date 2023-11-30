#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0xF8 - 0xE8)
// Class Topaz.TopActivityTracker_Accolade
class UTopActivityTracker_Accolade : public UValActivityTracker
{
public:
	enum class EAccoladeType                     AccoladeToTrack;                                   // 0xE8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bPlayerSpeedRequirements;                          // 0xE9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A24[0x2];                                      // Fixing Size After Last Property  
	int32                                        MinSpeedKPH;                                       // 0xEC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        MaxSpeedKPH;                                       // 0xF0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A31[0x4];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UTopActivityTracker_Accolade* GetDefaultObj();

	void OnAccolade(enum class EAccoladeType AccoladeType);
};

// 0x28 (0x110 - 0xE8)
// Class Topaz.TopActivityTracker_Sequence
class UTopActivityTracker_Sequence : public UValActivityTracker
{
public:
	TArray<struct Valhalla_MissionSequenceElement> MissionSequence;                                   // 0xE8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class UValActivityTracker*                   ActiveSequenceTracker;                             // 0xF8(0x8)(ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        CurrentSequenceCount;                              // 0x100(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        CachedProgress;                                    // 0x104(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        PendingProgress;                                   // 0x108(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         UseInventoryProgress;                              // 0x10C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_B06[0x3];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UTopActivityTracker_Sequence* GetDefaultObj();

	void OnTrackerProgress(int32 Count);
	void OnMissionTimeout();
	void OnMissionProgress();
	int32 GetTotalRequiredForSequenceElement(int32 SequenceIndex);
	bool GetSequenceElementAtIndex(struct Valhalla_MissionSequenceElement* SequenceElement, int32& Index);
	int32 GetSequenceElementAtCount(int32 ProgressCount);
	int32 GetProgressInCurrentSequence();
	bool GetCurrentSequenceElement(struct Valhalla_MissionSequenceElement* SequenceElement, int32* Index);
	int32 GetCachedProgress();
};

// 0x0 (0x110 - 0x110)
// Class Topaz.TopActivityTracker_Custom
class UTopActivityTracker_Custom : public UTopActivityTracker_Sequence
{
public:

	static class UClass* StaticClass();
	static class UTopActivityTracker_Custom* GetDefaultObj();

};

// 0x10 (0xF8 - 0xE8)
// Class Topaz.TopActivityTracker_Location
class UTopActivityTracker_Location : public UValActivityTracker
{
public:
	int32                                        SecondsRequiredInLocation;                         // 0xE8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_B66[0x4];                                      // Fixing Size After Last Property  
	struct Engine_TimerHandle                    LocationTimerHandle;                               // 0xF0(0x8)(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UTopActivityTracker_Location* GetDefaultObj();

	void OnTimeElapsed();
	void OnAreaExited(const struct GameplayTags_GameplayTag& AreaTag);
	void OnAreaEntered(const struct GameplayTags_GameplayTag& AreaTag);
};

// 0x68 (0x4E8 - 0x480)
// Class Topaz.TopBotSpawnVolume
class ATopBotSpawnVolume : public AValBotSpawnVolume
{
public:
	FMulticastInlineDelegateProperty_            OnBotsRefreshed;                                   // 0x480(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_BF4[0x8];                                      // Fixing Size After Last Property  
	bool                                         bSpawnsBots;                                       // 0x498(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_BF7[0x7];                                      // Fixing Size After Last Property  
	TArray<TWeakObjectPtr<class ATopBotSpawner>> BotSpawners;                                       // 0x4A0(0x10)(ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<TScriptInterface<class ITopGeneratorPowered>> GeneratorPoweredActors;                            // 0x4B0(0x10)(ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class ATopGenerator>          OwningGenerator;                                   // 0x4C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<TWeakObjectPtr<class AValCharacter>>  OverlappedCharacters;                              // 0x4C8(0x10)(ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	struct Valhalla_BotResetTimerData            RefreshTimer;                                      // 0x4D8(0x10)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class ATopBotSpawnVolume* GetDefaultObj();

	void StartBotRefreshTimer();
	void RefreshBots();
	void RefreshBot(class UBotInitData* BotToRefresh);
	bool IsTimerActive(struct Valhalla_BotResetTimerData& Timer);
	float GetTimeRemaining(struct Valhalla_BotResetTimerData& Timer);
};

// 0x20 (0x2B8 - 0x298)
// Class Topaz.TopBotSpawner
class ATopBotSpawner : public AActor
{
public:
	class UValBotData*                           BotToSpawn;                                        // 0x298(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBotInitData*                          SpawnedBot;                                        // 0x2A0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnBotSpawnedDel;                                   // 0x2A8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ATopBotSpawner* GetDefaultObj();

	bool Spawn(class UValBotData* ConfigData);
	void OnBotDataAvailable();
};

// 0x30 (0xA0 - 0x70)
// Class Topaz.TopBTService_ResetValueOnDeactivate
class UTopBTService_ResetValueOnDeactivate : public UBTService
{
public:
	struct AIModule_BlackboardKeySelector        KeyToSet;                                          // 0x70(0x28)(Edit, Protected, NativeAccessSpecifierProtected)
	bool                                         ValueToSet;                                        // 0x98(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_C7A[0x7];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UTopBTService_ResetValueOnDeactivate* GetDefaultObj();

};

// 0x0 (0x29D8 - 0x29D8)
// Class Topaz.TopCharacterBase
class ATopCharacterBase : public AValCharacter
{
public:

	static class UClass* StaticClass();
	static class ATopCharacterBase* GetDefaultObj();

};

// 0x8 (0x29E0 - 0x29D8)
// Class Topaz.TopCharacter
class ATopCharacter : public ATopCharacterBase
{
public:
	class UTopOverlayComponent*                  TopOverlayComponent;                               // 0x29D8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class ATopCharacter* GetDefaultObj();

	void ToggleThirdPerson();
	void RouteHistoryCheat(const class FString& Command);
};

// 0x0 (0x700 - 0x700)
// Class Topaz.TopCharacterOverlayComponent
class UTopCharacterOverlayComponent : public UValCharacterOverlayComponent
{
public:

	static class UClass* StaticClass();
	static class UTopCharacterOverlayComponent* GetDefaultObj();

};

// 0x0 (0x328 - 0x328)
// Class Topaz.TopCharacterOverlay
class UTopCharacterOverlay : public UValCharacterOverlay
{
public:

	static class UClass* StaticClass();
	static class UTopCharacterOverlay* GetDefaultObj();

};

// 0x0 (0xD0 - 0xD0)
// Class Topaz.TopCheatComponent
class UTopCheatComponent : public UValCheatComponent
{
public:

	static class UClass* StaticClass();
	static class UTopCheatComponent* GetDefaultObj();

	void StartDropshipEvac();
	void StartDropshipDeploy(float DropHeight);
	void SetClassSlotItem(int32 Type, int32 SlotId, int32 ItemId);
	void ServerStartDropshipEvac();
	void ServerStartDropshipDeploy(float DropHeight);
	void ServerSetClassSlotItem(int32 Type, int32 SlotId, int32 ItemId);
	void ServerSelectPerkForSlot(const struct GameplayTags_GameplayTag& PerkSlot, int32 PerkId);
	void ServerEndMatch();
	void ServerDisableEnergyRegen(bool bDisabled);
	void ServerDisableEnergyDrain(bool bValue);
	void ServerChangeCharacterClass(const struct GameplayTags_GameplayTag& CharacterTag);
	void ServerAddScoreToTeam(int32 ScoreToGive);
	void ServerAddPerkUnlockSlot(const struct GameplayTags_GameplayTag& PerkSlot);
	void SelectPerkForSlot(class FName PerkSlot, int32 PerkId);
	void RouteHistory(const class FString& Command);
	void EndMatch();
	void DisableEnergyRegen(bool bDisabled);
	void DisableEnergyDrain(bool bValue);
	void ChangeCharacterClass(class FName ClassName);
	void AddScoreToTeam(int32 ScoreToGive);
	void AddPerkUnlockSlot(class FName PerkSlot);
};

// 0x10 (0x2A8 - 0x298)
// Class Topaz.TopDropShip
class ATopDropShip : public AActor
{
public:
	class UTopTeamPhaseManager*                  TeamPhaseManager;                                  // 0x298(0x8)(ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AValPlayerStart*                       PlayerDropSpot;                                    // 0x2A0(0x8)(ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class ATopDropShip* GetDefaultObj();

	void SetPlayerDropSpot(class AValPlayerStart* NewPlayerDropSpotActor);
	void OnTeamPhaseChangedEvent(const struct GameplayTags_GameplayTag& NextPhase, float EndTime);
	void OnTeamPhaseChanged(const struct GameplayTags_GameplayTag& NextPhase, float EndTime);
	void OnTeamEmptyEvent();
	void OnTeamEmpty(class ATeamState* TeamState);
	class AValPlayerStart* GetPlayerDropSpotActor();
};

// 0x0 (0x1F8 - 0x1F8)
// Class Topaz.TopEnvQueryTest_Slope
class UTopEnvQueryTest_Slope : public UEnvQueryTest
{
public:

	static class UClass* StaticClass();
	static class UTopEnvQueryTest_Slope* GetDefaultObj();

};

// 0x0 (0x298 - 0x298)
// Class Topaz.TopEvacLandingSpot
class ATopEvacLandingSpot : public AActor
{
public:

	static class UClass* StaticClass();
	static class ATopEvacLandingSpot* GetDefaultObj();

};

// 0x8 (0x2A0 - 0x298)
// Class Topaz.TopEvacTerminal
class ATopEvacTerminal : public AActor
{
public:
	class ATopEvacLandingSpot*                   AssociatedLandingSpot;                             // 0x298(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ATopEvacTerminal* GetDefaultObj();

};

// 0x0 (0x108 - 0x108)
// Class Topaz.TopFlagMovementComponent
class UTopFlagMovementComponent : public UMovementComponent
{
public:

	static class UClass* StaticClass();
	static class UTopFlagMovementComponent* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Topaz.TopFunctionLibrary
class UTopFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UTopFunctionLibrary* GetDefaultObj();

	class FString TestFunction();
	bool IsSequenceMission(class UValActivityPlayerInstance* ActivityInstance);
	float GetSpeedInKPH(float Speed);
	void GetProgressInSequence(class UObject* WorldContextObject, class UValActivityPlayerInstance* ActivityInstance, int32* OutProgress);
	bool GetMissionSequence(class UObject* WorldContextObject, class UValActivityPlayerInstance* ActivityInstance, TArray<struct Valhalla_MissionSequenceElement>* OutSequence, int32* OutIndex);
	class UValActivityPlayerInstance* GetMissionByTag(class UObject* WorldContextObject, struct GameplayTags_GameplayTag& TagToFind);
	bool GetCurrentSequenceElement(class UObject* WorldContextObject, class UValActivityPlayerInstance* ActivityInstance, struct Valhalla_MissionSequenceElement* OutElement, int32* OutIndex);
};

// 0x130 (0xFE0 - 0xEB0)
// Class Topaz.TopGameMode
class ATopGameMode : public AValGameMode
{
public:
	TSubclassOf<class ATopLooseLootPickup>       LooseLootClass;                                    // 0xEB0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class AValPlayerStart*>               PlayerStarts;                                      // 0xEB8(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class FName                                  DefaultPlayerStartTag;                             // 0xEC8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  GeneratedRoomPlayerStartTag;                       // 0xED0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bBotsDropDeathCrates;                              // 0xED8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_15B8[0x3];                                     // Fixing Size After Last Property  
	int32                                        ScrubDropNumber;                                   // 0xEDC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<TSubclassOf<class AValPickup>, int32>   ScrubDropContents;                                 // 0xEE0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	int32                                        TimeUntilSpectate;                                 // 0xF30(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_15C1[0x4];                                     // Fixing Size After Last Property  
	TSubclassOf<class AValDungeonPortal>         DungeonPortalClass;                                // 0xF38(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        NumPortalsToSpawn;                                 // 0xF40(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        PortalsAssignedPerTeam;                            // 0xF44(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        OuterDistanceThreshold;                            // 0xF48(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_15D4[0x4];                                     // Fixing Size After Last Property  
	TMap<struct CoreUObject_Vector, TWeakObjectPtr<class AValDungeonPortal>> ValidPortalLocations;                              // 0xF50(0x50)(Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<class AValDungeonPortal*>             ActiveDungeonPortals;                              // 0xFA0(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TSoftClassPtr<class AValDungeonPortal>       DungeonPortalClassToSpawn;                         // 0xFB0(0x28)(Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_15E1[0x8];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class ATopGameMode* GetDefaultObj();

	void OnDungeonPortalEntered(class AValCharacter* Character, class AValDungeonPortal* DungeonPortal);
	void OnDungeonPortalDestroyed(class AValDungeonPortal* DungeonPortal);
};

// 0x210 (0x11F0 - 0xFE0)
// Class Topaz.TopGameMode_Raid
class ATopGameMode_Raid : public ATopGameMode
{
public:
	TSubclassOf<class UTopTeamPhaseManager_Raid> TeamPhaseManagerClass;                             // 0xFE0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct Engine_TimerHandle                    PlayerUpdateTimer;                                 // 0xFE8(0x8)(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<int32, class UTopTeamPhaseManager_Raid*> TeamPhaseManagers;                                 // 0xFF0(0x50)(NativeAccessSpecifierPrivate)
	TMap<int32, bool>                            TeamFillChoices;                                   // 0x1040(0x50)(NativeAccessSpecifierPrivate)
	TMap<int32, bool>                            TeamSearchingStatus;                               // 0x1090(0x50)(NativeAccessSpecifierPrivate)
	TMap<int32, class AValPlayerStart*>          TeamStarts;                                        // 0x10E0(0x50)(NativeAccessSpecifierPrivate)
	uint8                                        Pad_1907[0x8];                                     // Fixing Size After Last Property  
	class UValMissionConfig*                     MissionConfig;                                     // 0x1138(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UValActivityTracker*                   FinalSequenceTracker;                              // 0x1140(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct GameplayTags_GameplayTag              WorldTag;                                          // 0x1148(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<int32, struct Valhalla_MissionSequences> TeamMissions;                                      // 0x1150(0x50)(NativeAccessSpecifierPrivate)
	TMap<int32, struct Valhalla_MissionSequence> SelectedTeamMission;                               // 0x11A0(0x50)(NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class ATopGameMode_Raid* GetDefaultObj();

	void OnTeamStoppedSearching(class UTopTeamPhaseManager_Raid* TeamPhaseManager);
	void OnTeamMissionPhaseEntered(class UTopTeamPhaseManager_Raid* TeamPhaseManager);
	void OnTeamInMatchPhaseBegun(class UTopTeamPhaseManager_Raid* TeamPhaseManager);
	void OnTeamEmpty(class ATeamState* TeamState);
	void OnStartDropshipEvac(const struct CoreUObject_Transform& EvacLocation, class APawn* OwningCharacter);
	void OnStartDropshipDeploy(const struct CoreUObject_Transform& DeployLocation, class APawn* OwningCharacter);
	void OnPlayerVotedMission(class AValPlayerController* PlayerController, int32 Index);
	void OnAllRoomsLoaded();
	int32 GetBotRespawnTimer(enum class EBuildingType BuildingType);
	class AValPlayerStart* FindPlayerDropSpot(class AController* Player, const class FString& IncomingName);
};

// 0x38 (0x3F8 - 0x3C0)
// Class Topaz.TopGenerator
class ATopGenerator : public AValAttributeActor_StaticMesh
{
public:
	FMulticastInlineDelegateProperty_            OnGeneratorOnline;                                 // 0x3C0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnGeneratorOffline;                                // 0x3D0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                         bOnline;                                           // 0x3E0(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_19E0[0x3];                                     // Fixing Size After Last Property  
	float                                        RebootHealthThreshold;                             // 0x3E4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  TeamDefinition;                                    // 0x3E8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTopOverlayComponent*                  OverlayComponent;                                  // 0x3F0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class ATopGenerator* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Topaz.TopGeneratorPowered
class ITopGeneratorPowered : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ITopGeneratorPowered* GetDefaultObj();

	void TurnOnline();
	void TurnOffline();
};

// 0x50 (0x2E8 - 0x298)
// Class Topaz.TopHangarStation
class ATopHangarStation : public AActor
{
public:
	uint8                                        Pad_1BBB[0x8];                                     // Fixing Size After Last Property  
	class UBoxComponent*                         InteractCollisionComp;                             // 0x2A0(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FText                                  InteractText;                                      // 0x2A8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class AValCharacter*                         CachedInteractor;                                  // 0x2C0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EHangarStationType                StationType;                                       // 0x2C8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1BCB[0x1F];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class ATopHangarStation* GetDefaultObj();

	void ServerOnInteracted(class AValCharacter* Initiator);
	bool OnInteracted(class AValCharacter* Initiator);
	bool K2_CanInteract(class AValCharacter* Initiator);
	enum class EHangarStationType GetHangarStationType();
	void ClientOnInteracted(class AValCharacter* Initiator);
};

// 0x60 (0x2F8 - 0x298)
// Class Topaz.TopInventoryStation
class ATopInventoryStation : public AActor
{
public:
	uint8                                        Pad_1DD9[0x8];                                     // Fixing Size After Last Property  
	class USceneComponent*                       SceneComponent;                                    // 0x2A0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCapsuleComponent*                     InteractCollisionComp;                             // 0x2A8(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTopPoweredComponent*                  PoweredComponent;                                  // 0x2B0(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UValCharacterOverlayComponent*         OverlayComponent;                                  // 0x2B8(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UGameplayEffect>           InventoryStationCooldownEffect;                    // 0x2C0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        InventoryStationCooldownTime;                      // 0x2C8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct GameplayTags_GameplayTag              InventoryStationCooldownTag;                       // 0x2CC(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct GameplayTags_GameplayTag              CooldownMagnitudeTag;                              // 0x2D4(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bOnline;                                           // 0x2DC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1E4B[0x3];                                     // Fixing Size After Last Property  
	class FName                                  TeamDefinition;                                    // 0x2E0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        OverlayZOffset;                                    // 0x2E8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        HoldTimer;                                         // 0x2EC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        R_TeamId;                                          // 0x2F0(0x4)(Edit, Net, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1E6E[0x4];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class ATopInventoryStation* GetDefaultObj();

	void ReceiveOnBeginOverlap(class AActor* OtherActor);
	void OnRep_TeamId(int32 OldTeamId);
	void OnHoldFinished(class AValCharacter* TargetCharacter);
	void OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct Engine_HitResult& SweepResult);
	void BeginHoldTimer(class AValCharacter* TargetCharacter);
	void ActivateInventoryStation(class AValCharacter* Character);
};

// 0x10 (0x1588 - 0x1578)
// Class Topaz.TopPlayerController_City
class ATopPlayerController_City : public AValPlayerController_City
{
public:
	FMulticastInlineDelegateProperty_            OnShowHangarStation;                               // 0x1578(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ATopPlayerController_City* GetDefaultObj();

	void ShowHangarStation(class ATopHangarStation* HangarStation);
	void ClientShowHangarStation(class ATopHangarStation* HangarStation);
};

// 0x30 (0x348 - 0x318)
// Class Topaz.TopPlayerDropship
class ATopPlayerDropship : public ASkeletalMeshActor
{
public:
	uint8                                        Pad_2180[0x8];                                     // Fixing Size After Last Property  
	class USphereComponent*                      InteractCollisionComp;                             // 0x320(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EDropshipPhase                    R_CurrentPhase;                                    // 0x328(0x1)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2190[0x1F];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class ATopPlayerDropship* GetDefaultObj();

	void SetCurrentPhase(enum class EDropshipPhase NewPhase);
	void OnRep_CurrentPhase();
	bool OnInteracted(class AValCharacter* Initiator);
	void OnCurrentPhaseUpdated();
	bool K2_CanInteract(class AValCharacter* Initiator);
	enum class EDropshipPhase GetCurrentPhase();
};

// 0x8 (0x2F0 - 0x2E8)
// Class Topaz.TopPlayerStart
class ATopPlayerStart : public AValPlayerStart
{
public:
	uint8                                        Pad_22F5[0x8];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class ATopPlayerStart* GetDefaultObj();

};

// 0x0 (0xA40 - 0xA40)
// Class Topaz.TopPlayerStateBase
class ATopPlayerStateBase : public AValPlayerState_Frontier
{
public:

	static class UClass* StaticClass();
	static class ATopPlayerStateBase* GetDefaultObj();

};

// 0x58 (0xA98 - 0xA40)
// Class Topaz.TopPlayerState
class ATopPlayerState : public ATopPlayerStateBase
{
public:
	TWeakObjectPtr<class ATopPlayerStart>        DesiredPlayerStart;                                // 0xA40(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        R_XP;                                              // 0xA48(0x4)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        CachedCurrentLevel;                                // 0xA4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnXPAddedEvent;                                    // 0xA50(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnXPChangedEvent;                                  // 0xA60(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnLevelUpEvent;                                    // 0xA70(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnRadarVisibilityChanged;                          // 0xA80(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                         R_VisibleOnRadarSensor;                            // 0xA90(0x1)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_28F3[0x3];                                     // Fixing Size After Last Property  
	int32                                        NumSeenBy;                                         // 0xA94(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class ATopPlayerState* GetDefaultObj();

	void SetDesiredPlayerStart(class ATopPlayerStart* PlayerStart);
	void ServerSetVisible(bool Value);
	void OnRep_XP(int32 OldXP);
	void OnRep_VisibleOnRadarSensor();
	void OnRadarSensorStatusChanged(class ATopRadarSensor* RadarSensor);
	bool IsVisibleOnRadarSensor();
	bool IsAwaitingActiveLoadout();
	struct GameplayTags_GameplayTag GetQueuedLoadoutClass();
	int32 GetPlayerXP();
	int32 GetPlayerLevel();
	class ATopPlayerStart* GetDesiredPlayerStart();
	void ClientOnAddXP(enum class EPlayerExperienceType ExperienceType, int32 Amount);
	bool CanQueueLoadoutClass(struct GameplayTags_GameplayTag& LoadoutClass);
	int32 CalculatePlayerLevel(int32 Xp);
	void AddXP(enum class EPlayerExperienceType ExperienceType, int32 Amount);
};

// 0x68 (0x108 - 0xA0)
// Class Topaz.TopPoweredComponent
class UTopPoweredComponent : public UActorComponent
{
public:
	FMulticastInlineDelegateProperty_            OnStatusOnline;                                    // 0xA0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnStatusOffline;                                   // 0xB0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnOwnerDowned;                                     // 0xC0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnOwnerNotDowned;                                  // 0xD0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnGeneratorPowered;                                // 0xE0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnGeneratorUnpowered;                              // 0xF0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                         R_bGeneratorPowered;                               // 0x100(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         R_bOwnerDowned;                                    // 0x101(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2AE9[0x2];                                     // Fixing Size After Last Property  
	float                                        PctHealthToRemoveDowned;                           // 0x104(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UTopPoweredComponent* GetDefaultObj();

	void SetPowerOn();
	void SetPowerOff();
	void SetOwnerNotDowned();
	void SetOwnerDowned();
	void OnRep_OwnerDowned();
	void OnRep_GeneratorPowered();
	void OnOwnerHealthChanged(float PercentHealth);
	bool IsSystemOnline();
	void DebugDump();
};

// 0x28 (0x3E8 - 0x3C0)
// Class Topaz.TopRadarSensor
class ATopRadarSensor : public AValAttributeActor_StaticMesh
{
public:
	FMulticastInlineDelegateProperty_            OnRadarSensorStatusChanged;                        // 0x3C0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class FName                                  TeamDefinition;                                    // 0x3D0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bOnline;                                           // 0x3D8(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2C1F[0x3];                                     // Fixing Size After Last Property  
	float                                        RebootHealthThreshold;                             // 0x3DC(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTopOverlayComponent*                  OverlayComponent;                                  // 0x3E0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class ATopRadarSensor* GetDefaultObj();

	void OnGameStateSet(class AGameStateBase* GameState);
	bool IsOnline();
};

// 0x0 (0xD0 - 0xD0)
// Class Topaz.TopTeamCreationComponent
class UTopTeamCreationComponent : public UValTeamCreationComponent
{
public:

	static class UClass* StaticClass();
	static class UTopTeamCreationComponent* GetDefaultObj();

};

// 0x0 (0xD0 - 0xD0)
// Class Topaz.TopTeamCreationComponent_Raid
class UTopTeamCreationComponent_Raid : public UTopTeamCreationComponent
{
public:

	static class UClass* StaticClass();
	static class UTopTeamCreationComponent_Raid* GetDefaultObj();

	class FName GetDungeonHazardsTeamDefinition();
};

// 0x0 (0xD0 - 0xD0)
// Class Topaz.TopTeamCreationComponent_CTF
class UTopTeamCreationComponent_CTF : public UValTeamCreationComponent
{
public:

	static class UClass* StaticClass();
	static class UTopTeamCreationComponent_CTF* GetDefaultObj();

	class FName GetTeamBDefinition();
	class FName GetTeamADefinition();
};

// 0x90 (0xB8 - 0x28)
// Class Topaz.TopTeamPhaseManager
class UTopTeamPhaseManager : public UObject
{
public:
	uint8                                        Pad_2F76[0x8];                                     // Fixing Size After Last Property  
	FMulticastInlineDelegateProperty_            OnTeamEmpty;                                       // 0x30(0x10)(ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnTeamPhaseChanged;                                // 0x40(0x10)(ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic)
	TMap<struct GameplayTags_GameplayTag, struct Topaz_TeamPhase> TeamPhases;                                        // 0x50(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_2F90[0x18];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UTopTeamPhaseManager* GetDefaultObj();

	void SetTeamState(class ATeamState* NewTeam);
	void OnTeamMembersUpdated();
	class ATeamState* GetTeamState();
	int32 GetTeamNum();
	float GetCurrentTeamPhaseEndTime();
	struct GameplayTags_GameplayTag GetCurrentTeamPhase();
};

// 0x50 (0x108 - 0xB8)
// Class Topaz.TopTeamPhaseManager_Raid
class UTopTeamPhaseManager_Raid : public UTopTeamPhaseManager
{
public:
	uint8                                        Pad_3019[0x50];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UTopTeamPhaseManager_Raid* GetDefaultObj();

};

// 0x20 (0x9C0 - 0x9A0)
// Class Topaz.TopCameraActor
class ATopCameraActor : public ACameraActor
{
public:
	uint8                                        Pad_305B[0x8];                                     // Fixing Size After Last Property  
	bool                                         TeamNeutral;                                       // 0x9A8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3064[0x3];                                     // Fixing Size After Last Property  
	class FName                                  TeamDefinition;                                    // 0x9AC(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_306C[0xC];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class ATopCameraActor* GetDefaultObj();

};

// 0x20 (0x2430 - 0x2410)
// Class Topaz.TopPlayerCameraManager
class ATopPlayerCameraManager : public AValPlayerCameraManager
{
public:
	bool                                         CheckedMapCameraActors;                            // 0x2410(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_315A[0x7];                                     // Fixing Size After Last Property  
	TArray<TWeakObjectPtr<class ATopCameraActor>> WeakMapCameraActors;                               // 0x2418(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_315F[0x8];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class ATopPlayerCameraManager* GetDefaultObj();

	class ATopCameraActor* GetRandomMapCamera();
	TArray<class ATopCameraActor*> GetMapCameraActors();
};

// 0x0 (0x9F8 - 0x9F8)
// Class Topaz.TopGameMode_City
class ATopGameMode_City : public AValGameMode_Lobby
{
public:

	static class UClass* StaticClass();
	static class ATopGameMode_City* GetDefaultObj();

};

// 0x220 (0x10D0 - 0xEB0)
// Class Topaz.TopGameMode_Topaz
class ATopGameMode_Topaz : public AValGameMode
{
public:
	TSubclassOf<class ATopPickup_RefillNugget>   HealthPackDropClass;                               // 0xEB0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        MatchTimeSeconds;                                  // 0xEB8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        MatchOvertimeSeconds;                              // 0xEBC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        ScoreToWin;                                        // 0xEC0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        DefaultTimeUntilRespawn;                           // 0xEC4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        TimeUntilRespawnAfterSuicide;                      // 0xEC8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_32DD[0x4];                                     // Fixing Size After Last Property  
	TSubclassOf<class UGameplayEffect>           RespawnEffectToApply;                              // 0xED0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        RespawnEffectLevel;                                // 0xED8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct GameplayTags_GameplayTag              SetByCallerMagnitudeTag;                           // 0xEDC(0x8)(Edit, BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        DefaultTimeUntilSpectate;                          // 0xEE4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct Engine_TimerHandle                    GameplayMatchTimer;                                // 0xEE8(0x8)(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3327[0x80];                                    // Fixing Size After Last Property  
	struct GameplayTags_GameplayTagContainer     AllowedSpawnPhases;                                // 0xF70(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TMap<struct GameplayTags_GameplayTag, TSubclassOf<class AValCharacter>> AvailablePawns;                                    // 0xF90(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TMap<struct GameplayTags_GameplayTag, int32> MaxTeamClassCount;                                 // 0xFE0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct GameplayTags_GameplayTagContainer     ActiveClasses;                                     // 0x1030(0x20)(Edit, BlueprintVisible, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TMap<enum class EPlayerExperienceType, int32> ExperienceAmountMap;                               // 0x1050(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	int32                                        MaxLevel;                                          // 0x10A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3392[0x4];                                     // Fixing Size After Last Property  
	struct GameplayAbilities_ScalableFloat       LevelingInformation;                               // 0x10A8(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class ATopGameMode_Topaz* GetDefaultObj();

	void OnGameplayMatchTimerEnd();
};

// 0x68 (0x1138 - 0x10D0)
// Class Topaz.TopGameMode_TopazCTF
class ATopGameMode_TopazCTF : public ATopGameMode_Topaz
{
public:
	TArray<TWeakObjectPtr<class AActor>>         GeneratorPoweredActors;                            // 0x10D0(0x10)(ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<TWeakObjectPtr<class ATopGenerator>>  Generators;                                        // 0x10E0(0x10)(ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<TWeakObjectPtr<class ATopPickup_Flag>> Flags;                                             // 0x10F0(0x10)(ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<TWeakObjectPtr<class AValCharacter>>  Bots;                                              // 0x1100(0x10)(ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<TWeakObjectPtr<class ATopFlagStand>>  FlagStands;                                        // 0x1110(0x10)(ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	int32                                        StalemateTime;                                     // 0x1120(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        FlagDefenderRadius;                                // 0x1124(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bCanStalemate;                                     // 0x1128(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_394A[0x7];                                     // Fixing Size After Last Property  
	struct Engine_TimerHandle                    StalemateHandle;                                   // 0x1130(0x8)(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class ATopGameMode_TopazCTF* GetDefaultObj();

	void SetUpBots();
	void OnTurretDamaged(const struct Valhalla_DamageData& DamageData);
	void OnStalemateTimerEnd();
	void OnGeneratorOnline(class ATopGenerator* Generator);
	void OnGeneratorOffline(class ATopGenerator* Generator);
	void OnFlagScored(class AValCharacter* Character, class ATopPickup_Flag* Flag, class ATopFlagStand* FlagStand);
	void OnFlagReturned(class AValCharacter* Character, class ATopPickup_Flag* Flag, class ATopFlagStand* FlagStand);
	void OnFlagHeldChanged(class ATopPickup_Flag* PickupFlag, struct Topaz_HolderInfo& HolderInfo, struct Topaz_HolderInfo& LastHolderInfo);
};

// 0x8 (0x1140 - 0x1138)
// Class Topaz.TopGameMode_TopazCTF_OneFlag
class ATopGameMode_TopazCTF_OneFlag : public ATopGameMode_TopazCTF
{
public:
	int32                                        NumRounds;                                         // 0x1138(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        CurrentSegment;                                    // 0x113C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class ATopGameMode_TopazCTF_OneFlag* GetDefaultObj();

	void AssignTeamRolesAndFlags(bool bFirstAssignment);
};

// 0x40 (0xE58 - 0xE18)
// Class Topaz.TopGameState
class ATopGameState : public AValGameState_Frontier
{
public:
	FMulticastInlineDelegateProperty_            OnOvertimeStateChanged;                            // 0xE18(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                         R_bIsInOvertime;                                   // 0xE28(0x1)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3AD8[0x3];                                     // Fixing Size After Last Property  
	int32                                        R_MaxLevel;                                        // 0xE2C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct GameplayAbilities_ScalableFloat       R_LevelingInformation;                             // 0xE30(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class ATopGameState* GetDefaultObj();

	bool ShouldUseMapCamera();
	void SetLevelingInfo(int32 MaxLevel, struct GameplayAbilities_ScalableFloat& LevelingInfo);
	void SetIsInOvertime(bool bNewIsInOvertime);
	bool QueueLoadoutClass(class ATopPlayerState* PlayerState, struct GameplayTags_GameplayTag& NewLoadoutClass);
	void OnRep_IsInOvertime();
	bool GetIsInOvertime();
};

// 0x100 (0xF58 - 0xE58)
// Class Topaz.TopGameState_TopazCTF
class ATopGameState_TopazCTF : public ATopGameState
{
public:
	FMulticastInlineDelegateProperty_            OnAnyFlagChanged;                                  // 0xE58(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFlagStandDataChanged;                            // 0xE68(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPlayerScoredDel;                                 // 0xE78(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnAnyFlagReturned;                                 // 0xE88(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnTeamOnOffenseChanged;                            // 0xE98(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnCTFTypeChanged;                                  // 0xEA8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnStalemateStateChanged;                           // 0xEB8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<struct Topaz_FlagStandData>           R_FlagStandData;                                   // 0xEC8(0x10)(Net, ZeroConstructor, RepNotify, NativeAccessSpecifierPublic)
	int32                                        R_TeamOnOffense;                                   // 0xED8(0x4)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECTFType                          R_CTFType;                                         // 0xEDC(0x1)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D8C[0x3];                                     // Fixing Size After Last Property  
	int32                                        R_StalemateTime;                                   // 0xEE0(0x4)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D8D[0x4];                                     // Fixing Size After Last Property  
	TArray<class ATopPickup_Flag*>               FlagPickups;                                       // 0xEE8(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	TMap<class ATopFlagStand*, struct Topaz_FlagStandData> FlagStandData;                                     // 0xEF8(0x50)(Transient, Protected, NativeAccessSpecifierProtected)
	TArray<class ATopRadarSensor*>               RadarSensors;                                      // 0xF48(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class ATopGameState_TopazCTF* GetDefaultObj();

	void OnRep_TeamOnOffense();
	void OnRep_StalemateTime();
	void OnRep_FlagStandDataUpdated();
	void OnRep_CTFType();
	void OnPlayerScored(class AValPlayerState* PlayerState, int32 ScoreAmount);
	void OnPlayerReturnedFlag(class ATopPickup_Flag* PickupFlag, class AValPlayerState* PlayerState);
	void OnFlagHeldChangedInternal(class ATopPickup_Flag* PickupFlag, struct Topaz_HolderInfo& HolderInfo, struct Topaz_HolderInfo& LastHolderInfo);
	void OnFlagHeldChanged(class ATopPickup_Flag* PickupFlag, struct Topaz_HolderInfo& HolderInfo, struct Topaz_HolderInfo& LastHolderInfo);
	void NotifyPlayerScored(class AValPlayerState* PlayerState, int32 ScoreAmount);
	void NotifyPlayerReturnedFlag(class ATopPickup_Flag* Flag, class AValPlayerState* PlayerState);
	void NetMulticastOnPlayerScored(class AValPlayerState* PlayerState, int32 ScoreAmount);
	void NetMulticastOnPlayerReturnedFlag(class ATopPickup_Flag* PickupFlag, class AValPlayerState* PlayerState);
	void NetMulticastOnFlagHeldChanged(class ATopPickup_Flag* PickupFlag, const struct Topaz_HolderInfo& HolderInfo, const struct Topaz_HolderInfo& LastHolderInfo);
	int32 GetTeamOnOffense();
	int32 GetStalemateTime();
	class ATopRadarSensor* GetRadarSensorByTeamDefinition(class FName& TeamDefinition);
	bool GetIsInStalemate();
	void GetFlagStandData(TArray<struct Topaz_FlagStandData>* OutFlagStandData);
	TArray<class ATopPickup_Flag*> GetFlagPickups();
	TMap<class AValCharacter*, class ATopPickup_Flag*> GetFlagHolders();
	class ATopPickup_Flag* GetFlagByTeamDefinition(class FName& TeamDefinition);
	enum class ECTFType GetCTFType();
};

// 0x18 (0x700 - 0x6E8)
// Class Topaz.TopOverlayComponent
class UTopOverlayComponent : public UWidgetComponent
{
public:
	class UTopOverlayWidget*                     OverlayWidget;                                     // 0x6E8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTopOverlayConfig*                     OverlayConfig;                                     // 0x6F0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UTopOverlayWidget>         OverlayWidgetClass;                                // 0x6F8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UTopOverlayComponent* GetDefaultObj();

};

// 0x80 (0xB0 - 0x30)
// Class Topaz.TopOverlayConfig
class UTopOverlayConfig : public UDataAsset
{
public:
	bool                                         DisplayOffscreen;                                  // 0x30(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3DCC[0x3];                                     // Fixing Size After Last Property  
	int32                                        DisplayLayer;                                      // 0x34(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct CoreUObject_Vector                    WorldLocationOffset;                               // 0x38(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct CoreUObject_Vector2D                  ScreenBorderOffset;                                // 0x50(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         RequireLineOfSight;                                // 0x60(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         RequireDistanceChecks;                             // 0x61(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3DD8[0x2];                                     // Fixing Size After Last Property  
	float                                        MinDisplayDistance;                                // 0x64(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MaxDisplayDistance;                                // 0x68(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MaxDisplayDistanceWhileAiming;                     // 0x6C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MaxDisplayDistanceWhileTracking;                   // 0x70(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         EnableHovering;                                    // 0x74(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3DDF[0x3];                                     // Fixing Size After Last Property  
	float                                        AutoHoverDistance;                                 // 0x78(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MaxHoverTraceAngle;                                // 0x7C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MaxHoverTraceDistance;                             // 0x80(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3DE4[0x4];                                     // Fixing Size After Last Property  
	TSubclassOf<class UTopOverlayDamage>         DamageClass;                                       // 0x88(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3DE6[0x20];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UTopOverlayConfig* GetDefaultObj();

};

// 0x10 (0x2D0 - 0x2C0)
// Class Topaz.TopOverlayDamage
class UTopOverlayDamage : public UUserWidget
{
public:
	FMulticastInlineDelegateProperty_            OnDamageAnimationComplete;                         // 0x2C0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UTopOverlayDamage* GetDefaultObj();

	void SetDamageData(struct Valhalla_DamageData& DamageData);
	void OnAnimComplete();
};

// 0x20 (0x2E0 - 0x2C0)
// Class Topaz.TopOverlayHealth
class UTopOverlayHealth : public UUserWidget
{
public:
	bool                                         CachedAlive;                                       // 0x2C0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3E7F[0x3];                                     // Fixing Size After Last Property  
	int32                                        CachedHealth;                                      // 0x2C4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        CachedHealthMax;                                   // 0x2C8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3E81[0x4];                                     // Fixing Size After Last Property  
	class UValSmoothProgressBar*                 HealthProgressBar;                                 // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                      AnimateAlive;                                      // 0x2D8(0x8)(BlueprintVisible, ZeroConstructor, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UTopOverlayHealth* GetDefaultObj();

	void UpdateHealthMax(int32 HealthMax);
	void UpdateHealth(int32 Health);
	void UpdateAlive(bool Alive);
	void OnHealthPercentChanged(float HealthPercent);
	void OnHealthMaxChanged(int32 HealthMax);
	void OnHealthChanged(int32 Health);
	void OnAliveChanged(bool Alive);
};

// 0xE0 (0x3A0 - 0x2C0)
// Class Topaz.TopOverlayWidgetBase
class UTopOverlayWidgetBase : public UUserWidget
{
public:
	class UTopOverlayConfig*                     Config;                                            // 0x2C0(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         CachedAiming;                                      // 0x2C8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         CachedHovered;                                     // 0x2C9(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         CachedVisible;                                     // 0x2CA(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         CachedTracking;                                    // 0x2CB(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         CachedIgnoreLOS;                                   // 0x2CC(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         CachedOffscreen;                                   // 0x2CD(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         CachedOwnerAlive;                                  // 0x2CE(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         CachedDisplayDamage;                               // 0x2CF(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         CachedAggregateDamage;                             // 0x2D0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_403D[0x3];                                     // Fixing Size After Last Property  
	float                                        CachedDistanceSq;                                  // 0x2D4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        CachedDirectionAngle;                              // 0x2D8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        CachedInvertedScreenScale;                         // 0x2DC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        CachedHealth;                                      // 0x2E0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        CachedHealthMax;                                   // 0x2E4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct CoreUObject_Box2D                     CachedScreenSize;                                  // 0x2E8(0x28)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	class FString                                CachedDisplayName;                                 // 0x310(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct CoreUObject_Vector                    CachedWorldLocation;                               // 0x320(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct CoreUObject_Vector2D                  CachedScreenPosition;                              // 0x338(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ETeamRelation                     CachedTeamRelation;                                // 0x348(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EOverlayDisplayType               CachedDisplayType;                                 // 0x349(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4055[0x2E];                                    // Fixing Size After Last Property  
	TWeakObjectPtr<class AActor>                 WeakOwningActor;                                   // 0x378(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TWeakObjectPtr<class ULocalPlayer>           WeakLocalPlayer;                                   // 0x380(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TWeakObjectPtr<class AValCharacter>          WeakLocalViewTarget;                               // 0x388(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TWeakObjectPtr<class AValPlayerState>        WeakOwningPlayerState;                             // 0x390(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TWeakObjectPtr<class AValPlayerController>   WeakLocalPlayerController;                         // 0x398(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UTopOverlayWidgetBase* GetDefaultObj();

	void OnWorldLocationChanged(struct CoreUObject_Vector& WorldLocation);
	void OnVisibleChanged(bool Visible);
	void OnViewTargetDealtDamage(const struct Valhalla_DamageData& DamageData, class AActor* Target);
	void OnViewTargetDamagedOwner(struct Valhalla_DamageData& DamageData);
	void OnViewTargetChanged(class AActor* NewTarget);
	void OnUserSettingsChanged();
	void OnUpdateInterface();
	void OnTrackedTargetChanged(class AValCharacter* Target);
	void OnTeamRelationChanged(enum class ETeamRelation Relation);
	void OnScreenPositionChanged(struct CoreUObject_Vector2D& ScreenPosition);
	void OnOwningStateReady(class AValPlayerStateBase* PlayerState);
	void OnOwnerTeamChanged(int32 OldTeam, int32 NewTeam);
	void OnOwnerHealthMaxChanged(int32 HealthMax);
	void OnOwnerHealthChanged(int32 Health);
	void OnOwnerAliveChanged(bool Alive);
	void OnOffScreenChanged(bool Offscreen);
	void OnLocalTeamChanged(int32 OldTeam, int32 NewTeam);
	void OnHoveredChanged(bool Hovered);
	void OnHideHUDChanged(bool HideHUD);
	void OnHealthMaxChanged(int32 OldValue, int32 NewValue);
	void OnHealthChanged(int32 OldValue, int32 NewValue);
	void OnDistanceChanged(float DistanceSq);
	void OnDisplayNameChanged(const class FString& DisplayName);
	void OnDirectionChanged(float Direction);
	void OnAimingChanged(bool Aiming);
	class AValPlayerState* GetOwningPlayerState();
	class AActor* GetOwningActor();
	class AValCharacter* GetLocalViewTarget();
	class AValPlayerController* GetLocalPlayerController();
	class ULocalPlayer* GetLocalPlayer();
};

// 0x48 (0x3E8 - 0x3A0)
// Class Topaz.TopOverlayWidget
class UTopOverlayWidget : public UTopOverlayWidgetBase
{
public:
	class UTextBlock*                            NameText;                                          // 0x3A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            DistanceText;                                      // 0x3A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCanvasPanel*                          PositionWidget;                                    // 0x3B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCanvasPanel*                          DamageContainer;                                   // 0x3B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCanvasPanel*                          DirectionWidget;                                   // 0x3C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTopOverlayHealth*                     HealthWidget;                                      // 0x3C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                      AnimateVisible;                                    // 0x3D0(0x8)(BlueprintVisible, ZeroConstructor, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                      AnimateHovered;                                    // 0x3D8(0x8)(BlueprintVisible, ZeroConstructor, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UCanvasPanelSlot>       WeakPositionWidgetPanel;                           // 0x3E0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UTopOverlayWidget* GetDefaultObj();

	void OnDamageAnimationComplete(class UTopOverlayDamage* DamageWidget);
	class UCanvasPanelSlot* GetPositionWidgetPanel();
};

// 0x8 (0x3F0 - 0x3E8)
// Class Topaz.TopOverlayWidget_Character
class UTopOverlayWidget_Character : public UTopOverlayWidget
{
public:
	struct GameplayTags_GameplayTag              CachedCharacterClass;                              // 0x3E8(0x8)(BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UTopOverlayWidget_Character* GetDefaultObj();

	void OnCharacterClassChanged(struct GameplayTags_GameplayTag& CharacterClass);
};

// 0x0 (0x3E8 - 0x3E8)
// Class Topaz.TopOverlayWidget_Flag
class UTopOverlayWidget_Flag : public UTopOverlayWidget
{
public:

	static class UClass* StaticClass();
	static class UTopOverlayWidget_Flag* GetDefaultObj();

};

// 0x0 (0x3E8 - 0x3E8)
// Class Topaz.TopOverlayWidget_Turret
class UTopOverlayWidget_Turret : public UTopOverlayWidget
{
public:

	static class UClass* StaticClass();
	static class UTopOverlayWidget_Turret* GetDefaultObj();

};

// 0x8 (0x3D8 - 0x3D0)
// Class Topaz.TopPickup
class ATopPickup : public AValPickup
{
public:
	class UTopOverlayComponent*                  OverlayComponent;                                  // 0x3D0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class ATopPickup* GetDefaultObj();

};

// 0x2D0 (0x6A8 - 0x3D8)
// Class Topaz.TopPickup_Flag
class ATopPickup_Flag : public ATopPickup
{
public:
	uint8                                        Pad_42EA[0x8];                                     // Fixing Size After Last Property  
	float                                        DropImpulseZ;                                      // 0x3E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DropImpulseXY;                                     // 0x3E4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GameplayTags_GameplayTagContainer     ForbiddenTags;                                     // 0x3E8(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TSubclassOf<class UGameplayEffect>           DefaultHoldingFlagEffect;                          // 0x408(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_42F1[0xE8];                                    // Fixing Size After Last Property  
	class FName                                  TeamDefinition;                                    // 0x4F8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSoftObjectPtr<class USkinnedAsset>          FriendlyMesh;                                      // 0x500(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct CoreUObject_LinearColor               FriendlyColor;                                     // 0x528(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSoftObjectPtr<class USkinnedAsset>          EnemyMesh;                                         // 0x538(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct CoreUObject_LinearColor               EnemyColor;                                        // 0x560(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInstanceDynamic*              Mid;                                               // 0x570(0x8)(Edit, ZeroConstructor, Transient, EditConst, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct CoreUObject_Vector                    StartingLocation;                                  // 0x578(0x18)(Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct CoreUObject_Rotator                   StartingRotation;                                  // 0x590(0x18)(Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	class UTopFlagMovementComponent*             FlagMovementComponent;                             // 0x5A8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnHeldChanged;                                     // 0x5B0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct Topaz_HolderInfo                      R_HeldBy;                                          // 0x5C0(0x10)(Edit, Net, DisableEditOnTemplate, EditConst, RepNotify, NoDestructor, Protected, NativeAccessSpecifierProtected)
	class FName                                  HoldingSocket;                                     // 0x5D0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        R_TeamId;                                          // 0x5D8(0x4)(Edit, Net, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_42FB[0x4];                                     // Fixing Size After Last Property  
	TArray<FDelegateProperty_>                   TeamChangedDelegates;                              // 0x5E0(0x10)(ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_42FD[0x10];                                    // Fixing Size After Last Property  
	TWeakObjectPtr<class AActor>                 LastViewTarget;                                    // 0x600(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class AValCharacter>          LastFlagHolder;                                    // 0x608(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4300[0x8];                                     // Fixing Size After Last Property  
	struct Topaz_CapturableInfo                  R_CapturableInfo;                                  // 0x618(0x8)(Net, RepNotify, NoDestructor, Protected, NativeAccessSpecifierProtected)
	float                                        CapturableTime;                                    // 0x620(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4302[0xC];                                     // Fixing Size After Last Property  
	float                                        LastFlagHolderDelay;                               // 0x630(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4303[0xC];                                     // Fixing Size After Last Property  
	float                                        ResetDelay;                                        // 0x640(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        R_ResetTime;                                       // 0x644(0x4)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnFlagResetting;                                   // 0x648(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFlagReset;                                       // 0x658(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFlagReturned;                                    // 0x668(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnCapturableInfoChanged;                           // 0x678(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_430A[0x8];                                     // Fixing Size After Last Property  
	float                                        FailsafeInterval;                                  // 0x690(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinZFailsafe;                                      // 0x694(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LandscapeZOffset;                                  // 0x698(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_430D[0x4];                                     // Fixing Size After Last Property  
	class ALandscape*                            LandscapePtr;                                      // 0x6A0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ATopPickup_Flag* GetDefaultObj();

	void UpdateTeamColor();
	void UpdateFriendlyOrEnemy(class AActor* ViewTarget);
	void SetResetTime(float NewResetTime);
	void SetIsCapturable(bool Value);
	void SetHeldBy(struct Topaz_HolderInfo& Holder);
	void SetFlagHidden(bool bShouldHide);
	void ReturnToStart();
	void ResetTimerFinished();
	void ResetLastFlagHolder(bool bOverlapCheck);
	void OnViewTargetTeamChanged(int32 OldTeam, int32 NewTeam);
	void OnViewTargetChanged(class AActor* NewViewTarget);
	void OnTeamRegistered(int32 TeamId, class ATeamState* TeamState);
	void OnRep_TeamId(int32 OldTeamId);
	void OnRep_ResetTime();
	void OnRep_HeldBy(const struct Topaz_HolderInfo& LastHolderInfo);
	void OnRep_CapturableInfo();
	void OnPawnControllerChanged(class APawn* Pawn, class AController* Controller);
	void OnHolderForcedToDropFlag(const struct CoreUObject_Vector& Velocity);
	void OnHolderEndPlay(class AActor* Actor, enum class EEndPlayReason EndReason);
	void OnHolderDied(float TimeToRespawn, class AValCharacter* ValCharacter);
	void OnGameStateSet(class AGameStateBase* GameState);
	void OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct Engine_HitResult& SweepResult);
	void MulticastFlagReset();
	bool IsCapturable();
	bool IsAllowedToPickup(class AValCharacter* ValCharacter);
	void GrantFlagAccolade(class AValCharacter* Character, enum class EAccoladeType AccoladeType);
	float GetResetTime();
	struct Topaz_HolderInfo GetHeldBy();
	void ForceReturnFlag(class AValCharacter* ReturningCharacter);
	void FailsafeCheck();
	void EventUpdateFriendlyOrEnemy(bool bFriendly);
	void EventOnDropped();
	void EventHeldBy(const struct Topaz_HolderInfo& NewHolderInfo, const struct Topaz_HolderInfo& LastHolderInfo);
	void Drop(bool bScored, bool bInheritVelocity, bool bForceReturnToStart);
	void CancelResetTimer();
};

// 0x198 (0x568 - 0x3D0)
// Class Topaz.TopPickup_RefillNugget
class ATopPickup_RefillNugget : public AValPickup
{
public:
	uint8                                        Pad_4358[0xE8];                                    // Fixing Size After Last Property  
	class UMaterialInstanceDynamic*              Mid;                                               // 0x4B8(0x8)(Edit, ZeroConstructor, Transient, EditConst, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ETopRefillType                    RefillType;                                        // 0x4C0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_435B[0x7];                                     // Fixing Size After Last Property  
	TMap<enum class ETopRefillType, class UMaterialInstance*> TypeMaterials;                                     // 0x4C8(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	float                                        ResetDelay;                                        // 0x518(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4361[0x4];                                     // Fixing Size After Last Property  
	struct Engine_TimerHandle                    ResetTimerHandle;                                  // 0x520(0x8)(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        DestroyDelay;                                      // 0x528(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4367[0x4];                                     // Fixing Size After Last Property  
	struct Engine_TimerHandle                    DestroyTimerHandle;                                // 0x530(0x8)(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct CoreUObject_Vector                    R_LaunchVelocity;                                  // 0x538(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bUseLaunchVelocity;                                // 0x550(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_436A[0x3];                                     // Fixing Size After Last Property  
	float                                        HealthRefillAmount_Percent;                        // 0x554(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        HealthRefillAmount_Flat;                           // 0x558(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        EnergyRefillAmount_Percent;                        // 0x55C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        EnergyRefillAmount_Flat;                           // 0x560(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4373[0x4];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class ATopPickup_RefillNugget* GetDefaultObj();

	void ReceiveOnNuggetSetHidden(bool bWasHidden);
	void ReceiveOnDestroy();
	void OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct Engine_HitResult& SweepResult);
	void NetMulticastOnNuggetSetHidden(bool bWasHidden);
	void NetMulticastDestroyNugget();
};

// 0x0 (0x1520 - 0x1520)
// Class Topaz.TopPlayerControllerBase
class ATopPlayerControllerBase : public AValPlayerController
{
public:

	static class UClass* StaticClass();
	static class ATopPlayerControllerBase* GetDefaultObj();

};

// 0x58 (0x1578 - 0x1520)
// Class Topaz.TopPlayerController
class ATopPlayerController : public ATopPlayerControllerBase
{
public:
	FMulticastInlineDelegateProperty_            OnToggleThirdPerson;                               // 0x1520(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	bool                                         bIsThirdPerson;                                    // 0x1530(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_43CF[0x7];                                     // Fixing Size After Last Property  
	TSubclassOf<class UCameraModifier>           VirtualWorldCameraModifierClass;                   // 0x1538(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCameraModifier*                       VirtualWorldCameraModifier;                        // 0x1540(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnAvailablePerkSlotsChanged;                       // 0x1548(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct GameplayTags_GameplayTagContainer     R_AvailablePerkSlots;                              // 0x1558(0x20)(Net, RepNotify, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class ATopPlayerController* GetDefaultObj();

	void ToggleThirdPerson();
	void ServerSetPlayerVisible(class ATopPlayerState* PlayerStateToSet, bool bVisible);
	void ServerSelectPerkForSlot(int32 PerkId, struct GameplayTags_GameplayTag& SlotTag);
	bool SelectPerkForSlot(int32& PerkId, struct GameplayTags_GameplayTag& SlotTag);
	void OnRep_AvailablePerkSlots();
	void OnPerkSlotsUpdated__DelegateSignature(const struct GameplayTags_GameplayTagContainer& AvailablePerkSlots);
	bool IsThirdPerson();
	struct GameplayTags_GameplayTagContainer GetAvailablePerkSlots();
	bool AddAvailablePerkSlot(const struct GameplayTags_GameplayTag& PerkSlotToAdd);
};

// 0x0 (0x260 - 0x260)
// Class Topaz.TopPlayerInfo
class UTopPlayerInfo : public UValPlayerInfo
{
public:

	static class UClass* StaticClass();
	static class UTopPlayerInfo* GetDefaultObj();

	class UTopSettingsSubsystem* GetTopSettingsSubsystem();
};

// 0x0 (0x138 - 0x138)
// Class Topaz.TopPlayerInfoSubsystem
class UTopPlayerInfoSubsystem : public UValPlayerInfoSubsystem
{
public:

	static class UClass* StaticClass();
	static class UTopPlayerInfoSubsystem* GetDefaultObj();

};

// 0x0 (0xC8 - 0xC8)
// Class Topaz.TopSettingsSubsystem
class UTopSettingsSubsystem : public UValSettingsSubsystem
{
public:

	static class UClass* StaticClass();
	static class UTopSettingsSubsystem* GetDefaultObj();

};

// 0xA0 (0x338 - 0x298)
// Class Topaz.TopFlagStand
class ATopFlagStand : public AActor
{
public:
	uint8                                        Pad_4404[0x8];                                     // Fixing Size After Last Property  
	FMulticastInlineDelegateProperty_            OnFlagScored;                                      // 0x2A0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFlagReturnedEvent;                               // 0x2B0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UBoxComponent*                         CollisionComp;                                     // 0x2C0(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  TeamDefinition;                                    // 0x2C8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<TWeakObjectPtr<class ATopPickup_Flag>> CachedEnemyFlags;                                  // 0x2D0(0x10)(ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TSet<class ATopPickup_Flag*>                 ActiveFriendlyFlags;                               // 0x2E0(0x50)(Protected, NativeAccessSpecifierProtected)
	int32                                        TeamNum;                                           // 0x330(0x4)(Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4407[0x4];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class ATopFlagStand* GetDefaultObj();

	void OnFlagReturned(class AValCharacter* ReturningChar, class ATopPickup_Flag* PickupFlag);
	void OnFlagHeldByChanged(class ATopPickup_Flag* PickupFlag, struct Topaz_HolderInfo& HolderInfo, struct Topaz_HolderInfo& LastHolderInfo);
	void OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct Engine_HitResult& SweepResult);
	class UBoxComponent* GetCollisionComp();
	bool CanTeamScore();
};

// 0xB8 (0x350 - 0x298)
// Class Topaz.TopLooseLootPickup
class ATopLooseLootPickup : public AActor
{
public:
	uint8                                        Pad_441D[0x20];                                    // Fixing Size After Last Property  
	class USphereComponent*                      InteractCollisionComp;                             // 0x2B8(0x8)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBoxComponent*                         CollisionComp;                                     // 0x2C0(0x8)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        DefaultChannelTime;                                // 0x2C8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_441F[0x4];                                     // Fixing Size After Last Property  
	class FText                                  InteractText;                                      // 0x2D0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class AValCharacter*                         R_Channeler;                                       // 0x2E8(0x8)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct CoreUObject_Vector                    R_LaunchVelocity;                                  // 0x2F0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4421[0x38];                                    // Fixing Size After Last Property  
	TArray<struct Valhalla_InventoryItem>        R_StoredInventoryItems;                            // 0x340(0x10)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, RepNotify, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class ATopLooseLootPickup* GetDefaultObj();

	void SetLaunchVelocity(const struct CoreUObject_Vector& Velocity);
	void SetCachedChanneler(class AValCharacter* Initiator);
	void OnRep_StoredInventoryItems();
	void OnLootGenerated();
	class UPrimitiveComponent* GetInteractComponent();
	class UBoxComponent* GetCollisionComp();
	float GetChannelTime(class AValCharacter* Initiator);
	class AValCharacter* GetCachedChanneler();
};

}


