#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EAkResult : uint8
{
	NotImplemented                 = 0,
	Success                        = 1,
	Fail                           = 2,
	PartialSuccess                 = 3,
	NotCompatible                  = 4,
	AlreadyConnected               = 5,
	InvalidFile                    = 7,
	AudioFileHeaderTooLarge        = 8,
	MaxReached                     = 9,
	InvalidID                      = 14,
	IDNotFound                     = 15,
	InvalidInstanceID              = 16,
	NoMoreData                     = 17,
	InvalidStateGroup              = 20,
	ChildAlreadyHasAParent         = 21,
	InvalidLanguage                = 22,
	CannotAddItseflAsAChild        = 23,
	InvalidParameter               = 31,
	ElementAlreadyInList           = 35,
	PathNotFound                   = 36,
	PathNoVertices                 = 37,
	PathNotRunning                 = 38,
	PathNotPaused                  = 39,
	PathNodeAlreadyInList          = 40,
	PathNodeNotInList              = 41,
	DataNeeded                     = 43,
	NoDataNeeded                   = 44,
	DataReady                      = 45,
	NoDataReady                    = 46,
	InsufficientMemory             = 52,
	Cancelled                      = 53,
	UnknownBankID                  = 54,
	BankReadError                  = 56,
	InvalidSwitchType              = 57,
	FormatNotReady                 = 63,
	WrongBankVersion               = 64,
	FileNotFound                   = 66,
	DeviceNotReady                 = 67,
	BankAlreadyLoaded              = 69,
	RenderedFX                     = 71,
	ProcessNeeded                  = 72,
	ProcessDone                    = 73,
	MemManagerNotInitialized       = 74,
	StreamMgrNotInitialized        = 75,
	SSEInstructionsNotSupported    = 76,
	Busy                           = 77,
	UnsupportedChannelConfig       = 78,
	PluginMediaNotAvailable        = 79,
	MustBeVirtualized              = 80,
	CommandTooLarge                = 81,
	RejectedByFilter               = 82,
	InvalidCustomPlatformName      = 83,
	DLLCannotLoad                  = 84,
	DLLPathNotFound                = 85,
	NoJavaVM                       = 86,
	OpenSLError                    = 87,
	PluginNotRegistered            = 88,
	DataAlignmentError             = 89,
	EAkResult_MAX                  = 90,
};

enum class EAkCallbackType : uint8
{
	EndOfEvent                     = 0,
	Marker                         = 2,
	Duration                       = 3,
	Starvation                     = 5,
	MusicPlayStarted               = 7,
	MusicSyncBeat                  = 8,
	MusicSyncBar                   = 9,
	MusicSyncEntry                 = 10,
	MusicSyncExit                  = 11,
	MusicSyncGrid                  = 12,
	MusicSyncUserCue               = 13,
	MusicSyncPoint                 = 14,
	MIDIEvent                      = 16,
	EAkCallbackType_MAX            = 17,
};

enum class EAkAndroidAudioAPI : uint8
{
	AAudio                         = 0,
	OpenSL_ES                      = 1,
	EAkAndroidAudioAPI_MAX         = 2,
};

enum class EAkAudioSessionCategory : int32
{
	Ambient                        = 0,
	SoloAmbient                    = 1,
	PlayAndRecord                  = 2,
	EAkAudioSessionCategory_MAX    = 3,
};

enum class EAkAudioSessionCategoryOptions : uint8
{
	MixWithOthers                  = 0,
	DuckOthers                     = 1,
	AllowBluetooth                 = 2,
	DefaultToSpeaker               = 3,
	EAkAudioSessionCategoryOptions_MAX = 4,
};

enum class EAkAudioSessionMode : int32
{
	Default                        = 0,
	VoiceChat                      = 1,
	GameChat                       = 2,
	VideoRecording                 = 3,
	Measurement                    = 4,
	MoviePlayback                  = 5,
	VideoChat                      = 6,
	EAkAudioSessionMode_MAX        = 7,
};

enum class EReflectionFilterBits : uint8
{
	Wall                           = 0,
	Ceiling                        = 1,
	Floor                          = 2,
	EReflectionFilterBits_MAX      = 3,
};

enum class EAkAudioContext : uint8
{
	Foreign                        = 0,
	GameplayAudio                  = 1,
	EditorAudio                    = 2,
	AlwaysActive                   = 3,
	EAkAudioContext_MAX            = 4,
};

enum class EPanningRule : uint8
{
	PanningRule_Speakers           = 0,
	PanningRule_Headphones         = 1,
	PanningRule_MAX                = 2,
};

enum class EAkAcousticPortalState : uint8
{
	Closed                         = 0,
	Open                           = 1,
	AkAcousticPortalState_MAX      = 2,
};

