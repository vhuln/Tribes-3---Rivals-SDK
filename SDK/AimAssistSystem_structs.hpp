#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// ScriptStruct AimAssistSystem.UASAimAssistTargetData
struct AimAssistSystem_UASAimAssistTargetData
{
public:
	uint8                                        Pad_F21[0x10];                                     // Fixing Size Of Struct 
};

// 0x118 (0x118 - 0x0)
// ScriptStruct AimAssistSystem.UASStickinessZoneConfig
struct AimAssistSystem_UASStickinessZoneConfig
{
public:
	float                                        Radius;                                            // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Multiplier;                                        // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Engine_RuntimeFloatCurve              StickinessMultiplierCurvePitch;                    // 0x8(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct Engine_RuntimeFloatCurve              StickinessMultiplierCurveYaw;                      // 0x90(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct AimAssistSystem.UASMagnetismZoneConfig
struct AimAssistSystem_UASMagnetismZoneConfig
{
public:
	float                                        StartRadius;                                       // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AimZoneRadius;                                     // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x88 (0x88 - 0x0)
// ScriptStruct AimAssistSystem.UASZonesScalingConfig
struct AimAssistSystem_UASZonesScalingConfig
{
public:
	struct Engine_RuntimeFloatCurve              ZonesScalingCurve;                                 // 0x0(0x88)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// ScriptStruct AimAssistSystem.UASAutoAimConfig
struct AimAssistSystem_UASAutoAimConfig
{
public:
	float                                        Speed;                                             // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AutoAimZoneRadius;                                 // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ActivationDistance;                                // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeWithoutCameraInputToEnableAutoAim;             // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeWithMovementInputToEnableAutoAim;              // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseOnlyWithInactiveMagnetism;                     // 0x14(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F3B[0x3];                                      // Fixing Size After Last Property  
	float                                        TimeToBlockAfterChangeTarget;                      // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct AimAssistSystem.UASSocketData
struct AimAssistSystem_UASSocketData
{
public:
	uint8                                        Pad_F3F[0x20];                                     // Fixing Size Of Struct 
};

}


