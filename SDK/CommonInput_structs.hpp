#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ECommonInputType : uint8
{
	MouseAndKeyboard               = 0,
	Gamepad                        = 1,
	Touch                          = 2,
	Count                          = 3,
	ECommonInputType_MAX           = 4,
};

enum class ECommonInputMode : uint8
{
	Menu                           = 0,
	Game                           = 1,
	All                            = 2,
	MAX                            = 3,
};

enum class ECommonInputEventFlowBehavior : int32
{
	BlockIfActive                  = 0,
	BlockIfHandled                 = 1,
	NeverBlock                     = 2,
	ECommonInputEventFlowBehavior_MAX = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0xF0 (0xF0 - 0x0)
// ScriptStruct CommonInput.CommonInputKeyBrushConfiguration
struct CommonInput_CommonInputKeyBrushConfiguration
{
public:
	struct InputCore_Key                         Key;                                               // 0x0(0x18)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D7F[0x8];                                      // Fixing Size After Last Property  
	struct SlateCore_SlateBrush                  KeyBrush;                                          // 0x20(0xD0)(Edit, NativeAccessSpecifierPublic)
};

// 0xE0 (0xE0 - 0x0)
// ScriptStruct CommonInput.CommonInputKeySetBrushConfiguration
struct CommonInput_CommonInputKeySetBrushConfiguration
{
public:
	TArray<struct InputCore_Key>                 Keys;                                              // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct SlateCore_SlateBrush                  KeyBrush;                                          // 0x10(0xD0)(Edit, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct CommonInput.InputDeviceIdentifierPair
struct CommonInput_InputDeviceIdentifierPair
{
public:
	class FName                                  InputDeviceName;                                   // 0x0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                HardwareDeviceIdentifier;                          // 0x8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct CommonInput.InputHoldData
struct CommonInput_InputHoldData
{
public:
	float                                        HoldTime;                                          // 0x0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HoldRollbackTime;                                  // 0x4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct CommonInput.CommonInputPlatformBaseData
struct CommonInput_CommonInputPlatformBaseData
{
public:
	uint8                                        Pad_D89[0x8];                                      // Fixing Size After Last Property  
	enum class ECommonInputType                  DefaultInputType;                                  // 0x8(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bSupportsMouseAndKeyboard;                         // 0x9(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bSupportsGamepad;                                  // 0xA(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_D8D[0x1];                                      // Fixing Size After Last Property  
	class FName                                  DefaultGamepadName;                                // 0xC(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bCanChangeGamepadType;                             // 0x14(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bSupportsTouch;                                    // 0x15(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_D90[0x2];                                      // Fixing Size After Last Property  
	TArray<TSoftClassPtr<class UCommonInputBaseControllerData>> ControllerData;                                    // 0x18(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<TSubclassOf<class UCommonInputBaseControllerData>> ControllerDataClasses;                             // 0x28(0x10)(ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
};

}