enum class EAkChannelConfiguration : uint8
{
	Ak_Parent                      = 0,
	Ak_MainMix                     = 1,
	Ak_Passthrough                 = 2,
	Ak_LFE                         = 3,
	AK_Audio_Objects               = 4,
	Ak_1_0                         = 5,
	Ak_2_0                         = 6,
	Ak_2_1                         = 7,
	Ak_3_0                         = 8,
	Ak_3_1                         = 9,
	Ak_4_0                         = 10,
	Ak_4_1                         = 11,
	Ak_5_0                         = 12,
	Ak_5_1                         = 13,
	Ak_7_1                         = 14,
	Ak_5_1_2                       = 15,
	Ak_7_1_2                       = 16,
	Ak_7_1_4                       = 17,
	Ak_Auro_9_1                    = 18,
	Ak_Auro_10_1                   = 19,
	Ak_Auro_11_1                   = 20,
	Ak_Auro_13_1                   = 21,
	Ak_Ambisonics_1st_order        = 22,
	Ak_Ambisonics_2nd_order        = 23,
	Ak_Ambisonics_3rd_order        = 24,
	Ak_Ambisonics_4th_order        = 25,
	Ak_Ambisonics_5th_order        = 26,
	AkChannelConfiguration_MAX     = 27,
};

enum class EAkSpeakerConfiguration : uint8
{
	Ak_Speaker_Front_Left          = 1,
	Ak_Speaker_Front_Right         = 2,
	Ak_Speaker_Front_Center        = 4,
	Ak_Speaker_Low_Frequency       = 8,
	Ak_Speaker_Back_Left           = 16,
	Ak_Speaker_Back_Right          = 32,
	Ak_Speaker_Back_Center         = 256,
	Ak_Speaker_Side_Left           = 512,
	Ak_Speaker_Side_Right          = 1024,
	Ak_Speaker_Top                 = 2048,
	Ak_Speaker_Height_Front_Left   = 4096,
	Ak_Speaker_Height_Front_Center = 8192,
	Ak_Speaker_Height_Front_Right  = 16384,
	Ak_Speaker_Height_Back_Left    = 32768,
	Ak_Speaker_Height_Back_Center  = 65536,
	Ak_Speaker_Height_Back_Right   = 131072,
	Ak_Speaker_MAX                 = 131073,
};

enum class EAkMultiPositionType : uint8
{
	SingleSource                   = 0,
	MultiSources                   = 1,
	MultiDirections                = 2,
	AkMultiPositionType_MAX        = 3,
};

enum class EAkActionOnEventType : uint8
{
	Stop                           = 0,
	Pause                          = 1,
	Resume                         = 2,
	Break                          = 3,
	ReleaseEnvelope                = 4,
	AkActionOnEventType_MAX        = 5,
};

enum class EAkCurveInterpolation : uint8
{
	Log3                           = 0,
	Sine                           = 1,
	Log1                           = 2,
	InvSCurve                      = 3,
	Linear                         = 4,
	SCurve                         = 5,
	Exp1                           = 6,
	SineRecip                      = 7,
	Exp3                           = 8,
	LastFadeCurve                  = 8,
	Constant                       = 9,
	EAkCurveInterpolation_MAX      = 10,
};

enum class ERTPCValueType : uint8
{
	Default                        = 0,
	Global                         = 1,
	GameObject                     = 2,
	PlayingID                      = 3,
	Unavailable                    = 4,
	ERTPCValueType_MAX             = 5,
};

enum class EAkMidiEventType : uint8
{
	AkMidiEventTypeInvalid         = 0,
	AkMidiEventTypeNoteOff         = 128,
	AkMidiEventTypeNoteOn          = 144,
	AkMidiEventTypeNoteAftertouch  = 160,
	AkMidiEventTypeController      = 176,
	AkMidiEventTypeProgramChange   = 192,
	AkMidiEventTypeChannelAftertouch = 208,
	AkMidiEventTypePitchBend       = 224,
	AkMidiEventTypeSysex           = 240,
	AkMidiEventTypeEscape          = 247,
	AkMidiEventTypeMeta            = 255,
	EAkMidiEventType_MAX           = 256,
};

