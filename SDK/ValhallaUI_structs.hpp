#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ELobbyBeaconConnectionStatus : uint8
{
	Connected                      = 0,
	Rejected                       = 1,
	Disconnected                   = 2,
	ELobbyBeaconConnectionStatus_MAX = 3,
};

enum class EUIAnimation : uint8
{
	None                           = 0,
	PosX                           = 1,
	PosY                           = 2,
	Alpha                          = 3,
	SizeX                          = 4,
	SizeY                          = 5,
	EUIAnimation_MAX               = 6,
};

enum class EOptionType : uint8
{
	Video                          = 0,
	Audio                          = 1,
	Control                        = 2,
	Gameplay                       = 3,
	Interface                      = 4,
	Keybinding                     = 5,
	Development                    = 6,
	EOptionType_MAX                = 7,
};

enum class EVideoOption : uint8
{
	Display                        = 0,
	Graphics                       = 1,
	Resolution                     = 2,
	ResolutionScale                = 3,
	AspectRatio                    = 4,
	AntiAliasType                  = 5,
	MaxFPS                         = 6,
	UpscalingMethod                = 7,
	FSRQualityMode                 = 8,
	DLSSSharpness                  = 9,
	AutoDetect                     = 10,
	FOV                            = 11,
	VSync                          = 12,
	Lumen                          = 13,
	Gamma                          = 14,
	EVideoOption_MAX               = 15,
};

enum class EAudioOption : uint8
{
	VolumeMusic                    = 0,
	VolumeMaster                   = 1,
	VolumeEffects                  = 2,
	VolumeExperimental             = 3,
	BackgroundAudio                = 4,
	VoiceChatEnable                = 5,
	VoiceChatInputDevice           = 6,
	VoiceChatOutputDevice          = 7,
	PushToTalk                     = 8,
	VoiceChatVolume                = 9,
	MicVolume                      = 10,
	EAudioOption_MAX               = 11,
};

enum class EControlOption : uint8
{
	MouseSensitivity               = 0,
	AimingSensitivity              = 1,
	GamepadSensitivity             = 2,
	GamepadAimingSensitivity       = 3,
	AimingMode                     = 4,
	CrouchMode                     = 5,
	InvertYAxis                    = 6,
	DisableCameraBob               = 7,
	AutoSprint                     = 8,
	DeployablePreview              = 9,
	EControlOption_MAX             = 10,
};

enum class EGameplayOption : uint8
{
	AutoSprint                     = 0,
	JetpackCamera                  = 1,
	EGameplayOption_MAX            = 2,
};

enum class EInterfaceOption : uint8
{
	Reticle                        = 0,
	ReticleShadowOpacity           = 1,
	DamageNumbers                  = 2,
	NetStats                       = 3,
	FPSStats                       = 4,
	ShowQADebug                    = 5,
	HideNameplateInMatchLobby      = 6,
	EInterfaceOption_MAX           = 7,
};

enum class EAimingMode : uint8
{
	Hold                           = 0,
	Toggle                         = 1,
	EAimingMode_MAX                = 2,
};

enum class EReticleOption : uint8
{
	Default                        = 0,
	Dot                            = 1,
	Cross                          = 2,
	MiniCross                      = 3,
	Custom                         = 4,
	EReticleOption_MAX             = 5,
};

enum class EDevOption : uint8
{
	Team                           = 0,
	Armor                          = 1,
	Helmet                         = 2,
	Weapon                         = 3,
	Jetpack                        = 4,
	Ability1                       = 5,
	Ability2                       = 6,
	Ability3                       = 7,
	AITeam                         = 8,
	AIType                         = 9,
	AIWeapon                       = 10,
	AccuracyInfo                   = 11,
	SpectateEnemies                = 12,
	EDevOption_MAX                 = 13,
};

enum class EUpgradeState : uint8
{
	None                           = 0,
	Available                      = 1,
	Purchased                      = 2,
	Unavailable                    = 3,
	EUpgradeState_MAX              = 4,
};

enum class ENewsType : uint8
{
	GoodNews                       = 0,
	BadNews                        = 1,
	NeutralNews                    = 2,
	ENewsType_MAX                  = 3,
};

enum class EMessageIconType : uint8
{
	Artifact                       = 0,
	Ship                           = 1,
	AES                            = 2,
	None                           = 3,
	EMessageIconType_MAX           = 4,
};

enum class EQueueForRemoteLobbyState : uint8
{
	Uninitialized                  = 0,
	Initialized                    = 1,
	LeavingGameSessions            = 2,
	WaitingToRetry                 = 3,
	LeavingInactiveSession         = 4,
	WaitingToFindSession           = 5,
	WaitingSessionReady            = 6,
	WaitingToSyncSession           = 7,
	LobbyLoaded                    = 8,
	EQueueForRemoteLobbyState_MAX  = 9,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0xA8 (0xA8 - 0x0)
// ScriptStruct ValhallaUI.ValPingUIData
struct ValhallaUI_ValPingUIData
{
public:
	struct CoreUObject_Color                     DefaultColor;                                      // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Color                     DefaultTextColor;                                  // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<enum class ERarity, struct CoreUObject_Color> RarityColors;                                      // 0x8(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class FText                                  LocalizedName;                                     // 0x58(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class FText                                  LocalizedMenuName;                                 // 0x70(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x88(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class UTexture2D*                            Texture;                                           // 0xA0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// ScriptStruct ValhallaUI.UIAnimation
struct ValhallaUI_UIAnimation
{
public:
	uint8                                        Pad_4042[0x1C];                                    // Fixing Size Of Struct 
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ValhallaUI.UICanvasPanelJiggleInstance
struct ValhallaUI_UICanvasPanelJiggleInstance
{
public:
	uint8                                        Pad_4043[0x28];                                    // Fixing Size Of Struct 
};

// 0x30 (0x38 - 0x8)
// ScriptStruct ValhallaUI.SceneData
struct ValhallaUI_SceneData : public Engine_TableRowBase
{
public:
	TSoftClassPtr<class UUIScene>                Scene;                                             // 0x8(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Priority;                                          // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AutoPush;                                          // 0x34(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AutoShow;                                          // 0x35(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Popup;                                             // 0x36(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4053[0x1];                                     // Fixing Size Of Struct 
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ValhallaUI.PromptData
struct ValhallaUI_PromptData
{
public:
	class FName                                  ActionName;                                        // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  PromptText;                                        // 0x8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct ValhallaUI.QueuedMessage
struct ValhallaUI_QueuedMessage
{
public:
	enum class ENewsType                         NewsType;                                          // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMessageIconType                  IconType;                                          // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_405F[0x6];                                     // Fixing Size After Last Property  
	class FText                                  Title;                                             // 0x8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  Subtitle;                                          // 0x20(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x38(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class USoundBase*                            Metasound;                                         // 0x50(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFlushQueue;                                       // 0x58(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4064[0x7];                                     // Fixing Size Of Struct 
};

}


