#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ESecurityLevel : uint8
{
	SECURITY_LEVEL_1               = 1,
	SECURITY_LEVEL_2               = 2,
	SECURITY_LEVEL_3               = 3,
	SECURITY_LEVEL_4               = 4,
	SECURITY_LEVEL_5               = 5,
	SECURITY_LEVEL_6               = 6,
	NO_SECURITY_LEVEL              = 0,
	ESecurityLevel_MAX             = 7,
};

enum class EValAbilityInputID : uint8
{
	None                           = 0,
	ConfirmTarget                  = 1,
	CancelTarget                   = 2,
	Sprint                         = 3,
	Jump                           = 4,
	PrimaryFire                    = 5,
	SecondaryFire                  = 6,
	AlternateFire                  = 7,
	Reload                         = 8,
	NextWeapon                     = 9,
	PrevWeapon                     = 10,
	Interact                       = 11,
	AbilitySlot1                   = 12,
	AbilitySlot2                   = 13,
	AbilitySlot3                   = 14,
	AbilitySlot4                   = 15,
	Mount                          = 16,
	SwapAbility                    = 17,
	Crouch                         = 18,
	QuickMelee                     = 19,
	JumpAlternate                  = 20,
	Pet                            = 21,
	Ping                           = 22,
	CrouchToggle                   = 23,
	HealingDevice                  = 24,
	ShieldDevice                   = 25,
	SmartDevice                    = 26,
	Flashlight                     = 27,
	Recall                         = 28,
	PerkPassive1                   = 29,
	PerkPassive2                   = 30,
	PerkPassive3                   = 31,
	PerkPassive4                   = 32,
	EValAbilityInputID_MAX         = 33,
};

enum class EBindingType : uint8
{
	Pawn                           = 0,
	Player                         = 1,
	Character                      = 2,
	GameState                      = 3,
	EBindingType_MAX               = 4,
};

enum class EAwardType : uint8
{
	Down                           = 0,
	Kill                           = 1,
	Assist                         = 2,
	BountyKill                     = 3,
	BountyAssist                   = 4,
	Pickup                         = 5,
	Initial                        = 6,
	Capture                        = 7,
	RoundWon                       = 8,
	RoundLost                      = 9,
	Neutralize                     = 10,
	TeamPickup                     = 11,
	ObjectiveArea                  = 12,
	DeployableKill                 = 13,
	Spooled                        = 14,
	Bonus                          = 15,
	LateJoin                       = 16,
	EAwardType_MAX                 = 17,
};

enum class EWeaponType : uint8
{
	Pistol                         = 0,
	Rifle                          = 1,
	SMG                            = 2,
	Shotgun                        = 3,
	FlameAxe                       = 4,
	Unarmed                        = 5,
	Knife                          = 6,
	Minigun                        = 7,
	RiotShield                     = 8,
	EWeaponType_MAX                = 9,
};

enum class ERarity : uint8
{
	None                           = 0,
	Common                         = 1,
	Uncommon                       = 2,
	Rare                           = 3,
	Epic                           = 4,
	Legendary                      = 5,
	Exotic                         = 6,
	Mythical                       = 7,
	Num                            = 8,
	ERarity_MAX                    = 9,
};

enum class ELootDepositPodState : uint8
{
	CanDeposit                     = 0,
	Extracting                     = 1,
	Interrupted                    = 2,
	Finished                       = 3,
	Disabled                       = 4,
	ELootDepositPodState_MAX       = 5,
};

enum class EPlayerAttributeType : uint8
{
	NNE                            = 0,
	ALL                            = 1,
	TEC                            = 2,
	INT                            = 3,
	PWR                            = 4,
	AGI                            = 5,
	HND                            = 6,
	RES                            = 7,
	AOE                            = 8,
	ADS                            = 9,
	FRR                            = 10,
	DRW                            = 11,
	RLS                            = 12,
	HSS                            = 13,
	MAG                            = 14,
	RCR                            = 15,
	SPR                            = 16,
	MXH                            = 17,
	MXS                            = 18,
	MMS                            = 19,
	CDR                            = 20,
	HSR                            = 21,
	DIS                            = 22,
	CIS                            = 23,
	RIS                            = 24,
	EIS                            = 25,
	STG                            = 26,
	ABD                            = 27,
	GRD                            = 28,
	SHP                            = 29,
	MWD                            = 30,
	EWD                            = 31,
	KWD                            = 32,
	HPS                            = 33,
	SPS                            = 34,
	CYD                            = 35,
	CYR                            = 36,
	Num                            = 37,
	EPlayerAttributeType_MAX       = 38,
};

enum class EPlayerProperty : uint8
{
	None                           = 0,
	Medic                          = 1,
	Recon                          = 2,
	Hacker                         = 3,
	Agility                        = 4,
	Stealth                        = 5,
	Trapper                        = 6,
	Acoustics                      = 7,
	Engineering                    = 8,
	Ammunition                     = 9,
	HeavyArmor                     = 10,
	CybridKiller                   = 11,
	Evasion                        = 12,
	EPlayerProperty_MAX            = 13,
};

enum class EItemSource : uint8
{
	None                           = 0,
	InMatch                        = 1,
	Purchased                      = 2,
	Crafted                        = 3,
	LevelUp                        = 4,
	ContractReward                 = 5,
	EItemSource_MAX                = 6,
};

enum class EContractDuration : uint8
{
	Seasonal                       = 0,
	Daily                          = 1,
	Weekly                         = 2,
	EContractDuration_MAX          = 3,
};

enum class ECurrencyType : uint8
{
	Credits                        = 0,
	Tokens                         = 1,
	Paid                           = 2,
	Common                         = 3,
	Uncommon                       = 4,
	Rare                           = 5,
	Epic                           = 6,
	Legendary                      = 7,
	Exotic                         = 8,
	ECurrencyType_MAX              = 9,
};

enum class ECrateState : uint8
{
	Untouched                      = 0,
	Interacting                    = 1,
	PartiallyLooted                = 2,
	Empty                          = 3,
	ECrateState_MAX                = 4,
};

enum class EPlayerType : uint8
{
	Player                         = 0,
	Hunter                         = 1,
	Cybrid                         = 2,
	Other                          = 3,
	EPlayerType_MAX                = 4,
};

enum class EDamageType : uint8
{
	Health                         = 0,
	Headshot                       = 1,
	Shield                         = 2,
	Zone                           = 3,
	Kill                           = 4,
	EDamageType_MAX                = 5,
};

enum class EGameObjectiveState : uint8
{
	None                           = 0,
	Final                          = 1,
	Active                         = 2,
	Pending                        = 3,
	Assembling                     = 4,
	PortalActivating               = 5,
	Inactive                       = 6,
	EGameObjectiveState_MAX        = 7,
};

enum class EPlayerLevelType : uint8
{
	NONE                           = 0,
	ACCOUNT_LEVEL                  = 1,
	REPUTATION                     = 2,
	AGENT                          = 3,
	EPlayerLevelType_MAX           = 4,
};

enum class EDungeonPortalState : uint8
{
	Inactive                       = 0,
	Interactable                   = 1,
	Active                         = 2,
	AutoActivated                  = 3,
	Closed                         = 4,
	Destroyed                      = 5,
	EDungeonPortalState_MAX        = 6,
};

enum class EFrontierState : uint8
{
	None                           = 0,
	Died                           = 1,
	Alive                          = 2,
	Survived                       = 3,
	Abandoned                      = 4,
	Extracted                      = 5,
	TeamEliminated                 = 6,
	Respawning                     = 7,
	Died_WithRespawn               = 8,
	RoundOver                      = 9,
	Draw                           = 10,
	EFrontierState_MAX             = 11,
};

enum class ELootState : uint8
{
	None                           = 0,
	Pending                        = 1,
	Active                         = 2,
	Looted                         = 3,
	Inactive                       = 4,
	ELootState_MAX                 = 5,
};

enum class EMapEvent : uint8
{
	BotSwarmActivated              = 0,
	EMapEvent_MAX                  = 1,
};

enum class EFrontierDirectionType : uint8
{
	None                           = 0,
	Evacuate                       = 1,
	Extract                        = 2,
	Revive                         = 3,
	Attack                         = 4,
	Defend                         = 5,
	Fabricator                     = 6,
	BuildingLoot                   = 7,
	NeutralDeposit                 = 8,
	LegendaryArtifact              = 9,
	EFrontierDirectionType_MAX     = 10,
};

enum class EObjectiveState : uint8
{
	None                           = 0,
	Active                         = 1,
	Holding                        = 2,
	Captured                       = 3,
	Capturing                      = 4,
	Contested                      = 5,
	Neutralized                    = 6,
	Neutralizing                   = 7,
	EObjectiveState_MAX            = 8,
};

enum class EMissionDiffuclty : uint8
{
	NONE                           = 0,
	BEGINNER                       = 1,
	EASY                           = 2,
	MEDIUM                         = 3,
	HARD                           = 4,
	VERY_HARD                      = 5,
	VETERAN                        = 6,
	EMissionDiffuclty_MAX          = 7,
};

enum class EProjectileRejection : uint8
{
	Unknown                        = 0,
	Blocked                        = 1,
	OffTrajectory                  = 2,
	PositionHistorySweepFailed     = 3,
	NoFriendlyFire                 = 4,
	NoWorld                        = 5,
	BadInstigator                  = 6,
	EProjectileRejection_MAX       = 7,
};

enum class EPurchaseFailReason : uint8
{
	NONE                           = 0,
	OTHER                          = 1,
	NO_BACKPACK_ROOM               = 2,
	INSUFFICIENT_FUNDS             = 3,
	INSUFFICIENT_STOCK             = 4,
	PLAYER_LEVEL_LOCKED            = 5,
	INVALID_UPGRADE_LEVEL          = 6,
	INSUFFICIENT_COMPONENTS        = 7,
	EPurchaseFailReason_MAX        = 8,
};

enum class EFabricatorShopType : uint8
{
	None                           = 0,
	PrimaryAmmo                    = 1,
	SecondaryAmmo                  = 2,
	Boost                          = 3,
	HealthPack                     = 4,
	ShieldPack                     = 5,
	EFabricatorShopType_MAX        = 6,
};

enum class ERespawnPointState : uint8
{
	Inactive                       = 0,
	Interactable                   = 1,
	ReviveInProgress               = 2,
	Destroyed                      = 3,
	ERespawnPointState_MAX         = 4,
};

enum class EReviveBeaconState : uint8
{
	Interactable                   = 0,
	Channeled                      = 1,
	Reviving                       = 2,
	EReviveBeaconState_MAX         = 3,
};

enum class EServerStatus : uint8
{
	FINE                           = 0,
	MINOR_ISSUES                   = 1,
	SEVERE_ISSUES                  = 2,
	EServerStatus_MAX              = 3,
};

enum class EShopPurchaseResponse : uint8
{
	None                           = 0,
	Pending                        = 1,
	Failure                        = 2,
	Success                        = 3,
	Unknown                        = 4,
	CannotAfford                   = 5,
	PendingOrder                   = 6,
	ItemUnavailable                = 7,
	EShopPurchaseResponse_MAX      = 8,
};

enum class EValMimicChestState : uint8
{
	Disabled                       = 0,
	Active                         = 1,
	Triggered                      = 2,
	EValMimicChestState_MAX        = 3,
};

enum class ETeleportAlert : uint8
{
	None                           = 0,
	TeleportUnavailable            = 1,
	TeleportRequireMission         = 2,
	TeleportRequireSameTeam        = 3,
	TeleportPreparingForLaunch     = 4,
	ETeleportAlert_MAX             = 5,
};

enum class ETrainingState : uint8
{
	None                           = 0,
	PreMatch                       = 1,
	InShip                         = 2,
	Landed                         = 3,
	BattleCybrids                  = 4,
	SearchForBoost                 = 5,
	SearchForLegendary             = 6,
	SearchForDeposit               = 7,
	WaitForExtraction              = 8,
	ReviveTeammate                 = 9,
	SearchForFinalArtifact         = 10,
	Evacuation                     = 11,
	ETrainingState_MAX             = 12,
};

enum class EVendorResponse : uint8
{
	None                           = 0,
	Pending                        = 1,
	Failure                        = 2,
	Success                        = 3,
	StashFull                      = 4,
	PendingOrder                   = 5,
	InternalError                  = 6,
	ItemUnavailable                = 7,
	MissingCurrency                = 8,
	MissingComponents              = 9,
	EVendorResponse_MAX            = 10,
};

enum class EVendorType : uint8
{
	None                           = 0,
	Shop                           = 1,
	Armory                         = 2,
	Missions                       = 3,
	EVendorType_MAX                = 4,
};

enum class EValAbilitySwappableSwapType : uint8
{
	Quick                          = 0,
	UseGunValue                    = 1,
	Custom                         = 2,
	EValAbilitySwappableSwapType_MAX = 3,
};

enum class ETeamSize : uint8
{
	None                           = 0,
	Solo                           = 1,
	Duo                            = 2,
	Trio                           = 3,
	ETeamSize_MAX                  = 4,
};

enum class EComparisonLogic : uint8
{
	LessThan                       = 0,
	LessThanOrEqual                = 1,
	Equal                          = 2,
	NotEqual                       = 3,
	GreaterThanOrEqual             = 4,
	GreaterThan                    = 5,
	EComparisonLogic_MAX           = 6,
};

enum class EActivityType : uint8
{
	None                           = 0,
	Daily                          = 1,
	Weekly                         = 2,
	Seasonal                       = 3,
	Vendor                         = 4,
	Accolade                       = 5,
	EActivityType_MAX              = 6,
};

enum class EActivityClientNotification : uint8
{
	None                           = 0,
	Completed                      = 1,
	TierReached                    = 2,
	Incremented                    = 3,
	EActivityClientNotification_MAX = 4,
};

enum class EVisionShape : uint8
{
	Cone                           = 0,
	Plane                          = 1,
	EVisionShape_MAX               = 2,
};

enum class EBotFillTypes : uint8
{
	None                           = 0,
	Hunter                         = 1,
	Player                         = 2,
	EBotFillTypes_MAX              = 3,
};

enum class EAttributeActorTeamMode : uint8
{
	None                           = 0,
	Manual                         = 1,
	CachedFromOwner                = 2,
	ReferencedFromOwner            = 3,
	EAttributeActorTeamMode_MAX    = 4,
};

enum class EBotClass : uint8
{
	None                           = 0,
	Standard                       = 1,
	Sniper                         = 2,
	Shield                         = 3,
	Spinfusor                      = 4,
	Turret                         = 5,
	Health                         = 6,
	Melee                          = 7,
	Reaper                         = 8,
	UberWalker                     = 9,
	Healer                         = 10,
	Player                         = 11,
	Stealth                        = 12,
	SuicideExplosive               = 13,
	LightMelee                     = 14,
	HeavyMelee                     = 15,
	SpiderMelee                    = 16,
	SpiderExplosive                = 17,
	WaspProjectile                 = 18,
	WaspLaser                      = 19,
	Mindless                       = 20,
	PhalanxRanged                  = 21,
	PhalanxMelee                   = 22,
	IceShrike                      = 23,
	EBotClass_MAX                  = 24,
};

enum class EBotDirective : uint8
{
	None                           = 0,
	ReturnToBase                   = 1,
	WaitInShip                     = 2,
	LeaveDropship                  = 3,
	StartDeposit                   = 4,
	DefendDeposit                  = 5,
	AttackDeposit                  = 6,
	ExtractionShip                 = 7,
	EscapeFog                      = 8,
	Patrol                         = 9,
	EBotDirective_MAX              = 10,
};

enum class EBotAimType : uint8
{
	None                           = 0,
	NearMiss                       = 1,
	Hit                            = 2,
	EBotAimType_MAX                = 3,
};

enum class EComponentShape : uint8
{
	Sphere                         = 0,
	Box                            = 1,
	Capsule                        = 2,
	EComponentShape_MAX            = 3,
};

enum class ECallToActionType : uint8
{
	None                           = 0,
	Ability                        = 1,
	Perk                           = 2,
	ECallToActionType_MAX          = 3,
};

enum class EValGame_CustomMovement : uint8
{
	ValMOVE_Skiing                 = 0,
	ValMOVE_Jetpacking             = 1,
	ValMOVE_Skydiving              = 2,
	ValMOVE_SkydiveLanding         = 3,
	ValMOVE_Extracting             = 4,
	ValMOVE_Vaulting               = 5,
	ValMOVE_Rotating               = 6,
	ValMOVE_MAX                    = 7,
};

enum class EJetpackThrustMode : uint8
{
	Automatic                      = 0,
	Standard                       = 1,
	Lateral                        = 2,
	Upward                         = 3,
	Downward                       = 4,
	EJetpackThrustMode_MAX         = 5,
};