enum class EAkMidiCcValues : uint8
{
	AkMidiCcBankSelectCoarse       = 0,
	AkMidiCcModWheelCoarse         = 1,
	AkMidiCcBreathCtrlCoarse       = 2,
	AkMidiCcCtrl3Coarse            = 3,
	AkMidiCcFootPedalCoarse        = 4,
	AkMidiCcPortamentoCoarse       = 5,
	AkMidiCcDataEntryCoarse        = 6,
	AkMidiCcVolumeCoarse           = 7,
	AkMidiCcBalanceCoarse          = 8,
	AkMidiCcCtrl9Coarse            = 9,
	AkMidiCcPanPositionCoarse      = 10,
	AkMidiCcExpressionCoarse       = 11,
	AkMidiCcEffectCtrl1Coarse      = 12,
	AkMidiCcEffectCtrl2Coarse      = 13,
	AkMidiCcCtrl14Coarse           = 14,
	AkMidiCcCtrl15Coarse           = 15,
	AkMidiCcGenSlider1             = 16,
	AkMidiCcGenSlider2             = 17,
	AkMidiCcGenSlider3             = 18,
	AkMidiCcGenSlider4             = 19,
	AkMidiCcCtrl20Coarse           = 20,
	AkMidiCcCtrl21Coarse           = 21,
	AkMidiCcCtrl22Coarse           = 22,
	AkMidiCcCtrl23Coarse           = 23,
	AkMidiCcCtrl24Coarse           = 24,
	AkMidiCcCtrl25Coarse           = 25,
	AkMidiCcCtrl26Coarse           = 26,
	AkMidiCcCtrl27Coarse           = 27,
	AkMidiCcCtrl28Coarse           = 28,
	AkMidiCcCtrl29Coarse           = 29,
	AkMidiCcCtrl30Coarse           = 30,
	AkMidiCcCtrl31Coarse           = 31,
	AkMidiCcBankSelectFine         = 32,
	AkMidiCcModWheelFine           = 33,
	AkMidiCcBreathCtrlFine         = 34,
	AkMidiCcCtrl3Fine              = 35,
	AkMidiCcFootPedalFine          = 36,
	AkMidiCcPortamentoFine         = 37,
	AkMidiCcDataEntryFine          = 38,
	AkMidiCcVolumeFine             = 39,
	AkMidiCcBalanceFine            = 40,
	AkMidiCcCtrl9Fine              = 41,
	AkMidiCcPanPositionFine        = 42,
	AkMidiCcExpressionFine         = 43,
	AkMidiCcEffectCtrl1Fine        = 44,
	AkMidiCcEffectCtrl2Fine        = 45,
	AkMidiCcCtrl14Fine             = 46,
	AkMidiCcCtrl15Fine             = 47,
	AkMidiCcCtrl20Fine             = 52,
	AkMidiCcCtrl21Fine             = 53,
	AkMidiCcCtrl22Fine             = 54,
	AkMidiCcCtrl23Fine             = 55,
	AkMidiCcCtrl24Fine             = 56,
	AkMidiCcCtrl25Fine             = 57,
	AkMidiCcCtrl26Fine             = 58,
	AkMidiCcCtrl27Fine             = 59,
	AkMidiCcCtrl28Fine             = 60,
	AkMidiCcCtrl29Fine             = 61,
	AkMidiCcCtrl30Fine             = 62,
	AkMidiCcCtrl31Fine             = 63,
	AkMidiCcHoldPedal              = 64,
	AkMidiCcPortamentoOnOff        = 65,
	AkMidiCcSustenutoPedal         = 66,
	AkMidiCcSoftPedal              = 67,
	AkMidiCcLegatoPedal            = 68,
	AkMidiCcHoldPedal2             = 69,
	AkMidiCcSoundVariation         = 70,
	AkMidiCcSoundTimbre            = 71,
	AkMidiCcSoundReleaseTime       = 72,
	AkMidiCcSoundAttackTime        = 73,
	AkMidiCcSoundBrightness        = 74,
	AkMidiCcSoundCtrl6             = 75,
	AkMidiCcSoundCtrl7             = 76,
	AkMidiCcSoundCtrl8             = 77,
	AkMidiCcSoundCtrl9             = 78,
	AkMidiCcSoundCtrl10            = 79,
	AkMidiCcGeneralButton1         = 80,
	AkMidiCcGeneralButton2         = 81,
	AkMidiCcGeneralButton3         = 82,
	AkMidiCcGeneralButton4         = 83,
	AkMidiCcReverbLevel            = 91,
	AkMidiCcTremoloLevel           = 92,
	AkMidiCcChorusLevel            = 93,
	AkMidiCcCelesteLevel           = 94,
	AkMidiCcPhaserLevel            = 95,
	AkMidiCcDataButtonP1           = 96,
	AkMidiCcDataButtonM1           = 97,
	AkMidiCcNonRegisterCoarse      = 98,
	AkMidiCcNonRegisterFine        = 99,
	AkMidiCcAllSoundOff            = 120,
	AkMidiCcAllControllersOff      = 121,
	AkMidiCcLocalKeyboard          = 122,
	AkMidiCcAllNotesOff            = 123,
	AkMidiCcOmniModeOff            = 124,
	AkMidiCcOmniModeOn             = 125,
	AkMidiCcOmniMonophonicOn       = 126,
	AkMidiCcOmniPolyphonicOn       = 127,
	EAkMidiCcValues_MAX            = 128,
};

enum class EAkCodecId : uint8
{
	None                           = 0,
	PCM                            = 1,
	ADPCM                          = 2,
	XMA                            = 3,
	Vorbis                         = 4,
	ATRAC9                         = 12,
	OpusNX                         = 17,
	AkOpus                         = 19,
	AkOpusWEM                      = 20,
	AkCodecId_MAX                  = 21,
};

