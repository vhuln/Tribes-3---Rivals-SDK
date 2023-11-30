#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EWwiseEventDestroyOptions : uint8
{
	StopEventOnDestroy             = 0,
	WaitForEventEnd                = 1,
	EWwiseEventDestroyOptions_MAX  = 2,
};

enum class EWwiseEventSwitchContainerLoading : uint8
{
	AlwaysLoad                     = 0,
	LoadOnReference                = 1,
	EWwiseEventSwitchContainerLoading_MAX = 2,
};

enum class EWwiseGroupType : uint8
{
	Switch                         = 0,
	State                          = 1,
	Unknown                        = 255,
	EWwiseGroupType_MAX            = 256,
};

enum class EWwiseReloadLanguage : uint8
{
	Manual                         = 0,
	Immediate                      = 1,
	Safe                           = 2,
	EWwiseReloadLanguage_MAX       = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0xC - 0x0)
// ScriptStruct WwiseResourceLoader.WwiseAcousticTextureCookedData
struct WwiseResourceLoader_WwiseAcousticTextureCookedData
{
public:
	int32                                        ShortId;                                           // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  DebugName;                                         // 0x4(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct WwiseResourceLoader.WwiseAuxBusCookedData
struct WwiseResourceLoader_WwiseAuxBusCookedData
{
public:
	int32                                        AuxBusId;                                          // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D95[0x4];                                      // Fixing Size After Last Property  
	TArray<struct WwiseFileHandler_WwiseSoundBankCookedData> SoundBanks;                                        // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, NativeAccessSpecifierPublic)
	TArray<struct WwiseFileHandler_WwiseMediaCookedData> Media;                                             // 0x18(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, NativeAccessSpecifierPublic)
	class FName                                  DebugName;                                         // 0x28(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct WwiseResourceLoader.WwiseGroupValueCookedData
struct WwiseResourceLoader_WwiseGroupValueCookedData
{
public:
	enum class EWwiseGroupType                   Type;                                              // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D99[0x3];                                      // Fixing Size After Last Property  
	int32                                        GroupId;                                           // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ID;                                                // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  DebugName;                                         // 0xC(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct WwiseResourceLoader.WwiseSwitchContainerLeafCookedData
struct WwiseResourceLoader_WwiseSwitchContainerLeafCookedData
{
public:
	TSet<struct WwiseResourceLoader_WwiseGroupValueCookedData> GroupValueSet;                                     // 0x0(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst, NativeAccessSpecifierPublic)
	TArray<struct WwiseFileHandler_WwiseSoundBankCookedData> SoundBanks;                                        // 0x50(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, NativeAccessSpecifierPublic)
	TArray<struct WwiseFileHandler_WwiseMediaCookedData> Media;                                             // 0x60(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, NativeAccessSpecifierPublic)
	TArray<struct WwiseFileHandler_WwiseExternalSourceCookedData> ExternalSources;                                   // 0x70(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, NativeAccessSpecifierPublic)
};

// 0xA8 (0xA8 - 0x0)
// ScriptStruct WwiseResourceLoader.WwiseEventCookedData
struct WwiseResourceLoader_WwiseEventCookedData
{
public:
	int32                                        EventId;                                           // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DAA[0x4];                                      // Fixing Size After Last Property  
	TArray<struct WwiseFileHandler_WwiseSoundBankCookedData> SoundBanks;                                        // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, NativeAccessSpecifierPublic)
	TArray<struct WwiseFileHandler_WwiseMediaCookedData> Media;                                             // 0x18(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, NativeAccessSpecifierPublic)
	TArray<struct WwiseFileHandler_WwiseExternalSourceCookedData> ExternalSources;                                   // 0x28(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, NativeAccessSpecifierPublic)
	TArray<struct WwiseResourceLoader_WwiseSwitchContainerLeafCookedData> SwitchContainerLeaves;                             // 0x38(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, NativeAccessSpecifierPublic)
	TSet<struct WwiseResourceLoader_WwiseGroupValueCookedData> RequiredGroupValueSet;                             // 0x48(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst, NativeAccessSpecifierPublic)
	enum class EWwiseEventDestroyOptions         DestroyOptions;                                    // 0x98(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DB0[0x3];                                      // Fixing Size After Last Property  
	class FName                                  DebugName;                                         // 0x9C(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DB1[0x4];                                      // Fixing Size Of Struct 
};

// 0x20 (0x20 - 0x0)
// ScriptStruct WwiseResourceLoader.WwiseObjectInfo
struct WwiseResourceLoader_WwiseObjectInfo
{
public:
	struct CoreUObject_Guid                      WwiseGuid;                                         // 0x0(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       WwiseShortId;                                      // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  WwiseName;                                         // 0x14(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       HardCodedSoundBankShortId;                         // 0x1C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x24 - 0x20)
// ScriptStruct WwiseResourceLoader.WwiseEventInfo
struct WwiseResourceLoader_WwiseEventInfo : public WwiseResourceLoader_WwiseObjectInfo
{
public:
	enum class EWwiseEventSwitchContainerLoading SwitchContainerLoading;                            // 0x20(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWwiseEventDestroyOptions         DestroyOptions;                                    // 0x21(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DBB[0x2];                                      // Fixing Size Of Struct 
};

// 0xC (0xC - 0x0)
// ScriptStruct WwiseResourceLoader.WwiseGameParameterCookedData
struct WwiseResourceLoader_WwiseGameParameterCookedData
{
public:
	int32                                        ShortId;                                           // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  DebugName;                                         // 0x4(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x24 - 0x20)
// ScriptStruct WwiseResourceLoader.WwiseGroupValueInfo
struct WwiseResourceLoader_WwiseGroupValueInfo : public WwiseResourceLoader_WwiseObjectInfo
{
public:
	uint32                                       GroupShortId;                                      // 0x20(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x24 (0x40 - 0x1C)
// ScriptStruct WwiseResourceLoader.WwiseInitBankCookedData
struct WwiseResourceLoader_WwiseInitBankCookedData : public WwiseFileHandler_WwiseSoundBankCookedData
{
public:
	uint8                                        Pad_DC4[0x4];                                      // Fixing Size After Last Property  
	TArray<struct WwiseFileHandler_WwiseMediaCookedData> Media;                                             // 0x20(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, NativeAccessSpecifierPublic)
	TArray<struct WwiseFileHandler_WwiseLanguageCookedData> Language;                                          // 0x30(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct WwiseResourceLoader.WwiseLanguageId
struct WwiseResourceLoader_WwiseLanguageId
{
public:
	int32                                        LanguageId;                                        // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  LanguageName;                                      // 0x4(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct WwiseResourceLoader.WwiseLocalizedAuxBusCookedData
struct WwiseResourceLoader_WwiseLocalizedAuxBusCookedData
{
public:
	TMap<struct WwiseFileHandler_WwiseLanguageCookedData, struct WwiseResourceLoader_WwiseAuxBusCookedData> AuxBusLanguageMap;                                 // 0x0(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst, NativeAccessSpecifierPublic)
	class FName                                  DebugName;                                         // 0x50(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AuxBusId;                                          // 0x58(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DCD[0x4];                                      // Fixing Size Of Struct 
};

// 0x60 (0x60 - 0x0)
// ScriptStruct WwiseResourceLoader.WwiseLocalizedEventCookedData
struct WwiseResourceLoader_WwiseLocalizedEventCookedData
{
public:
	TMap<struct WwiseFileHandler_WwiseLanguageCookedData, struct WwiseResourceLoader_WwiseEventCookedData> EventLanguageMap;                                  // 0x0(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst, NativeAccessSpecifierPublic)
	class FName                                  DebugName;                                         // 0x50(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        EventId;                                           // 0x58(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DD4[0x4];                                      // Fixing Size Of Struct 
};

// 0x30 (0x30 - 0x0)
// ScriptStruct WwiseResourceLoader.WwiseShareSetCookedData
struct WwiseResourceLoader_WwiseShareSetCookedData
{
public:
	int32                                        ShareSetId;                                        // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DDD[0x4];                                      // Fixing Size After Last Property  
	TArray<struct WwiseFileHandler_WwiseSoundBankCookedData> SoundBanks;                                        // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, NativeAccessSpecifierPublic)
	TArray<struct WwiseFileHandler_WwiseMediaCookedData> Media;                                             // 0x18(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, NativeAccessSpecifierPublic)
	class FName                                  DebugName;                                         // 0x28(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct WwiseResourceLoader.WwiseLocalizedShareSetCookedData
struct WwiseResourceLoader_WwiseLocalizedShareSetCookedData
{
public:
	TMap<struct WwiseFileHandler_WwiseLanguageCookedData, struct WwiseResourceLoader_WwiseShareSetCookedData> ShareSetLanguageMap;                               // 0x0(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst, NativeAccessSpecifierPublic)
	class FName                                  DebugName;                                         // 0x50(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ShareSetId;                                        // 0x58(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DE9[0x4];                                      // Fixing Size Of Struct 
};

// 0x60 (0x60 - 0x0)
// ScriptStruct WwiseResourceLoader.WwiseLocalizedSoundBankCookedData
struct WwiseResourceLoader_WwiseLocalizedSoundBankCookedData
{
public:
	TMap<struct WwiseFileHandler_WwiseLanguageCookedData, struct WwiseFileHandler_WwiseSoundBankCookedData> SoundBankLanguageMap;                              // 0x0(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst, NativeAccessSpecifierPublic)
	class FName                                  DebugName;                                         // 0x50(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SoundBankId;                                       // 0x58(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DF4[0x4];                                      // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// ScriptStruct WwiseResourceLoader.WwisePlatformId
struct WwiseResourceLoader_WwisePlatformId
{
public:
	struct CoreUObject_Guid                      PlatformGuid;                                      // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  PlatformName;                                      // 0x10(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct WwiseResourceLoader.WwiseSharedGroupValueKey
struct WwiseResourceLoader_WwiseSharedGroupValueKey
{
public:
	uint8                                        Pad_E01[0x10];                                     // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// ScriptStruct WwiseResourceLoader.WwiseSharedLanguageId
struct WwiseResourceLoader_WwiseSharedLanguageId
{
public:
	uint8                                        Pad_E04[0x10];                                     // Fixing Size After Last Property  
	enum class EWwiseLanguageRequirement         LanguageRequirement;                               // 0x10(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E05[0x7];                                      // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// ScriptStruct WwiseResourceLoader.WwiseSharedPlatformId
struct WwiseResourceLoader_WwiseSharedPlatformId
{
public:
	uint8                                        Pad_E06[0x10];                                     // Fixing Size Of Struct 
};

// 0xC (0xC - 0x0)
// ScriptStruct WwiseResourceLoader.WwiseTriggerCookedData
struct WwiseResourceLoader_WwiseTriggerCookedData
{
public:
	int32                                        TriggerId;                                         // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  DebugName;                                         // 0x4(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


