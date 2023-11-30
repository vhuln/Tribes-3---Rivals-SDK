#pragma once




#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x1 (0x1 - 0x0)
// Function Topaz.TopActivityTracker_Accolade.OnAccolade
struct UTopActivityTracker_Accolade_OnAccolade_Params
{
public:
	enum class EAccoladeType                     AccoladeType;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Topaz.TopActivityTracker_Sequence.OnTrackerProgress
struct UTopActivityTracker_Sequence_OnTrackerProgress_Params
{
public:
	int32                                        Count;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Topaz.TopActivityTracker_Sequence.GetTotalRequiredForSequenceElement
struct UTopActivityTracker_Sequence_GetTotalRequiredForSequenceElement_Params
{
public:
	int32                                        SequenceIndex;                                     // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function Topaz.TopActivityTracker_Sequence.GetSequenceElementAtIndex
struct UTopActivityTracker_Sequence_GetSequenceElementAtIndex_Params
{
public:
	struct Valhalla_MissionSequenceElement       SequenceElement;                                   // 0x0(0x30)(Parm, OutParm, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x30(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x34(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A9B[0x3];                                      // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// Function Topaz.TopActivityTracker_Sequence.GetSequenceElementAtCount
struct UTopActivityTracker_Sequence_GetSequenceElementAtCount_Params
{
public:
	int32                                        ProgressCount;                                     // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Topaz.TopActivityTracker_Sequence.GetProgressInCurrentSequence
struct UTopActivityTracker_Sequence_GetProgressInCurrentSequence_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function Topaz.TopActivityTracker_Sequence.GetCurrentSequenceElement
struct UTopActivityTracker_Sequence_GetCurrentSequenceElement_Params
{
public:
	struct Valhalla_MissionSequenceElement       SequenceElement;                                   // 0x0(0x30)(Parm, OutParm, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x30(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x34(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AEA[0x3];                                      // Fixing Size Of Struct 
};

// 0x4 (0x4 - 0x0)
// Function Topaz.TopActivityTracker_Sequence.GetCachedProgress
struct UTopActivityTracker_Sequence_GetCachedProgress_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Topaz.TopActivityTracker_Location.OnAreaExited
struct UTopActivityTracker_Location_OnAreaExited_Params
{
public:
	struct GameplayTags_GameplayTag              AreaTag;                                           // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Topaz.TopActivityTracker_Location.OnAreaEntered
struct UTopActivityTracker_Location_OnAreaEntered_Params
{
public:
	struct GameplayTags_GameplayTag              AreaTag;                                           // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Topaz.TopBotSpawnVolume.RefreshBot
struct ATopBotSpawnVolume_RefreshBot_Params
{
public:
	class UBotInitData*                          BotToRefresh;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Topaz.TopBotSpawnVolume.IsTimerActive
struct ATopBotSpawnVolume_IsTimerActive_Params
{
public:
	struct Valhalla_BotResetTimerData            Timer;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BBE[0x7];                                      // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// Function Topaz.TopBotSpawnVolume.GetTimeRemaining
struct ATopBotSpawnVolume_GetTimeRemaining_Params
{
public:
	struct Valhalla_BotResetTimerData            Timer;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BE7[0x4];                                      // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// Function Topaz.TopBotSpawner.Spawn
struct ATopBotSpawner_Spawn_Params
{
public:
	class UValBotData*                           ConfigData;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C48[0x7];                                      // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// Function Topaz.TopCharacter.RouteHistoryCheat
struct ATopCharacter_RouteHistoryCheat_Params
{
public:
	class FString                                Command;                                           // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Topaz.TopCheatComponent.StartDropshipDeploy
struct UTopCheatComponent_StartDropshipDeploy_Params
{
public:
	float                                        DropHeight;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function Topaz.TopCheatComponent.SetClassSlotItem
struct UTopCheatComponent_SetClassSlotItem_Params
{
public:
	int32                                        Type;                                              // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SlotId;                                            // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ItemId;                                            // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Topaz.TopCheatComponent.ServerStartDropshipDeploy
struct UTopCheatComponent_ServerStartDropshipDeploy_Params
{
public:
	float                                        DropHeight;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function Topaz.TopCheatComponent.ServerSetClassSlotItem
struct UTopCheatComponent_ServerSetClassSlotItem_Params
{
public:
	int32                                        Type;                                              // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SlotId;                                            // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ItemId;                                            // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function Topaz.TopCheatComponent.ServerSelectPerkForSlot
struct UTopCheatComponent_ServerSelectPerkForSlot_Params
{
public:
	struct GameplayTags_GameplayTag              PerkSlot;                                          // 0x0(0x8)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PerkId;                                            // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Topaz.TopCheatComponent.ServerDisableEnergyRegen
struct UTopCheatComponent_ServerDisableEnergyRegen_Params
{
public:
	bool                                         bDisabled;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Topaz.TopCheatComponent.ServerDisableEnergyDrain
struct UTopCheatComponent_ServerDisableEnergyDrain_Params
{
public:
	bool                                         bValue;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Topaz.TopCheatComponent.ServerChangeCharacterClass
struct UTopCheatComponent_ServerChangeCharacterClass_Params
{
public:
	struct GameplayTags_GameplayTag              CharacterTag;                                      // 0x0(0x8)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Topaz.TopCheatComponent.ServerAddScoreToTeam
struct UTopCheatComponent_ServerAddScoreToTeam_Params
{
public:
	int32                                        ScoreToGive;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Topaz.TopCheatComponent.ServerAddPerkUnlockSlot
struct UTopCheatComponent_ServerAddPerkUnlockSlot_Params
{
public:
	struct GameplayTags_GameplayTag              PerkSlot;                                          // 0x0(0x8)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function Topaz.TopCheatComponent.SelectPerkForSlot
struct UTopCheatComponent_SelectPerkForSlot_Params
{
public:
	class FName                                  PerkSlot;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PerkId;                                            // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Topaz.TopCheatComponent.RouteHistory
struct UTopCheatComponent_RouteHistory_Params
{
public:
	class FString                                Command;                                           // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Topaz.TopCheatComponent.DisableEnergyRegen
struct UTopCheatComponent_DisableEnergyRegen_Params
{
public:
	bool                                         bDisabled;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Topaz.TopCheatComponent.DisableEnergyDrain
struct UTopCheatComponent_DisableEnergyDrain_Params
{
public:
	bool                                         bValue;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Topaz.TopCheatComponent.ChangeCharacterClass
struct UTopCheatComponent_ChangeCharacterClass_Params
{
public:
	class FName                                  ClassName;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Topaz.TopCheatComponent.AddScoreToTeam
struct UTopCheatComponent_AddScoreToTeam_Params
{
public:
	int32                                        ScoreToGive;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Topaz.TopCheatComponent.AddPerkUnlockSlot
struct UTopCheatComponent_AddPerkUnlockSlot_Params
{
public:
	class FName                                  PerkSlot;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Topaz.TopDropShip.SetPlayerDropSpot
struct ATopDropShip_SetPlayerDropSpot_Params
{
public:
	class AValPlayerStart*                       NewPlayerDropSpotActor;                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function Topaz.TopDropShip.OnTeamPhaseChangedEvent
struct ATopDropShip_OnTeamPhaseChangedEvent_Params
{
public:
	struct GameplayTags_GameplayTag              NextPhase;                                         // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EndTime;                                           // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function Topaz.TopDropShip.OnTeamPhaseChanged
struct ATopDropShip_OnTeamPhaseChanged_Params
{
public:
	struct GameplayTags_GameplayTag              NextPhase;                                         // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EndTime;                                           // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Topaz.TopDropShip.OnTeamEmpty
struct ATopDropShip_OnTeamEmpty_Params
{
public:
	class ATeamState*                            TeamState;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Topaz.TopDropShip.GetPlayerDropSpotActor
struct ATopDropShip_GetPlayerDropSpotActor_Params
{
public:
	class AValPlayerStart*                       ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Topaz.TopFunctionLibrary.TestFunction
struct UTopFunctionLibrary_TestFunction_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Topaz.TopFunctionLibrary.IsSequenceMission
struct UTopFunctionLibrary_IsSequenceMission_Params
{
public:
	class UValActivityPlayerInstance*            ActivityInstance;                                  // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13BA[0x7];                                     // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// Function Topaz.TopFunctionLibrary.GetSpeedInKPH
struct UTopFunctionLibrary_GetSpeedInKPH_Params
{
public:
	float                                        Speed;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Topaz.TopFunctionLibrary.GetProgressInSequence
struct UTopFunctionLibrary_GetProgressInSequence_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UValActivityPlayerInstance*            ActivityInstance;                                  // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OutProgress;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1438[0x4];                                     // Fixing Size Of Struct 
};

// 0x28 (0x28 - 0x0)
// Function Topaz.TopFunctionLibrary.GetMissionSequence
struct UTopFunctionLibrary_GetMissionSequence_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UValActivityPlayerInstance*            ActivityInstance;                                  // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct Valhalla_MissionSequenceElement> OutSequence;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        OutIndex;                                          // 0x20(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x24(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_149D[0x3];                                     // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// Function Topaz.TopFunctionLibrary.GetMissionByTag
struct UTopFunctionLibrary_GetMissionByTag_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GameplayTags_GameplayTag              TagToFind;                                         // 0x8(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UValActivityPlayerInstance*            ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function Topaz.TopFunctionLibrary.GetCurrentSequenceElement
struct UTopFunctionLibrary_GetCurrentSequenceElement_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UValActivityPlayerInstance*            ActivityInstance;                                  // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Valhalla_MissionSequenceElement       OutElement;                                        // 0x10(0x30)(Parm, OutParm, NativeAccessSpecifierPublic)
	int32                                        OutIndex;                                          // 0x40(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x44(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1513[0x3];                                     // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// Function Topaz.TopGameMode.OnDungeonPortalEntered
struct ATopGameMode_OnDungeonPortalEntered_Params
{
public:
	class AValCharacter*                         Character;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AValDungeonPortal*                     DungeonPortal;                                     // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Topaz.TopGameMode.OnDungeonPortalDestroyed
struct ATopGameMode_OnDungeonPortalDestroyed_Params
{
public:
	class AValDungeonPortal*                     DungeonPortal;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Topaz.TopGameMode_Raid.OnTeamStoppedSearching
struct ATopGameMode_Raid_OnTeamStoppedSearching_Params
{
public:
	class UTopTeamPhaseManager_Raid*             TeamPhaseManager;                                  // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Topaz.TopGameMode_Raid.OnTeamMissionPhaseEntered
struct ATopGameMode_Raid_OnTeamMissionPhaseEntered_Params
{
public:
	class UTopTeamPhaseManager_Raid*             TeamPhaseManager;                                  // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Topaz.TopGameMode_Raid.OnTeamInMatchPhaseBegun
struct ATopGameMode_Raid_OnTeamInMatchPhaseBegun_Params
{
public:
	class UTopTeamPhaseManager_Raid*             TeamPhaseManager;                                  // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Topaz.TopGameMode_Raid.OnTeamEmpty
struct ATopGameMode_Raid_OnTeamEmpty_Params
{
public:
	class ATeamState*                            TeamState;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// Function Topaz.TopGameMode_Raid.OnStartDropshipEvac
struct ATopGameMode_Raid_OnStartDropshipEvac_Params
{
public:
	struct CoreUObject_Transform                 EvacLocation;                                      // 0x0(0x60)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APawn*                                 OwningCharacter;                                   // 0x60(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_174E[0x8];                                     // Fixing Size Of Struct 
};

// 0x70 (0x70 - 0x0)
// Function Topaz.TopGameMode_Raid.OnStartDropshipDeploy
struct ATopGameMode_Raid_OnStartDropshipDeploy_Params
{
public:
	struct CoreUObject_Transform                 DeployLocation;                                    // 0x0(0x60)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APawn*                                 OwningCharacter;                                   // 0x60(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1799[0x8];                                     // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// Function Topaz.TopGameMode_Raid.OnPlayerVotedMission
struct ATopGameMode_Raid_OnPlayerVotedMission_Params
{
public:
	class AValPlayerController*                  PlayerController;                                  // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17E6[0x4];                                     // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// Function Topaz.TopGameMode_Raid.GetBotRespawnTimer
struct ATopGameMode_Raid_GetBotRespawnTimer_Params
{
public:
	enum class EBuildingType                     BuildingType;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_185D[0x3];                                     // Fixing Size After Last Property  
	int32                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function Topaz.TopGameMode_Raid.FindPlayerDropSpot
struct ATopGameMode_Raid_FindPlayerDropSpot_Params
{
public:
	class AController*                           Player;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                IncomingName;                                      // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AValPlayerStart*                       ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Topaz.TopHangarStation.ServerOnInteracted
struct ATopHangarStation_ServerOnInteracted_Params
{
public:
	class AValCharacter*                         Initiator;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Topaz.TopHangarStation.OnInteracted
struct ATopHangarStation_OnInteracted_Params
{
public:
	class AValCharacter*                         Initiator;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B3A[0x7];                                     // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// Function Topaz.TopHangarStation.K2_CanInteract
struct ATopHangarStation_K2_CanInteract_Params
{
public:
	class AValCharacter*                         Initiator;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B75[0x7];                                     // Fixing Size Of Struct 
};

// 0x1 (0x1 - 0x0)
// Function Topaz.TopHangarStation.GetHangarStationType
struct ATopHangarStation_GetHangarStationType_Params
{
public:
	enum class EHangarStationType                ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Topaz.TopHangarStation.ClientOnInteracted
struct ATopHangarStation_ClientOnInteracted_Params
{
public:
	class AValCharacter*                         Initiator;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Topaz.TopInventoryStation.ReceiveOnBeginOverlap
struct ATopInventoryStation_ReceiveOnBeginOverlap_Params
{
public:
	class AActor*                                OtherActor;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Topaz.TopInventoryStation.OnRep_TeamId
struct ATopInventoryStation_OnRep_TeamId_Params
{
public:
	int32                                        OldTeamId;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Topaz.TopInventoryStation.OnHoldFinished
struct ATopInventoryStation_OnHoldFinished_Params
{
public:
	class AValCharacter*                         TargetCharacter;                                   // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x108 (0x108 - 0x0)
// Function Topaz.TopInventoryStation.OnBeginOverlap
struct ATopInventoryStation_OnBeginOverlap_Params
{
public:
	class UPrimitiveComponent*                   OverlappedComponent;                               // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                OtherActor;                                        // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   OtherComp;                                         // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OtherBodyIndex;                                    // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFromSweep;                                        // 0x1C(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D0C[0x3];                                     // Fixing Size After Last Property  
	struct Engine_HitResult                      SweepResult;                                       // 0x20(0xE8)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Topaz.TopInventoryStation.BeginHoldTimer
struct ATopInventoryStation_BeginHoldTimer_Params
{
public:
	class AValCharacter*                         TargetCharacter;                                   // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Topaz.TopInventoryStation.ActivateInventoryStation
struct ATopInventoryStation_ActivateInventoryStation_Params
{
public:
	class AValCharacter*                         Character;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Topaz.TopPlayerController_City.ShowHangarStation
struct ATopPlayerController_City_ShowHangarStation_Params
{
public:
	class ATopHangarStation*                     HangarStation;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Topaz.TopPlayerController_City.ClientShowHangarStation
struct ATopPlayerController_City_ClientShowHangarStation_Params
{
public:
	class ATopHangarStation*                     HangarStation;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Topaz.TopPlayerDropship.SetCurrentPhase
struct ATopPlayerDropship_SetCurrentPhase_Params
{
public:
	enum class EDropshipPhase                    NewPhase;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Topaz.TopPlayerDropship.OnInteracted
struct ATopPlayerDropship_OnInteracted_Params
{
public:
	class AValCharacter*                         Initiator;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20B0[0x7];                                     // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// Function Topaz.TopPlayerDropship.K2_CanInteract
struct ATopPlayerDropship_K2_CanInteract_Params
{
public:
	class AValCharacter*                         Initiator;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_211D[0x7];                                     // Fixing Size Of Struct 
};

// 0x1 (0x1 - 0x0)
// Function Topaz.TopPlayerDropship.GetCurrentPhase
struct ATopPlayerDropship_GetCurrentPhase_Params
{
public:
	enum class EDropshipPhase                    ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Topaz.TopPlayerState.SetDesiredPlayerStart
struct ATopPlayerState_SetDesiredPlayerStart_Params
{
public:
	class ATopPlayerStart*                       PlayerStart;                                       // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Topaz.TopPlayerState.ServerSetVisible
struct ATopPlayerState_ServerSetVisible_Params
{
public:
	bool                                         Value;                                             // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Topaz.TopPlayerState.OnRep_XP
struct ATopPlayerState_OnRep_XP_Params
{
public:
	int32                                        OldXP;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Topaz.TopPlayerState.OnRadarSensorStatusChanged
struct ATopPlayerState_OnRadarSensorStatusChanged_Params
{
public:
	class ATopRadarSensor*                       RadarSensor;                                       // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Topaz.TopPlayerState.IsVisibleOnRadarSensor
struct ATopPlayerState_IsVisibleOnRadarSensor_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Topaz.TopPlayerState.IsAwaitingActiveLoadout
struct ATopPlayerState_IsAwaitingActiveLoadout_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Topaz.TopPlayerState.GetQueuedLoadoutClass
struct ATopPlayerState_GetQueuedLoadoutClass_Params
{
public:
	struct GameplayTags_GameplayTag              ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Topaz.TopPlayerState.GetPlayerXP
struct ATopPlayerState_GetPlayerXP_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Topaz.TopPlayerState.GetPlayerLevel
struct ATopPlayerState_GetPlayerLevel_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Topaz.TopPlayerState.GetDesiredPlayerStart
struct ATopPlayerState_GetDesiredPlayerStart_Params
{
public:
	class ATopPlayerStart*                       ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Topaz.TopPlayerState.ClientOnAddXP
struct ATopPlayerState_ClientOnAddXP_Params
{
public:
	enum class EPlayerExperienceType             ExperienceType;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_26E8[0x3];                                     // Fixing Size After Last Property  
	int32                                        Amount;                                            // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function Topaz.TopPlayerState.CanQueueLoadoutClass
struct ATopPlayerState_CanQueueLoadoutClass_Params
{
public:
	struct GameplayTags_GameplayTag              LoadoutClass;                                      // 0x0(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_279D[0x3];                                     // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// Function Topaz.TopPlayerState.CalculatePlayerLevel
struct ATopPlayerState_CalculatePlayerLevel_Params
{
public:
	int32                                        Xp;                                                // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Topaz.TopPlayerState.AddXP
struct ATopPlayerState_AddXP_Params
{
public:
	enum class EPlayerExperienceType             ExperienceType;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_286C[0x3];                                     // Fixing Size After Last Property  
	int32                                        Amount;                                            // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Topaz.TopPoweredComponent.OnOwnerHealthChanged
struct UTopPoweredComponent_OnOwnerHealthChanged_Params
{
public:
	float                                        PercentHealth;                                     // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Topaz.TopPoweredComponent.IsSystemOnline
struct UTopPoweredComponent_IsSystemOnline_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Topaz.TopRadarSensor.OnGameStateSet
struct ATopRadarSensor_OnGameStateSet_Params
{
public:
	class AGameStateBase*                        GameState;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Topaz.TopRadarSensor.IsOnline
struct ATopRadarSensor_IsOnline_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Topaz.TopTeamCreationComponent_Raid.GetDungeonHazardsTeamDefinition
struct UTopTeamCreationComponent_Raid_GetDungeonHazardsTeamDefinition_Params
{
public:
	class FName                                  ReturnValue;                                       // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Topaz.TopTeamCreationComponent_CTF.GetTeamBDefinition
struct UTopTeamCreationComponent_CTF_GetTeamBDefinition_Params
{
public:
	class FName                                  ReturnValue;                                       // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Topaz.TopTeamCreationComponent_CTF.GetTeamADefinition
struct UTopTeamCreationComponent_CTF_GetTeamADefinition_Params
{
public:
	class FName                                  ReturnValue;                                       // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Topaz.TopTeamPhaseManager.SetTeamState
struct UTopTeamPhaseManager_SetTeamState_Params
{
public:
	class ATeamState*                            NewTeam;                                           // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Topaz.TopTeamPhaseManager.GetTeamState
struct UTopTeamPhaseManager_GetTeamState_Params
{
public:
	class ATeamState*                            ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Topaz.TopTeamPhaseManager.GetTeamNum
struct UTopTeamPhaseManager_GetTeamNum_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Topaz.TopTeamPhaseManager.GetCurrentTeamPhaseEndTime
struct UTopTeamPhaseManager_GetCurrentTeamPhaseEndTime_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Topaz.TopTeamPhaseManager.GetCurrentTeamPhase
struct UTopTeamPhaseManager_GetCurrentTeamPhase_Params
{
public:
	struct GameplayTags_GameplayTag              ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Topaz.TopPlayerCameraManager.GetRandomMapCamera
struct ATopPlayerCameraManager_GetRandomMapCamera_Params
{
public:
	class ATopCameraActor*                       ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Topaz.TopPlayerCameraManager.GetMapCameraActors
struct ATopPlayerCameraManager_GetMapCameraActors_Params
{
public:
	TArray<class ATopCameraActor*>               ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x100 (0x100 - 0x0)
// Function Topaz.TopGameMode_TopazCTF.OnTurretDamaged
struct ATopGameMode_TopazCTF_OnTurretDamaged_Params
{
public:
	struct Valhalla_DamageData                   DamageData;                                        // 0x0(0x100)(Parm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Topaz.TopGameMode_TopazCTF.OnGeneratorOnline
struct ATopGameMode_TopazCTF_OnGeneratorOnline_Params
{
public:
	class ATopGenerator*                         Generator;                                         // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Topaz.TopGameMode_TopazCTF.OnGeneratorOffline
struct ATopGameMode_TopazCTF_OnGeneratorOffline_Params
{
public:
	class ATopGenerator*                         Generator;                                         // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Topaz.TopGameMode_TopazCTF.OnFlagScored
struct ATopGameMode_TopazCTF_OnFlagScored_Params
{
public:
	class AValCharacter*                         Character;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ATopPickup_Flag*                       Flag;                                              // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ATopFlagStand*                         FlagStand;                                         // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Topaz.TopGameMode_TopazCTF.OnFlagReturned
struct ATopGameMode_TopazCTF_OnFlagReturned_Params
{
public:
	class AValCharacter*                         Character;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ATopPickup_Flag*                       Flag;                                              // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ATopFlagStand*                         FlagStand;                                         // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function Topaz.TopGameMode_TopazCTF.OnFlagHeldChanged
struct ATopGameMode_TopazCTF_OnFlagHeldChanged_Params
{
public:
	class ATopPickup_Flag*                       PickupFlag;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Topaz_HolderInfo                      HolderInfo;                                        // 0x8(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct Topaz_HolderInfo                      LastHolderInfo;                                    // 0x18(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Topaz.TopGameMode_TopazCTF_OneFlag.AssignTeamRolesAndFlags
struct ATopGameMode_TopazCTF_OneFlag_AssignTeamRolesAndFlags_Params
{
public:
	bool                                         bFirstAssignment;                                  // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Topaz.TopGameState.ShouldUseMapCamera
struct ATopGameState_ShouldUseMapCamera_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function Topaz.TopGameState.SetLevelingInfo
struct ATopGameState_SetLevelingInfo_Params
{
public:
	int32                                        MaxLevel;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A67[0x4];                                     // Fixing Size After Last Property  
	struct GameplayAbilities_ScalableFloat       LevelingInfo;                                      // 0x8(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Topaz.TopGameState.SetIsInOvertime
struct ATopGameState_SetIsInOvertime_Params
{
public:
	bool                                         bNewIsInOvertime;                                  // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Topaz.TopGameState.QueueLoadoutClass
struct ATopGameState_QueueLoadoutClass_Params
{
public:
	class ATopPlayerState*                       PlayerState;                                       // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GameplayTags_GameplayTag              NewLoadoutClass;                                   // 0x8(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AA4[0x7];                                     // Fixing Size Of Struct 
};

// 0x1 (0x1 - 0x0)
// Function Topaz.TopGameState.GetIsInOvertime
struct ATopGameState_GetIsInOvertime_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Topaz.TopGameState_TopazCTF.OnPlayerScored
struct ATopGameState_TopazCTF_OnPlayerScored_Params
{
public:
	class AValPlayerState*                       PlayerState;                                       // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ScoreAmount;                                       // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BAC[0x4];                                     // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// Function Topaz.TopGameState_TopazCTF.OnPlayerReturnedFlag
struct ATopGameState_TopazCTF_OnPlayerReturnedFlag_Params
{
public:
	class ATopPickup_Flag*                       PickupFlag;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AValPlayerState*                       PlayerState;                                       // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function Topaz.TopGameState_TopazCTF.OnFlagHeldChangedInternal
struct ATopGameState_TopazCTF_OnFlagHeldChangedInternal_Params
{
public:
	class ATopPickup_Flag*                       PickupFlag;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Topaz_HolderInfo                      HolderInfo;                                        // 0x8(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct Topaz_HolderInfo                      LastHolderInfo;                                    // 0x18(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function Topaz.TopGameState_TopazCTF.OnFlagHeldChanged
struct ATopGameState_TopazCTF_OnFlagHeldChanged_Params
{
public:
	class ATopPickup_Flag*                       PickupFlag;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Topaz_HolderInfo                      HolderInfo;                                        // 0x8(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct Topaz_HolderInfo                      LastHolderInfo;                                    // 0x18(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Topaz.TopGameState_TopazCTF.NotifyPlayerScored
struct ATopGameState_TopazCTF_NotifyPlayerScored_Params
{
public:
	class AValPlayerState*                       PlayerState;                                       // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ScoreAmount;                                       // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C3D[0x4];                                     // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// Function Topaz.TopGameState_TopazCTF.NotifyPlayerReturnedFlag
struct ATopGameState_TopazCTF_NotifyPlayerReturnedFlag_Params
{
public:
	class ATopPickup_Flag*                       Flag;                                              // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AValPlayerState*                       PlayerState;                                       // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Topaz.TopGameState_TopazCTF.NetMulticastOnPlayerScored
struct ATopGameState_TopazCTF_NetMulticastOnPlayerScored_Params
{
public:
	class AValPlayerState*                       PlayerState;                                       // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ScoreAmount;                                       // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C73[0x4];                                     // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// Function Topaz.TopGameState_TopazCTF.NetMulticastOnPlayerReturnedFlag
struct ATopGameState_TopazCTF_NetMulticastOnPlayerReturnedFlag_Params
{
public:
	class ATopPickup_Flag*                       PickupFlag;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AValPlayerState*                       PlayerState;                                       // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function Topaz.TopGameState_TopazCTF.NetMulticastOnFlagHeldChanged
struct ATopGameState_TopazCTF_NetMulticastOnFlagHeldChanged_Params
{
public:
	class ATopPickup_Flag*                       PickupFlag;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Topaz_HolderInfo                      HolderInfo;                                        // 0x8(0x10)(ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct Topaz_HolderInfo                      LastHolderInfo;                                    // 0x18(0x10)(ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Topaz.TopGameState_TopazCTF.GetTeamOnOffense
struct ATopGameState_TopazCTF_GetTeamOnOffense_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Topaz.TopGameState_TopazCTF.GetStalemateTime
struct ATopGameState_TopazCTF_GetStalemateTime_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Topaz.TopGameState_TopazCTF.GetRadarSensorByTeamDefinition
struct ATopGameState_TopazCTF_GetRadarSensorByTeamDefinition_Params
{
public:
	class FName                                  TeamDefinition;                                    // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ATopRadarSensor*                       ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Topaz.TopGameState_TopazCTF.GetIsInStalemate
struct ATopGameState_TopazCTF_GetIsInStalemate_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Topaz.TopGameState_TopazCTF.GetFlagStandData
struct ATopGameState_TopazCTF_GetFlagStandData_Params
{
public:
	TArray<struct Topaz_FlagStandData>           OutFlagStandData;                                  // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Topaz.TopGameState_TopazCTF.GetFlagPickups
struct ATopGameState_TopazCTF_GetFlagPickups_Params
{
public:
	TArray<class ATopPickup_Flag*>               ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function Topaz.TopGameState_TopazCTF.GetFlagHolders
struct ATopGameState_TopazCTF_GetFlagHolders_Params
{
public:
	TMap<class AValCharacter*, class ATopPickup_Flag*> ReturnValue;                                       // 0x0(0x50)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Topaz.TopGameState_TopazCTF.GetFlagByTeamDefinition
struct ATopGameState_TopazCTF_GetFlagByTeamDefinition_Params
{
public:
	class FName                                  TeamDefinition;                                    // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ATopPickup_Flag*                       ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Topaz.TopGameState_TopazCTF.GetCTFType
struct ATopGameState_TopazCTF_GetCTFType_Params
{
public:
	enum class ECTFType                          ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x100 (0x100 - 0x0)
// Function Topaz.TopOverlayDamage.SetDamageData
struct UTopOverlayDamage_SetDamageData_Params
{
public:
	struct Valhalla_DamageData                   DamageData;                                        // 0x0(0x100)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Topaz.TopOverlayHealth.UpdateHealthMax
struct UTopOverlayHealth_UpdateHealthMax_Params
{
public:
	int32                                        HealthMax;                                         // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Topaz.TopOverlayHealth.UpdateHealth
struct UTopOverlayHealth_UpdateHealth_Params
{
public:
	int32                                        Health;                                            // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Topaz.TopOverlayHealth.UpdateAlive
struct UTopOverlayHealth_UpdateAlive_Params
{
public:
	bool                                         Alive;                                             // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Topaz.TopOverlayHealth.OnHealthPercentChanged
struct UTopOverlayHealth_OnHealthPercentChanged_Params
{
public:
	float                                        HealthPercent;                                     // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Topaz.TopOverlayHealth.OnHealthMaxChanged
struct UTopOverlayHealth_OnHealthMaxChanged_Params
{
public:
	int32                                        HealthMax;                                         // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Topaz.TopOverlayHealth.OnHealthChanged
struct UTopOverlayHealth_OnHealthChanged_Params
{
public:
	int32                                        Health;                                            // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Topaz.TopOverlayHealth.OnAliveChanged
struct UTopOverlayHealth_OnAliveChanged_Params
{
public:
	bool                                         Alive;                                             // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Topaz.TopOverlayWidgetBase.OnWorldLocationChanged
struct UTopOverlayWidgetBase_OnWorldLocationChanged_Params
{
public:
	struct CoreUObject_Vector                    WorldLocation;                                     // 0x0(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Topaz.TopOverlayWidgetBase.OnVisibleChanged
struct UTopOverlayWidgetBase_OnVisibleChanged_Params
{
public:
	bool                                         Visible;                                           // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x108 (0x108 - 0x0)
// Function Topaz.TopOverlayWidgetBase.OnViewTargetDealtDamage
struct UTopOverlayWidgetBase_OnViewTargetDealtDamage_Params
{
public:
	struct Valhalla_DamageData                   DamageData;                                        // 0x0(0x100)(Parm, NativeAccessSpecifierPublic)
	class AActor*                                Target;                                            // 0x100(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x100 (0x100 - 0x0)
// Function Topaz.TopOverlayWidgetBase.OnViewTargetDamagedOwner
struct UTopOverlayWidgetBase_OnViewTargetDamagedOwner_Params
{
public:
	struct Valhalla_DamageData                   DamageData;                                        // 0x0(0x100)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Topaz.TopOverlayWidgetBase.OnViewTargetChanged
struct UTopOverlayWidgetBase_OnViewTargetChanged_Params
{
public:
	class AActor*                                NewTarget;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Topaz.TopOverlayWidgetBase.OnTrackedTargetChanged
struct UTopOverlayWidgetBase_OnTrackedTargetChanged_Params
{
public:
	class AValCharacter*                         Target;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Topaz.TopOverlayWidgetBase.OnTeamRelationChanged
struct UTopOverlayWidgetBase_OnTeamRelationChanged_Params
{
public:
	enum class ETeamRelation                     Relation;                                          // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Topaz.TopOverlayWidgetBase.OnScreenPositionChanged
struct UTopOverlayWidgetBase_OnScreenPositionChanged_Params
{
public:
	struct CoreUObject_Vector2D                  ScreenPosition;                                    // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Topaz.TopOverlayWidgetBase.OnOwningStateReady
struct UTopOverlayWidgetBase_OnOwningStateReady_Params
{
public:
	class AValPlayerStateBase*                   PlayerState;                                       // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Topaz.TopOverlayWidgetBase.OnOwnerTeamChanged
struct UTopOverlayWidgetBase_OnOwnerTeamChanged_Params
{
public:
	int32                                        OldTeam;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NewTeam;                                           // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Topaz.TopOverlayWidgetBase.OnOwnerHealthMaxChanged
struct UTopOverlayWidgetBase_OnOwnerHealthMaxChanged_Params
{
public:
	int32                                        HealthMax;                                         // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Topaz.TopOverlayWidgetBase.OnOwnerHealthChanged
struct UTopOverlayWidgetBase_OnOwnerHealthChanged_Params
{
public:
	int32                                        Health;                                            // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Topaz.TopOverlayWidgetBase.OnOwnerAliveChanged
struct UTopOverlayWidgetBase_OnOwnerAliveChanged_Params
{
public:
	bool                                         Alive;                                             // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Topaz.TopOverlayWidgetBase.OnOffScreenChanged
struct UTopOverlayWidgetBase_OnOffScreenChanged_Params
{
public:
	bool                                         Offscreen;                                         // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Topaz.TopOverlayWidgetBase.OnLocalTeamChanged
struct UTopOverlayWidgetBase_OnLocalTeamChanged_Params
{
public:
	int32                                        OldTeam;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NewTeam;                                           // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Topaz.TopOverlayWidgetBase.OnHoveredChanged
struct UTopOverlayWidgetBase_OnHoveredChanged_Params
{
public:
	bool                                         Hovered;                                           // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Topaz.TopOverlayWidgetBase.OnHideHUDChanged
struct UTopOverlayWidgetBase_OnHideHUDChanged_Params
{
public:
	bool                                         HideHUD;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Topaz.TopOverlayWidgetBase.OnHealthMaxChanged
struct UTopOverlayWidgetBase_OnHealthMaxChanged_Params
{
public:
	int32                                        OldValue;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NewValue;                                          // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Topaz.TopOverlayWidgetBase.OnHealthChanged
struct UTopOverlayWidgetBase_OnHealthChanged_Params
{
public:
	int32                                        OldValue;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NewValue;                                          // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Topaz.TopOverlayWidgetBase.OnDistanceChanged
struct UTopOverlayWidgetBase_OnDistanceChanged_Params
{
public:
	float                                        DistanceSq;                                        // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Topaz.TopOverlayWidgetBase.OnDisplayNameChanged
struct UTopOverlayWidgetBase_OnDisplayNameChanged_Params
{
public:
	class FString                                DisplayName;                                       // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Topaz.TopOverlayWidgetBase.OnDirectionChanged
struct UTopOverlayWidgetBase_OnDirectionChanged_Params
{
public:
	float                                        Direction;                                         // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Topaz.TopOverlayWidgetBase.OnAimingChanged
struct UTopOverlayWidgetBase_OnAimingChanged_Params
{
public:
	bool                                         Aiming;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Topaz.TopOverlayWidgetBase.GetOwningPlayerState
struct UTopOverlayWidgetBase_GetOwningPlayerState_Params
{
public:
	class AValPlayerState*                       ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Topaz.TopOverlayWidgetBase.GetOwningActor
struct UTopOverlayWidgetBase_GetOwningActor_Params
{
public:
	class AActor*                                ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Topaz.TopOverlayWidgetBase.GetLocalViewTarget
struct UTopOverlayWidgetBase_GetLocalViewTarget_Params
{
public:
	class AValCharacter*                         ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Topaz.TopOverlayWidgetBase.GetLocalPlayerController
struct UTopOverlayWidgetBase_GetLocalPlayerController_Params
{
public:
	class AValPlayerController*                  ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Topaz.TopOverlayWidgetBase.GetLocalPlayer
struct UTopOverlayWidgetBase_GetLocalPlayer_Params
{
public:
	class ULocalPlayer*                          ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Topaz.TopOverlayWidget.OnDamageAnimationComplete
struct UTopOverlayWidget_OnDamageAnimationComplete_Params
{
public:
	class UTopOverlayDamage*                     DamageWidget;                                      // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Topaz.TopOverlayWidget.GetPositionWidgetPanel
struct UTopOverlayWidget_GetPositionWidgetPanel_Params
{
public:
	class UCanvasPanelSlot*                      ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Topaz.TopOverlayWidget_Character.OnCharacterClassChanged
struct UTopOverlayWidget_Character_OnCharacterClassChanged_Params
{
public:
	struct GameplayTags_GameplayTag              CharacterClass;                                    // 0x0(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Topaz.TopPickup_Flag.UpdateFriendlyOrEnemy
struct ATopPickup_Flag_UpdateFriendlyOrEnemy_Params
{
public:
	class AActor*                                ViewTarget;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Topaz.TopPickup_Flag.SetResetTime
struct ATopPickup_Flag_SetResetTime_Params
{
public:
	float                                        NewResetTime;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Topaz.TopPickup_Flag.SetIsCapturable
struct ATopPickup_Flag_SetIsCapturable_Params
{
public:
	bool                                         Value;                                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Topaz.TopPickup_Flag.SetHeldBy
struct ATopPickup_Flag_SetHeldBy_Params
{
public:
	struct Topaz_HolderInfo                      Holder;                                            // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Topaz.TopPickup_Flag.SetFlagHidden
struct ATopPickup_Flag_SetFlagHidden_Params
{
public:
	bool                                         bShouldHide;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Topaz.TopPickup_Flag.ResetLastFlagHolder
struct ATopPickup_Flag_ResetLastFlagHolder_Params
{
public:
	bool                                         bOverlapCheck;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Topaz.TopPickup_Flag.OnViewTargetTeamChanged
struct ATopPickup_Flag_OnViewTargetTeamChanged_Params
{
public:
	int32                                        OldTeam;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NewTeam;                                           // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Topaz.TopPickup_Flag.OnViewTargetChanged
struct ATopPickup_Flag_OnViewTargetChanged_Params
{
public:
	class AActor*                                NewViewTarget;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Topaz.TopPickup_Flag.OnTeamRegistered
struct ATopPickup_Flag_OnTeamRegistered_Params
{
public:
	int32                                        TeamId;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_41F9[0x4];                                     // Fixing Size After Last Property  
	class ATeamState*                            TeamState;                                         // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Topaz.TopPickup_Flag.OnRep_TeamId
struct ATopPickup_Flag_OnRep_TeamId_Params
{
public:
	int32                                        OldTeamId;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Topaz.TopPickup_Flag.OnRep_HeldBy
struct ATopPickup_Flag_OnRep_HeldBy_Params
{
public:
	struct Topaz_HolderInfo                      LastHolderInfo;                                    // 0x0(0x10)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Topaz.TopPickup_Flag.OnPawnControllerChanged
struct ATopPickup_Flag_OnPawnControllerChanged_Params
{
public:
	class APawn*                                 Pawn;                                              // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AController*                           Controller;                                        // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Topaz.TopPickup_Flag.OnHolderForcedToDropFlag
struct ATopPickup_Flag_OnHolderForcedToDropFlag_Params
{
public:
	struct CoreUObject_Vector                    Velocity;                                          // 0x0(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Topaz.TopPickup_Flag.OnHolderEndPlay
struct ATopPickup_Flag_OnHolderEndPlay_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEndPlayReason                    EndReason;                                         // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_424A[0x7];                                     // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// Function Topaz.TopPickup_Flag.OnHolderDied
struct ATopPickup_Flag_OnHolderDied_Params
{
public:
	float                                        TimeToRespawn;                                     // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4258[0x4];                                     // Fixing Size After Last Property  
	class AValCharacter*                         ValCharacter;                                      // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Topaz.TopPickup_Flag.OnGameStateSet
struct ATopPickup_Flag_OnGameStateSet_Params
{
public:
	class AGameStateBase*                        GameState;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x108 (0x108 - 0x0)
// Function Topaz.TopPickup_Flag.OnBeginOverlap
struct ATopPickup_Flag_OnBeginOverlap_Params
{
public:
	class UPrimitiveComponent*                   OverlappedComponent;                               // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                OtherActor;                                        // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   OtherComp;                                         // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OtherBodyIndex;                                    // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFromSweep;                                        // 0x1C(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_427B[0x3];                                     // Fixing Size After Last Property  
	struct Engine_HitResult                      SweepResult;                                       // 0x20(0xE8)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Topaz.TopPickup_Flag.IsCapturable
struct ATopPickup_Flag_IsCapturable_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Topaz.TopPickup_Flag.IsAllowedToPickup
struct ATopPickup_Flag_IsAllowedToPickup_Params
{
public:
	class AValCharacter*                         ValCharacter;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_429A[0x7];                                     // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// Function Topaz.TopPickup_Flag.GrantFlagAccolade
struct ATopPickup_Flag_GrantFlagAccolade_Params
{
public:
	class AValCharacter*                         Character;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAccoladeType                     AccoladeType;                                      // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_42A9[0x7];                                     // Fixing Size Of Struct 
};

// 0x4 (0x4 - 0x0)
// Function Topaz.TopPickup_Flag.GetResetTime
struct ATopPickup_Flag_GetResetTime_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Topaz.TopPickup_Flag.GetHeldBy
struct ATopPickup_Flag_GetHeldBy_Params
{
public:
	struct Topaz_HolderInfo                      ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Topaz.TopPickup_Flag.ForceReturnFlag
struct ATopPickup_Flag_ForceReturnFlag_Params
{
public:
	class AValCharacter*                         ReturningCharacter;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Topaz.TopPickup_Flag.EventUpdateFriendlyOrEnemy
struct ATopPickup_Flag_EventUpdateFriendlyOrEnemy_Params
{
public:
	bool                                         bFriendly;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function Topaz.TopPickup_Flag.EventHeldBy
struct ATopPickup_Flag_EventHeldBy_Params
{
public:
	struct Topaz_HolderInfo                      NewHolderInfo;                                     // 0x0(0x10)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct Topaz_HolderInfo                      LastHolderInfo;                                    // 0x10(0x10)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x3 (0x3 - 0x0)
// Function Topaz.TopPickup_Flag.Drop
struct ATopPickup_Flag_Drop_Params
{
public:
	bool                                         bScored;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInheritVelocity;                                  // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForceReturnToStart;                               // 0x2(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Topaz.TopPickup_RefillNugget.ReceiveOnNuggetSetHidden
struct ATopPickup_RefillNugget_ReceiveOnNuggetSetHidden_Params
{
public:
	bool                                         bWasHidden;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x108 (0x108 - 0x0)
// Function Topaz.TopPickup_RefillNugget.OnBeginOverlap
struct ATopPickup_RefillNugget_OnBeginOverlap_Params
{
public:
	class UPrimitiveComponent*                   OverlappedComponent;                               // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                OtherActor;                                        // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   OtherComp;                                         // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OtherBodyIndex;                                    // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFromSweep;                                        // 0x1C(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4341[0x3];                                     // Fixing Size After Last Property  
	struct Engine_HitResult                      SweepResult;                                       // 0x20(0xE8)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Topaz.TopPickup_RefillNugget.NetMulticastOnNuggetSetHidden
struct ATopPickup_RefillNugget_NetMulticastOnNuggetSetHidden_Params
{
public:
	bool                                         bWasHidden;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Topaz.TopPlayerController.ServerSetPlayerVisible
struct ATopPlayerController_ServerSetPlayerVisible_Params
{
public:
	class ATopPlayerState*                       PlayerStateToSet;                                  // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bVisible;                                          // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4389[0x7];                                     // Fixing Size Of Struct 
};

// 0xC (0xC - 0x0)
// Function Topaz.TopPlayerController.ServerSelectPerkForSlot
struct ATopPlayerController_ServerSelectPerkForSlot_Params
{
public:
	int32                                        PerkId;                                            // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GameplayTags_GameplayTag              SlotTag;                                           // 0x4(0x8)(ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Topaz.TopPlayerController.SelectPerkForSlot
struct ATopPlayerController_SelectPerkForSlot_Params
{
public:
	int32                                        PerkId;                                            // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GameplayTags_GameplayTag              SlotTag;                                           // 0x4(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xC(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_43A7[0x3];                                     // Fixing Size Of Struct 
};

// 0x20 (0x20 - 0x0)
// DelegateFunction Topaz.TopPlayerController.OnPerkSlotsUpdated__DelegateSignature
struct ATopPlayerController_OnPerkSlotsUpdated__DelegateSignature_Params
{
public:
	struct GameplayTags_GameplayTagContainer     AvailablePerkSlots;                                // 0x0(0x20)(Parm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Topaz.TopPlayerController.IsThirdPerson
struct ATopPlayerController_IsThirdPerson_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function Topaz.TopPlayerController.GetAvailablePerkSlots
struct ATopPlayerController_GetAvailablePerkSlots_Params
{
public:
	struct GameplayTags_GameplayTagContainer     ReturnValue;                                       // 0x0(0x20)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function Topaz.TopPlayerController.AddAvailablePerkSlot
struct ATopPlayerController_AddAvailablePerkSlot_Params
{
public:
	struct GameplayTags_GameplayTag              PerkSlotToAdd;                                     // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_43C4[0x3];                                     // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// Function Topaz.TopPlayerInfo.GetTopSettingsSubsystem
struct UTopPlayerInfo_GetTopSettingsSubsystem_Params
{
public:
	class UTopSettingsSubsystem*                 ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Topaz.TopFlagStand.OnFlagReturned
struct ATopFlagStand_OnFlagReturned_Params
{
public:
	class AValCharacter*                         ReturningChar;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ATopPickup_Flag*                       PickupFlag;                                        // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function Topaz.TopFlagStand.OnFlagHeldByChanged
struct ATopFlagStand_OnFlagHeldByChanged_Params
{
public:
	class ATopPickup_Flag*                       PickupFlag;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Topaz_HolderInfo                      HolderInfo;                                        // 0x8(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct Topaz_HolderInfo                      LastHolderInfo;                                    // 0x18(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x108 (0x108 - 0x0)
// Function Topaz.TopFlagStand.OnBeginOverlap
struct ATopFlagStand_OnBeginOverlap_Params
{
public:
	class UPrimitiveComponent*                   OverlappedComponent;                               // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                OtherActor;                                        // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   OtherComp;                                         // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OtherBodyIndex;                                    // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFromSweep;                                        // 0x1C(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_43FE[0x3];                                     // Fixing Size After Last Property  
	struct Engine_HitResult                      SweepResult;                                       // 0x20(0xE8)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Topaz.TopFlagStand.GetCollisionComp
struct ATopFlagStand_GetCollisionComp_Params
{
public:
	class UBoxComponent*                         ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Topaz.TopFlagStand.CanTeamScore
struct ATopFlagStand_CanTeamScore_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Topaz.TopLooseLootPickup.SetLaunchVelocity
struct ATopLooseLootPickup_SetLaunchVelocity_Params
{
public:
	struct CoreUObject_Vector                    Velocity;                                          // 0x0(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Topaz.TopLooseLootPickup.SetCachedChanneler
struct ATopLooseLootPickup_SetCachedChanneler_Params
{
public:
	class AValCharacter*                         Initiator;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Topaz.TopLooseLootPickup.GetInteractComponent
struct ATopLooseLootPickup_GetInteractComponent_Params
{
public:
	class UPrimitiveComponent*                   ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Topaz.TopLooseLootPickup.GetCollisionComp
struct ATopLooseLootPickup_GetCollisionComp_Params
{
public:
	class UBoxComponent*                         ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Topaz.TopLooseLootPickup.GetChannelTime
struct ATopLooseLootPickup_GetChannelTime_Params
{
public:
	class AValCharacter*                         Initiator;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4418[0x4];                                     // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// Function Topaz.TopLooseLootPickup.GetCachedChanneler
struct ATopLooseLootPickup_GetCachedChanneler_Params
{
public:
	class AValCharacter*                         ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


