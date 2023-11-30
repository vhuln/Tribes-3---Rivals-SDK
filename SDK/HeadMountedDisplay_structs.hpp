#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EOrientPositionSelector : uint8
{
	Orientation                    = 0,
	Position                       = 1,
	OrientationAndPosition         = 2,
	EOrientPositionSelector_MAX    = 3,
};

enum class EHMDTrackingOrigin : uint8
{
	Floor                          = 0,
	Eye                            = 1,
	Stage                          = 2,
	EHMDTrackingOrigin_MAX         = 3,
};

enum class EHMDWornState : uint8
{
	Unknown                        = 0,
	Worn                           = 1,
	NotWorn                        = 2,
	EHMDWornState_MAX              = 3,
};

enum class EXRDeviceConnectionResult : uint8
{
	NoTrackingSystem               = 0,
	FeatureNotSupported            = 1,
	NoValidViewport                = 2,
	MiscFailure                    = 3,
	Success                        = 4,
	EXRDeviceConnectionResult_MAX  = 5,
};

enum class EXRSystemFlags : uint8
{
	NoFlags                        = 0,
	IsAR                           = 1,
	IsTablet                       = 2,
	IsHeadMounted                  = 4,
	SupportsHandTracking           = 8,
	EXRSystemFlags_MAX             = 9,
};

enum class ESpectatorScreenMode : uint8
{
	Disabled                       = 0,
	SingleEyeLetterboxed           = 1,
	Undistorted                    = 2,
	Distorted                      = 3,
	SingleEye                      = 4,
	SingleEyeCroppedToFill         = 5,
	Texture                        = 6,
	TexturePlusEye                 = 7,
	ESpectatorScreenMode_MAX       = 8,
};

enum class EXRTrackedDeviceType : uint8
{
	HeadMountedDisplay             = 0,
	Controller                     = 1,
	TrackingReference              = 2,
	Tracker                        = 3,
	Other                          = 4,
	Invalid                        = 254,
	Any                            = 255,
	EXRTrackedDeviceType_MAX       = 256,
};

enum class EHandKeypoint : uint8
{
	Palm                           = 0,
	Wrist                          = 1,
	ThumbMetacarpal                = 2,
	ThumbProximal                  = 3,
	ThumbDistal                    = 4,
	ThumbTip                       = 5,
	IndexMetacarpal                = 6,
	IndexProximal                  = 7,
	IndexIntermediate              = 8,
	IndexDistal                    = 9,
	IndexTip                       = 10,
	MiddleMetacarpal               = 11,
	MiddleProximal                 = 12,
	MiddleIntermediate             = 13,
	MiddleDistal                   = 14,
	MiddleTip                      = 15,
	RingMetacarpal                 = 16,
	RingProximal                   = 17,
	RingIntermediate               = 18,
	RingDistal                     = 19,
	RingTip                        = 20,
	LittleMetacarpal               = 21,
	LittleProximal                 = 22,
	LittleIntermediate             = 23,
	LittleDistal                   = 24,
	LittleTip                      = 25,
	EHandKeypoint_MAX              = 26,
};

enum class EXRVisualType : uint8
{
	Controller                     = 0,
	Hand                           = 1,
	EXRVisualType_MAX              = 2,
};

enum class ETrackingStatus : uint8
{
	NotTracked                     = 0,
	InertialOnly                   = 1,
	Tracked                        = 2,
	ETrackingStatus_MAX            = 3,
};

enum class ESpatialInputGestureAxis : uint8
{
	None                           = 0,
	Manipulation                   = 1,
	Navigation                     = 2,
	NavigationRails                = 3,
	ESpatialInputGestureAxis_MAX   = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x60 - 0x0)
// ScriptStruct HeadMountedDisplay.XRHMDData
struct HeadMountedDisplay_XRHMDData
{
public:
	bool                                         bValid;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_54A[0x3];                                      // Fixing Size After Last Property  
	class FName                                  DeviceName;                                        // 0x4(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Guid                      ApplicationInstanceID;                             // 0xC(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETrackingStatus                   TrackingStatus;                                    // 0x1C(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_550[0x3];                                      // Fixing Size After Last Property  
	struct CoreUObject_Vector                    Position;                                          // 0x20(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_553[0x8];                                      // Fixing Size After Last Property  
	struct CoreUObject_Quat                      Rotation;                                          // 0x40(0x20)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x120 (0x120 - 0x0)
// ScriptStruct HeadMountedDisplay.XRMotionControllerData
struct HeadMountedDisplay_XRMotionControllerData
{
public:
	bool                                         bValid;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_558[0x3];                                      // Fixing Size After Last Property  
	class FName                                  DeviceName;                                        // 0x4(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Guid                      ApplicationInstanceID;                             // 0xC(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EXRVisualType                     DeviceVisualType;                                  // 0x1C(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EControllerHand                   HandIndex;                                         // 0x1D(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETrackingStatus                   TrackingStatus;                                    // 0x1E(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_562[0x1];                                      // Fixing Size After Last Property  
	struct CoreUObject_Vector                    GripPosition;                                      // 0x20(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_563[0x8];                                      // Fixing Size After Last Property  
	struct CoreUObject_Quat                      GripRotation;                                      // 0x40(0x20)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    AimPosition;                                       // 0x60(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_565[0x8];                                      // Fixing Size After Last Property  
	struct CoreUObject_Quat                      AimRotation;                                       // 0x80(0x20)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    PalmPosition;                                      // 0xA0(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_568[0x8];                                      // Fixing Size After Last Property  
	struct CoreUObject_Quat                      PalmRotation;                                      // 0xC0(0x20)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct CoreUObject_Vector>            HandKeyPositions;                                  // 0xE0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct CoreUObject_Quat>              HandKeyRotations;                                  // 0xF0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                HandKeyRadii;                                      // 0x100(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bIsGrasped;                                        // 0x110(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_56C[0xF];                                      // Fixing Size Of Struct 
};

// 0x6 (0x6 - 0x0)
// ScriptStruct HeadMountedDisplay.XRGestureConfig
struct HeadMountedDisplay_XRGestureConfig
{
public:
	bool                                         bTap;                                              // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHold;                                             // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESpatialInputGestureAxis          AxisGesture;                                       // 0x2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNavigationAxisX;                                  // 0x3(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNavigationAxisY;                                  // 0x4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNavigationAxisZ;                                  // 0x5(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct HeadMountedDisplay.XRDeviceId
struct HeadMountedDisplay_XRDeviceId
{
public:
	class FName                                  SystemName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DeviceID;                                          // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


