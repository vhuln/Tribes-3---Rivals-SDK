#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ECommonMessagingResult : uint8
{
	Confirmed                      = 0,
	Declined                       = 1,
	Cancelled                      = 2,
	Killed                         = 3,
	Unknown                        = 4,
	ECommonMessagingResult_MAX     = 5,
};

enum class ELocalMultiplayerInteractionMode : uint8
{
	PrimaryOnly                    = 0,
	SingleToggle                   = 1,
	Simultaneous                   = 2,
	ELocalMultiplayerInteractionMode_MAX = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x20 - 0x0)
// ScriptStruct CommonGame.ConfirmationDialogAction
struct CommonGame_ConfirmationDialogAction
{
public:
	enum class ECommonMessagingResult            Result;                                            // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E56[0x7];                                      // Fixing Size After Last Property  
	class FText                                  OptionalDisplayText;                               // 0x8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct CommonGame.RootViewportLayoutInfo
struct CommonGame_RootViewportLayoutInfo
{
public:
	class ULocalPlayer*                          LocalPlayer;                                       // 0x0(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimaryGameLayout*                    RootLayout;                                        // 0x8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddedToViewport;                                  // 0x10(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E66[0x7];                                      // Fixing Size Of Struct 
};

}