enum class EAkMeshType : uint8
{
	StaticMesh                     = 0,
	CollisionMesh                  = 1,
	AkMeshType_MAX                 = 2,
};

enum class EAkPanningRule : int32
{
	Speakers                       = 0,
	Headphones                     = 1,
	EAkPanningRule_MAX             = 2,
};

enum class EAkChannelConfigType : int32
{
	Anonymous                      = 0,
	Standard                       = 1,
	Ambisonic                      = 2,
	EAkChannelConfigType_MAX       = 3,
};

enum class EAkChannelMask : uint8
{
	FrontLeft                      = 0,
	FrontRight                     = 1,
	FrontCenter                    = 2,
	LowFrequency                   = 3,
	BackLeft                       = 4,
	BackRight                      = 5,
	BackCenter                     = 8,
	SideLeft                       = 9,
	SideRight                      = 10,
	Top                            = 11,
	HeightFrontLeft                = 12,
	HeightFrontCenter              = 13,
	HeightFrontRight               = 14,
	HeightBackLeft                 = 15,
	HeightBackCenter               = 16,
	HeightBackRight                = 17,
	EAkChannelMask_MAX             = 18,
};

enum class EAkCommSystem : int32
{
	Socket                         = 0,
	HTCS                           = 1,
	EAkCommSystem_MAX              = 2,
};

enum class EAkCollisionChannel : uint8
{
	EAKCC_WorldStatic              = 0,
	EAKCC_WorldDynamic             = 1,
	EAKCC_Pawn                     = 2,
	EAKCC_Visibility               = 3,
	EAKCC_Camera                   = 4,
	EAKCC_PhysicsBody              = 5,
	EAKCC_Vehicle                  = 6,
	EAKCC_Destructible             = 7,
	EAKCC_UseIntegrationSettingsDefault = 8,
	EAKCC_MAX                      = 9,
};

enum class EAkUnrealAudioRouting : int32
{
	Custom                         = 0,
	Separate                       = 1,
	AudioLink                      = 2,
	AudioMixer                     = 3,
	EnableWwiseOnly                = 4,
	EnableUnrealOnly               = 5,
	EAkUnrealAudioRouting_MAX      = 6,
};