enum class EValMeleeType : uint8
{
	SPHERE                         = 0,
	BOX                            = 1,
	CONE                           = 2,
	EValMeleeType_MAX              = 3,
};

enum class ECameraPerspective : uint8
{
	FirstPerson                    = 0,
	ThirdPerson                    = 1,
	ECameraPerspective_MAX         = 2,
};

enum class EEndRoomRule : uint8
{
	Random                         = 0,
	Northernmost                   = 1,
	None                           = 2,
	EEndRoomRule_MAX               = 3,
};

enum class EConnectRule : uint8
{
	DontConnect                    = 0,
	ConnectEastWest                = 1,
	ConnectNorthSouth              = 2,
	ConnectAll                     = 3,
	EConnectRule_MAX               = 4,
};

enum class EDepthRule : uint8
{
	RoomX                          = 0,
	RoomXPlusMiniBossXJump         = 1,
	EDepthRule_MAX                 = 2,
};

enum class EMiniBossRule : uint8
{
	Random                         = 0,
	SpacedX                        = 1,
	EMiniBossRule_MAX              = 2,
};

enum class ENeighborDir : uint8
{
	None                           = 0,
	North                          = 2,
	East                           = 4,
	South                          = 8,
	West                           = 16,
	ENeighborDir_MAX               = 17,
};

enum class EGenerationType : uint8
{
	Random                         = 0,
	Rectangle                      = 1,
	EGenerationType_MAX            = 2,
};

enum class EDoorState : uint8
{
	None                           = 0,
	North                          = 1,
	NorthEast                      = 2,
	NorthSouth                     = 3,
	NorthEastSouth                 = 4,
	AllSides                       = 5,
	EDoorState_MAX                 = 6,
};

enum class EAbilityType : uint8
{
	GENERIC                        = 0,
	MASTERY                        = 1,
	EAbilityType_MAX               = 2,
};

enum class EVEM_Initializer : uint8
{
	Assets                         = 0,
	Inventory                      = 1,
	Num                            = 2,
	EVEM_MAX                       = 3,
};

enum class EPlayerExperienceSource : uint8
{
	NONE                           = 0,
	PLAYER_KILLS                   = 1,
	PLAYER_ELIMINATIONS            = 2,
	BOT_KILLS                      = 3,
	VIP_MULTIPLIER                 = 4,
	TIME_ALIVE                     = 5,
	EXTRACTION                     = 6,
	REVIVES                        = 7,
	ENTRY_COST                     = 8,
	DOG_TAGS                       = 9,
	EXTRACTION_BONUS               = 10,
	SEASON_BONUS                   = 11,
	OBJECTIVE_TERMINALS            = 12,
	MISSION_PROGRESS               = 13,
	EPlayerExperienceSource_MAX    = 14,
};

enum class EValShapeTraceType : uint8
{
	Sphere                         = 0,
	Box                            = 1,
	EValShapeTraceType_MAX         = 2,
};

enum class EValInteractText : uint8
{
	INVALID                        = 0,
	PICKUP                         = 1,
	ACTIVATE                       = 2,
	OPEN                           = 3,
	CLOSE                          = 4,
	HACK                           = 5,
	EValInteractText_MAX           = 6,
};

enum class EVIM_Initializer : uint8
{
	Config                         = 0,
	Passives                       = 1,
	Settings                       = 2,
	Abilities                      = 3,
	Cosmetics                      = 4,
	Inventory                      = 5,
	PassiveSlots                   = 6,
	Num                            = 7,
	EVIM_MAX                       = 8,
};

enum class EValLinkTravelType : uint8
{
	None                           = 0,
	Climb                          = 1,
	Jump                           = 2,
	Door                           = 3,
	EValLinkTravelType_MAX         = 4,
};

enum class EValVaultingState : uint8
{
	PreVaulting                    = 0,
	Vaulting                       = 1,
	PostVaulting                   = 2,
	EValVaultingState_MAX          = 3,
};

enum class EValMovementDirection : uint8
{
	Up                             = 0,
	Down                           = 1,
	Lateral                        = 2,
	EValMovementDirection_MAX      = 3,
};

enum class EPlayerAttributeValueType : uint8
{
	Additive                       = 0,
	Multiplier                     = 1,
	EPlayerAttributeValueType_MAX  = 2,
};

enum class EPlayerAttributeFormatType : uint8
{
	Flat                           = 0,
	Percent                        = 1,
	ZeroedPercent                  = 2,
	EPlayerAttributeFormatType_MAX = 3,
};

enum class EPlayerStartPriority : uint8
{
	None                           = 0,
	LowPriority                    = 1,
	HighPriority                   = 2,
	EPlayerStartPriority_MAX       = 3,
};

enum class EPositionHistoryRecordMode : uint8
{
	OnTick                         = 0,
	Manual                         = 1,
	EPositionHistoryRecordMode_MAX = 2,
};

enum class EProjectilePredictionType : uint8
{
	PassThrough                    = 0,
	Bounce                         = 1,
	Stop                           = 2,
	Grenade                        = 3,
	EProjectilePredictionType_MAX  = 4,
};

enum class EValQueueOnlineSupport : uint8
{
	Both                           = 0,
	OnlineOnly                     = 1,
	OfflineOnly                    = 2,
	EValQueueOnlineSupport_MAX     = 3,
};

enum class EClassRepNodeMapping : uint8
{
	NotRouted                      = 0,
	RelevantAllConnections         = 1,
	TeamOnly                       = 2,
	Spatialize_Static              = 3,
	Spatialize_Dynamic             = 4,
	Spatialize_Dormancy            = 5,
	EClassRepNodeMapping_MAX       = 6,
};

enum class EMagnitudeValueType : uint8
{
	Flat                           = 0,
	Percentage                     = 1,
	EMagnitudeValueType_MAX        = 2,
};

enum class ELevelType : uint8
{
	None                           = 0,
	Login                          = 1,
	Lobby                          = 2,
	ELevelType_MAX                 = 3,
};

enum class EBuildingType : uint8
{
	None                           = 0,
	Cargo                          = 1,
	Medical                        = 2,
	Engineering                    = 3,
	Bridge                         = 4,
	Operations                     = 5,
	Brig                           = 6,
	CrewQuarters                   = 7,
	Hydroponics                    = 8,
	EBuildingType_MAX              = 9,
};

enum class ENavLinkAgentType : uint8
{
	NONE                           = 0,
	DOOR                           = 1,
	CLIMB                          = 2,
	ENavLinkAgentType_MAX          = 3,
};

enum class EArtifactIcon : uint8
{
	None                           = 0,
	Pickup                         = 1,
	DeathCrate                     = 2,
	EArtifactIcon_MAX              = 3,
};

enum class EValOwnedSpawnType : uint8
{
	None                           = 0,
	DropTurret                     = 1,
	FlameTurret                    = 2,
	PlasmaTurret                   = 3,
	RocketTurret                   = 4,
	HealingBuffStation             = 5,
	DamageBuffStation              = 6,
	Barricade                      = 7,
	JumpPad                        = 8,
	DomeShield                     = 9,
	MimicChest                     = 10,
	EValOwnedSpawnType_MAX         = 11,
};

enum class EMissionPhase : uint8
{
	None                           = 0,
	PreRound                       = 1,
	InProgress                     = 2,
	Complete                       = 3,
	Inactive                       = 4,
	EMissionPhase_MAX              = 5,
};

enum class EMissionWinCondition : uint8
{
	None                           = 0,
	LowestScore                    = 1,
	HighestScore                   = 2,
	EMissionWinCondition_MAX       = 3,
};

enum class ELateralDirection : uint8
{
	Front                          = 0,
	FrontRight                     = 1,
	Right                          = 2,
	BackRight                      = 3,
	Back                           = 4,
	BackLeft                       = 5,
	Left                           = 6,
	FrontLeft                      = 7,
	ELateralDirection_MAX          = 8,
};

enum class EDistanceFilterType : uint8
{
	None                           = 0,
	Inner                          = 1,
	Outer                          = 2,
	EDistanceFilterType_MAX        = 3,
};

enum class ELocationFilterType : uint8
{
	TopRight                       = 0,
	TopLeft                        = 1,
	BottomLeft                     = 2,
	BottomRight                    = 3,
	ELocationFilterType_MAX        = 4,
};

enum class EMissionType : uint8
{
	None                           = 0,
	Capture                        = 1,
	Deathmatch                     = 2,
	Pve                            = 3,
	EMissionType_MAX               = 4,
};

enum class EDamageNumberType : uint8
{
	Off                            = 0,
	Standard                       = 1,
	Aggregate                      = 2,
	EDamageNumberType_MAX          = 3,
};

enum class EQueueType : uint8
{
	PVE                            = 0,
	PVP                            = 1,
	Private                        = 2,
	EQueueType_MAX                 = 3,
};

enum class EGameStatType : uint8
{
	None                           = 0,
	Downs                          = 1,
	Kills                          = 2,
	Bot_Kills                      = 3,
	Deaths                         = 4,
	Assists                        = 5,
	Bot_Assists                    = 6,
	Captures                       = 7,
	Returns                        = 8,
	Currency                       = 9,
	Objective                      = 10,
	Neutralizes                    = 11,
	Eliminations                   = 12,
	Revives                        = 13,
	ScanTowerUses                  = 14,
	ExtractionInterruptions        = 15,
	HunterBotNotoriety             = 16,
	Num                            = 17,
	EGameStatType_MAX              = 18,
};

enum class EAccoladeType : uint8
{
	None                           = 0,
	FlagCapture                    = 1,
	FlagDefender                   = 2,
	FlagGrab                       = 3,
	FlagReturn                     = 4,
	FlagKiller                     = 5,
	BluePlateSpecial               = 6,
	TurretDown                     = 7,
	Num                            = 8,
	EAccoladeType_MAX              = 9,
};

enum class ERoundState : uint8
{
	None                           = 0,
	Combat                         = 1,
	Result                         = 2,
	Prepare                        = 3,
	Overtime                       = 4,
	ERoundState_MAX                = 5,
};

enum class EScopeType : uint8
{
	None                           = 0,
	SniperRifle                    = 1,
	PhaseRifle                     = 2,
	EScopeType_MAX                 = 3,
};

enum class EReticleType : uint8
{
	CrossAndDot                    = 0,
	Dot                            = 1,
	Spinfusor                      = 2,
	Drop                           = 3,
	Circle                         = 4,
	EReticleType_MAX               = 5,
};

enum class EImpactSoundBehavior : uint8
{
	Single                         = 0,
	Continuous                     = 1,
	SingleAndContinuous            = 2,
	None                           = 3,
	EImpactSoundBehavior_MAX       = 4,
};

enum class ETreeCategory : uint8
{
	Armor                          = 0,
	Weapons                        = 1,
	Abilities                      = 2,
	Utility                        = 3,
	Primary                        = 4,
	Specialty                      = 5,
	Movement                       = 6,
	Melee                          = 7,
	ETreeCategory_MAX              = 8,
};

enum class ESpawnType : uint8
{
	Teleport                       = 0,
	DropPod                        = 1,
	PodLauncher                    = 2,
	ESpawnType_MAX                 = 3,
};

enum class EOverlayMeshType : uint8
{
	FP_WeaponMesh                  = 0,
	TP_WeaponMesh                  = 1,
	FP_PlayerMesh                  = 2,
	TP_PlayerMesh                  = 3,
	EOverlayMeshType_MAX           = 4,
};

enum class ECoordinatorState : uint8
{
	None                           = 0,
	Active                         = 1,
	Finale                         = 2,
	ECoordinatorState_MAX          = 3,
};

enum class EFrontierPortalState : uint8
{
	None                           = 0,
	Inactive                       = 1,
	Pending                        = 2,
	Warning                        = 3,
	Active                         = 4,
	Closed                         = 5,
	EFrontierPortalState_MAX       = 6,
};

enum class ESpectateMode : uint8
{
	SpectateAnyone                 = 0,
	SpectateTeam                   = 1,
	SpectateDisabled               = 2,
	ESpectateMode_MAX              = 3,
};

enum class EInteractType : uint8
{
	Focus                          = 0,
	Proximity                      = 1,
	Volume                         = 2,
	EInteractType_MAX              = 3,
};

enum class EInteractableTargetType : uint8
{
	Default                        = 0,
	Portal                         = 1,
	Crate                          = 2,
	Medbay                         = 3,
	ReviveBeacon                   = 4,
	HackablePanel                  = 5,
	EInteractableTargetType_MAX    = 6,
};

enum class EInteractionFailureType : uint8
{
	None                           = 0,
	Custom                         = 1,
	ScavangerMastery6              = 2,
	HackerMastery4                 = 3,
	NeedPlayerDogTags              = 4,
	NotOnOwningTeam                = 5,
	MissionInventoryEmpty          = 6,
	EInteractionFailureType_MAX    = 7,
};

enum class ECraftingComponentRarityMode : uint8
{
	MINIMUM                        = 0,
	MAXIMUM                        = 1,
	EXACT                          = 2,
	CUSTOM                         = 3,
	ECraftingComponentRarityMode_MAX = 4,
};

enum class ETimeUnit : uint8
{
	Days                           = 0,
	Hours                          = 1,
	Minutes                        = 2,
	ETimeUnit_MAX                  = 3,
};

enum class EGrenadeIndicatorIconType : uint8
{
	Threat                         = 0,
	Healing                        = 1,
	EGrenadeIndicatorIconType_MAX  = 2,
};

enum class EPortalSpawnType : uint8
{
	Random                         = 0,
	Center                         = 1,
	Inner                          = 2,
	Outer                          = 3,
	EPortalSpawnType_MAX           = 4,
};

enum class EPortalSpawnClusterType : uint8
{
	Random                         = 0,
	Together                       = 1,
	Away                           = 2,
	EPortalSpawnClusterType_MAX    = 3,
};

enum class EUpscalingMethod : uint8
{
	None                           = 0,
	TAU                            = 1,
	DLSS                           = 2,
	FSR                            = 3,
	EUpscalingMethod_MAX           = 4,
};

enum class ECombinedAAMethod : uint8
{
	TAA                            = 0,
	TSR                            = 1,
	DLSS                           = 2,
	ECombinedAAMethod_MAX          = 3,
};

enum class EFSRQualityMode : uint8
{
	Quality                        = 0,
	Balanced                       = 1,
	Performance                    = 2,
	UltraPerformance               = 3,
	EFSRQualityMode_MAX            = 4,
};

enum class ELevelRewardType : uint8
{
	PERK                           = 1,
	WEAPON                         = 2,
	ABILITY                        = 3,
	ARMOR                          = 4,
	VALUABLE                       = 5,
	NONE                           = 0,
	ELevelRewardType_MAX           = 6,
};

enum class EVoiceReportEventType : uint8
{
	Report                         = 0,
	Sample                         = 1,
	EVoiceReportEventType_MAX      = 2,
};

enum class EVoiceConsentStatus : uint8
{
	Denied                         = 0,
	Granted                        = 1,
	EVoiceConsentStatus_MAX        = 2,
};

enum class ERoundingBehavior : uint8
{
	NoRounding                     = 0,
	ToNearest                      = 1,
	ToEven                         = 2,
	Ceiling                        = 3,
	Floor                          = 4,
	ERoundingBehavior_MAX          = 5,
};

enum class EItemSortOrder : uint8
{
	ITEM_NAME_ASCENDING            = 0,
	ITEM_NAME_DESCENDING           = 1,
	RARITY_ASCENDING               = 2,
	RARITY_DESCENDING              = 3,
	EItemSortOrder_MAX             = 4,
};

enum class EVendorListingType : uint8
{
	SINGLE_ITEM                    = 0,
	ITEM_POOL                      = 1,
	EVendorListingType_MAX         = 2,
};

enum class ERarityGenerationMode : uint8
{
	RANDOM                         = 0,
	PRESELECTED                    = 1,
	ERarityGenerationMode_MAX      = 2,
};

enum class EIncludeRarity : uint8
{
	INCLUDE                        = 0,
	DONT_INCLUDE                   = 1,
	EIncludeRarity_MAX             = 2,
};

enum class EItemGenerationMode : uint8
{
	REGENERATE_ON_EXPIRATION       = 0,
	REGENERATE_AFTER_PURCHASE      = 1,
	GENERATE_AFTER_PURCHASE_ONLY   = 2,
	EItemGenerationMode_MAX        = 3,
};

enum class ERarityUnlockMode : uint8
{
	AFTER                          = 0,
	BEFORE                         = 1,
	BETWEEN                        = 2,
	ERarityUnlockMode_MAX          = 3,
};

enum class EAbilityEventType : uint8
{
	None                           = 0,
	Ability                        = 1,
	Weapon                         = 2,
	EAbilityEventType_MAX          = 3,
};

