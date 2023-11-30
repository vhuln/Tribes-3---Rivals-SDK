#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EValWidgetInputMode : uint8
{
	Default                        = 0,
	GameAndMenu                    = 1,
	Game                           = 2,
	Menu                           = 3,
	EValWidgetInputMode_MAX        = 4,
};

enum class EMultiplayerButtonType : uint8
{
	JoinQueue                      = 0,
	OpenLevel                      = 1,
	Popup                          = 2,
	EMultiplayerButtonType_MAX     = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x18 - 0x8)
// ScriptStruct ValhallaCommonUI.LayerData
struct ValhallaCommonUI_LayerData : public Engine_TableRowBase
{
public:
	TSubclassOf<class UCommonActivatableWidget>  LayerWidgetClass;                                  // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GameplayTags_GameplayTag              LayerName;                                         // 0x10(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct ValhallaCommonUI.CustomMultiplayerQueue
struct ValhallaCommonUI_CustomMultiplayerQueue
{
public:
	class FText                                  DisplayName;                                       // 0x0(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x18(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FName                                  Value;                                             // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                QueueId;                                           // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMultiplayerButtonType            ButtonType;                                        // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1126[0x7];                                     // Fixing Size Of Struct 
};

}