enum class EAkFitToGeometryMode : uint8
{
	OrientedBox                    = 0,
	AlignedBox                     = 1,
	ConvexPolyhedron               = 2,
	EAkFitToGeometryMode_MAX       = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// ScriptStruct AkAudio.AKWaapiJsonObject
struct AkAudio_AKWaapiJsonObject
{
public:
	uint8                                        Pad_2255[0x10];                                    // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// ScriptStruct AkAudio.AkWaapiSubscriptionId
struct AkAudio_AkWaapiSubscriptionId
{
public:
	uint8                                        Pad_225B[0x8];                                     // Fixing Size Of Struct 
};

// 0x2C (0x2C - 0x0)
// ScriptStruct AkAudio.AkAdvancedInitializationSettings
struct AkAudio_AkAdvancedInitializationSettings
{
public:
	uint32                                       IO_MemorySize;                                     // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       IO_Granularity;                                    // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TargetAutoStreamBufferLength;                      // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         UseStreamCache;                                    // 0xC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_22DB[0x3];                                     // Fixing Size After Last Property  
	uint32                                       MaximumPinnedBytesInCache;                         // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         EnableGameSyncPreparation;                         // 0x14(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_22DC[0x3];                                     // Fixing Size After Last Property  
	uint32                                       ContinuousPlaybackLookAhead;                       // 0x18(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       MonitorQueuePoolSize;                              // 0x1C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       MaximumHardwareTimeoutMs;                          // 0x20(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         DebugOutOfRangeCheckEnabled;                       // 0x24(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_22E1[0x3];                                     // Fixing Size After Last Property  
	float                                        DebugOutOfRangeLimit;                              // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0x38 - 0x2C)
// ScriptStruct AkAudio.AkAdvancedInitializationSettingsWithMultiCoreRendering
struct AkAudio_AkAdvancedInitializationSettingsWithMultiCoreRendering : public AkAudio_AkAdvancedInitializationSettings
{
public:
	bool                                         EnableMultiCoreRendering;                          // 0x2C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_22E6[0x3];                                     // Fixing Size After Last Property  
	uint32                                       MaxNumJobWorkers;                                  // 0x30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       JobWorkerMaxExecutionTimeUSec;                     // 0x34(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x40 - 0x38)
// ScriptStruct AkAudio.AkAndroidAdvancedInitializationSettings
struct AkAudio_AkAndroidAdvancedInitializationSettings : public AkAudio_AkAdvancedInitializationSettingsWithMultiCoreRendering
{
public:
	uint32                                       AudioAPI;                                          // 0x38(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         RoundFrameSizeToHardwareSize;                      // 0x3C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_22F3[0x3];                                     // Fixing Size Of Struct 
};

// 0xC (0xC - 0x0)
// ScriptStruct AkAudio.AkAudioSession
struct AkAudio_AkAudioSession
{
public:
	enum class EAkAudioSessionCategory           AudioSessionCategory;                              // 0x0(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       AudioSessionCategoryOptions;                       // 0x4(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAkAudioSessionMode               AudioSessionMode;                                  // 0x8(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct AkAudio.AkChannelMask
struct AkAudio_AkChannelMask
{
public:
	int32                                        ChannelMask;                                       // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct AkAudio.AkOutputSettings
struct AkAudio_AkOutputSettings
{
public:
	class FString                                AudioDeviceShareSetName;                           // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        IdDevice;                                          // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPanningRule                      PanRule;                                           // 0x14(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAkChannelConfiguration           ChannelConfig;                                     // 0x15(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2301[0x2];                                     // Fixing Size Of Struct 
};

// 0x2 (0x2 - 0x0)
// ScriptStruct AkAudio.AkMidiEventBase
struct AkAudio_AkMidiEventBase
{
public:
	enum class EAkMidiEventType                  Type;                                              // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Chan;                                              // 0x1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x4 - 0x2)
// ScriptStruct AkAudio.AkMidiGeneric
struct AkAudio_AkMidiGeneric : public AkAudio_AkMidiEventBase
{
public:
	uint8                                        Param1;                                            // 0x2(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Param2;                                            // 0x3(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x4 - 0x2)
// ScriptStruct AkAudio.AkMidiNoteOnOff
struct AkAudio_AkMidiNoteOnOff : public AkAudio_AkMidiEventBase
{
public:
	uint8                                        Note;                                              // 0x2(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Velocity;                                          // 0x3(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x4 - 0x2)
// ScriptStruct AkAudio.AkMidiCc
struct AkAudio_AkMidiCc : public AkAudio_AkMidiEventBase
{
public:
	enum class EAkMidiCcValues                   Cc;                                                // 0x2(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Value;                                             // 0x3(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x6 (0x8 - 0x2)
// ScriptStruct AkAudio.AkMidiPitchBend
struct AkAudio_AkMidiPitchBend : public AkAudio_AkMidiEventBase
{
public:
	uint8                                        ValueLsb;                                          // 0x2(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        ValueMsb;                                          // 0x3(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FullValue;                                         // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x4 - 0x2)
// ScriptStruct AkAudio.AkMidiNoteAftertouch
struct AkAudio_AkMidiNoteAftertouch : public AkAudio_AkMidiEventBase
{
public:
	uint8                                        Note;                                              // 0x2(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Value;                                             // 0x3(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x3 - 0x2)
// ScriptStruct AkAudio.AkMidiChannelAftertouch
struct AkAudio_AkMidiChannelAftertouch : public AkAudio_AkMidiEventBase
{
public:
	uint8                                        Value;                                             // 0x2(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x3 - 0x2)
// ScriptStruct AkAudio.AkMidiProgramChange
struct AkAudio_AkMidiProgramChange : public AkAudio_AkMidiEventBase
{
public:
	uint8                                        ProgramNum;                                        // 0x2(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x24 (0x24 - 0x0)
// ScriptStruct AkAudio.AkSegmentInfo
struct AkAudio_AkSegmentInfo
{
public:
	int32                                        CurrentPosition;                                   // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PreEntryDuration;                                  // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ActiveDuration;                                    // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PostExitDuration;                                  // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RemainingLookAheadTime;                            // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BeatDuration;                                      // 0x14(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BarDuration;                                       // 0x18(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GridDuration;                                      // 0x1C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GridOffset;                                        // 0x20(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct AkAudio.AkExternalSourceInfo
struct AkAudio_AkExternalSourceInfo
{
public:
	class FString                                ExternalSrcName;                                   // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAkCodecId                        CodecID;                                           // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2364[0x7];                                     // Fixing Size After Last Property  
	class FString                                Filename;                                          // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkExternalMediaAsset*                 ExternalSourceAsset;                               // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsStreamed;                                        // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2369[0x7];                                     // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// ScriptStruct AkAudio.AkGeometrySurfaceOverride
struct AkAudio_AkGeometrySurfaceOverride
{
public:
	class UAkAcousticTexture*                    AcousticTexture;                                   // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableOcclusionOverride;                          // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_236C[0x3];                                     // Fixing Size After Last Property  
	float                                        OcclusionValue;                                    // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SurfaceArea;                                       // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_236D[0x4];                                     // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// ScriptStruct AkAudio.AkAcousticSurface
struct AkAudio_AkAcousticSurface
{
public:
	uint32                                       Texture;                                           // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Occlusion;                                         // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Name;                                              // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct AkAudio.AkTriangle
struct AkAudio_AkTriangle
{
public:
	uint16                                       Point0;                                            // 0x0(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       Point1;                                            // 0x2(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       Point2;                                            // 0x4(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       Surface;                                           // 0x6(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct AkAudio.AkGeometryData
struct AkAudio_AkGeometryData
{
public:
	TArray<struct CoreUObject_Vector>            Vertices;                                          // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct AkAudio_AkAcousticSurface>     Surfaces;                                          // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct AkAudio_AkTriangle>            Triangles;                                         // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UPhysicalMaterial*>             ToOverrideAcousticTexture;                         // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UPhysicalMaterial*>             ToOverrideOcclusion;                               // 0x40(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x4 (0x3C - 0x38)
// ScriptStruct AkAudio.AkHololensAdvancedInitializationSettings
struct AkAudio_AkHololensAdvancedInitializationSettings : public AkAudio_AkAdvancedInitializationSettingsWithMultiCoreRendering
{
public:
	bool                                         UseHeadMountedDisplayAudioDevice;                  // 0x38(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23A2[0x3];                                     // Fixing Size Of Struct 
};

// 0x28 (0x28 - 0x0)
// ScriptStruct AkAudio.AkMainOutputSettings
struct AkAudio_AkMainOutputSettings
{
public:
	class FString                                AudioDeviceShareSet;                               // 0x0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       DeviceID;                                          // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAkPanningRule                    PanningRule;                                       // 0x14(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAkChannelConfigType              ChannelConfigType;                                 // 0x18(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       ChannelMask;                                       // 0x1C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       NumberOfChannels;                                  // 0x20(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23A7[0x4];                                     // Fixing Size Of Struct 
};

// 0x28 (0x28 - 0x0)
// ScriptStruct AkAudio.AkSpatialAudioSettings
struct AkAudio_AkSpatialAudioSettings
{
public:
	uint32                                       MaxSoundPropagationDepth;                          // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MovementThreshold;                                 // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       NumberOfPrimaryRays;                               // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       ReflectionOrder;                                   // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       DiffractionOrder;                                  // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       DiffractionOnReflectionsOrder;                     // 0x14(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaximumPathLength;                                 // 0x18(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CPULimitPercentage;                                // 0x1C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       LoadBalancingSpread;                               // 0x20(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         EnableGeometricDiffractionAndTransmission;         // 0x24(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CalcEmitterVirtualPosition;                        // 0x25(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23B6[0x2];                                     // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// ScriptStruct AkAudio.AkCommunicationSettings
struct AkAudio_AkCommunicationSettings
{
public:
	uint32                                       PoolSize;                                          // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       DiscoveryBroadcastPort;                            // 0x4(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       CommandPort;                                       // 0x6(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                NetworkName;                                       // 0x8(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x20 - 0x18)
// ScriptStruct AkAudio.AkCommunicationSettingsWithSystemInitialization
struct AkAudio_AkCommunicationSettingsWithSystemInitialization : public AkAudio_AkCommunicationSettings
{
public:
	bool                                         InitializeSystemComms;                             // 0x18(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23BA[0x7];                                     // Fixing Size Of Struct 
};

// 0x8 (0x20 - 0x18)
// ScriptStruct AkAudio.AkCommunicationSettingsWithCommSelection
struct AkAudio_AkCommunicationSettingsWithCommSelection : public AkAudio_AkCommunicationSettings
{
public:
	enum class EAkCommSystem                     CommunicationSystem;                               // 0x18(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23BF[0x4];                                     // Fixing Size Of Struct 
};

// 0x68 (0x68 - 0x0)
// ScriptStruct AkAudio.AkCommonInitializationSettings
struct AkAudio_AkCommonInitializationSettings
{
public:
	uint32                                       MaximumNumberOfMemoryPools;                        // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       MaximumNumberOfPositioningPaths;                   // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       CommandQueueSize;                                  // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       SamplesPerFrame;                                   // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct AkAudio_AkMainOutputSettings          MainOutputSettings;                                // 0x10(0x28)(Edit, NativeAccessSpecifierPublic)
	float                                        StreamingLookAheadRatio;                           // 0x38(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       NumberOfRefillsInVoice;                            // 0x3C(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23D2[0x2];                                     // Fixing Size After Last Property  
	struct AkAudio_AkSpatialAudioSettings        SpatialAudioSettings;                              // 0x40(0x28)(Edit, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x70 - 0x68)
// ScriptStruct AkAudio.AkCommonInitializationSettingsWithSampleRate
struct AkAudio_AkCommonInitializationSettingsWithSampleRate : public AkAudio_AkCommonInitializationSettings
{
public:
	uint32                                       SampleRate;                                        // 0x68(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23D7[0x4];                                     // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// ScriptStruct AkAudio.AkBoolPropertyToControl
struct AkAudio_AkBoolPropertyToControl
{
public:
	class FString                                ItemProperty;                                      // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct AkAudio.AkPropertyToControl
struct AkAudio_AkPropertyToControl
{
public:
	class FString                                ItemProperty;                                      // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x40 - 0x38)
// ScriptStruct AkAudio.AkPS4AdvancedInitializationSettings
struct AkAudio_AkPS4AdvancedInitializationSettings : public AkAudio_AkAdvancedInitializationSettingsWithMultiCoreRendering
{
public:
	uint32                                       ACPBatchBufferSize;                                // 0x38(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         UseHardwareCodecLowLatencyMode;                    // 0x3C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPlotQueueLevel;                                   // 0x3D(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23E6[0x2];                                     // Fixing Size Of Struct 
};

// 0xC (0x44 - 0x38)
// ScriptStruct AkAudio.AkPS5AdvancedInitializationSettings
struct AkAudio_AkPS5AdvancedInitializationSettings : public AkAudio_AkAdvancedInitializationSettingsWithMultiCoreRendering
{
public:
	bool                                         UseHardwareCodecLowLatencyMode;                    // 0x38(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bVorbisHwAcceleration;                             // 0x39(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnable3DAudioSync;                                // 0x3A(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23EA[0x1];                                     // Fixing Size After Last Property  
	uint32                                       UNumOperationsForHwMixing;                         // 0x3C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPlotQueueLevel;                                   // 0x40(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23EB[0x3];                                     // Fixing Size Of Struct 
};

// 0x28 (0x28 - 0x0)
// ScriptStruct AkAudio.AkReverbDescriptor
struct AkAudio_AkReverbDescriptor
{
public:
	uint8                                        Pad_23F2[0x18];                                    // Fixing Size After Last Property  
	class UPrimitiveComponent*                   Primitive;                                         // 0x18(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_23F3[0x8];                                     // Fixing Size Of Struct 
};

// 0x30 (0x30 - 0x0)
// ScriptStruct AkAudio.AkGeometrySurfacePropertiesToMap
struct AkAudio_AkGeometrySurfacePropertiesToMap
{
public:
	TSoftObjectPtr<class UAkAcousticTexture>     AcousticTexture;                                   // 0x0(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OcclusionValue;                                    // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2404[0x4];                                     // Fixing Size Of Struct 
};

// 0x30 (0x30 - 0x0)
// ScriptStruct AkAudio.AkAcousticTextureParams
struct AkAudio_AkAcousticTextureParams
{
public:
	struct CoreUObject_Vector4                   AbsorptionValues;                                  // 0x0(0x20)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2407[0x10];                                    // Fixing Size Of Struct 
};

// 0x30 (0x30 - 0x0)
// ScriptStruct AkAudio.AkWwiseObjectDetails
struct AkAudio_AkWwiseObjectDetails
{
public:
	class FString                                ItemName;                                          // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ItemPath;                                          // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ItemId;                                            // 0x20(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct AkAudio.AkWwiseItemToControl
struct AkAudio_AkWwiseItemToControl
{
public:
	struct AkAudio_AkWwiseObjectDetails          ItemPicked;                                        // 0x0(0x30)(Edit, EditConst, NativeAccessSpecifierPublic)
	class FString                                ItemPath;                                          // 0x30(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct AkAudio.AkSurfaceEdgeVerts
struct AkAudio_AkSurfaceEdgeVerts
{
public:
	uint8                                        Pad_2410[0x30];                                    // Fixing Size Of Struct 
};

// 0x50 (0x50 - 0x0)
// ScriptStruct AkAudio.AkSurfaceEdgeInfo
struct AkAudio_AkSurfaceEdgeInfo
{
public:
	uint8                                        Pad_2412[0x50];                                    // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// ScriptStruct AkAudio.AkSurfacePoly
struct AkAudio_AkSurfacePoly
{
public:
	class UAkAcousticTexture*                    Texture;                                           // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Occlusion;                                         // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         EnableSurface;                                     // 0xC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_241F[0x3];                                     // Fixing Size After Last Property  
	float                                        SurfaceArea;                                       // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2420[0x4];                                     // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// ScriptStruct AkAudio.AkWaapiFieldNames
struct AkAudio_AkWaapiFieldNames
{
public:
	class FString                                FieldName;                                         // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct AkAudio.AkWaapiUri
struct AkAudio_AkWaapiUri
{
public:
	class FString                                Uri;                                               // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x40 - 0x38)
// ScriptStruct AkAudio.AkWindowsAdvancedInitializationSettings
struct AkAudio_AkWindowsAdvancedInitializationSettings : public AkAudio_AkAdvancedInitializationSettingsWithMultiCoreRendering
{
public:
	bool                                         UseHeadMountedDisplayAudioDevice;                  // 0x38(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2429[0x3];                                     // Fixing Size After Last Property  
	uint32                                       MaxSystemAudioObjects;                             // 0x3C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x40 - 0x38)
// ScriptStruct AkAudio.AkWinGDKAdvancedInitializationSettings
struct AkAudio_AkWinGDKAdvancedInitializationSettings : public AkAudio_AkAdvancedInitializationSettingsWithMultiCoreRendering
{
public:
	bool                                         UseHeadMountedDisplayAudioDevice;                  // 0x38(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_242F[0x3];                                     // Fixing Size After Last Property  
	uint32                                       UMaxSystemAudioObjects;                            // 0x3C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x3C - 0x38)
// ScriptStruct AkAudio.AkXboxOneGDKAdvancedInitializationSettings
struct AkAudio_AkXboxOneGDKAdvancedInitializationSettings : public AkAudio_AkAdvancedInitializationSettingsWithMultiCoreRendering
{
public:
	uint16                                       MaximumNumberOfXMAVoices;                          // 0x38(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         UseHardwareCodecLowLatencyMode;                    // 0x3A(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2438[0x1];                                     // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// ScriptStruct AkAudio.AkXboxOneGDKApuHeapInitializationSettings
struct AkAudio_AkXboxOneGDKApuHeapInitializationSettings
{
public:
	uint32                                       CachedSize;                                        // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       NonCachedSize;                                     // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x3C - 0x38)
// ScriptStruct AkAudio.AkXboxOneAdvancedInitializationSettings
struct AkAudio_AkXboxOneAdvancedInitializationSettings : public AkAudio_AkAdvancedInitializationSettingsWithMultiCoreRendering
{
public:
	uint16                                       MaximumNumberOfXMAVoices;                          // 0x38(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         UseHardwareCodecLowLatencyMode;                    // 0x3A(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_243F[0x1];                                     // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// ScriptStruct AkAudio.AkXboxOneApuHeapInitializationSettings
struct AkAudio_AkXboxOneApuHeapInitializationSettings
{
public:
	uint32                                       CachedSize;                                        // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       NonCachedSize;                                     // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0x44 - 0x38)
// ScriptStruct AkAudio.AkXSXAdvancedInitializationSettings
struct AkAudio_AkXSXAdvancedInitializationSettings : public AkAudio_AkAdvancedInitializationSettingsWithMultiCoreRendering
{
public:
	uint16                                       MaximumNumberOfXMAVoices;                          // 0x38(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         UseHardwareCodecLowLatencyMode;                    // 0x3A(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2453[0x1];                                     // Fixing Size After Last Property  
	uint16                                       MaximumNumberOfOpusVoices;                         // 0x3C(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2456[0x2];                                     // Fixing Size After Last Property  
	uint32                                       UMaxSystemAudioObjects;                            // 0x40(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct AkAudio.AkXSXApuHeapInitializationSettings
struct AkAudio_AkXSXApuHeapInitializationSettings
{
public:
	uint32                                       CachedSize;                                        // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       NonCachedSize;                                     // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x28 - 0x20)
// ScriptStruct AkAudio.MovieSceneAkAudioEventTemplate
struct AkAudio_MovieSceneAkAudioEventTemplate : public MovieScene_MovieSceneEvalTemplate
{
public:
	class UMovieSceneAkAudioEventSection*        Section;                                           // 0x20(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x28 - 0x20)
// ScriptStruct AkAudio.MovieSceneAkAudioRTPCTemplate
struct AkAudio_MovieSceneAkAudioRTPCTemplate : public MovieScene_MovieSceneEvalTemplate
{
public:
	class UMovieSceneAkAudioRTPCSection*         Section;                                           // 0x20(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct AkAudio.MovieSceneTangentDataSerializationHelper
struct AkAudio_MovieSceneTangentDataSerializationHelper
{
public:
	float                                        ArriveTangent;                                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LeaveTangent;                                      // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERichCurveTangentWeightMode       TangentWeightMode;                                 // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_246F[0x3];                                     // Fixing Size After Last Property  
	float                                        ArriveTangentWeight;                               // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LeaveTangentWeight;                                // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// ScriptStruct AkAudio.MovieSceneFloatValueSerializationHelper
struct AkAudio_MovieSceneFloatValueSerializationHelper
{
public:
	float                                        Value;                                             // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERichCurveInterpMode              InterpMode;                                        // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERichCurveTangentMode             TangentMode;                                       // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2479[0x2];                                     // Fixing Size After Last Property  
	struct AkAudio_MovieSceneTangentDataSerializationHelper Tangent;                                           // 0x8(0x14)(NoDestructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct AkAudio.MovieSceneFloatChannelSerializationHelper
struct AkAudio_MovieSceneFloatChannelSerializationHelper
{
public:
	enum class ERichCurveExtrapolation           PreInfinityExtrap;                                 // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERichCurveExtrapolation           PostInfinityExtrap;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_247E[0x6];                                     // Fixing Size After Last Property  
	TArray<int32>                                Times;                                             // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct AkAudio_MovieSceneFloatValueSerializationHelper> Values;                                            // 0x18(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        DefaultValue;                                      // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasDefaultValue;                                  // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2489[0x3];                                     // Fixing Size Of Struct 
};

}