enum class EMatchStats : uint8
{
	PlayersConnected               = 0,
	PlayersExtracted               = 1,
	PlayersKilled                  = 2,
	PlayersRevived                 = 3,
	PlayerAssists                  = 4,
	BotsSpawned                    = 5,
	BotsKilled                     = 6,
	BotAssists                     = 7,
	FogRounds                      = 8,
	LootCratesOpened               = 9,
	HighSecLootCratesOpened        = 10,
	DeathCratesOpened              = 11,
	BotAlarmsActivated             = 12,
	EMatchStats_MAX                = 13,
};

enum class EPlayerStats : uint8
{
	PlayerAccountLevel             = 0,
	StartingPlayerReputation       = 1,
	EndingPlayerReputation         = 2,
	TeamId                         = 3,
	PartyId                        = 4,
	TeamSize                       = 5,
	LastActiveTimeSec              = 6,
	TotalTimeActiveSec             = 7,
	ActiveFlag                     = 8,
	StartingKineticWeaponId        = 9,
	StartingEnergyWeaponId         = 10,
	Extracted                      = 11,
	Deaths                         = 12,
	Revives                        = 13,
	PlayersKilled                  = 14,
	BotsKilled                     = 15,
	PlayerAssists                  = 16,
	BotAssists                     = 17,
	PlayerDamage                   = 18,
	BotDamage                      = 19,
	ShotsTaken                     = 20,
	PlayerHeadshots                = 21,
	PlayerBodyshots                = 22,
	LootCratesOpened               = 23,
	HighSecLootCratesOpened        = 24,
	DeathCratesOpened              = 25,
	BotAlarmsActivated             = 26,
	HealthPacksUsed                = 27,
	ShieldPacksUsed                = 28,
	SuspiciousActions              = 29,
	Masteries                      = 30,
	TimesReloaded                  = 31,
	EPlayerStats_MAX               = 32,
};

enum class ESoloTeamingStat : uint8
{
	TimeInProximitySec             = 0,
	Damage                         = 1,
	Assist                         = 2,
	Kill                           = 3,
	ESoloTeamingStat_MAX           = 4,
};

enum class EPlayerFinalizationTaskStatus : uint8
{
	Uninitialized                  = 0,
	PendingExecute                 = 1,
	Executing                      = 2,
	Complete                       = 3,
	Error                          = 4,
	EPlayerFinalizationTaskStatus_MAX = 5,
};

enum class EPlayerJoinTaskImportance : uint8
{
	Required                       = 0,
	Optional                       = 1,
	EPlayerJoinTaskImportance_MAX  = 2,
};

enum class EPlayerJoinTaskStatus : uint8
{
	Uninitialized                  = 0,
	PendingExecute                 = 1,
	Executing                      = 2,
	Complete                       = 3,
	Error                          = 4,
	Abandoned                      = 5,
	EPlayerJoinTaskStatus_MAX      = 6,
};

enum class EPlayerJoinTaskCompletionStatus : uint8
{
	Success                        = 0,
	OptionalFailed                 = 1,
	RequiredFailed                 = 2,
	EPlayerJoinTaskCompletionStatus_MAX = 3,
};

enum class ELobbyState : uint8
{
	Initialized                    = 0,
	ProcessingPlayers              = 1,
	ShuttingDown                   = 2,
	Exited                         = 3,
	ELobbyState_MAX                = 4,
};

enum class EChannelToRemove : uint8
{
	Visibility                     = 0,
	Collision                      = 1,
	EChannelToRemove_MAX           = 2,
};

enum class ELegendaryArtifactState : uint8
{
	Undiscovered                   = 0,
	OnGround                       = 1,
	Held                           = 2,
	Extracting                     = 3,
	Extracted                      = 4,
	ELegendaryArtifactState_MAX    = 5,
};

enum class ECVarArrayType : uint8
{
	AsInt                          = 0,
	AsFloat                        = 1,
	AsFloatRange                   = 2,
	ECVarArrayType_MAX             = 3,
};

enum class EInteractionEventType : uint8
{
	None                           = 0,
	Custom                         = 1,
	SpawnBots                      = 2,
	EInteractionEventType_MAX      = 3,
};

enum class ERadialWheelType : uint8
{
	None                           = 0,
	Consumable                     = 1,
	Deployable                     = 2,
	ERadialWheelType_MAX           = 3,
};

enum class EOnActivationReturnState : uint8
{
	None                           = 0,
	Interactable                   = 1,
	Close                          = 2,
	EOnActivationReturnState_MAX   = 3,
};

enum class EValPingType : uint8
{
	Invalid                        = 0,
	Variable                       = 1,
	Location                       = 2,
	Deposit_Site                   = 3,
	Respawn_Point                  = 4,
	Enemy                          = 5,
	Enemy_Bot                      = 6,
	Enemy_Turret                   = 7,
	Crate                          = 8,
	Boost                          = 9,
	Loot                           = 10,
	Ability_Pickup                 = 11,
	Ammo_Primary                   = 12,
	Ammo_Secondary                 = 13,
	Pack_Health                    = 14,
	Pack_Shield                    = 15,
	Vending_Machine                = 16,
	Cash                           = 17,
	PhaseShift_Portal              = 18,
	DungeonPortal                  = 19,
	Mission                        = 20,
	COM_BEGIN                      = 21,
	Com_Looting                    = 22,
	Com_Defending                  = 23,
	Com_Watching                   = 24,
	Com_Moving                     = 25,
	Com_Past_Enemy                 = 26,
	Com_Shazbot                    = 27,
	COM_END                        = 28,
	EValPingType_MAX               = 29,
};

