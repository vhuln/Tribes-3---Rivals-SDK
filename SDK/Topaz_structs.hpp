#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EPlayerExperienceType : uint8
{
	NONE                           = 0,
	PLAYER_KILL                    = 1,
	PLAYER_KILL_FLAGCARRIER        = 2,
	ASSISTED_KILL                  = 3,
	FLAG_CAPTURED                  = 4,
	FLAG_RETURNED                  = 5,
	EPlayerExperienceType_MAX      = 6,
};

enum class EHangarStationType : uint8
{
	Operations                     = 0,
	O2Storage                      = 1,
	Crafting                       = 2,
	Recycler                       = 3,
	StorageContainer               = 4,
	FuelSynthesizer                = 5,
	CreditNexus                    = 6,
	Starmap                        = 7,
	Ballistics                     = 8,
	Synthesizer                    = 9,
	Replicator                     = 10,
	StatsPod                       = 11,
	EHangarStationType_MAX         = 12,
};

enum class EInventoryStationResult : uint8
{
	OnCooldown                     = 0,
	Restored                       = 1,
	ClassChanged                   = 2,
	EInventoryStationResult_MAX    = 3,
};

enum class ETopRefillType : uint8
{
	None                           = 0,
	Health                         = 1,
	Ammo                           = 2,
	Energy                         = 3,
	RefillAll                      = 4,
	ETopRefillType_MAX             = 5,
};

enum class EDropshipPhase : uint8
{
	Unset                          = 0,
	EvacApproaching                = 1,
	EvacIdling                     = 2,
	EvacLeaving                    = 3,
	DeployApproaching              = 4,
	DeployLeaving                  = 5,
	EDropshipPhase_MAX             = 6,
};

enum class ECTFType : uint8
{
	TwoFlag                        = 0,
	OneFlag                        = 1,
	ECTFType_MAX                   = 2,
};

enum class EOverlayDisplayType : uint8
{
	Standard                       = 0,
	ForceHidden                    = 1,
	ForceVisible                   = 2,
	EOverlayDisplayType_MAX        = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// ScriptStruct Topaz.HolderInfo
struct Topaz_HolderInfo
{
public:
	class AValCharacter*                         Holder;                                            // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReturned;                                         // 0x8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4426[0x7];                                     // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Topaz.CapturableInfo
struct Topaz_CapturableInfo
{
public:
	bool                                         bIsCapturable;                                     // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4429[0x3];                                     // Fixing Size After Last Property  
	int32                                        TimeUntilCapturable;                               // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// ScriptStruct Topaz.TeamInfo
struct Topaz_TeamInfo
{
public:
	bool                                         bPartyFill;                                        // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSearchingForTeammates;                            // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct Topaz.TeamPhase
struct Topaz_TeamPhase
{
public:
	float                                        PhaseLength;                                       // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GameplayTags_GameplayTag              NextPhaseTag;                                      // 0x4(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct Topaz.FlagStandData
struct Topaz_FlagStandData
{
public:
	struct CoreUObject_Vector3f                  Location;                                          // 0x0(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TeamId;                                            // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanTeamScore;                                     // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4439[0x3];                                     // Fixing Size Of Struct 
};

}