enum class EValConstructorAkPortalSpawnType : uint8
{
	NORMAL                         = 0,
	STAIRCASE                      = 1,
	EValConstructorAkPortalSpawnType_MAX = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// ScriptStruct Valhalla.GameplayPhaseInfo
struct Valhalla_GameplayPhaseInfo
{
public:
	struct GameplayTags_GameplayTag              Phase;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PhaseLength;                                       // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PhaseTimeRemaining;                                // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Valhalla.BotResetTimerData
struct Valhalla_BotResetTimerData
{
public:
	struct CoreUObject_DateTime                  StartTime;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Duration;                                          // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5946[0x4];                                     // Fixing Size Of Struct 
};

// 0xC (0xC - 0x0)
// ScriptStruct Valhalla.EquipSlot
struct Valhalla_EquipSlot
{
public:
	struct GameplayTags_GameplayTag              SlotTag;                                           // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GameplayAbilities_GameplayAbilitySpecHandle SpecHandle;                                        // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Valhalla.DeathData
struct Valhalla_DeathData
{
public:
	struct GameplayTags_GameplayTag              FinalDamageSource;                                 // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHeadshot;                                         // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5947[0x7];                                     // Fixing Size After Last Property  
	class APlayerState*                          SourcePlayerState;                                 // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APlayerState*                          TargetPlayerState;                                 // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Damage;                                            // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5948[0x4];                                     // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Valhalla.ValCharacterSwappingInfo
struct Valhalla_ValCharacterSwappingInfo
{
public:
	enum class EWeaponType                       CurrentWeapon;                                     // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_594A[0x7];                                     // Fixing Size After Last Property  
	class UValDeviceAudioVisual*                 NextDeviceAV;                                      // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HolsterTime;                                       // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DrawTime;                                          // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Valhalla.LootDepositPodData
struct Valhalla_LootDepositPodData
{
public:
	int32                                        PodNumber;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimerAmount;                                       // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELootDepositPodState              PodState;                                          // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERarity                           HighestRarity;                                     // 0x9(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_594C[0x2];                                     // Fixing Size After Last Property  
	int32                                        InstigatingTeam;                                   // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ExtractedLegendaryCount;                           // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_594D[0x4];                                     // Fixing Size After Last Property  
	class APlayerState*                          InitiatorPlayerState;                              // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTeammateAddedDeposit;                             // 0x20(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTeammateDepositIncreasedRarity;                   // 0x21(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_594E[0x6];                                     // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Valhalla.InventoryMod
struct Valhalla_InventoryMod
{
public:
	int32                                        ItemId;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        Value;                                             // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Valhalla.InventoryPlayerData
struct Valhalla_InventoryPlayerData
{
public:
	int32                                        PlayerId;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_5950[0x4];                                     // Fixing Size After Last Property  
	class FString                                PlayerName;                                        // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        PlayerAccountLevel;                                // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_5951[0x3];                                     // Fixing Size After Last Property  
	int32                                        PlayerEntryCost;                                   // 0x1C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Valhalla.PlayerAttributeData
struct Valhalla_PlayerAttributeData
{
public:
	enum class EPlayerAttributeType              Type;                                              // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5952[0x3];                                     // Fixing Size After Last Property  
	float                                        Value;                                             // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC8 (0xC8 - 0x0)
// ScriptStruct Valhalla.InventoryItem
struct Valhalla_InventoryItem
{
public:
	int32                                        ItemId;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Charges;                                           // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Quantity;                                          // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Guid                      InventoryId;                                       // 0xC(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERarity                           Rarity;                                            // 0x1C(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5953[0x3];                                     // Fixing Size After Last Property  
	class FString                                CustomName;                                        // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UpgradeLevel;                                      // 0x30(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Purchased;                                         // 0x34(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5954[0x3];                                     // Fixing Size After Last Property  
	int32                                        SortOrder;                                         // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DefensivePower;                                    // 0x3C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OffensivePower;                                    // 0x40(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EItemSource                       ItemSource;                                        // 0x44(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5956[0x3];                                     // Fixing Size After Last Property  
	TArray<int32>                                ChildItemIds;                                      // 0x48(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	struct Valhalla_InventoryPlayerData          PlayerData;                                        // 0x58(0x20)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct GameplayTags_GameplayTagContainer     GameplayTags;                                      // 0x78(0x20)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TArray<struct Valhalla_InventoryMod>         InventoryMods;                                     // 0x98(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<enum class EPlayerProperty>           PlayerProperties;                                  // 0xA8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct Valhalla_PlayerAttributeData>  PlayerAttributeData;                               // 0xB8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Valhalla.ContractTaskData
struct Valhalla_ContractTaskData
{
public:
	class FName                                  AssetId;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Progress;                                          // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Required;                                          // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Valhalla.CurrencyData
struct Valhalla_CurrencyData
{
public:
	enum class ECurrencyType                     Type;                                              // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5957[0x3];                                     // Fixing Size After Last Property  
	int32                                        Value;                                             // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct Valhalla.ContractData
struct Valhalla_ContractData
{
public:
	class FName                                  ContractId;                                        // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayerGoalId;                                      // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Reward;                                            // 0x18(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERarity                           Rarity;                                            // 0x20(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5958[0x7];                                     // Fixing Size After Last Property  
	TArray<struct Valhalla_CurrencyData>         Currencies;                                        // 0x28(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct Valhalla_ContractTaskData>     Tasks;                                             // 0x38(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	enum class EContractDuration                 Duration;                                          // 0x48(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPurchased;                                        // 0x49(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5959[0x2];                                     // Fixing Size After Last Property  
	struct CoreUObject_Guid                      PlayerUuid;                                        // 0x4C(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_595A[0x4];                                     // Fixing Size Of Struct 
};

// 0x14 (0x14 - 0x0)
// ScriptStruct Valhalla.PlayerStatus
struct Valhalla_PlayerStatus
{
public:
	float                                        CurrentHealth;                                     // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxHealth;                                         // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CurrentShields;                                    // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxShields;                                        // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        LivesRemaining;                                    // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_595B[0x3];                                     // Fixing Size Of Struct 
};

// 0x100 (0x100 - 0x0)
// ScriptStruct Valhalla.DamageData
struct Valhalla_DamageData
{
public:
	TWeakObjectPtr<class AActor>                 Instigator;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class AActor>                 DeployableInstigator;                              // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Amount;                                            // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_595C[0x4];                                     // Fixing Size After Last Property  
	struct Engine_Vector_NetQuantize             HitLocation;                                       // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Engine_Vector_NetQuantizeNormal       HitDirection;                                      // 0x30(0x18)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDamageType                       DamageType;                                        // 0x48(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_595D[0x3];                                     // Fixing Size After Last Property  
	struct GameplayTags_GameplayTag              DamageSourgeTag;                                   // 0x4C(0x8)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bHeadshot : 1;                                     // Mask: 0x1, PropSize: 0x10x54(0x1)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bKillingBlow : 1;                                  // Mask: 0x2, PropSize: 0x10x54(0x1)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bShieldDamage : 1;                                 // Mask: 0x4, PropSize: 0x10x54(0x1)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bShieldBroke : 1;                                  // Mask: 0x8, PropSize: 0x10x54(0x1)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDirectHit : 1;                                    // Mask: 0x10, PropSize: 0x10x54(0x1)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bBlueplateSpecial : 1;                             // Mask: 0x20, PropSize: 0x10x54(0x1)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDamageOverTime : 1;                               // Mask: 0x40, PropSize: 0x10x54(0x1)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAoE : 1;                                          // Mask: 0x80, PropSize: 0x10x54(0x1)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_595E[0x3];                                     // Fixing Size After Last Property  
	struct GameplayAbilities_GameplayEffectContextHandle EffectContext;                                     // 0x58(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct GameplayTags_GameplayTag              SourceTag;                                         // 0x70(0x8)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class AActor>                 Target;                                            // 0x78(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SourcePlayerId;                                    // 0x80(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPlayerType                       SourcePlayerType;                                  // 0x84(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_595F[0x3];                                     // Fixing Size After Last Property  
	struct Valhalla_PlayerStatus                 SourcePlayerStatus;                                // 0x88(0x14)(BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        TargetPlayerId;                                    // 0x9C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPlayerType                       TargetPlayerType;                                  // 0xA0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5960[0x3];                                     // Fixing Size After Last Property  
	struct Valhalla_PlayerStatus                 TargetPlayerStatus;                                // 0xA4(0x14)(BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct GameplayTags_GameplayTag              FinalDamageSource;                                 // 0xB8(0x8)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UValDeviceAudioVisual*                 DeviceAV;                                          // 0xC0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5961[0x38];                                    // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Valhalla.DeathDamage
struct Valhalla_DeathDamage
{
public:
	TArray<struct Valhalla_DamageData>           DeathDamage;                                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Valhalla.PendingItem
struct Valhalla_PendingItem
{
public:
	struct GameplayTags_GameplayTag              Type;                                              // 0x0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERarity                           Rarity;                                            // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5962[0x7];                                     // Fixing Size After Last Property  
	class FString                                DatabaseId;                                        // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Valhalla.ValDoorChannelStartStruct
struct Valhalla_ValDoorChannelStartStruct
{
public:
	float                                        RequiredTime;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5963[0x4];                                     // Fixing Size After Last Property  
	class AValInteractablePanel*                 InstigatedPanel;                                   // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Valhalla.LeaderboardEntry
struct Valhalla_LeaderboardEntry
{
public:
	class FString                                NickName;                                          // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Rank;                                              // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Score;                                             // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Valhalla.Leaderboard
struct Valhalla_Leaderboard
{
public:
	int32                                        AppID;                                             // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  LeaderboardName;                                   // 0x4(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5964[0x4];                                     // Fixing Size After Last Property  
	TArray<struct Valhalla_LeaderboardEntry>     LeaderboardEntries;                                // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xD0 (0xD0 - 0x0)
// ScriptStruct Valhalla.InventorySlot
struct Valhalla_InventorySlot
{
public:
	int32                                        SlotId;                                            // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SlotType;                                          // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Valhalla_InventoryItem                Item;                                              // 0x8(0xC8)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Valhalla.MissionSequenceElement
struct Valhalla_MissionSequenceElement
{
public:
	TSubclassOf<class UValActivityTracker>       TrackerClass;                                      // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bGrantsProgress;                                   // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5965[0x3];                                     // Fixing Size After Last Property  
	int32                                        RequiredCount;                                     // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x10(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
	int32                                        RequiredItemId;                                    // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5966[0x4];                                     // Fixing Size Of Struct 
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Valhalla.LootItem
struct Valhalla_LootItem
{
public:
	int32                                        MinQuantity;                                       // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxQuantity;                                       // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERarity                           Rarity;                                            // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5967[0x7];                                     // Fixing Size After Last Property  
	TSoftObjectPtr<class UDataAsset>             Asset;                                             // 0x10(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct Valhalla.MissionSequence
struct Valhalla_MissionSequence
{
public:
	TArray<struct Valhalla_MissionSequenceElement> MissionSequence;                                   // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class AValPlayerController*>          Votes;                                             // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class EMissionDiffuclty                 MissionDifficulty;                                 // 0x20(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5968[0x3];                                     // Fixing Size After Last Property  
	int32                                        DifficultyRating;                                  // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MissionAssetId;                                    // 0x28(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GameplayTags_GameplayTag              AgentTag;                                          // 0x2C(0x8)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5969[0x4];                                     // Fixing Size After Last Property  
	TArray<struct Valhalla_LootItem>             RewardedItems;                                     // 0x38(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Valhalla.MissionWinDetails
struct Valhalla_MissionWinDetails
{
public:
	int32                                        MissionWinner;                                     // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        EliminatedTeamId;                                  // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Valhalla.BoostChoices
struct Valhalla_BoostChoices
{
public:
	TArray<class FName>                          Choices;                                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class ERarity                           Rarity;                                            // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_596B[0x3];                                     // Fixing Size After Last Property  
	struct GameplayTags_GameplayTag              Slot;                                              // 0x14(0x8)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_596C[0x4];                                     // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Valhalla.VPCB_InventoryCountUpdatedEvents
struct Valhalla_VPCB_InventoryCountUpdatedEvents
{
public:
	TArray<FDelegateProperty_>                   Events;                                            // 0x0(0x10)(ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Valhalla.VivoxJoinData
struct Valhalla_VivoxJoinData
{
public:
	class FString                                Token;                                             // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Domain;                                            // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Issuer;                                            // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ChannelName;                                       // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Valhalla.MissionLocations
struct Valhalla_MissionLocations
{
public:
	struct GameplayTags_GameplayTag              MissionTag;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct CoreUObject_Vector3f>          MissionLocations;                                  // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Valhalla.Pinpoint
struct Valhalla_Pinpoint
{
public:
	struct CoreUObject_Vector2D                  ScreenLocation;                                    // 0x0(0x10)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector2D                  ScreenLocationClamped;                             // 0x10(0x10)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                TargetActor;                                       // 0x20(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x48 - 0x8)
// ScriptStruct Valhalla.ContractShop
struct Valhalla_ContractShop : public Engine_TableRowBase
{
public:
	class FName                                  ContractId;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Reward;                                            // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERarity                           Rarity;                                            // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5972[0x7];                                     // Fixing Size After Last Property  
	TArray<struct Valhalla_CurrencyData>         Currencies;                                        // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct Valhalla_ContractTaskData>     Tasks;                                             // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	enum class EContractDuration                 Duration;                                          // 0x40(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5973[0x7];                                     // Fixing Size Of Struct 
};

// 0xC (0xC - 0x0)
// ScriptStruct Valhalla.TaskProgress
struct Valhalla_TaskProgress
{
public:
	class FName                                  TaskId;                                            // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Value;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Valhalla.PlayerContract
struct Valhalla_PlayerContract
{
public:
	struct CoreUObject_Guid                      PlayerUuid;                                        // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ContractId;                                        // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct Valhalla_TaskProgress>         Progress;                                          // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0xF8 (0xF8 - 0x0)
// ScriptStruct Valhalla.LaggedProjectileHit
struct Valhalla_LaggedProjectileHit
{
public:
	struct Engine_HitResult                      HitResult;                                         // 0x0(0xE8)(IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	float                                        ClientHitTimeStamp;                                // 0xE8(0x4)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AdditionalPredictionTime;                          // 0xEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EProjectilePredictionType         PredictionType;                                    // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5974[0x7];                                     // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Valhalla.TrackedMission
struct Valhalla_TrackedMission
{
public:
	class AValInteractableMission*               Mission;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MissionProgress;                                   // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5975[0x4];                                     // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Valhalla.SubLoot
struct Valhalla_SubLoot
{
public:
	int32                                        Weight;                                            // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5976[0x4];                                     // Fixing Size After Last Property  
	class UDataAsset*                            Asset;                                             // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct Valhalla.ContractLoot
struct Valhalla_ContractLoot
{
public:
	int32                                        Quantity;                                          // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERarity                           Rarity;                                            // 0x4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5979[0x3];                                     // Fixing Size After Last Property  
	int32                                        ItemId;                                            // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct Valhalla.SkillAbility
struct Valhalla_SkillAbility : public Engine_TableRowBase
{
public:
	TSubclassOf<class UValGameplayAbility>       SkillAbility;                                      // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Valhalla.GameplayAbilityLocalAnimMontageForMesh
struct Valhalla_GameplayAbilityLocalAnimMontageForMesh
{
public:
	class USkeletalMeshComponent*                Mesh;                                              // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GameplayAbilities_GameplayAbilityLocalAnimMontage LocalMontageInfo;                                  // 0x8(0x30)(NoDestructor, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Valhalla.GameplayAbilityRepAnimMontageForMesh
struct Valhalla_GameplayAbilityRepAnimMontageForMesh
{
public:
	class USkeletalMeshComponent*                Mesh;                                              // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GameplayAbilities_GameplayAbilityRepAnimMontage RepMontageInfo;                                    // 0x8(0x38)(NoDestructor, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct Valhalla.GameplayAbilityChargesInfo
struct Valhalla_GameplayAbilityChargesInfo
{
public:
	struct GameplayAbilities_GameplayAbilitySpecHandle Handle;                                            // 0x0(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CurrentCharges;                                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxCharges;                                        // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Valhalla.ValGameplayEffectContainer
struct Valhalla_ValGameplayEffectContainer
{
public:
	TSubclassOf<class UValTargetType>            TargetType;                                        // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class UGameplayEffect>>   TargetGameplayEffectClasses;                       // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Valhalla.ValActiveGameplayEffectHandles
struct Valhalla_ValActiveGameplayEffectHandles
{
public:
	uint8                                        Pad_597A[0x10];                                    // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Valhalla.ValGameplayEffectContainerSpec
struct Valhalla_ValGameplayEffectContainerSpec
{
public:
	TArray<struct GameplayAbilities_GameplayEffectSpecHandle> TargetGameplayEffectSpecs;                         // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Valhalla.ValActiveAbilityData
struct Valhalla_ValActiveAbilityData
{
public:
	struct GameplayTags_GameplayTag              ActiveEquipSlot;                                   // 0x0(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UValDeviceAudioVisual*                 DeviceAV;                                          // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x24 (0x24 - 0x0)
// ScriptStruct Valhalla.ValAmmoData
struct Valhalla_ValAmmoData
{
public:
	struct GameplayTags_GameplayTag              SlotTag;                                           // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ClipAmmo;                                          // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReserveAmmo;                                       // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CachedClipAmmoMax;                                 // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CachedReserveAmmoMax;                              // 0x14(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CachedStartingClipAmmo;                            // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CachedStartingReserveAmmo;                         // 0x1C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CachedAmmoUsedPerShot;                             // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Valhalla.ValMeleeSwing
struct Valhalla_ValMeleeSwing
{
public:
	TArray<class UCurveVector*>                  SocketLocationCurves;                              // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class FName                                  SwingName;                                         // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DamageWindowMin;                                   // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DamageWindowMax;                                   // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSolveFromActorLocation;                           // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_597D[0x7];                                     // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Valhalla.ValAbilityUpgradeEffectData
struct Valhalla_ValAbilityUpgradeEffectData
{
public:
	TSubclassOf<class UGameplayEffect>           EffectType;                                        // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Magnitude;                                         // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_597E[0x4];                                     // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Valhalla.DailyContractRewards
struct Valhalla_DailyContractRewards
{
public:
	uint8                                        Pad_597F[0x10];                                    // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Valhalla.StatComparison
struct Valhalla_StatComparison
{
public:
	enum class EPlayerStats                      Stat;                                              // 0x0(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EComparisonLogic                  Logic;                                             // 0x1(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5980[0x2];                                     // Fixing Size After Last Property  
	int32                                        Value;                                             // 0x4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Valhalla.DailyContractLootMapping
struct Valhalla_DailyContractLootMapping
{
public:
	int32                                        MinimumLevelRequired;                              // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5982[0x4];                                     // Fixing Size After Last Property  
	class UValLootAsset*                         DailyContractLootPool;                             // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct Valhalla.ActivityConfig
struct Valhalla_ActivityConfig
{
public:
	int32                                        DailyActivities;                                   // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxDailyActivties;                                 // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BonusVIPActivities;                                // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BonusVIPMaxActivities;                             // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxDailyContractRewards;                           // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5983[0x4];                                     // Fixing Size After Last Property  
	TArray<struct Valhalla_DailyContractLootMapping> DailyContractLootPools;                            // 0x18(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UDataAsset>>     DailyContracts;                                    // 0x28(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UDataAsset>>     SeasonChallenges;                                  // 0x38(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UDataAsset>>     AgentMissions;                                     // 0x48(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UDataAsset>>     Accolades;                                         // 0x58(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Valhalla.ContractSortData
struct Valhalla_ContractSortData
{
public:
	bool                                         bCompleted;                                        // 0x0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTierUnlocked;                                     // 0x1(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAccepted;                                         // 0x2(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReadyToClaim;                                     // 0x3(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TierUnlockLevel;                                   // 0x4(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ActivityId;                                        // 0x8(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5984[0x4];                                     // Fixing Size After Last Property  
	class UValActivityPlayerInstance*            Instance;                                          // 0x10(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Valhalla.MissionReward
struct Valhalla_MissionReward
{
public:
	class UValLootAsset*                         RewardAsset;                                       // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumRewardsToRoll;                                  // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5985[0x4];                                     // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Valhalla.MissionSequences
struct Valhalla_MissionSequences
{
public:
	TArray<struct Valhalla_MissionSequence>      MissionSequences;                                  // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct Valhalla.WorldMissionConfig
struct Valhalla_WorldMissionConfig
{
public:
	TMap<struct GameplayTags_GameplayTag, int32> AgentWeight;                                       // 0x0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<class UValMissionSequenceAsset*>      BaseMissions;                                      // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct Valhalla.AIFSM_StateTransitionData
struct Valhalla_AIFSM_StateTransitionData
{
public:
	class FString                                DebugDisplayName;                                  // 0x0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct GameplayTags_GameplayTagContainer     MustHaveTransitionTags;                            // 0x10(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct GameplayTags_GameplayTagContainer     CannotHaveTransitionTags;                          // 0x30(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TSubclassOf<class UValAIFSM_State>           NextStateClass;                                    // 0x50(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct GameplayTags_GameplayTag              NextStateTag;                                      // 0x58(0x8)(Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Valhalla.ValFSMStateData
struct Valhalla_ValFSMStateData
{
public:
	struct GameplayTags_GameplayTag              FSM;                                               // 0x0(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GameplayTags_GameplayTag              CurrentState;                                      // 0x8(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Valhalla.ValFSMDelegateData
struct Valhalla_ValFSMDelegateData
{
public:
	struct GameplayTags_GameplayTag              FSM;                                               // 0x0(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GameplayTags_GameplayTag              State;                                             // 0x8(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<FDelegateProperty_>                   StartDels;                                         // 0x10(0x10)(ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<FDelegateProperty_>                   EndDels;                                           // 0x20(0x10)(ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct Valhalla.ValSnapToTargetConfig
struct Valhalla_ValSnapToTargetConfig
{
public:
	float                                        SnapToTargetZoneRadius;                            // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ActivationDistance;                                // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Speed;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Valhalla.LevelGrid
struct Valhalla_LevelGrid
{
public:
	struct CoreUObject_Vector                    Min;                                               // 0x0(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct CoreUObject_Vector                    Max;                                               // 0x18(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct CoreUObject_Vector                    TileSize;                                          // 0x30(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        Width;                                             // 0x48(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        Height;                                            // 0x4C(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Valhalla.SightSpacePartition
struct Valhalla_SightSpacePartition
{
public:
	TArray<TWeakObjectPtr<class UValVisibleToAIComponent>> TrackedComps;                                      // 0x0(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TWeakObjectPtr<class AActor>>         TrackedCoverActors;                                // 0x10(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TWeakObjectPtr<class UValAIVisionObscurerComponent>> TrackedObscurers;                                  // 0x20(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x2C (0x2C - 0x0)
// ScriptStruct Valhalla.ValBotGroupConfig
struct Valhalla_ValBotGroupConfig
{
public:
	struct GameplayTags_GameplayTag              BotType;                                           // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Group;                                             // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SpawnPointCost;                                    // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumBotsToSpawnPerLocation;                         // 0x14(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinToSpawn;                                        // 0x18(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxToSpawn;                                        // 0x1C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GameplayTags_GameplayTag              SpawnRestrictionTag;                               // 0x20(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PickCount;                                         // 0x28(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Valhalla.ValBotGrouping
struct Valhalla_ValBotGrouping
{
public:
	TArray<struct Valhalla_ValBotGroupConfig>    SpawnSet;                                          // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Valhalla.ValBotWaveSet
struct Valhalla_ValBotWaveSet
{
public:
	TArray<TSoftObjectPtr<class UValBotWaveConfig>> WaveSet;                                           // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Valhalla.ValBotWaveSetSpawnData
struct Valhalla_ValBotWaveSetSpawnData
{
public:
	class UValBotData*                           BotData;                                           // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BotTeamDefinition;                                 // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Location;                                          // 0x10(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Rotator                   Rotation;                                          // 0x28(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Valhalla.ValBotDataWeightPair
struct Valhalla_ValBotDataWeightPair
{
public:
	enum class EBotFillTypes                     Type;                                              // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5987[0x7];                                     // Fixing Size After Last Property  
	TSoftObjectPtr<class UValBotData>            BotData;                                           // 0x8(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x30(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5988[0x4];                                     // Fixing Size Of Struct 
};

// 0x68 (0x760 - 0x6F8)
// ScriptStruct Valhalla.ValAnimInstanceProxy
struct Valhalla_ValAnimInstanceProxy : public Engine_AnimInstanceProxy
{
public:
	class AValCharacter*                         ValCharacterOwner;                                 // 0x6F8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UValCharacterMovementComponent*        ValCharacterMovementComponent;                     // 0x700(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                OwningComponent;                                   // 0x708(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AimingAlpha;                                       // 0x710(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BlockingAlpha;                                     // 0x714(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWalking;                                          // 0x718(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSprinting;                                        // 0x719(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStateSprinting;                                   // 0x71A(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFalling;                                          // 0x71B(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bJetpacking;                                       // 0x71C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSkydiving;                                        // 0x71D(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSkydiveLanding;                                   // 0x71E(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWantsToSki;                                       // 0x71F(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LeftHandIKStrength;                                // 0x720(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RightHandIKStrength;                               // 0x724(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LeftHandIKTargetStrength;                          // 0x728(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RightHandIKTargetStrength;                         // 0x72C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAlwaysIKRightHand;                                // 0x730(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAlwaysIKLeftHand;                                 // 0x731(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5989[0x12];                                    // Fixing Size After Last Property  
	float                                        ForwardPercent;                                    // 0x744(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LeftPercent;                                       // 0x748(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUpdateAnimation;                                  // 0x74C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_598A[0x3];                                     // Fixing Size After Last Property  
	float                                        RightPercent;                                      // 0x750(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDisableIKWhileSprinting;                          // 0x754(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_598B[0x3];                                     // Fixing Size After Last Property  
	uint32                                       BlendOutIKStackCount;                              // 0x758(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_598C[0x4];                                     // Fixing Size Of Struct 
};

// 0x58 (0x58 - 0x0)
// ScriptStruct Valhalla.JumpTrajectoryPredictionParams
struct Valhalla_JumpTrajectoryPredictionParams
{
public:
	enum class ECollisionChannel                 TraceChannel;                                      // 0x0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_598D[0x7];                                     // Fixing Size After Last Property  
	class AActor*                                SourceActor;                                       // 0x8(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    TargetLocation;                                    // 0x10(0x18)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxJumpHeight;                                     // 0x28(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxGroundPlaneSpeed;                               // 0x2C(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxSearchIterations;                               // 0x30(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxSimulationIterations;                           // 0x34(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SimulationTimestep;                                // 0x38(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CloseEnoughDistance;                               // 0x3C(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VerticalClearanceDistance;                         // 0x40(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_598E[0x4];                                     // Fixing Size After Last Property  
	TArray<class AActor*>                        IngoreActors;                                      // 0x48(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Valhalla.BotAimData
struct Valhalla_BotAimData
{
public:
	enum class EBotAimType                       Type;                                              // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_598F[0x3];                                     // Fixing Size After Last Property  
	int32                                        Amount;                                            // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Valhalla.BotTransformData
struct Valhalla_BotTransformData
{
public:
	TArray<struct CoreUObject_Transform>         Transforms;                                        // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Valhalla.MinimalHitResult
struct Valhalla_MinimalHitResult
{
public:
	struct Engine_Vector_NetQuantizeNormal       ImpactNormal;                                      // 0x0(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Engine_Vector_NetQuantize             ImpactPoint;                                       // 0x18(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UPhysicalMaterial>      PhysMaterial;                                      // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Valhalla.UpdateProgressEventPayload
struct Valhalla_UpdateProgressEventPayload
{
public:
	class FString                                PlayerGoalId;                                      // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TaskId;                                            // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ErrorMessage;                                      // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Valhalla.ClaimContractEventPayload
struct Valhalla_ClaimContractEventPayload
{
public:
	class FString                                PlayerGoalId;                                      // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                RewardId;                                          // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                EventMessage;                                      // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Valhalla.PurchaseContractSuccessEventPayload
struct Valhalla_PurchaseContractSuccessEventPayload
{
public:
	class FString                                PlayerGoalId;                                      // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct Valhalla_CurrencyData>         CurrencyGroup;                                     // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Valhalla.DeductCurrencyFailedEventPayload
struct Valhalla_DeductCurrencyFailedEventPayload
{
public:
	class FString                                PlayerGoalId;                                      // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CurrencyCode;                                      // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Amount;                                            // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5990[0x4];                                     // Fixing Size After Last Property  
	class FString                                ErrorMessage;                                      // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Valhalla.PurchaseContractCurrencyDeductedPayload
struct Valhalla_PurchaseContractCurrencyDeductedPayload
{
public:
	class FString                                PlayerGoalId;                                      // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CurrencyCode;                                      // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Amount;                                            // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5991[0x4];                                     // Fixing Size Of Struct 
};

// 0x4 (0x4 - 0x0)
// ScriptStruct Valhalla.JsonInt
struct Valhalla_JsonInt
{
public:
	int32                                        Value;                                             // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Valhalla.JsonBool
struct Valhalla_JsonBool
{
public:
	bool                                         Value;                                             // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct Valhalla.JsonFloat
struct Valhalla_JsonFloat
{
public:
	float                                        Value;                                             // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Valhalla.JsonRarity
struct Valhalla_JsonRarity
{
public:
	enum class ERarity                           Value;                                             // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Valhalla.JsonFString
struct Valhalla_JsonFString
{
public:
	class FString                                Value;                                             // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Valhalla.JsonIntArray
struct Valhalla_JsonIntArray
{
public:
	TArray<int32>                                Values;                                            // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Valhalla.JsonTagContainer
struct Valhalla_JsonTagContainer
{
public:
	struct GameplayTags_GameplayTagContainer     Value;                                             // 0x0(0x20)(NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Valhalla.JsonStringPairs
struct Valhalla_JsonStringPairs
{
public:
	TArray<struct PlatformInterface_StringPair>  Values;                                            // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Valhalla.JsonPlayerAttributeData
struct Valhalla_JsonPlayerAttributeData
{
public:
	TArray<struct Valhalla_PlayerAttributeData>  Values;                                            // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Valhalla.JsonPlayerProperties
struct Valhalla_JsonPlayerProperties
{
public:
	TArray<enum class EPlayerProperty>           Values;                                            // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Valhalla.JsonInventoryModArray
struct Valhalla_JsonInventoryModArray
{
public:
	TArray<struct Valhalla_InventoryMod>         Values;                                            // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Valhalla.JsonContractRewardArray
struct Valhalla_JsonContractRewardArray
{
public:
	TArray<struct Valhalla_ContractLoot>         Values;                                            // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Valhalla.JsonInventoryPlayerData
struct Valhalla_JsonInventoryPlayerData
{
public:
	struct Valhalla_InventoryPlayerData          PlayerData;                                        // 0x0(0x20)(NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Valhalla.ActionFX
struct Valhalla_ActionFX
{
public:
	enum class ECameraPerspective                CameraPerspective;                                 // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5993[0x7];                                     // Fixing Size After Last Property  
	class UNiagaraSystem*                        ParticleSystem;                                    // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SocketName;                                        // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Valhalla.HitImpactFX
struct Valhalla_HitImpactFX
{
public:
	class UNiagaraSystem*                        ParticleSystem;                                    // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPhysicalSurface                  PhysicalSurface;                                   // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5994[0x7];                                     // Fixing Size Of Struct 
};

// 0x14 (0x14 - 0x0)
// ScriptStruct Valhalla.NeighborLink
struct Valhalla_NeighborLink
{
public:
	struct CoreUObject_IntPoint                  DoorCoord;                                         // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_IntPoint                  NeighborDoorCoord;                                 // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Direction;                                         // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Valhalla.DungeonRoomAddParams
struct Valhalla_DungeonRoomAddParams
{
public:
	struct CoreUObject_IntPoint                  Coords;                                            // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_IntPoint                  Dimensions;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENeighborDir                      Orientation;                                       // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5995[0x7];                                     // Fixing Size After Last Property  
	class FString                                ItemInstanceId;                                    // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCheckExisting;                                    // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCallAddDelegate;                                  // 0x29(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bValidate;                                         // 0x2A(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bConnectWithCorridors;                             // 0x2B(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRemoveExistingRooms;                              // 0x2C(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5996[0x3];                                     // Fixing Size Of Struct 
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Valhalla.RoomContents
struct Valhalla_RoomContents
{
public:
	TArray<TSoftClassPtr<class AActor>>          OddActors;                                         // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftClassPtr<class AActor>>          EvenActors;                                        // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	float                                        HeightOffset;                                      // 0x20(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseCoordRange;                                    // 0x24(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5998[0x3];                                     // Fixing Size After Last Property  
	struct CoreUObject_IntPoint                  MinCoord;                                          // 0x28(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_IntPoint                  MaxCoord;                                          // 0x30(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Valhalla.RoomContentsCount
struct Valhalla_RoomContentsCount
{
public:
	struct Valhalla_RoomContents                 Contents;                                          // 0x0(0x38)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int32                                        Count;                                             // 0x38(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SpawnChance;                                       // 0x3C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Valhalla.EquipmentPassiveEffect
struct Valhalla_EquipmentPassiveEffect
{
public:
	TSoftClassPtr<class UGameplayEffect>         PassiveEffect;                                     // 0x0(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<float>                                PassiveValue;                                      // 0x28(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	enum class EMagnitudeValueType               ValueType;                                         // 0x38(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AdditivePercentage;                                // 0x39(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ApplyToAllSlots;                                   // 0x3A(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5999[0x5];                                     // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Valhalla.EquipmentEffect
struct Valhalla_EquipmentEffect
{
public:
	TSubclassOf<class UGameplayEffect>           EffectType;                                        // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Magnitude;                                         // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_599A[0x4];                                     // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Valhalla.EquipmentEffectSlot
struct Valhalla_EquipmentEffectSlot
{
public:
	struct GameplayTags_GameplayTag              EquipSlot;                                         // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct Valhalla_EquipmentEffect>      Effects;                                           // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Valhalla.EquipmentModParams
struct Valhalla_EquipmentModParams
{
public:
	float                                        MinValue;                                          // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxValue;                                          // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UValEquipmentModAsset>  Asset;                                             // 0x8(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Valhalla.EquipmentModParamsList
struct Valhalla_EquipmentModParamsList
{
public:
	TArray<struct Valhalla_EquipmentModParams>   ModParams;                                         // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Valhalla.EquipmentAssetParams
struct Valhalla_EquipmentAssetParams
{
public:
	TArray<TSoftObjectPtr<class UDataAsset>>     Assets;                                            // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Valhalla.EquipmentQuery
struct Valhalla_EquipmentQuery
{
public:
	class UValEquipmentAsset*                    Equipment;                                         // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RequiredStacks;                                    // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERarity                           RequiredRarity;                                    // 0xC(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_599B[0x3];                                     // Fixing Size Of Struct 
};

// 0xC (0xC - 0x0)
// ScriptStruct Valhalla.ValAbilityPropertyMod
struct Valhalla_ValAbilityPropertyMod
{
public:
	struct GameplayTags_GameplayTag              PropertyTag;                                       // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Value;                                             // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Valhalla.ValAbilityPropertyModContainer
struct Valhalla_ValAbilityPropertyModContainer
{
public:
	TArray<struct Valhalla_ValAbilityPropertyMod> Mods;                                              // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Valhalla.ValAbilityPropertyModTuple
struct Valhalla_ValAbilityPropertyModTuple
{
public:
	struct Valhalla_ValAbilityPropertyModContainer Container;                                         // 0x0(0x10)(NativeAccessSpecifierPublic)
	struct GameplayTags_GameplayTag              AbilityTag;                                        // 0x10(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Valhalla.ExperienceTrackerConfig
struct Valhalla_ExperienceTrackerConfig
{
public:
	TSubclassOf<class UValExperienceTracker>     Tracker;                                           // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsRanked;                                         // 0x8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseFlatReward;                                    // 0x9(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_599C[0x2];                                     // Fixing Size After Last Property  
	int32                                        RequiredAmountToAward;                             // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFirstOfTheDayBonus;                               // 0x10(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_599D[0x3];                                     // Fixing Size After Last Property  
	int32                                        BonusAwardAmount;                                  // 0x14(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPlayerExperienceSource           XPSource;                                          // 0x18(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_599E[0x7];                                     // Fixing Size Of Struct 
};

// 0xC (0xC - 0x0)
// ScriptStruct Valhalla.GameplayPhase
struct Valhalla_GameplayPhase
{
public:
	float                                        PhaseLength;                                       // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GameplayTags_GameplayTag              NextPhaseTag;                                      // 0x4(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Valhalla.FeatureFlags
struct Valhalla_FeatureFlags
{
public:
	uint8                                        Pad_59A0[0x1];                                     // Fixing Size Of Struct 
};

// 0x18 (0x40 - 0x28)
// ScriptStruct Valhalla.ValPlayerProfileBase
struct Valhalla_ValPlayerProfileBase : public RallyHereStart_RHPlayerProfile
{
public:
	uint8                                        Pad_59A1[0x10];                                    // Fixing Size After Last Property  
	bool                                         bFillParty;                                        // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsPartyLeader;                                    // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_59A2[0x6];                                     // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Valhalla.ObjectiveTerminalData
struct Valhalla_ObjectiveTerminalData
{
public:
	TArray<class AValObjectiveTerminal*>         Terminals;                                         // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Valhalla.PlayerStartData
struct Valhalla_PlayerStartData
{
public:
	TArray<class AValPlayerStart*>               PlayerStartArray;                                  // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Valhalla.SkiFXConfig
struct Valhalla_SkiFXConfig
{
public:
	struct GameplayTags_GameplayTag              ClassTag;                                          // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct Valhalla_HitImpactFX>          FeetTrail3P;                                       // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class UNiagaraSystem*                        OnStart3P;                                         // 0x18(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNiagaraSystem*                        OnActive3P;                                        // 0x20(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNiagaraSystem*                        OnEnd3P;                                           // 0x28(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNiagaraSystem*                        OnLanding3P;                                       // 0x30(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNiagaraSystem*                        OnTakeOff3P;                                       // 0x38(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNiagaraSystem*                        OnLanding1P;                                       // 0x40(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNiagaraSystem*                        OnTakeOff1P;                                       // 0x48(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Valhalla.PlayerPropertyData
struct Valhalla_PlayerPropertyData
{
public:
	enum class EPlayerProperty                   PlayerProperty;                                    // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_59A4[0x3];                                     // Fixing Size After Last Property  
	int32                                        PlayerPropertyValue;                               // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct Valhalla.CosmeticSlot
struct Valhalla_CosmeticSlot
{
public:
	int32                                        ItemId;                                            // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GameplayTags_GameplayTag              EquipSlot;                                         // 0x4(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// ScriptStruct Valhalla.InventorySellRequest
struct Valhalla_InventorySellRequest
{
public:
	int32                                        ItemId;                                            // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SlotId;                                            // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SlotType;                                          // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Guid                      InventoryId;                                       // 0xC(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct Valhalla.LoadoutEquipment
struct Valhalla_LoadoutEquipment
{
public:
	bool                                         Static;                                            // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_59A5[0x3];                                     // Fixing Size After Last Property  
	struct GameplayTags_GameplayTag              EquipSlot;                                         // 0x4(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_59A6[0x4];                                     // Fixing Size After Last Property  
	TSoftObjectPtr<class UDataAsset>             Asset;                                             // 0x10(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UDataAsset>>     OptionAssets;                                      // 0x38(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Valhalla.PlatformLoadoutItem
struct Valhalla_PlatformLoadoutItem
{
public:
	int32                                        ItemId;                                            // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SlotId;                                            // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SlotType;                                          // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Quantity;                                          // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Guid                      InventoryId;                                       // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Valhalla.PlatformLoadout
struct Valhalla_PlatformLoadout
{
public:
	bool                                         Dirty;                                             // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_59A8[0x3];                                     // Fixing Size After Last Property  
	int32                                        Type;                                              // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Version;                                           // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DatabaseId;                                        // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                LoadoutId;                                         // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DisplayName;                                       // 0x20(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct Valhalla_PlatformLoadoutItem>  Items;                                             // 0x30(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Valhalla.PlatformLoadoutContainer
struct Valhalla_PlatformLoadoutContainer
{
public:
	TMap<int32, struct Valhalla_PlatformLoadout> LoadoutMap;                                        // 0x0(0x50)(NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Valhalla.AudioThreatData
struct Valhalla_AudioThreatData
{
public:
	uint8                                        Pad_59A9[0x18];                                    // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Valhalla.AudioThreatDataPoint
struct Valhalla_AudioThreatDataPoint
{
public:
	uint8                                        Pad_59AA[0x8];                                     // Fixing Size Of Struct 
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Valhalla.CompiledAudioThreatData
struct Valhalla_CompiledAudioThreatData
{
public:
	uint8                                        Pad_59AB[0x50];                                    // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Valhalla.AudioThreatDataSettings
struct Valhalla_AudioThreatDataSettings
{
public:
	float                                        Weight;                                            // 0x0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SustainTime;                                       // 0x4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                           Curve;                                             // 0x8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct Valhalla.EquipmentRarityModCount
struct Valhalla_EquipmentRarityModCount
{
public:
	struct GameplayTags_GameplayTagContainer     EquipSlots;                                        // 0x0(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TMap<enum class ERarity, int32>              RarityToModCount;                                  // 0x20(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct Valhalla.PlayerAttributeOption
struct Valhalla_PlayerAttributeOption
{
public:
	float                                        RollWeight;                                        // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_59AC[0x4];                                     // Fixing Size After Last Property  
	TMap<struct GameplayTags_GameplayTag, float> AvailableValues;                                   // 0x8(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0xF0 (0xF0 - 0x0)
// ScriptStruct Valhalla.PlayerAttributeOptions
struct Valhalla_PlayerAttributeOptions
{
public:
	TMap<enum class ERarity, int32>              CountByRarity;                                     // 0x0(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TMap<enum class ERarity, float>              MultiplierByRarity;                                // 0x50(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TMap<enum class EPlayerAttributeType, struct Valhalla_PlayerAttributeOption> OptionsByType;                                     // 0xA0(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Valhalla.PlayerInfo
struct Valhalla_PlayerInfo
{
public:
	class APlayerState*                          PlayerState;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Engine_Vector_NetQuantize             Location;                                          // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Valhalla.PingableActorReference
struct Valhalla_PingableActorReference
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_59AD[0x8];                                     // Fixing Size Of Struct 
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Valhalla.ValCachedEnemyPing
struct Valhalla_ValCachedEnemyPing
{
public:
	TWeakObjectPtr<class AActor>                 Enemy;                                             // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Engine_Vector_NetQuantize             PingLocation;                                      // 0x8(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class AValPing>               PingReference;                                     // 0x20(0x8)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct Valhalla.PlayerAttributeGroup
struct Valhalla_PlayerAttributeGroup
{
public:
	TMap<enum class EPlayerAttributeType, float> AttributeValues;                                   // 0x0(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TMap<enum class EPlayerAttributeType, float> AttributeMultipliers;                              // 0x50(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0xB8 (0xB8 - 0x0)
// ScriptStruct Valhalla.PlayerAttributeConfigData
struct Valhalla_PlayerAttributeConfigData
{
public:
	class FText                                  DisplayName;                                       // 0x0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x18(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	bool                                         InverseValue;                                      // 0x30(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPlayerAttributeValueType         ValueType;                                         // 0x31(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPlayerAttributeFormatType        FormatType;                                        // 0x32(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_59AE[0x5];                                     // Fixing Size After Last Property  
	TSoftObjectPtr<class UTexture2D>             Icon;                                              // 0x38(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UGameplayEffect>           EffectClass;                                       // 0x60(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<enum class EPlayerAttributeType, class UCurveFloat*> AttributeModifiers;                                // 0x68(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Valhalla.ContractRewards
struct Valhalla_ContractRewards
{
public:
	uint8                                        Pad_59AF[0x10];                                    // Fixing Size Of Struct 
};

// 0x14 (0x14 - 0x0)
// ScriptStruct Valhalla.PacketLossDatapoint
struct Valhalla_PacketLossDatapoint
{
public:
	uint8                                        Pad_59B0[0x14];                                    // Fixing Size Of Struct 
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Valhalla.TeamingStats
struct Valhalla_TeamingStats
{
public:
	TMap<enum class ESoloTeamingStat, int32>     Stats;                                             // 0x0(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Valhalla.SlotAV
struct Valhalla_SlotAV
{
public:
	struct GameplayTags_GameplayTag              SlotTag;                                           // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UValAbilityAudioVisual*                AV;                                                // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Valhalla.DeviceUpgradeSlot
struct Valhalla_DeviceUpgradeSlot
{
public:
	struct GameplayTags_GameplayTag              SlotTag;                                           // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct Valhalla_ValAbilityUpgradeEffectData> DeviceUpgradeEffects;                              // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Valhalla.ClientReportInfo
struct Valhalla_ClientReportInfo
{
public:
	int64                                        MctsPlayerId;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                EOSProductUserId;                                  // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayerName;                                        // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TeamId;                                            // 0x28(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_59B1[0x4];                                     // Fixing Size Of Struct 
};

// 0xC8 (0xC8 - 0x0)
// ScriptStruct Valhalla.DamageSummaryData
struct Valhalla_DamageSummaryData
{
public:
	int32                                        SourcePlayerId;                                    // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPlayerType                       SourcePlayerType;                                  // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_59B2[0x3];                                     // Fixing Size After Last Property  
	class FString                                SourcePlayerName;                                  // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Valhalla_PlayerStatus                 SourcePlayerStatus;                                // 0x18(0x14)(BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        TargetPlayerId;                                    // 0x2C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPlayerType                       TargetPlayerType;                                  // 0x30(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_59B3[0x7];                                     // Fixing Size After Last Property  
	class FString                                TargetPlayerName;                                  // 0x38(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Valhalla_PlayerStatus                 TargetPlayerStatus;                                // 0x48(0x14)(BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_59B4[0x4];                                     // Fixing Size After Last Property  
	class UValDeviceAudioVisual*                 DeviceAV;                                          // 0x60(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GameplayTags_GameplayTag              DamageSourceTag;                                   // 0x68(0x8)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GameplayTags_GameplayTag              FinalDamageSourceTag;                              // 0x70(0x8)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TotalSourceDamage;                                 // 0x78(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        HitCount;                                          // 0x7C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bKillingBlow;                                      // 0x80(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_59B5[0x3];                                     // Fixing Size After Last Property  
	float                                        TotalTargetDamage;                                 // 0x84(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Headshots;                                         // 0x88(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_59B6[0x3C];                                    // Fixing Size Of Struct 
};

// 0x108 (0x108 - 0x0)
// ScriptStruct Valhalla.RecentDamage
struct Valhalla_RecentDamage
{
public:
	float                                        Time;                                              // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_59B7[0x4];                                     // Fixing Size After Last Property  
	struct Valhalla_DamageData                   DamageData;                                        // 0x8(0x100)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Valhalla.OwnedActorsContainer
struct Valhalla_OwnedActorsContainer
{
public:
	uint8                                        Pad_59B8[0x10];                                    // Fixing Size Of Struct 
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Valhalla.PrimitivePriority
struct Valhalla_PrimitivePriority
{
public:
	class UPrimitiveComponent*                   Primitive;                                         // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Priority;                                          // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_59B9[0x14];                                    // Fixing Size Of Struct 
};

// 0x70 (0x70 - 0x0)
// ScriptStruct Valhalla.CollisionDebugInfo
struct Valhalla_CollisionDebugInfo
{
public:
	uint8                                        Pad_59BA[0x70];                                    // Fixing Size Of Struct 
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Valhalla.RepValProjMovement
struct Valhalla_RepValProjMovement
{
public:
	float                                        LinearVelocity;                                    // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_59BB[0x4];                                     // Fixing Size After Last Property  
	struct Engine_Vector_NetQuantize             Location;                                          // 0x8(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Rotator                   Rotation;                                          // 0x20(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Valhalla.RecipeComponent
struct Valhalla_RecipeComponent
{
public:
	enum class ERarity                           MinimumRarity;                                     // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERarity                           MaximumRarity;                                     // 0x1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_59BC[0x6];                                     // Fixing Size After Last Property  
	TSoftObjectPtr<class UDataAsset>             Asset;                                             // 0x8(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA8 (0xA8 - 0x0)
// ScriptStruct Valhalla.UpgradeRecipe
struct Valhalla_UpgradeRecipe
{
public:
	int32                                        ResultLevel;                                       // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_59BD[0x4];                                     // Fixing Size After Last Property  
	TMap<struct Valhalla_RecipeComponent, int32> Components;                                        // 0x8(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TMap<enum class ERarity, struct GameplayTags_GameplayTagContainer> ItemTypes;                                         // 0x58(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Valhalla.CraftingResult
struct Valhalla_CraftingResult
{
public:
	enum class ERarity                           Rarity;                                            // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_59BE[0x7];                                     // Fixing Size After Last Property  
	TSoftObjectPtr<class UDataAsset>             Asset;                                             // 0x8(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct Valhalla.CraftingRecipe
struct Valhalla_CraftingRecipe
{
public:
	TMap<struct Valhalla_CraftingResult, int32>  Results;                                           // 0x0(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TMap<struct Valhalla_RecipeComponent, int32> Components;                                        // 0x50(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Valhalla.UIPanelJiggleInstance
struct Valhalla_UIPanelJiggleInstance
{
public:
	class UUIJiggle*                             Jiggle;                                            // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCanvasPanel*                          Canvas;                                            // 0x8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_59BF[0x18];                                    // Fixing Size Of Struct 
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Valhalla.CurrentFogCircleData
struct Valhalla_CurrentFogCircleData
{
public:
	struct Engine_Vector_NetQuantize             CurrentLocation;                                   // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CurrentRadius;                                     // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_59C0[0x4];                                     // Fixing Size Of Struct 
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Valhalla.CosmeticTypedAsset
struct Valhalla_CosmeticTypedAsset
{
public:
	struct GameplayTags_GameplayTag              Type;                                              // 0x0(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UDataAsset>             Asset;                                             // 0x8(0x28)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Valhalla.CosmeticOption
struct Valhalla_CosmeticOption
{
public:
	float                                        RollWeight;                                        // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_59C1[0x4];                                     // Fixing Size After Last Property  
	TSoftObjectPtr<class UDataAsset>             Asset;                                             // 0x8(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Valhalla.CosmeticOptionSlot
struct Valhalla_CosmeticOptionSlot
{
public:
	struct GameplayTags_GameplayTag              EquipSlot;                                         // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct Valhalla_CosmeticOption>       Options;                                           // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Valhalla.CosmeticGroup
struct Valhalla_CosmeticGroup
{
public:
	float                                        RollWeight;                                        // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_59C2[0x4];                                     // Fixing Size After Last Property  
	TArray<struct Valhalla_CosmeticOptionSlot>   Slots;                                             // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Valhalla.ShopPrice
struct Valhalla_ShopPrice
{
public:
	int32                                        Quantity;                                          // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CurrencyId;                                        // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x100 - 0xF8)
// ScriptStruct Valhalla.GameplayAbilityTargetData_SingleTargetHitID
struct Valhalla_GameplayAbilityTargetData_SingleTargetHitID : public GameplayAbilities_GameplayAbilityTargetData_SingleTargetHit
{
public:
	int32                                        HitID;                                             // 0xF8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_59C3[0x4];                                     // Fixing Size Of Struct 
};

// 0x78 (0x78 - 0x0)
// ScriptStruct Valhalla.Threat
struct Valhalla_Threat
{
public:
	TWeakObjectPtr<class AActor>                 ThreatActor;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ThreatLevel;                                       // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DamageDealt;                                       // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsSeen;                                           // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_59C4[0x7];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector                    LastSeenLocation;                                  // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LastSeenTime;                                      // 0x30(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsHeard;                                          // 0x34(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_59C5[0x3];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector                    LastHeardLocation;                                 // 0x38(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LastHeardTime;                                     // 0x50(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_59C6[0x4];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector                    LastKnownLocation;                                 // 0x58(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LastUpdated;                                       // 0x70(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsTaunting;                                       // 0x74(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_59C7[0x3];                                     // Fixing Size Of Struct 
};

// 0x58 (0x60 - 0x8)
// ScriptStruct Valhalla.InterfaceRow
struct Valhalla_InterfaceRow : public Engine_TableRowBase
{
public:
	class FText                                  DisplayName;                                       // 0x8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x20(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             Icon;                                              // 0x38(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Valhalla.LevelData
struct Valhalla_LevelData
{
public:
	class FName                                  MapName;                                           // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Options;                                           // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Valhalla.ActiveGameplayEffectHandleContainer
struct Valhalla_ActiveGameplayEffectHandleContainer
{
public:
	TArray<struct GameplayAbilities_ActiveGameplayEffectHandle> ActiveHandles;                                     // 0x0(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x40 (0x48 - 0x8)
// ScriptStruct Valhalla.UtopiaMissionData
struct Valhalla_UtopiaMissionData : public Engine_TableRowBase
{
public:
	class UClass*                                MissionClass;                                      // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Enabled;                                           // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMissionType                      Type;                                              // 0x11(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_59C8[0x6];                                     // Fixing Size After Last Property  
	class FText                                  Name;                                              // 0x18(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x30(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct Valhalla.DamageSourceMapping
struct Valhalla_DamageSourceMapping : public Engine_TableRowBase
{
public:
	struct GameplayTags_GameplayTag              DamageSource;                                      // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             Icon;                                              // 0x10(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct Valhalla.SimulatedPlayerData
struct Valhalla_SimulatedPlayerData : public Engine_TableRowBase
{
public:
	class FString                                PlayerName;                                        // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x68 - 0x8)
// ScriptStruct Valhalla.QueueData
struct Valhalla_QueueData : public Engine_TableRowBase
{
public:
	class FString                                QueueId;                                           // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                BackendId;                                         // 0x18(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EQueueType                        Type;                                              // 0x28(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_59C9[0x7];                                     // Fixing Size After Last Property  
	class FText                                  DisplayName;                                       // 0x30(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x48(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class UTexture2D*                            Icon;                                              // 0x60(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Valhalla.GameStatData
struct Valhalla_GameStatData
{
public:
	enum class EGameStatType                     Type;                                              // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_59CA[0x3];                                     // Fixing Size After Last Property  
	int32                                        Value;                                             // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Valhalla.EquipData
struct Valhalla_EquipData
{
public:
	struct GameplayTags_GameplayTag              EquipSlot;                                         // 0x0(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UValGameplayAbility>       AbilityClass;                                      // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Valhalla.TeamLives
struct Valhalla_TeamLives
{
public:
	int32                                        TeamNum;                                           // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Lives;                                             // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Valhalla.TeamSlots
struct Valhalla_TeamSlots
{
public:
	int32                                        TeamNum;                                           // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Slots;                                             // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Valhalla.TeamScore
struct Valhalla_TeamScore
{
public:
	int32                                        TeamNum;                                           // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Score;                                             // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Valhalla.PlayerScore
struct Valhalla_PlayerScore
{
public:
	class APlayerState*                          PlayerState;                                       // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Value;                                             // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_59CB[0x4];                                     // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Valhalla.MissionScore
struct Valhalla_MissionScore
{
public:
	int32                                        TeamNum;                                           // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Score;                                             // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct Valhalla.ObjectiveHealth
struct Valhalla_ObjectiveHealth
{
public:
	int32                                        TeamNum;                                           // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Health;                                            // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        HealthMax;                                         // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Valhalla.PurchasedTreeNode
struct Valhalla_PurchasedTreeNode
{
public:
	class FName                                  UpgradeName;                                       // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPurchased;                                        // 0x8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRootNode;                                         // 0x9(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_59CC[0x6];                                     // Fixing Size After Last Property  
	TArray<class FName>                          Children;                                          // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Valhalla.PurchasedTree
struct Valhalla_PurchasedTree
{
public:
	class FName                                  TreeName;                                          // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct Valhalla_PurchasedTreeNode>    Nodes;                                             // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Valhalla.TreeUpgradeData
struct Valhalla_TreeUpgradeData
{
public:
	class FName                                  UpgradeName;                                       // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  UpgradeTree;                                       // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Valhalla.RoyaleGridData
struct Valhalla_RoyaleGridData
{
public:
	int32                                        MinRow;                                            // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxRow;                                            // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinCol;                                            // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxCol;                                            // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x80 - 0x8)
// ScriptStruct Valhalla.MissionData
struct Valhalla_MissionData : public Engine_TableRowBase
{
public:
	class FText                                  OffensiveName;                                     // 0x8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class FText                                  OffensiveDesc;                                     // 0x20(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class FText                                  DefensiveName;                                     // 0x38(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class FText                                  DefensiveDesc;                                     // 0x50(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class UTexture2D*                            OffensiveIcon;                                     // 0x68(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            DefensiveIcon;                                     // 0x70(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class AValMission>               Class;                                             // 0x78(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct Valhalla.UpgradeTreePerk
struct Valhalla_UpgradeTreePerk : public Engine_TableRowBase
{
public:
	TSubclassOf<class UValAbilityUpgrade>        Upgrade;                                           // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Magnitude;                                         // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GameplayTags_GameplayTag              ListenSlot;                                        // 0x14(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_59CF[0x4];                                     // Fixing Size Of Struct 
};

// 0x8 (0x10 - 0x8)
// ScriptStruct Valhalla.UpgradeTreeAttribute
struct Valhalla_UpgradeTreeAttribute : public Engine_TableRowBase
{
public:
	enum class EPlayerAttributeType              AttributeType;                                     // 0x8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_59D0[0x3];                                     // Fixing Size After Last Property  
	float                                        AttributeMagnitude;                                // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x70 - 0x8)
// ScriptStruct Valhalla.UpgradeTreeNode
struct Valhalla_UpgradeTreeNode : public Engine_TableRowBase
{
public:
	class FText                                  DisplayName;                                       // 0x8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class UTexture2D*                            Icon;                                              // 0x20(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          ChildrenNodes;                                     // 0x28(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct Valhalla_UpgradeTreePerk>      NodeUpgrades;                                      // 0x38(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x48(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	bool                                         bRootNode;                                         // 0x60(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_59D1[0x3];                                     // Fixing Size After Last Property  
	int32                                        Cost;                                              // 0x64(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ParentNode;                                        // 0x68(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct Valhalla.BoostTree
struct Valhalla_BoostTree : public Engine_TableRowBase
{
public:
	class FText                                  TreeName;                                          // 0x8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	enum class ETreeCategory                     Category;                                          // 0x20(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_59D4[0x3];                                     // Fixing Size After Last Property  
	class FName                                  RootItemNode;                                      // 0x24(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_59D5[0x4];                                     // Fixing Size Of Struct 
};

// 0x80 (0x88 - 0x8)
// ScriptStruct Valhalla.BoostItem
struct Valhalla_BoostItem : public Engine_TableRowBase
{
public:
	class FText                                  DisplayName;                                       // 0x8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class UTexture2D*                            Icon;                                              // 0x20(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            RenderedIcon;                                      // 0x28(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          BoostChildren;                                     // 0x30(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct Valhalla_UpgradeTreePerk>      NodeUpgrades;                                      // 0x40(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x50(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	enum class ERarity                           Rarity;                                            // 0x68(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_59D6[0x3];                                     // Fixing Size After Last Property  
	struct GameplayTags_GameplayTag              ItemSlot;                                          // 0x6C(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_59D7[0x4];                                     // Fixing Size After Last Property  
	TArray<struct Valhalla_UpgradeTreeAttribute> AttributeUpgrades;                                 // 0x78(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x40 (0x48 - 0x8)
// ScriptStruct Valhalla.UpgradeTree
struct Valhalla_UpgradeTree : public Engine_TableRowBase
{
public:
	enum class ETreeCategory                     Category;                                          // 0x8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_59D8[0x7];                                     // Fixing Size After Last Property  
	class FText                                  DisplayName;                                       // 0x10(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct CoreUObject_LinearColor               DisplayColor;                                      // 0x28(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Engine_DataTableRowHandle             BaseTreeNode;                                      // 0x38(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x40 (0x48 - 0x8)
// ScriptStruct Valhalla.LoadoutMesh
struct Valhalla_LoadoutMesh : public Engine_TableRowBase
{
public:
	class FText                                  Name;                                              // 0x8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct GameplayTags_GameplayTag              Slot;                                              // 0x20(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_SoftObjectPath            Path;                                              // 0x28(0x20)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct Valhalla.LoadoutMaterial
struct Valhalla_LoadoutMaterial : public Engine_TableRowBase
{
public:
	class FText                                  Name;                                              // 0x8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct GameplayTags_GameplayTag              Slot;                                              // 0x20(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UMaterialInterface>     Material;                                          // 0x28(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Valhalla.JetpackThrustSocketAndFX
struct Valhalla_JetpackThrustSocketAndFX
{
public:
	class FName                                  SocketName;                                        // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNiagaraSystem*                        ParticleSystem;                                    // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct Valhalla.GameplayText
struct Valhalla_GameplayText : public Engine_TableRowBase
{
public:
	struct GameplayTags_GameplayTag              Tag;                                               // 0x8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Text;                                              // 0x10(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             Icon;                                              // 0x28(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Valhalla.DamageMutator
struct Valhalla_DamageMutator
{
public:
	class UClass*                                Class;                                             // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PercentMod;                                        // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FlatMod;                                           // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ShieldMod;                                         // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_59D9[0x4];                                     // Fixing Size Of Struct 
};

// 0xF0 (0xF0 - 0x0)
// ScriptStruct Valhalla.DamageCalculationStruct
struct Valhalla_DamageCalculationStruct
{
public:
	class AActor*                                TargetActor;                                       // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                SourceAbility;                                     // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BaseDamage;                                        // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GlobalDamageModifier;                              // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ItemRarityDamageModifier;                          // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ItemRarityMitigationModifier;                      // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GlobalMitigationModifier;                          // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LimbDamageModifier;                                // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BoneBlockDamageModifier;                           // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DirectHitDamageModifier;                           // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CybridDamageModifier;                              // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GlobalCybridDamageModifier;                        // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BackstabDamageModifier;                            // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NonPlayerDamageModifier;                           // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AOEDamageMitigationModifier;                       // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MeleeDamageMitigationModifier;                     // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RangedDamageMitigationModifier;                    // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CybridDamageMitigationModifier;                    // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SelfDamageMitigationModifier;                      // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TrapDamageMitigationMultiplier;                    // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AOEDamageModifier;                                 // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        KineticDamageModifier;                             // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EnergyDamageModifier;                              // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FlagHolderDamageModifier;                          // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OutputDamageModifier;                              // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FlatOutputModifier;                                // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MitigationMidifier;                                // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FlatMitigationModifier;                            // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MarkedDamageModifier;                              // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DamageToEnergyConversionRate;                      // 0x7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OverallDamageModifier;                             // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TotalDamage;                                       // 0x84(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EnergyConverted;                                   // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_59DE[0x4];                                     // Fixing Size After Last Property  
	TArray<struct Valhalla_DamageMutator>        OutputDamageModifiers;                             // 0x90(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct Valhalla_DamageMutator>        DamageResistanceModifiers;                         // 0xA0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct Valhalla_DamageMutator>        HealthResistanceModifiers;                         // 0xB0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        ShieldDamageOutputModifier;                        // 0xC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ShieldMitigationModifier;                          // 0xC4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBrokeShield;                                      // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_59DF[0x3];                                     // Fixing Size After Last Property  
	float                                        ShieldDamage;                                      // 0xCC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TempShieldDamage;                                  // 0xD0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PostShieldDamage;                                  // 0xD4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HealthPercentModifier;                             // 0xD8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HealthFlatModifier;                                // 0xDC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PreHealthTotalDamage;                              // 0xE0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HealthDamage;                                      // 0xE4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TempHealthDamage;                                  // 0xE8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_59E0[0x4];                                     // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Valhalla.CurrencyGroup
struct Valhalla_CurrencyGroup
{
public:
	TArray<struct Valhalla_CurrencyData>         Currencies;                                        // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Valhalla.RarityWeights
struct Valhalla_RarityWeights
{
public:
	TMap<enum class ERarity, float>              Weights;                                           // 0x0(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x10 (0x70 - 0x60)
// ScriptStruct Valhalla.ContractTask
struct Valhalla_ContractTask : public Valhalla_InterfaceRow
{
public:
	int32                                        RequiredValue;                                     // 0x60(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NotifyPercent;                                     // 0x64(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UValContract>              ContractClass;                                     // 0x68(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x90 - 0x60)
// ScriptStruct Valhalla.Contract
struct Valhalla_Contract : public Valhalla_InterfaceRow
{
public:
	enum class ERarity                           RarityOverride;                                    // 0x60(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_59E1[0x3];                                     // Fixing Size After Last Property  
	class FName                                  Reward;                                            // 0x64(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_59E2[0x4];                                     // Fixing Size After Last Property  
	TArray<class FName>                          Tasks;                                             // 0x70(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct Valhalla_CurrencyData>         Currencies;                                        // 0x80(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x88 (0x90 - 0x8)
// ScriptStruct Valhalla.RandomSublevel
struct Valhalla_RandomSublevel : public Engine_TableRowBase
{
public:
	TArray<TSoftObjectPtr<class UWorld>>         Sublevels;                                         // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UWorld>>         SyncLoadSublevels;                                 // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	float                                        GravityOverride;                                   // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_59E3[0x4];                                     // Fixing Size After Last Property  
	class FText                                  DisplayName;                                       // 0x30(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             Minimap;                                           // 0x48(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MapSize;                                           // 0x70(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MapMaxZoom;                                        // 0x74(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MapInitialZoom;                                    // 0x78(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RadarZoom;                                         // 0x7C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector2D                  MapInitialTranslation;                             // 0x80(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Valhalla.MatchSummaryData
struct Valhalla_MatchSummaryData
{
public:
	enum class EFrontierState                    State;                                             // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_59E7[0x7];                                     // Fixing Size After Last Property  
	TArray<struct Valhalla_GameStatData>         Stats;                                             // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct Valhalla_PendingItem>          Loot;                                              // 0x18(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	int32                                        Currency;                                          // 0x28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AugmentBonus;                                      // 0x2C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct Valhalla.PlayerXPInfo
struct Valhalla_PlayerXPInfo
{
public:
	int32                                        PreviousXP;                                        // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        GainedXP;                                          // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CurrentXP;                                         // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_59E9[0x4];                                     // Fixing Size After Last Property  
	TMap<enum class EPlayerExperienceSource, int32> XPSources;                                         // 0x10(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct Valhalla.FrontierScoring
struct Valhalla_FrontierScoring : public Engine_TableRowBase
{
public:
	int32                                        RaidValue;                                         // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FloorValue;                                        // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ExtractionValue;                                   // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UncommonValue;                                     // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CommonValue;                                       // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RareValue;                                         // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        EpicValue;                                         // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LegendaryValue;                                    // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ExoticValue;                                       // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_59EA[0x4];                                     // Fixing Size Of Struct 
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Valhalla.CraftingRecipeComponent
struct Valhalla_CraftingRecipeComponent
{
public:
	TSoftObjectPtr<class UDataAsset>             CraftingComponent;                                 // 0x0(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECraftingComponentRarityMode      RarityMode;                                        // 0x28(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERarity                           RequiredRarity;                                    // 0x29(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_59EB[0x2];                                     // Fixing Size After Last Property  
	int32                                        Quantity;                                          // 0x2C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CustomRequirements[0x8];                           // 0x30(0x20)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x58 - 0x8)
// ScriptStruct Valhalla.FabricatorItem
struct Valhalla_FabricatorItem : public Engine_TableRowBase
{
public:
	class FText                                  DisplayName;                                       // 0x8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	int32                                        Cost;                                              // 0x20(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_59EC[0x4];                                     // Fixing Size After Last Property  
	class FText                                  Description;                                       // 0x28(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class UTexture2D*                            ShopIcon;                                          // 0x40(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            DescriptionIcon;                                   // 0x48(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFabricatorShopType               Type;                                              // 0x50(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_59ED[0x7];                                     // Fixing Size Of Struct 
};

// 0x48 (0x48 - 0x0)
// ScriptStruct Valhalla.FogPhase
struct Valhalla_FogPhase
{
public:
	bool                                         bIsFinalPhase;                                     // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_59EE[0x3];                                     // Fixing Size After Last Property  
	float                                        WaitPhaseLength;                                   // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PhaseLength;                                       // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PhaseTargetRadius;                                 // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Engine_Vector_NetQuantize             PhaseTargetLocation;                               // 0x10(0x18)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  PhaseDisplayName;                                  // 0x28(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	float                                        DamageAmount;                                      // 0x40(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DamageFrequency;                                   // 0x44(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Valhalla.BuildingLootCrates
struct Valhalla_BuildingLootCrates
{
public:
	TArray<TSubclassOf<class AValLootCrate>>     LootCrateClasses;                                  // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class AValLootCrate>>     HighTierLootCrateClasses;                          // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class AValLootCrate>>     ScavengerCrates;                                   // 0x20(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x2C (0x2C - 0x0)
// ScriptStruct Valhalla.UIColorConfig
struct Valhalla_UIColorConfig
{
public:
	class FName                                  ColorName;                                         // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERarity                           Rarity;                                            // 0x8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_59EF[0x3];                                     // Fixing Size After Last Property  
	struct CoreUObject_LinearColor               PrimaryColor;                                      // 0xC(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_LinearColor               SecondaryColor;                                    // 0x1C(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Valhalla.ValCachedObjectivePing
struct Valhalla_ValCachedObjectivePing
{
public:
	struct Engine_Vector_NetQuantize10           ObjectiveLocation;                                 // 0x0(0x18)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFrontierDirectionType            LineType;                                          // 0x18(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_59F2[0x7];                                     // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Valhalla.PowerRange
struct Valhalla_PowerRange
{
public:
	float                                        PowerMin;                                          // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PowerMax;                                          // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Valhalla.PortalPhaseInfo
struct Valhalla_PortalPhaseInfo
{
public:
	float                                        PortalSpawnDelay;                                  // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PortalNotificationDuration;                        // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PortalSpawnCount;                                  // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BossPortalSpawnCount;                              // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class AValDungeonPortal>         DungeonPortalClass;                                // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPortalSpawnType                  PortalSpawnType;                                   // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPortalSpawnClusterType           PortalSpawnClusterType;                            // 0x19(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_59F5[0x2];                                     // Fixing Size After Last Property  
	int32                                        NumPortalsToAssignPerTeam;                         // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x60 - 0x8)
// ScriptStruct Valhalla.PlayerPropertyTooltip
struct Valhalla_PlayerPropertyTooltip : public Engine_TableRowBase
{
public:
	enum class EPlayerProperty                   Property;                                          // 0x8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_59F6[0x7];                                     // Fixing Size After Last Property  
	TSoftObjectPtr<class UTexture2D>             Icon;                                              // 0x10(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Description;                                       // 0x38(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                MasteryDescription;                                // 0x48(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UValGameplayAbility>       AbilityClass;                                      // 0x58(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct Valhalla.ValAmmoSlotRarity
struct Valhalla_ValAmmoSlotRarity
{
public:
	struct GameplayTags_GameplayTag              SlotTag;                                           // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERarity                           Rarity;                                            // 0x8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_59F7[0x3];                                     // Fixing Size Of Struct 
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Valhalla.AbilitySortData
struct Valhalla_AbilitySortData
{
public:
	bool                                         bMasteryAbility;                                   // 0x0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUnlocked;                                         // 0x1(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_59F8[0x2];                                     // Fixing Size After Last Property  
	int32                                        UnlockLevel;                                       // 0x4(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  DisplayName;                                       // 0x8(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
	class UDataAsset*                            AbilityAsset;                                      // 0x20(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Valhalla.AbilityConfig
struct Valhalla_AbilityConfig
{
public:
	bool                                         bOwnershipRequired;                                // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_59F9[0x7];                                     // Fixing Size After Last Property  
	TSoftObjectPtr<class UValItemAsset>          AbilityAsset;                                      // 0x8(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Valhalla.WeaponCosmeticConfig
struct Valhalla_WeaponCosmeticConfig
{
public:
	TSoftObjectPtr<class UValItemAsset>          DefaultWeaponAsset;                                // 0x0(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GameplayTags_GameplayTag              AppearanceSlotTag;                                 // 0x28(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Valhalla.ExperienceLevelRewardItem
struct Valhalla_ExperienceLevelRewardItem
{
public:
	bool                                         bGenerateRandomReward;                             // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELevelRewardType                  RandomRewardType;                                  // 0x1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_59FA[0x6];                                     // Fixing Size After Last Property  
	TSoftObjectPtr<class UDataAsset>             Reward;                                            // 0x8(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StackSize;                                         // 0x30(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERarity                           Rarity;                                            // 0x34(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bGenerateMods;                                     // 0x35(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_59FB[0x2];                                     // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Valhalla.ExperienceLevelRewardItemGroup
struct Valhalla_ExperienceLevelRewardItemGroup
{
public:
	TArray<struct Valhalla_ExperienceLevelRewardItem> Rewards;                                           // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// ScriptStruct Valhalla.ExperienceData
struct Valhalla_ExperienceData
{
public:
	struct GameplayTags_GameplayTag              ExperienceType;                                    // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StartingLevel;                                     // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StartingXp;                                        // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CurrentLevel;                                      // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CurrentXP;                                         // 0x14(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GameplayTags_GameplayTagContainer     GameplayTags;                                      // 0x18(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UValXpTable>            XpTable;                                           // 0x38(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UValExperienceTrackAsset> ExperienceTrack;                                   // 0x60(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsActive;                                         // 0x88(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5A00[0x7];                                     // Fixing Size Of Struct 
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Valhalla.ValMasteryLevelData
struct Valhalla_ValMasteryLevelData
{
public:
	int32                                        MasteryLevelRequired;                              // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5A01[0x4];                                     // Fixing Size After Last Property  
	TSoftObjectPtr<class UValItemAsset>          MasteryEquipmentAsset;                             // 0x8(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UValItemAsset>>  AffectedAbilities;                                 // 0x30(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Valhalla.ValMasteryData
struct Valhalla_ValMasteryData
{
public:
	TArray<struct Valhalla_ValMasteryLevelData>  LevelData;                                         // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Valhalla.ValMasteryCachedAbilities
struct Valhalla_ValMasteryCachedAbilities
{
public:
	TArray<struct GameplayAbilities_GameplayAbilitySpecHandle> AbilitySpecHandles;                                // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Valhalla.ValMasteryCachedEffects
struct Valhalla_ValMasteryCachedEffects
{
public:
	TArray<struct GameplayAbilities_ActiveGameplayEffectHandle> EffectSpecHandles;                                 // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Valhalla.VoiceReportData
struct Valhalla_VoiceReportData
{
public:
	class AValPlayerState*                       ReporterPlayer;                                    // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        ReportType;                                        // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                ReportReason;                                      // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVoiceReportEventType             EventType;                                         // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsTeamReport;                                     // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5A02[0x2];                                     // Fixing Size After Last Property  
	int32                                        TeamNumber;                                        // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AValPlayerState*>               ReportedPlayerList;                                // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Valhalla.LeaderboardReadConfig
struct Valhalla_LeaderboardReadConfig
{
public:
	class FString                                ID;                                                // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Name;                                              // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Stat;                                              // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Enabled;                                           // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5A03[0x7];                                     // Fixing Size Of Struct 
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Valhalla.JsonLeaderboardsConfig
struct Valhalla_JsonLeaderboardsConfig
{
public:
	TMap<class FString, struct Valhalla_LeaderboardReadConfig> Leaderboards;                                      // 0x0(0x50)(NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Valhalla.JsonLeaderboardsWriteConfig
struct Valhalla_JsonLeaderboardsWriteConfig
{
public:
	class FString                                ApiKey;                                            // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AppID;                                             // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                URL;                                               // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Valhalla.MagBoostConfig
struct Valhalla_MagBoostConfig
{
public:
	TSubclassOf<class UGameplayEffect>           BoostEffect;                                       // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Magnitude;                                         // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5A04[0x4];                                     // Fixing Size Of Struct 
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Valhalla.EntryRequirement
struct Valhalla_EntryRequirement
{
public:
	TSoftObjectPtr<class UValItemAsset>          ItemRequirement;                                   // 0x0(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ItemCount;                                         // 0x28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5A05[0x4];                                     // Fixing Size Of Struct 
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Valhalla.DominationPointData
struct Valhalla_DominationPointData
{
public:
	class AValUtopiaObjectivePoint*              ObjectivePoint;                                    // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TimeLeftToCapture;                                 // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5A07[0x4];                                     // Fixing Size After Last Property  
	TArray<class AValTeamState*>                 TeamsOnPoint;                                      // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class AValCharacter*>                 PlayersOnPoint;                                    // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class AValTeamState*                         ControllingTeam;                                   // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Valhalla.VendorItemPool
struct Valhalla_VendorItemPool
{
public:
	class FString                                Name;                                              // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UPrimaryDataAsset>> Items;                                             // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x88 (0x88 - 0x0)
// ScriptStruct Valhalla.VendorListingConfig
struct Valhalla_VendorListingConfig
{
public:
	enum class EVendorListingType                ListingType;                                       // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5A0B[0x3];                                     // Fixing Size After Last Property  
	int32                                        RequiredItemId;                                    // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UPrimaryDataAsset>      Item;                                              // 0x8(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ItemPool;                                          // 0x30(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bGenerateEveryItemInPool;                          // 0x40(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5A0C[0x3];                                     // Fixing Size After Last Property  
	int32                                        NumItemsToGenerateFromPool;                        // 0x44(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverridePrice;                                    // 0x48(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5A0D[0x3];                                     // Fixing Size After Last Property  
	int32                                        PriceOverride;                                     // 0x4C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERarityGenerationMode             RarityGenerationMode;                              // 0x50(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5A0E[0x3];                                     // Fixing Size After Last Property  
	float                                        RarityChances[0x8];                                // 0x54(0x20)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EIncludeRarity                    PreselectedRarities[0x8];                          // 0x74(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Stock;                                             // 0x7C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRemoveOnEmptyStock;                               // 0x80(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5A0F[0x3];                                     // Fixing Size After Last Property  
	int32                                        NumPurchasableAtOneTime;                           // 0x84(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Valhalla.ShopItemPrice
struct Valhalla_ShopItemPrice
{
public:
	int32                                        Price;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CurrencyItemId;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct Valhalla.SellRecipe
struct Valhalla_SellRecipe
{
public:
	int32                                        LootId;                                            // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Valhalla_ShopItemPrice                Price;                                             // 0x4(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct Valhalla.RarityUnlockConfig
struct Valhalla_RarityUnlockConfig
{
public:
	enum class ERarityUnlockMode                 UnlockMode;                                        // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5A10[0x3];                                     // Fixing Size After Last Property  
	int32                                        MinimumLevel;                                      // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaximumLevel;                                      // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct Valhalla.InventoryIdCount
struct Valhalla_InventoryIdCount
{
public:
	uint8                                        Pad_5A11[0x14];                                    // Fixing Size Of Struct 
};

// 0x38 (0x100 - 0xC8)
// ScriptStruct Valhalla.VendorItem
struct Valhalla_VendorItem : public Valhalla_InventoryItem
{
public:
	int32                                        ListingId;                                         // 0xC8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Price;                                             // 0xCC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsLocked;                                         // 0xD0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5A12[0x3];                                     // Fixing Size After Last Property  
	struct Valhalla_RarityUnlockConfig           UnlockCondition;                                   // 0xD4(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bRemoveOnEmptyStock;                               // 0xE0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5A13[0x3];                                     // Fixing Size After Last Property  
	int32                                        NumPurchasableAtOneTime;                           // 0xE4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BundleSize;                                        // 0xE8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NewUpgradeLevel;                                   // 0xEC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UShopItem*                             ShopItem;                                          // 0xF0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UValItemAsset*                         LoadedAsset;                                       // 0xF8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Valhalla.VendorItemBundle
struct Valhalla_VendorItemBundle
{
public:
	int32                                        NumItems;                                          // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BuyPrice;                                          // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Valhalla.AbilityMeshMontage
struct Valhalla_AbilityMeshMontage
{
public:
	class USkeletalMeshComponent*                Mesh;                                              // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                          Montage;                                           // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Valhalla.DeviceStatModifiers
struct Valhalla_DeviceStatModifiers
{
public:
	TSubclassOf<class UGameplayEffect>           EffectType;                                        // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Magnitude;                                         // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5A14[0x4];                                     // Fixing Size Of Struct 
};

// 0x40 (0xC0 - 0x80)
// ScriptStruct Valhalla.ValGameplayEffectContext
struct Valhalla_ValGameplayEffectContext : public GameplayAbilities_GameplayEffectContext
{
public:
	uint8                                        Pad_5A15[0x40];                                    // Fixing Size Of Struct 
};

// 0x88 (0x88 - 0x0)
// ScriptStruct Valhalla.ValAIAudioCueConfig
struct Valhalla_ValAIAudioCueConfig
{
public:
	struct GameplayTags_GameplayTag              CueTag;                                            // 0x0(0x8)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                         SoundCue;                                          // 0x8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GameplayTags_GameplayTagContainer     MustHaveEventTags;                                 // 0x10(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct GameplayTags_GameplayTagContainer     CannotHaveEventTags;                               // 0x30(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct GameplayTags_GameplayTag              GroupTag;                                          // 0x50(0x8)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PlayChance;                                        // 0x58(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CooldownTimeInSec;                                 // 0x5C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowMultiplePlay;                                // 0x60(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPlayOnce;                                         // 0x61(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5A1A[0x2];                                     // Fixing Size After Last Property  
	int32                                        MaxGroupSimultaneousPlayAmount;                    // 0x64(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPlayOnceForGroup;                                 // 0x68(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStopWhenNotValid;                                 // 0x69(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5A1B[0x2];                                     // Fixing Size After Last Property  
	FDelegateProperty_                           Callback;                                          // 0x6C(0x10)(ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LastPlayTime;                                      // 0x7C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PlayID;                                            // 0x80(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5A1C[0x4];                                     // Fixing Size Of Struct 
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Valhalla.MontageArray
struct Valhalla_MontageArray
{
public:
	TArray<class UAnimMontage*>                  Montages;                                          // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<class UAnimMontage*>                  PostAttackMontages;                                // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<class UAnimMontage*>                  MissedPostAttackMontages;                          // 0x20(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x110 (0x870 - 0x760)
// ScriptStruct Valhalla.ValCharAnimInstanceProxy
struct Valhalla_ValCharAnimInstanceProxy : public Valhalla_ValAnimInstanceProxy
{
public:
	float                                        LandingRemainingTime;                              // 0x760(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LandingTotalTime;                                  // 0x764(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    LandedZOffset;                                     // 0x768(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                           LandingPelvisRecoil;                               // 0x780(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OwnerAimPitch;                                     // 0x788(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LeadingYaw;                                        // 0x78C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SpeedForwards;                                     // 0x790(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SpeedRight;                                        // 0x794(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Speed;                                             // 0x798(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Pitch;                                             // 0x79C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsMoving;                                         // 0x7A0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5A1D[0x3];                                     // Fixing Size After Last Property  
	float                                        YawDeltaSinceLastUpdate;                           // 0x7A4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        YawDeltaSpeed;                                     // 0x7A8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AdditiveLeanAngle;                                 // 0x7AC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AdditiveLeanAngleFactor;                           // 0x7B0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SkiFallThreshold;                                  // 0x7B4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GroundRotationInterpSpeed;                         // 0x7B8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SlideRootYawOffset;                                // 0x7BC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsInAir;                                          // 0x7C0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsFallingUp;                                      // 0x7C1(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsFallingDown;                                    // 0x7C2(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsSkiing;                                         // 0x7C3(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5A1E[0x4];                                     // Fixing Size After Last Property  
	double                                       AccumulatedTime;                                   // 0x7C8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FallingWantingToSkiDelta;                          // 0x7D0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DistanceFromGround;                                // 0x7D4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Rotator                   GroundRotation;                                    // 0x7D8(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct CoreUObject_Rotator                   GroundRotationTarget;                              // 0x7F0(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        GroundRotationAlpha;                               // 0x808(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5A20[0x4];                                     // Fixing Size After Last Property  
	struct CoreUObject_Rotator                   WorldRotation;                                     // 0x810(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class FName                                  LeftHandIKSocketName;                              // 0x828(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  RightHandBoneName;                                 // 0x830(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    LeftHandIKTargetLocation;                          // 0x838(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Rotator                   LeftHandIKTargetRotation;                          // 0x850(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_5A21[0x8];                                     // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Valhalla.SpatialAudioPortalRef
struct Valhalla_SpatialAudioPortalRef
{
public:
	uint8                                        Pad_5A22[0x10];                                    // Fixing Size Of Struct 
};

// 0x58 (0x58 - 0x0)
// ScriptStruct Valhalla.SpatialAudioPortalSet
struct Valhalla_SpatialAudioPortalSet
{
public:
	TSet<TWeakObjectPtr<class UValAkPortalComponent>> Portals;                                           // 0x0(0x50)(ExportObject, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_5A23[0x8];                                     // Fixing Size Of Struct 
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Valhalla.AudioGraphNode
struct Valhalla_AudioGraphNode
{
public:
	TWeakObjectPtr<class AValAkRoom>             ReferencedRoom;                                    // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UValAkPortalComponent>  ReferencedDoor;                                    // 0x8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5A24[0x10];                                    // Fixing Size After Last Property  
	struct CoreUObject_Vector                    CenterPoint;                                       // 0x20(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Valhalla.QueueScheduleCycle
struct Valhalla_QueueScheduleCycle
{
public:
	class FString                                CycleId;                                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        FilteredRegions;                                   // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        QueueIds;                                          // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Valhalla.QueueScheduleBucket
struct Valhalla_QueueScheduleBucket
{
public:
	class FString                                BucketId;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SchedulePeriodMinutes;                             // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5A25[0x4];                                     // Fixing Size After Last Property  
	TArray<struct Valhalla_QueueScheduleCycle>   Cycles;                                            // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Valhalla.QueueScheduleNonUniformCycleQueue
struct Valhalla_QueueScheduleNonUniformCycleQueue
{
public:
	class FString                                QueueId;                                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        QueueDurationMinutes;                              // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5A26[0x4];                                     // Fixing Size Of Struct 
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Valhalla.QueueScheduleNonUniformCycle
struct Valhalla_QueueScheduleNonUniformCycle
{
public:
	class FString                                CycleId;                                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        FilteredRegions;                                   // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct Valhalla_QueueScheduleNonUniformCycleQueue> Queues;                                            // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Valhalla.QueueScheduleConfig
struct Valhalla_QueueScheduleConfig
{
public:
	struct CoreUObject_DateTime                  ScheduleReference;                                 // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct Valhalla_QueueScheduleBucket>  ScheduleBuckets;                                   // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct Valhalla_QueueScheduleNonUniformCycle> NonUniformCycles;                                  // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Valhalla.ResolvedCycleInfo
struct Valhalla_ResolvedCycleInfo
{
public:
	class FString                                CycleId;                                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ActiveQueueId;                                     // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                NextQueueId;                                       // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct Valhalla.ResolvedBucketSchedule
struct Valhalla_ResolvedBucketSchedule
{
public:
	class FString                                BucketId;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_DateTime                  ScheduleEnd;                                       // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, struct Valhalla_ResolvedCycleInfo> ResolvedCycles;                                    // 0x18(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Valhalla.ResolvedNonUniformCycleInfo
struct Valhalla_ResolvedNonUniformCycleInfo
{
public:
	class FString                                CycleId;                                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_DateTime                  CycleEnd;                                          // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ActiveQueueId;                                     // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                NextQueueId;                                       // 0x28(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Valhalla.ProximityBucket
struct Valhalla_ProximityBucket
{
public:
	float                                        TickInterval;                                      // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxSquareDistance;                                 // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Valhalla.OcclusionNeighborData
struct Valhalla_OcclusionNeighborData
{
public:
	uint8                                        Pad_5A29[0x10];                                    // Fixing Size Of Struct 
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Valhalla.TeamScoring
struct Valhalla_TeamScoring
{
public:
	int32                                        TotalExtractions;                                  // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TotalEliminations;                                 // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TimeSpentInMatch;                                  // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Guid                      PlayerUuid;                                        // 0xC(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PlayerRanking;                                     // 0x1C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Valhalla.SecurityLevelConfig
struct Valhalla_SecurityLevelConfig
{
public:
	float                                        MinLevel;                                          // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5A2A[0x4];                                     // Fixing Size After Last Property  
	class UValSecurityLevel*                     SecurityLevel;                                     // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Valhalla.DungeonCellObjects
struct Valhalla_DungeonCellObjects
{
public:
	TSet<TWeakObjectPtr<class UObject>>          CellObjectsSet;                                    // 0x0(0x50)(UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Valhalla.ClassCountData
struct Valhalla_ClassCountData
{
public:
	int32                                        CurrentClassCount;                                 // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxClassCount;                                     // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GameplayTags_GameplayTag              Class;                                             // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Valhalla.TeamClassList
struct Valhalla_TeamClassList
{
public:
	int32                                        TeamId;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5A2B[0x4];                                     // Fixing Size After Last Property  
	TArray<struct Valhalla_ClassCountData>       ClassCountData;                                    // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Valhalla.BuildingPOI
struct Valhalla_BuildingPOI
{
public:
	struct CoreUObject_Vector2D                  Location;                                          // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBuildingType                     BuildingType;                                      // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5A2C[0x3];                                     // Fixing Size After Last Property  
	int32                                        CurrentChestCount;                                 // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Valhalla.LegendaryArtifactData
struct Valhalla_LegendaryArtifactData
{
public:
	class AActor*                                ArtifactActor;                                     // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Engine_Vector_NetQuantize10           ArtifactLocation;                                  // 0x8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EArtifactIcon                     IconType;                                          // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELegendaryArtifactState           CurrentState;                                      // 0x21(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5A2D[0x2];                                     // Fixing Size After Last Property  
	int32                                        OwningTeamNumber;                                  // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsRevealed;                                       // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5A2E[0x3];                                     // Fixing Size After Last Property  
	int32                                        PlayerRevealTimer;                                 // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Valhalla.ValAbilityAffectingPassiveInfo
struct Valhalla_ValAbilityAffectingPassiveInfo
{
public:
	enum class EPlayerProperty                   MasteryType;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5A2F[0x3];                                     // Fixing Size After Last Property  
	int32                                        MasteryLevel;                                      // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UValItemAsset>          MasteryEquipmentAsset;                             // 0x8(0x28)(BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Valhalla.CVarArray
struct Valhalla_CVarArray
{
public:
	TArray<float>                                Values;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class ECVarArrayType                    ArrayType;                                         // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5A30[0x7];                                     // Fixing Size Of Struct 
};

// 0x58 (0x58 - 0x0)
// ScriptStruct Valhalla.MissionPhaseInfo
struct Valhalla_MissionPhaseInfo
{
public:
	TArray<int32>                                RequiredItemIds;                                   // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	bool                                         bConsumeRequiredItems;                             // 0x10(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5A31[0x7];                                     // Fixing Size After Last Property  
	TSoftObjectPtr<class UValLootAsset>          LootAsset;                                         // 0x18(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EventProbability;                                  // 0x40(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EInteractionEventType             EventType;                                         // 0x44(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5A32[0x3];                                     // Fixing Size After Last Property  
	class UValBotWaveConfig*                     BotSpawnConfig;                                    // 0x48(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ChannelTime;                                       // 0x50(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5A33[0x4];                                     // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Valhalla.PermanentEquippedModData
struct Valhalla_PermanentEquippedModData
{
public:
	TArray<struct GameplayAbilities_ActiveGameplayEffectHandle> PermanentEffectHandles;                            // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Valhalla.ValOverlayMatData
struct Valhalla_ValOverlayMatData
{
public:
	int32                                        PriorityLevel;                                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5A34[0x4];                                     // Fixing Size After Last Property  
	class UMaterialInterface*                    OverrideMat;                                       // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EOverlayMeshType                  OverlayMesh;                                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5A35[0x7];                                     // Fixing Size Of Struct 
};

// 0xC (0x18 - 0xC)
// ScriptStruct Valhalla.DamageCompItem
struct Valhalla_DamageCompItem : public NetCore_FastArraySerializerItem
{
public:
	uint8                                        Damage;                                            // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5A36[0x3];                                     // Fixing Size After Last Property  
	class UActorComponent*                       Component;                                         // 0x10(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x120 - 0x108)
// ScriptStruct Valhalla.DamageCompArray
struct Valhalla_DamageCompArray : public NetCore_FastArraySerializer
{
public:
	TArray<struct Valhalla_DamageCompItem>       DamagedComponents;                                 // 0x108(0x10)(ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class AValEnvironmentDamageManager*          ValEDMOwner;                                       // 0x118(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Valhalla.DestroyedComponentData
struct Valhalla_DestroyedComponentData
{
public:
	uint8                                        Pad_5A37[0x18];                                    // Fixing Size Of Struct 
};

// 0x80 (0x80 - 0x0)
// ScriptStruct Valhalla.ValUtopiaConstructorCellData
struct Valhalla_ValUtopiaConstructorCellData
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Floor;                                             // 0x4(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        WallBitmask;                                       // 0x8(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5A38[0x4];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 Transform;                                         // 0x10(0x60)(BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsCorridor;                                       // 0x70(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsOutside;                                        // 0x71(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5A3A[0x2];                                     // Fixing Size After Last Property  
	int32                                        EdgeBitmask;                                       // 0x74(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5A3B[0x8];                                     // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Valhalla.OccludableComponent
struct Valhalla_OccludableComponent
{
public:
	class USceneComponent*                       Component;                                         // 0x0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        MinVisibleLevel;                                   // 0x8(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5A3C[0x7];                                     // Fixing Size Of Struct 
};

}


