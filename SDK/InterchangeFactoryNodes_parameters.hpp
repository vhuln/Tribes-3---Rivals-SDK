#pragma once




#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x8 - 0x0)
// Function InterchangeFactoryNodes.InterchangeAnimationTrackSetFactoryNode.SetCustomFrameRate
struct UInterchangeAnimationTrackSetFactoryNode_SetCustomFrameRate_Params
{
public:
	float                                        AttributeValue;                                    // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_188D[0x3];                                     // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// Function InterchangeFactoryNodes.InterchangeAnimationTrackSetFactoryNode.RemoveCustomAnimationTrackUid
struct UInterchangeAnimationTrackSetFactoryNode_RemoveCustomAnimationTrackUid_Params
{
public:
	class FString                                AnimationTrackUid;                                 // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1899[0x7];                                     // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// Function InterchangeFactoryNodes.InterchangeAnimationTrackSetFactoryNode.GetObjectClass
struct UInterchangeAnimationTrackSetFactoryNode_GetObjectClass_Params
{
public:
	class UClass*                                ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function InterchangeFactoryNodes.InterchangeAnimationTrackSetFactoryNode.GetCustomFrameRate
struct UInterchangeAnimationTrackSetFactoryNode_GetCustomFrameRate_Params
{
public:
	float                                        AttributeValue;                                    // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18AA[0x3];                                     // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// Function InterchangeFactoryNodes.InterchangeAnimationTrackSetFactoryNode.GetCustomAnimationTrackUids
struct UInterchangeAnimationTrackSetFactoryNode_GetCustomAnimationTrackUids_Params
{
public:
	TArray<class FString>                        OutAnimationTrackUids;                             // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function InterchangeFactoryNodes.InterchangeAnimationTrackSetFactoryNode.GetCustomAnimationTrackUidCount
struct UInterchangeAnimationTrackSetFactoryNode_GetCustomAnimationTrackUidCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function InterchangeFactoryNodes.InterchangeAnimationTrackSetFactoryNode.GetCustomAnimationTrackUid
struct UInterchangeAnimationTrackSetFactoryNode_GetCustomAnimationTrackUid_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18C6[0x4];                                     // Fixing Size After Last Property  
	class FString                                OutAnimationTrackUid;                              // 0x8(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function InterchangeFactoryNodes.InterchangeAnimationTrackSetFactoryNode.AddCustomAnimationTrackUid
struct UInterchangeAnimationTrackSetFactoryNode_AddCustomAnimationTrackUid_Params
{
public:
	class FString                                AnimationTrackUid;                                 // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18CE[0x7];                                     // Fixing Size Of Struct 
};

// 0x3 (0x3 - 0x0)
// Function InterchangeFactoryNodes.InterchangeActorFactoryNode.SetCustomMobility
struct UInterchangeActorFactoryNode_SetCustomMobility_Params
{
public:
	uint8                                        AttributeValue;                                    // 0x0(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddApplyDelegate;                                 // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x2(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// Function InterchangeFactoryNodes.InterchangeActorFactoryNode.SetCustomGlobalTransform
struct UInterchangeActorFactoryNode_SetCustomGlobalTransform_Params
{
public:
	struct CoreUObject_Transform                 AttributeValue;                                    // 0x0(0x60)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddApplyDelegate;                                 // 0x60(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x61(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18FF[0xE];                                     // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// Function InterchangeFactoryNodes.InterchangeActorFactoryNode.SetCustomActorClassName
struct UInterchangeActorFactoryNode_SetCustomActorClassName_Params
{
public:
	class FString                                AttributeValue;                                    // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_190A[0x7];                                     // Fixing Size Of Struct 
};

// 0x2 (0x2 - 0x0)
// Function InterchangeFactoryNodes.InterchangeActorFactoryNode.GetCustomMobility
struct UInterchangeActorFactoryNode_GetCustomMobility_Params
{
public:
	uint8                                        AttributeValue;                                    // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// Function InterchangeFactoryNodes.InterchangeActorFactoryNode.GetCustomGlobalTransform
struct UInterchangeActorFactoryNode_GetCustomGlobalTransform_Params
{
public:
	struct CoreUObject_Transform                 AttributeValue;                                    // 0x0(0x60)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x60(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_191A[0xF];                                     // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// Function InterchangeFactoryNodes.InterchangeActorFactoryNode.GetCustomActorClassName
struct UInterchangeActorFactoryNode_GetCustomActorClassName_Params
{
public:
	class FString                                AttributeValue;                                    // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1922[0x7];                                     // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// Function InterchangeFactoryNodes.InterchangePhysicalCameraFactoryNode.SetCustomSensorWidth
struct UInterchangePhysicalCameraFactoryNode_SetCustomSensorWidth_Params
{
public:
	float                                        AttributeValue;                                    // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddApplyDelegate;                                 // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x5(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_193D[0x2];                                     // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// Function InterchangeFactoryNodes.InterchangePhysicalCameraFactoryNode.SetCustomSensorHeight
struct UInterchangePhysicalCameraFactoryNode_SetCustomSensorHeight_Params
{
public:
	float                                        AttributeValue;                                    // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddApplyDelegate;                                 // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x5(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1956[0x2];                                     // Fixing Size Of Struct 
};

// 0x3 (0x3 - 0x0)
// Function InterchangeFactoryNodes.InterchangePhysicalCameraFactoryNode.SetCustomFocusMethod
struct UInterchangePhysicalCameraFactoryNode_SetCustomFocusMethod_Params
{
public:
	enum class ECameraFocusMethod                AttributeValue;                                    // 0x0(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddApplyDelegate;                                 // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x2(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function InterchangeFactoryNodes.InterchangePhysicalCameraFactoryNode.SetCustomFocalLength
struct UInterchangePhysicalCameraFactoryNode_SetCustomFocalLength_Params
{
public:
	float                                        AttributeValue;                                    // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddApplyDelegate;                                 // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x5(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_196D[0x2];                                     // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// Function InterchangeFactoryNodes.InterchangePhysicalCameraFactoryNode.GetCustomSensorWidth
struct UInterchangePhysicalCameraFactoryNode_GetCustomSensorWidth_Params
{
public:
	float                                        AttributeValue;                                    // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1972[0x3];                                     // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// Function InterchangeFactoryNodes.InterchangePhysicalCameraFactoryNode.GetCustomSensorHeight
struct UInterchangePhysicalCameraFactoryNode_GetCustomSensorHeight_Params
{
public:
	float                                        AttributeValue;                                    // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1978[0x3];                                     // Fixing Size Of Struct 
};

// 0x2 (0x2 - 0x0)
// Function InterchangeFactoryNodes.InterchangePhysicalCameraFactoryNode.GetCustomFocusMethod
struct UInterchangePhysicalCameraFactoryNode_GetCustomFocusMethod_Params
{
public:
	enum class ECameraFocusMethod                AttributeValue;                                    // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function InterchangeFactoryNodes.InterchangePhysicalCameraFactoryNode.GetCustomFocalLength
struct UInterchangePhysicalCameraFactoryNode_GetCustomFocalLength_Params
{
public:
	float                                        AttributeValue;                                    // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_198D[0x3];                                     // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// Function InterchangeFactoryNodes.InterchangeStandardCameraFactoryNode.SetCustomWidth
struct UInterchangeStandardCameraFactoryNode_SetCustomWidth_Params
{
public:
	float                                        AttributeValue;                                    // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddApplyDelegate;                                 // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x5(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19B0[0x2];                                     // Fixing Size Of Struct 
};

// 0x3 (0x3 - 0x0)
// Function InterchangeFactoryNodes.InterchangeStandardCameraFactoryNode.SetCustomProjectionMode
struct UInterchangeStandardCameraFactoryNode_SetCustomProjectionMode_Params
{
public:
	enum class ECameraProjectionMode             AttributeValue;                                    // 0x0(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddApplyDelegate;                                 // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x2(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function InterchangeFactoryNodes.InterchangeStandardCameraFactoryNode.SetCustomNearClipPlane
struct UInterchangeStandardCameraFactoryNode_SetCustomNearClipPlane_Params
{
public:
	float                                        AttributeValue;                                    // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddApplyDelegate;                                 // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x5(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19D1[0x2];                                     // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// Function InterchangeFactoryNodes.InterchangeStandardCameraFactoryNode.SetCustomFieldOfView
struct UInterchangeStandardCameraFactoryNode_SetCustomFieldOfView_Params
{
public:
	float                                        AttributeValue;                                    // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddApplyDelegate;                                 // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x5(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19E9[0x2];                                     // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// Function InterchangeFactoryNodes.InterchangeStandardCameraFactoryNode.SetCustomFarClipPlane
struct UInterchangeStandardCameraFactoryNode_SetCustomFarClipPlane_Params
{
public:
	float                                        AttributeValue;                                    // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddApplyDelegate;                                 // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x5(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19F9[0x2];                                     // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// Function InterchangeFactoryNodes.InterchangeStandardCameraFactoryNode.SetCustomAspectRatio
struct UInterchangeStandardCameraFactoryNode_SetCustomAspectRatio_Params
{
public:
	float                                        AttributeValue;                                    // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddApplyDelegate;                                 // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x5(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A0A[0x2];                                     // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// Function InterchangeFactoryNodes.InterchangeStandardCameraFactoryNode.GetCustomWidth
struct UInterchangeStandardCameraFactoryNode_GetCustomWidth_Params
{
public:
	float                                        AttributeValue;                                    // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A18[0x3];                                     // Fixing Size Of Struct 
};

// 0x2 (0x2 - 0x0)
// Function InterchangeFactoryNodes.InterchangeStandardCameraFactoryNode.GetCustomProjectionMode
struct UInterchangeStandardCameraFactoryNode_GetCustomProjectionMode_Params
{
public:
	enum class ECameraProjectionMode             AttributeValue;                                    // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function InterchangeFactoryNodes.InterchangeStandardCameraFactoryNode.GetCustomNearClipPlane
struct UInterchangeStandardCameraFactoryNode_GetCustomNearClipPlane_Params
{
public:
	float                                        AttributeValue;                                    // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A30[0x3];                                     // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// Function InterchangeFactoryNodes.InterchangeStandardCameraFactoryNode.GetCustomFieldOfView
struct UInterchangeStandardCameraFactoryNode_GetCustomFieldOfView_Params
{
public:
	float                                        AttributeValue;                                    // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A3D[0x3];                                     // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// Function InterchangeFactoryNodes.InterchangeStandardCameraFactoryNode.GetCustomFarClipPlane
struct UInterchangeStandardCameraFactoryNode_GetCustomFarClipPlane_Params
{
public:
	float                                        AttributeValue;                                    // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A4D[0x3];                                     // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// Function InterchangeFactoryNodes.InterchangeStandardCameraFactoryNode.GetCustomAspectRatio
struct UInterchangeStandardCameraFactoryNode_GetCustomAspectRatio_Params
{
public:
	float                                        AttributeValue;                                    // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A61[0x3];                                     // Fixing Size Of Struct 
};

// 0x3 (0x3 - 0x0)
// Function InterchangeFactoryNodes.InterchangeBaseLightFactoryNode.SetCustomUseTemperature
struct UInterchangeBaseLightFactoryNode_SetCustomUseTemperature_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddApplyDelegate;                                 // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x2(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function InterchangeFactoryNodes.InterchangeBaseLightFactoryNode.SetCustomTemperature
struct UInterchangeBaseLightFactoryNode_SetCustomTemperature_Params
{
public:
	float                                        AttributeValue;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddApplyDelegate;                                 // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x5(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A99[0x2];                                     // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// Function InterchangeFactoryNodes.InterchangeBaseLightFactoryNode.SetCustomLightColor
struct UInterchangeBaseLightFactoryNode_SetCustomLightColor_Params
{
public:
	struct CoreUObject_Color                     AttributeValue;                                    // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddApplyDelegate;                                 // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x5(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AA3[0x2];                                     // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// Function InterchangeFactoryNodes.InterchangeBaseLightFactoryNode.SetCustomIntensity
struct UInterchangeBaseLightFactoryNode_SetCustomIntensity_Params
{
public:
	float                                        AttributeValue;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddApplyDelegate;                                 // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x5(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AAD[0x2];                                     // Fixing Size Of Struct 
};

// 0x2 (0x2 - 0x0)
// Function InterchangeFactoryNodes.InterchangeBaseLightFactoryNode.GetCustomUseTemperature
struct UInterchangeBaseLightFactoryNode_GetCustomUseTemperature_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function InterchangeFactoryNodes.InterchangeBaseLightFactoryNode.GetCustomTemperature
struct UInterchangeBaseLightFactoryNode_GetCustomTemperature_Params
{
public:
	float                                        AttributeValue;                                    // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AB8[0x3];                                     // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// Function InterchangeFactoryNodes.InterchangeBaseLightFactoryNode.GetCustomLightColor
struct UInterchangeBaseLightFactoryNode_GetCustomLightColor_Params
{
public:
	struct CoreUObject_Color                     AttributeValue;                                    // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1ABE[0x3];                                     // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// Function InterchangeFactoryNodes.InterchangeBaseLightFactoryNode.GetCustomIntensity
struct UInterchangeBaseLightFactoryNode_GetCustomIntensity_Params
{
public:
	float                                        AttributeValue;                                    // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AC7[0x3];                                     // Fixing Size Of Struct 
};

// 0x3 (0x3 - 0x0)
// Function InterchangeFactoryNodes.InterchangeLightFactoryNode.SetCustomIntensityUnits
struct UInterchangeLightFactoryNode_SetCustomIntensityUnits_Params
{
public:
	enum class ELightUnits                       AttributeValue;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddApplyDelegate;                                 // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x2(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function InterchangeFactoryNodes.InterchangeLightFactoryNode.SetCustomIESTexture
struct UInterchangeLightFactoryNode_SetCustomIESTexture_Params
{
public:
	class FString                                AttributeValue;                                    // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AF1[0x7];                                     // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// Function InterchangeFactoryNodes.InterchangeLightFactoryNode.SetCustomAttenuationRadius
struct UInterchangeLightFactoryNode_SetCustomAttenuationRadius_Params
{
public:
	float                                        AttributeValue;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddApplyDelegate;                                 // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x5(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AFC[0x2];                                     // Fixing Size Of Struct 
};

// 0x2 (0x2 - 0x0)
// Function InterchangeFactoryNodes.InterchangeLightFactoryNode.GetCustomIntensityUnits
struct UInterchangeLightFactoryNode_GetCustomIntensityUnits_Params
{
public:
	enum class ELightUnits                       AttributeValue;                                    // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function InterchangeFactoryNodes.InterchangeLightFactoryNode.GetCustomIESTexture
struct UInterchangeLightFactoryNode_GetCustomIESTexture_Params
{
public:
	class FString                                AttributeValue;                                    // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B12[0x7];                                     // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// Function InterchangeFactoryNodes.InterchangeLightFactoryNode.GetCustomAttenuationRadius
struct UInterchangeLightFactoryNode_GetCustomAttenuationRadius_Params
{
public:
	float                                        AttributeValue;                                    // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B1F[0x3];                                     // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// Function InterchangeFactoryNodes.InterchangeRectLightFactoryNode.SetCustomSourceWidth
struct UInterchangeRectLightFactoryNode_SetCustomSourceWidth_Params
{
public:
	float                                        AttributeValue;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddApplyDelegate;                                 // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x5(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B44[0x2];                                     // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// Function InterchangeFactoryNodes.InterchangeRectLightFactoryNode.SetCustomSourceHeight
struct UInterchangeRectLightFactoryNode_SetCustomSourceHeight_Params
{
public:
	float                                        AttributeValue;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddApplyDelegate;                                 // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x5(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B52[0x2];                                     // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// Function InterchangeFactoryNodes.InterchangeRectLightFactoryNode.GetCustomSourceWidth
struct UInterchangeRectLightFactoryNode_GetCustomSourceWidth_Params
{
public:
	float                                        AttributeValue;                                    // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B58[0x3];                                     // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// Function InterchangeFactoryNodes.InterchangeRectLightFactoryNode.GetCustomSourceHeight
struct UInterchangeRectLightFactoryNode_GetCustomSourceHeight_Params
{
public:
	float                                        AttributeValue;                                    // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B62[0x3];                                     // Fixing Size Of Struct 
};

// 0x3 (0x3 - 0x0)
// Function InterchangeFactoryNodes.InterchangePointLightFactoryNode.SetCustomUseInverseSquaredFalloff
struct UInterchangePointLightFactoryNode_SetCustomUseInverseSquaredFalloff_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddApplyDelegate;                                 // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x2(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function InterchangeFactoryNodes.InterchangePointLightFactoryNode.SetCustomLightFalloffExponent
struct UInterchangePointLightFactoryNode_SetCustomLightFalloffExponent_Params
{
public:
	float                                        AttributeValue;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddApplyDelegate;                                 // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x5(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B74[0x2];                                     // Fixing Size Of Struct 
};

// 0x2 (0x2 - 0x0)
// Function InterchangeFactoryNodes.InterchangePointLightFactoryNode.GetCustomUseInverseSquaredFalloff
struct UInterchangePointLightFactoryNode_GetCustomUseInverseSquaredFalloff_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function InterchangeFactoryNodes.InterchangePointLightFactoryNode.GetCustomLightFalloffExponent
struct UInterchangePointLightFactoryNode_GetCustomLightFalloffExponent_Params
{
public:
	float                                        AttributeValue;                                    // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B88[0x3];                                     // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// Function InterchangeFactoryNodes.InterchangeSpotLightFactoryNode.SetCustomOuterConeAngle
struct UInterchangeSpotLightFactoryNode_SetCustomOuterConeAngle_Params
{
public:
	float                                        AttributeValue;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddApplyDelegate;                                 // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x5(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B9C[0x2];                                     // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// Function InterchangeFactoryNodes.InterchangeSpotLightFactoryNode.SetCustomInnerConeAngle
struct UInterchangeSpotLightFactoryNode_SetCustomInnerConeAngle_Params
{
public:
	float                                        AttributeValue;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddApplyDelegate;                                 // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x5(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BA9[0x2];                                     // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// Function InterchangeFactoryNodes.InterchangeSpotLightFactoryNode.GetCustomOuterConeAngle
struct UInterchangeSpotLightFactoryNode_GetCustomOuterConeAngle_Params
{
public:
	float                                        AttributeValue;                                    // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BB0[0x3];                                     // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// Function InterchangeFactoryNodes.InterchangeSpotLightFactoryNode.GetCustomInnerConeAngle
struct UInterchangeSpotLightFactoryNode_GetCustomInnerConeAngle_Params
{
public:
	float                                        AttributeValue;                                    // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BB7[0x3];                                     // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// Function InterchangeFactoryNodes.InterchangePhysicsAssetFactoryNode.SetCustomSkeletalMeshUid
struct UInterchangePhysicsAssetFactoryNode_SetCustomSkeletalMeshUid_Params
{
public:
	class FString                                AttributeValue;                                    // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BC8[0x7];                                     // Fixing Size Of Struct 
};

// 0x30 (0x30 - 0x0)
// Function InterchangeFactoryNodes.InterchangePhysicsAssetFactoryNode.InitializePhysicsAssetNode
struct UInterchangePhysicsAssetFactoryNode_InitializePhysicsAssetNode_Params
{
public:
	class FString                                UniqueID;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DisplayLabel;                                      // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InAssetClass;                                      // 0x20(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function InterchangeFactoryNodes.InterchangePhysicsAssetFactoryNode.GetObjectClass
struct UInterchangePhysicsAssetFactoryNode_GetObjectClass_Params
{
public:
	class UClass*                                ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function InterchangeFactoryNodes.InterchangePhysicsAssetFactoryNode.GetCustomSkeletalMeshUid
struct UInterchangePhysicsAssetFactoryNode_GetCustomSkeletalMeshUid_Params
{
public:
	class FString                                AttributeValue;                                    // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BE1[0x7];                                     // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// Function InterchangeFactoryNodes.InterchangeSceneVariantSetsFactoryNode.RemoveCustomVariantSetUid
struct UInterchangeSceneVariantSetsFactoryNode_RemoveCustomVariantSetUid_Params
{
public:
	class FString                                VariantUid;                                        // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BF2[0x7];                                     // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// Function InterchangeFactoryNodes.InterchangeSceneVariantSetsFactoryNode.GetObjectClass
struct UInterchangeSceneVariantSetsFactoryNode_GetObjectClass_Params
{
public:
	class UClass*                                ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function InterchangeFactoryNodes.InterchangeSceneVariantSetsFactoryNode.GetCustomVariantSetUids
struct UInterchangeSceneVariantSetsFactoryNode_GetCustomVariantSetUids_Params
{
public:
	TArray<class FString>                        OutVariantUids;                                    // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function InterchangeFactoryNodes.InterchangeSceneVariantSetsFactoryNode.GetCustomVariantSetUidCount
struct UInterchangeSceneVariantSetsFactoryNode_GetCustomVariantSetUidCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function InterchangeFactoryNodes.InterchangeSceneVariantSetsFactoryNode.GetCustomVariantSetUid
struct UInterchangeSceneVariantSetsFactoryNode_GetCustomVariantSetUid_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C0F[0x4];                                     // Fixing Size After Last Property  
	class FString                                OutVariantUid;                                     // 0x8(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function InterchangeFactoryNodes.InterchangeSceneVariantSetsFactoryNode.AddCustomVariantSetUid
struct UInterchangeSceneVariantSetsFactoryNode_AddCustomVariantSetUid_Params
{
public:
	class FString                                VariantUid;                                        // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C16[0x7];                                     // Fixing Size Of Struct 
};

// 0x2 (0x2 - 0x0)
// Function InterchangeFactoryNodes.InterchangeSkeletonFactoryNode.SetCustomUseTimeZeroForBindPose
struct UInterchangeSkeletonFactoryNode_SetCustomUseTimeZeroForBindPose_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function InterchangeFactoryNodes.InterchangeSkeletonFactoryNode.SetCustomSkeletalMeshFactoryNodeUid
struct UInterchangeSkeletonFactoryNode_SetCustomSkeletalMeshFactoryNodeUid_Params
{
public:
	class FString                                AttributeValue;                                    // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C3B[0x7];                                     // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// Function InterchangeFactoryNodes.InterchangeSkeletonFactoryNode.SetCustomRootJointUid
struct UInterchangeSkeletonFactoryNode_SetCustomRootJointUid_Params
{
public:
	class FString                                AttributeValue;                                    // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C44[0x7];                                     // Fixing Size Of Struct 
};

// 0x30 (0x30 - 0x0)
// Function InterchangeFactoryNodes.InterchangeSkeletonFactoryNode.InitializeSkeletonNode
struct UInterchangeSkeletonFactoryNode_InitializeSkeletonNode_Params
{
public:
	class FString                                UniqueID;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DisplayLabel;                                      // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InAssetClass;                                      // 0x20(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function InterchangeFactoryNodes.InterchangeSkeletonFactoryNode.GetObjectClass
struct UInterchangeSkeletonFactoryNode_GetObjectClass_Params
{
public:
	class UClass*                                ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function InterchangeFactoryNodes.InterchangeSkeletonFactoryNode.GetCustomUseTimeZeroForBindPose
struct UInterchangeSkeletonFactoryNode_GetCustomUseTimeZeroForBindPose_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function InterchangeFactoryNodes.InterchangeSkeletonFactoryNode.GetCustomSkeletalMeshFactoryNodeUid
struct UInterchangeSkeletonFactoryNode_GetCustomSkeletalMeshFactoryNodeUid_Params
{
public:
	class FString                                AttributeValue;                                    // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C67[0x7];                                     // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// Function InterchangeFactoryNodes.InterchangeSkeletonFactoryNode.GetCustomRootJointUid
struct UInterchangeSkeletonFactoryNode_GetCustomRootJointUid_Params
{
public:
	class FString                                AttributeValue;                                    // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C74[0x7];                                     // Fixing Size Of Struct 
};

// 0x3 (0x3 - 0x0)
// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomVirtualTextureStreaming
struct UInterchangeTextureFactoryNode_SetCustomVirtualTextureStreaming_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddApplyDelegate;                                 // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x2(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomTranslatedTextureNodeUid
struct UInterchangeTextureFactoryNode_SetCustomTranslatedTextureNodeUid_Params
{
public:
	class FString                                AttributeValue;                                    // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C8E[0x7];                                     // Fixing Size Of Struct 
};

// 0x3 (0x3 - 0x0)
// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomSRGB
struct UInterchangeTextureFactoryNode_SetCustomSRGB_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddApplyDelegate;                                 // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x2(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomPreferCompressedSourceData
struct UInterchangeTextureFactoryNode_SetCustomPreferCompressedSourceData_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x3 (0x3 - 0x0)
// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomPowerOfTwoMode
struct UInterchangeTextureFactoryNode_SetCustomPowerOfTwoMode_Params
{
public:
	uint8                                        AttributeValue;                                    // 0x0(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddApplyDelegate;                                 // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x2(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomPaddingColor
struct UInterchangeTextureFactoryNode_SetCustomPaddingColor_Params
{
public:
	struct CoreUObject_Color                     AttributeValue;                                    // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddApplyDelegate;                                 // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x5(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CBC[0x2];                                     // Fixing Size Of Struct 
};

// 0x3 (0x3 - 0x0)
// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomMipLoadOptions
struct UInterchangeTextureFactoryNode_SetCustomMipLoadOptions_Params
{
public:
	uint8                                        AttributeValue;                                    // 0x0(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddApplyDelegate;                                 // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x2(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x3 (0x3 - 0x0)
// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomMipGenSettings
struct UInterchangeTextureFactoryNode_SetCustomMipGenSettings_Params
{
public:
	uint8                                        AttributeValue;                                    // 0x0(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddApplyDelegate;                                 // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x2(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomMaxTextureSize
struct UInterchangeTextureFactoryNode_SetCustomMaxTextureSize_Params
{
public:
	int32                                        AttributeValue;                                    // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddApplyDelegate;                                 // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x5(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CE9[0x2];                                     // Fixing Size Of Struct 
};

// 0x3 (0x3 - 0x0)
// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomLossyCompressionAmount
struct UInterchangeTextureFactoryNode_SetCustomLossyCompressionAmount_Params
{
public:
	uint8                                        AttributeValue;                                    // 0x0(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddApplyDelegate;                                 // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x2(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x3 (0x3 - 0x0)
// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomLODGroup
struct UInterchangeTextureFactoryNode_SetCustomLODGroup_Params
{
public:
	uint8                                        AttributeValue;                                    // 0x0(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddApplyDelegate;                                 // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x2(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomLODBias
struct UInterchangeTextureFactoryNode_SetCustomLODBias_Params
{
public:
	int32                                        AttributeValue;                                    // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddApplyDelegate;                                 // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x5(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D1A[0x2];                                     // Fixing Size Of Struct 
};

// 0x3 (0x3 - 0x0)
// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomFilter
struct UInterchangeTextureFactoryNode_SetCustomFilter_Params
{
public:
	uint8                                        AttributeValue;                                    // 0x0(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddApplyDelegate;                                 // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x2(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x3 (0x3 - 0x0)
// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomDownscaleOptions
struct UInterchangeTextureFactoryNode_SetCustomDownscaleOptions_Params
{
public:
	uint8                                        AttributeValue;                                    // 0x0(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddApplyDelegate;                                 // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x2(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomDownscale
struct UInterchangeTextureFactoryNode_SetCustomDownscale_Params
{
public:
	float                                        AttributeValue;                                    // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddApplyDelegate;                                 // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x5(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D4A[0x2];                                     // Fixing Size Of Struct 
};

// 0x3 (0x3 - 0x0)
// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomDeferCompression
struct UInterchangeTextureFactoryNode_SetCustomDeferCompression_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddApplyDelegate;                                 // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x2(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x3 (0x3 - 0x0)
// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomCompressionSettings
struct UInterchangeTextureFactoryNode_SetCustomCompressionSettings_Params
{
public:
	uint8                                        AttributeValue;                                    // 0x0(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddApplyDelegate;                                 // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x2(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x3 (0x3 - 0x0)
// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomCompressionQuality
struct UInterchangeTextureFactoryNode_SetCustomCompressionQuality_Params
{
public:
	uint8                                        AttributeValue;                                    // 0x0(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddApplyDelegate;                                 // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x2(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x3 (0x3 - 0x0)
// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomCompressionNoAlpha
struct UInterchangeTextureFactoryNode_SetCustomCompressionNoAlpha_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddApplyDelegate;                                 // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x2(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x3 (0x3 - 0x0)
// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomCompositeTextureMode
struct UInterchangeTextureFactoryNode_SetCustomCompositeTextureMode_Params
{
public:
	uint8                                        AttributeValue;                                    // 0x0(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddApplyDelegate;                                 // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x2(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomCompositePower
struct UInterchangeTextureFactoryNode_SetCustomCompositePower_Params
{
public:
	float                                        AttributeValue;                                    // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddApplyDelegate;                                 // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x5(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DD3[0x2];                                     // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomChromaKeyThreshold
struct UInterchangeTextureFactoryNode_SetCustomChromaKeyThreshold_Params
{
public:
	float                                        AttributeValue;                                    // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddApplyDelegate;                                 // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x5(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DE9[0x2];                                     // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomChromaKeyColor
struct UInterchangeTextureFactoryNode_SetCustomChromaKeyColor_Params
{
public:
	struct CoreUObject_Color                     AttributeValue;                                    // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddApplyDelegate;                                 // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x5(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E0F[0x2];                                     // Fixing Size Of Struct 
};

// 0x3 (0x3 - 0x0)
// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustombUseLegacyGamma
struct UInterchangeTextureFactoryNode_SetCustombUseLegacyGamma_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddApplyDelegate;                                 // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x2(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x3 (0x3 - 0x0)
// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustombPreserveBorder
struct UInterchangeTextureFactoryNode_SetCustombPreserveBorder_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddApplyDelegate;                                 // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x2(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x3 (0x3 - 0x0)
// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustombFlipGreenChannel
struct UInterchangeTextureFactoryNode_SetCustombFlipGreenChannel_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddApplyDelegate;                                 // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x2(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x3 (0x3 - 0x0)
// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustombDoScaleMipsForAlphaCoverage
struct UInterchangeTextureFactoryNode_SetCustombDoScaleMipsForAlphaCoverage_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddApplyDelegate;                                 // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x2(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x3 (0x3 - 0x0)
// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustombChromaKeyTexture
struct UInterchangeTextureFactoryNode_SetCustombChromaKeyTexture_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddApplyDelegate;                                 // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x2(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomAlphaCoverageThresholds
struct UInterchangeTextureFactoryNode_SetCustomAlphaCoverageThresholds_Params
{
public:
	struct CoreUObject_Vector4                   AttributeValue;                                    // 0x0(0x20)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddApplyDelegate;                                 // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x21(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EAB[0xE];                                     // Fixing Size Of Struct 
};

// 0x2 (0x2 - 0x0)
// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomAllowNonPowerOfTwo
struct UInterchangeTextureFactoryNode_SetCustomAllowNonPowerOfTwo_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomAdjustVibrance
struct UInterchangeTextureFactoryNode_SetCustomAdjustVibrance_Params
{
public:
	float                                        AttributeValue;                                    // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddApplyDelegate;                                 // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x5(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1ED3[0x2];                                     // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomAdjustSaturation
struct UInterchangeTextureFactoryNode_SetCustomAdjustSaturation_Params
{
public:
	float                                        AttributeValue;                                    // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddApplyDelegate;                                 // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x5(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EE3[0x2];                                     // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomAdjustRGBCurve
struct UInterchangeTextureFactoryNode_SetCustomAdjustRGBCurve_Params
{
public:
	float                                        AttributeValue;                                    // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddApplyDelegate;                                 // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x5(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EF9[0x2];                                     // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomAdjustMinAlpha
struct UInterchangeTextureFactoryNode_SetCustomAdjustMinAlpha_Params
{
public:
	float                                        AttributeValue;                                    // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddApplyDelegate;                                 // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x5(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F1D[0x2];                                     // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomAdjustMaxAlpha
struct UInterchangeTextureFactoryNode_SetCustomAdjustMaxAlpha_Params
{
public:
	float                                        AttributeValue;                                    // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddApplyDelegate;                                 // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x5(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F3F[0x2];                                     // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomAdjustHue
struct UInterchangeTextureFactoryNode_SetCustomAdjustHue_Params
{
public:
	float                                        AttributeValue;                                    // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddApplyDelegate;                                 // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x5(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F51[0x2];                                     // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomAdjustBrightnessCurve
struct UInterchangeTextureFactoryNode_SetCustomAdjustBrightnessCurve_Params
{
public:
	float                                        AttributeValue;                                    // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddApplyDelegate;                                 // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x5(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FC0[0x2];                                     // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomAdjustBrightness
struct UInterchangeTextureFactoryNode_SetCustomAdjustBrightness_Params
{
public:
	float                                        AttributeValue;                                    // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddApplyDelegate;                                 // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x5(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FD1[0x2];                                     // Fixing Size Of Struct 
};

// 0x30 (0x30 - 0x0)
// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.InitializeTextureNode
struct UInterchangeTextureFactoryNode_InitializeTextureNode_Params
{
public:
	class FString                                UniqueID;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DisplayLabel;                                      // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InAssetName;                                       // 0x20(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetObjectClass
struct UInterchangeTextureFactoryNode_GetObjectClass_Params
{
public:
	class UClass*                                ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomVirtualTextureStreaming
struct UInterchangeTextureFactoryNode_GetCustomVirtualTextureStreaming_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomTranslatedTextureNodeUid
struct UInterchangeTextureFactoryNode_GetCustomTranslatedTextureNodeUid_Params
{
public:
	class FString                                AttributeValue;                                    // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2012[0x7];                                     // Fixing Size Of Struct 
};

// 0x2 (0x2 - 0x0)
// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomSRGB
struct UInterchangeTextureFactoryNode_GetCustomSRGB_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomPreferCompressedSourceData
struct UInterchangeTextureFactoryNode_GetCustomPreferCompressedSourceData_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomPowerOfTwoMode
struct UInterchangeTextureFactoryNode_GetCustomPowerOfTwoMode_Params
{
public:
	uint8                                        AttributeValue;                                    // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomPaddingColor
struct UInterchangeTextureFactoryNode_GetCustomPaddingColor_Params
{
public:
	struct CoreUObject_Color                     AttributeValue;                                    // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_203C[0x3];                                     // Fixing Size Of Struct 
};

// 0x2 (0x2 - 0x0)
// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomMipLoadOptions
struct UInterchangeTextureFactoryNode_GetCustomMipLoadOptions_Params
{
public:
	uint8                                        AttributeValue;                                    // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomMipGenSettings
struct UInterchangeTextureFactoryNode_GetCustomMipGenSettings_Params
{
public:
	uint8                                        AttributeValue;                                    // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomMaxTextureSize
struct UInterchangeTextureFactoryNode_GetCustomMaxTextureSize_Params
{
public:
	int32                                        AttributeValue;                                    // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_206E[0x3];                                     // Fixing Size Of Struct 
};

// 0x2 (0x2 - 0x0)
// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomLossyCompressionAmount
struct UInterchangeTextureFactoryNode_GetCustomLossyCompressionAmount_Params
{
public:
	uint8                                        AttributeValue;                                    // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomLODGroup
struct UInterchangeTextureFactoryNode_GetCustomLODGroup_Params
{
public:
	uint8                                        AttributeValue;                                    // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomLODBias
struct UInterchangeTextureFactoryNode_GetCustomLODBias_Params
{
public:
	int32                                        AttributeValue;                                    // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_208F[0x3];                                     // Fixing Size Of Struct 
};

// 0x2 (0x2 - 0x0)
// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomFilter
struct UInterchangeTextureFactoryNode_GetCustomFilter_Params
{
public:
	uint8                                        AttributeValue;                                    // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomDownscaleOptions
struct UInterchangeTextureFactoryNode_GetCustomDownscaleOptions_Params
{
public:
	uint8                                        AttributeValue;                                    // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomDownscale
struct UInterchangeTextureFactoryNode_GetCustomDownscale_Params
{
public:
	float                                        AttributeValue;                                    // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20BA[0x3];                                     // Fixing Size Of Struct 
};

// 0x2 (0x2 - 0x0)
// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomDeferCompression
struct UInterchangeTextureFactoryNode_GetCustomDeferCompression_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomCompressionSettings
struct UInterchangeTextureFactoryNode_GetCustomCompressionSettings_Params
{
public:
	uint8                                        AttributeValue;                                    // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomCompressionQuality
struct UInterchangeTextureFactoryNode_GetCustomCompressionQuality_Params
{
public:
	uint8                                        AttributeValue;                                    // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomCompressionNoAlpha
struct UInterchangeTextureFactoryNode_GetCustomCompressionNoAlpha_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomCompositeTextureMode
struct UInterchangeTextureFactoryNode_GetCustomCompositeTextureMode_Params
{
public:
	uint8                                        AttributeValue;                                    // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomCompositePower
struct UInterchangeTextureFactoryNode_GetCustomCompositePower_Params
{
public:
	float                                        AttributeValue;                                    // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2107[0x3];                                     // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomChromaKeyThreshold
struct UInterchangeTextureFactoryNode_GetCustomChromaKeyThreshold_Params
{
public:
	float                                        AttributeValue;                                    // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2114[0x3];                                     // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomChromaKeyColor
struct UInterchangeTextureFactoryNode_GetCustomChromaKeyColor_Params
{
public:
	struct CoreUObject_Color                     AttributeValue;                                    // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2130[0x3];                                     // Fixing Size Of Struct 
};

// 0x2 (0x2 - 0x0)
// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustombUseLegacyGamma
struct UInterchangeTextureFactoryNode_GetCustombUseLegacyGamma_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustombPreserveBorder
struct UInterchangeTextureFactoryNode_GetCustombPreserveBorder_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustombFlipGreenChannel
struct UInterchangeTextureFactoryNode_GetCustombFlipGreenChannel_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustombDoScaleMipsForAlphaCoverage
struct UInterchangeTextureFactoryNode_GetCustombDoScaleMipsForAlphaCoverage_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustombChromaKeyTexture
struct UInterchangeTextureFactoryNode_GetCustombChromaKeyTexture_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomAlphaCoverageThresholds
struct UInterchangeTextureFactoryNode_GetCustomAlphaCoverageThresholds_Params
{
public:
	struct CoreUObject_Vector4                   AttributeValue;                                    // 0x0(0x20)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2162[0xF];                                     // Fixing Size Of Struct 
};

// 0x2 (0x2 - 0x0)
// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomAllowNonPowerOfTwo
struct UInterchangeTextureFactoryNode_GetCustomAllowNonPowerOfTwo_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomAdjustVibrance
struct UInterchangeTextureFactoryNode_GetCustomAdjustVibrance_Params
{
public:
	float                                        AttributeValue;                                    // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2172[0x3];                                     // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomAdjustSaturation
struct UInterchangeTextureFactoryNode_GetCustomAdjustSaturation_Params
{
public:
	float                                        AttributeValue;                                    // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_217E[0x3];                                     // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomAdjustRGBCurve
struct UInterchangeTextureFactoryNode_GetCustomAdjustRGBCurve_Params
{
public:
	float                                        AttributeValue;                                    // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_218D[0x3];                                     // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomAdjustMinAlpha
struct UInterchangeTextureFactoryNode_GetCustomAdjustMinAlpha_Params
{
public:
	float                                        AttributeValue;                                    // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2192[0x3];                                     // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomAdjustMaxAlpha
struct UInterchangeTextureFactoryNode_GetCustomAdjustMaxAlpha_Params
{
public:
	float                                        AttributeValue;                                    // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_219A[0x3];                                     // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomAdjustHue
struct UInterchangeTextureFactoryNode_GetCustomAdjustHue_Params
{
public:
	float                                        AttributeValue;                                    // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21A1[0x3];                                     // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomAdjustBrightnessCurve
struct UInterchangeTextureFactoryNode_GetCustomAdjustBrightnessCurve_Params
{
public:
	float                                        AttributeValue;                                    // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21A5[0x3];                                     // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomAdjustBrightness
struct UInterchangeTextureFactoryNode_GetCustomAdjustBrightness_Params
{
public:
	float                                        AttributeValue;                                    // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21AC[0x3];                                     // Fixing Size Of Struct 
};

// 0x3 (0x3 - 0x0)
// Function InterchangeFactoryNodes.InterchangeTexture2DArrayFactoryNode.SetCustomAddressZ
struct UInterchangeTexture2DArrayFactoryNode_SetCustomAddressZ_Params
{
public:
	uint8                                        AttributeValue;                                    // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddApplyDelegate;                                 // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x2(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function InterchangeFactoryNodes.InterchangeTexture2DArrayFactoryNode.GetCustomAddressZ
struct UInterchangeTexture2DArrayFactoryNode_GetCustomAddressZ_Params
{
public:
	uint8                                        AttributeValue;                                    // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function InterchangeFactoryNodes.InterchangeTexture2DArrayFactoryNode.GetCustomAddressY
struct UInterchangeTexture2DArrayFactoryNode_GetCustomAddressY_Params
{
public:
	uint8                                        AttributeValue;                                    // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function InterchangeFactoryNodes.InterchangeTexture2DArrayFactoryNode.GetCustomAddressX
struct UInterchangeTexture2DArrayFactoryNode_GetCustomAddressX_Params
{
public:
	uint8                                        AttributeValue;                                    // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function InterchangeFactoryNodes.InterchangeTexture2DFactoryNode.SetSourceBlocks
struct UInterchangeTexture2DFactoryNode_SetSourceBlocks_Params
{
public:
	TMap<int32, class FString>                   InSourceBlocks;                                    // 0x0(0x50)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function InterchangeFactoryNodes.InterchangeTexture2DFactoryNode.SetSourceBlockByCoordinates
struct UInterchangeTexture2DFactoryNode_SetSourceBlockByCoordinates_Params
{
public:
	int32                                        X;                                                 // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Y;                                                 // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InSourceFile;                                      // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function InterchangeFactoryNodes.InterchangeTexture2DFactoryNode.SetSourceBlock
struct UInterchangeTexture2DFactoryNode_SetSourceBlock_Params
{
public:
	int32                                        BlockIndex;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2217[0x4];                                     // Fixing Size After Last Property  
	class FString                                InSourceFile;                                      // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x3 (0x3 - 0x0)
// Function InterchangeFactoryNodes.InterchangeTexture2DFactoryNode.SetCustomAddressY
struct UInterchangeTexture2DFactoryNode_SetCustomAddressY_Params
{
public:
	enum class ETextureAddress                   AttributeValue;                                    // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddApplyDelegate;                                 // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x2(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x3 (0x3 - 0x0)
// Function InterchangeFactoryNodes.InterchangeTexture2DFactoryNode.SetCustomAddressX
struct UInterchangeTexture2DFactoryNode_SetCustomAddressX_Params
{
public:
	enum class ETextureAddress                   AttributeValue;                                    // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddApplyDelegate;                                 // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x2(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function InterchangeFactoryNodes.InterchangeTexture2DFactoryNode.GetSourceBlocks
struct UInterchangeTexture2DFactoryNode_GetSourceBlocks_Params
{
public:
	TMap<int32, class FString>                   ReturnValue;                                       // 0x0(0x50)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function InterchangeFactoryNodes.InterchangeTexture2DFactoryNode.GetSourceBlockByCoordinates
struct UInterchangeTexture2DFactoryNode_GetSourceBlockByCoordinates_Params
{
public:
	int32                                        X;                                                 // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Y;                                                 // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OutSourceFile;                                     // 0x8(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2243[0x7];                                     // Fixing Size Of Struct 
};

// 0x20 (0x20 - 0x0)
// Function InterchangeFactoryNodes.InterchangeTexture2DFactoryNode.GetSourceBlock
struct UInterchangeTexture2DFactoryNode_GetSourceBlock_Params
{
public:
	int32                                        BlockIndex;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_224F[0x4];                                     // Fixing Size After Last Property  
	class FString                                OutSourceFile;                                     // 0x8(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2250[0x7];                                     // Fixing Size Of Struct 
};

// 0x2 (0x2 - 0x0)
// Function InterchangeFactoryNodes.InterchangeTexture2DFactoryNode.GetCustomAddressY
struct UInterchangeTexture2DFactoryNode_GetCustomAddressY_Params
{
public:
	enum class ETextureAddress                   AttributeValue;                                    // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function InterchangeFactoryNodes.InterchangeTexture2DFactoryNode.GetCustomAddressX
struct UInterchangeTexture2DFactoryNode_GetCustomAddressX_Params
{
public:
	enum class ETextureAddress                   AttributeValue;                                    // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function InterchangeFactoryNodes.InterchangeTextureLightProfileFactoryNode.SetCustomTextureMultiplier
struct UInterchangeTextureLightProfileFactoryNode_SetCustomTextureMultiplier_Params
{
public:
	float                                        AttributeValue;                                    // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddApplyDelegate;                                 // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x5(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_228D[0x2];                                     // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// Function InterchangeFactoryNodes.InterchangeTextureLightProfileFactoryNode.SetCustomBrightness
struct UInterchangeTextureLightProfileFactoryNode_SetCustomBrightness_Params
{
public:
	float                                        AttributeValue;                                    // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddApplyDelegate;                                 // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x5(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_229A[0x2];                                     // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// Function InterchangeFactoryNodes.InterchangeTextureLightProfileFactoryNode.GetCustomTextureMultiplier
struct UInterchangeTextureLightProfileFactoryNode_GetCustomTextureMultiplier_Params
{
public:
	float                                        AttributeValue;                                    // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_22A3[0x3];                                     // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// Function InterchangeFactoryNodes.InterchangeTextureLightProfileFactoryNode.GetCustomBrightness
struct UInterchangeTextureLightProfileFactoryNode_GetCustomBrightness_Params
{
public:
	float                                        AttributeValue;                                    // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_22AE[0x3];                                     // Fixing Size Of Struct 
};

// 0x28 (0x28 - 0x0)
// Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetCustomSkeletonSoftObjectPath
struct UInterchangeAnimSequenceFactoryNode_SetCustomSkeletonSoftObjectPath_Params
{
public:
	struct CoreUObject_SoftObjectPath            AttributeValue;                                    // 0x0(0x20)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_22FE[0x7];                                     // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetCustomSkeletonFactoryNodeUid
struct UInterchangeAnimSequenceFactoryNode_SetCustomSkeletonFactoryNodeUid_Params
{
public:
	class FString                                AttributeValue;                                    // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2305[0x7];                                     // Fixing Size Of Struct 
};

// 0x2 (0x2 - 0x0)
// Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetCustomRemoveCurveRedundantKeys
struct UInterchangeAnimSequenceFactoryNode_SetCustomRemoveCurveRedundantKeys_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetCustomMaterialDriveParameterOnCustomAttribute
struct UInterchangeAnimSequenceFactoryNode_SetCustomMaterialDriveParameterOnCustomAttribute_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetCustomImportBoneTracksSampleRate
struct UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksSampleRate_Params
{
public:
	double                                       AttributeValue;                                    // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_232E[0x7];                                     // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetCustomImportBoneTracksRangeStop
struct UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksRangeStop_Params
{
public:
	double                                       AttributeValue;                                    // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_234B[0x7];                                     // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetCustomImportBoneTracksRangeStart
struct UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksRangeStart_Params
{
public:
	double                                       AttributeValue;                                    // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2355[0x7];                                     // Fixing Size Of Struct 
};

// 0x2 (0x2 - 0x0)
// Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetCustomImportBoneTracks
struct UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracks_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetCustomImportAttributeCurves
struct UInterchangeAnimSequenceFactoryNode_SetCustomImportAttributeCurves_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetCustomDoNotImportCurveWithZero
struct UInterchangeAnimSequenceFactoryNode_SetCustomDoNotImportCurveWithZero_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetCustomDeleteExistingNonCurveCustomAttributes
struct UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingNonCurveCustomAttributes_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetCustomDeleteExistingMorphTargetCurves
struct UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingMorphTargetCurves_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetCustomDeleteExistingCustomAttributeCurves
struct UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingCustomAttributeCurves_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetCustomAddCurveMetadataToSkeleton
struct UInterchangeAnimSequenceFactoryNode_SetCustomAddCurveMetadataToSkeleton_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetAnimationPayloadKeysForSceneNodeUids
struct UInterchangeAnimSequenceFactoryNode_SetAnimationPayloadKeysForSceneNodeUids_Params
{
public:
	TMap<class FString, class FString>           SceneNodeAnimationPayloadKeyUids;                  // 0x0(0x50)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TMap<class FString, uint8>                   SceneNodeAnimationPayloadKeyTypes;                 // 0x50(0x50)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetAnimationPayloadKeysForMorphTargetNodeUids
struct UInterchangeAnimSequenceFactoryNode_SetAnimationPayloadKeysForMorphTargetNodeUids_Params
{
public:
	TMap<class FString, class FString>           MorphTargetAnimationPayloadKeyUids;                // 0x0(0x50)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TMap<class FString, uint8>                   MorphTargetAnimationPayloadKeyTypes;               // 0x50(0x50)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetAnimatedMaterialCurveSuffixe
struct UInterchangeAnimSequenceFactoryNode_SetAnimatedMaterialCurveSuffixe_Params
{
public:
	class FString                                MaterialCurveSuffixe;                              // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23DD[0x7];                                     // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetAnimatedAttributeStepCurveName
struct UInterchangeAnimSequenceFactoryNode_SetAnimatedAttributeStepCurveName_Params
{
public:
	class FString                                AttributeStepCurveName;                            // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23E5[0x7];                                     // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetAnimatedAttributeCurveName
struct UInterchangeAnimSequenceFactoryNode_SetAnimatedAttributeCurveName_Params
{
public:
	class FString                                AttributeCurveName;                                // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23EF[0x7];                                     // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.RemoveAnimatedMaterialCurveSuffixe
struct UInterchangeAnimSequenceFactoryNode_RemoveAnimatedMaterialCurveSuffixe_Params
{
public:
	class FString                                MaterialCurveSuffixe;                              // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23FC[0x7];                                     // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.RemoveAnimatedAttributeStepCurveName
struct UInterchangeAnimSequenceFactoryNode_RemoveAnimatedAttributeStepCurveName_Params
{
public:
	class FString                                AttributeStepCurveName;                            // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2406[0x7];                                     // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.RemoveAnimatedAttributeCurveName
struct UInterchangeAnimSequenceFactoryNode_RemoveAnimatedAttributeCurveName_Params
{
public:
	class FString                                AttributeCurveName;                                // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_240F[0x7];                                     // Fixing Size Of Struct 
};

// 0x20 (0x20 - 0x0)
// Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.InitializeAnimSequenceNode
struct UInterchangeAnimSequenceFactoryNode_InitializeAnimSequenceNode_Params
{
public:
	class FString                                UniqueID;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DisplayLabel;                                      // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetSceneNodeAnimationPayloadKeys
struct UInterchangeAnimSequenceFactoryNode_GetSceneNodeAnimationPayloadKeys_Params
{
public:
	TMap<class FString, struct InterchangeNodes_InterchangeAnimationPayLoadKey> OutSceneNodeAnimationPayloadKeys;                  // 0x0(0x50)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetObjectClass
struct UInterchangeAnimSequenceFactoryNode_GetObjectClass_Params
{
public:
	class UClass*                                ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetMorphTargetNodeAnimationPayloadKeys
struct UInterchangeAnimSequenceFactoryNode_GetMorphTargetNodeAnimationPayloadKeys_Params
{
public:
	TMap<class FString, struct InterchangeNodes_InterchangeAnimationPayLoadKey> OutMorphTargetNodeAnimationPayloads;               // 0x0(0x50)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetCustomSkeletonSoftObjectPath
struct UInterchangeAnimSequenceFactoryNode_GetCustomSkeletonSoftObjectPath_Params
{
public:
	struct CoreUObject_SoftObjectPath            AttributeValue;                                    // 0x0(0x20)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2437[0x7];                                     // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetCustomSkeletonFactoryNodeUid
struct UInterchangeAnimSequenceFactoryNode_GetCustomSkeletonFactoryNodeUid_Params
{
public:
	class FString                                AttributeValue;                                    // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2446[0x7];                                     // Fixing Size Of Struct 
};

// 0x2 (0x2 - 0x0)
// Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetCustomRemoveCurveRedundantKeys
struct UInterchangeAnimSequenceFactoryNode_GetCustomRemoveCurveRedundantKeys_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetCustomMaterialDriveParameterOnCustomAttribute
struct UInterchangeAnimSequenceFactoryNode_GetCustomMaterialDriveParameterOnCustomAttribute_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetCustomImportBoneTracksSampleRate
struct UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracksSampleRate_Params
{
public:
	double                                       AttributeValue;                                    // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_246B[0x7];                                     // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetCustomImportBoneTracksRangeStop
struct UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracksRangeStop_Params
{
public:
	double                                       AttributeValue;                                    // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2477[0x7];                                     // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetCustomImportBoneTracksRangeStart
struct UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracksRangeStart_Params
{
public:
	double                                       AttributeValue;                                    // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2483[0x7];                                     // Fixing Size Of Struct 
};

// 0x2 (0x2 - 0x0)
// Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetCustomImportBoneTracks
struct UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracks_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetCustomImportAttributeCurves
struct UInterchangeAnimSequenceFactoryNode_GetCustomImportAttributeCurves_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetCustomDoNotImportCurveWithZero
struct UInterchangeAnimSequenceFactoryNode_GetCustomDoNotImportCurveWithZero_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetCustomDeleteExistingNonCurveCustomAttributes
struct UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingNonCurveCustomAttributes_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetCustomDeleteExistingMorphTargetCurves
struct UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingMorphTargetCurves_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetCustomDeleteExistingCustomAttributeCurves
struct UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingCustomAttributeCurves_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetCustomAddCurveMetadataToSkeleton
struct UInterchangeAnimSequenceFactoryNode_GetCustomAddCurveMetadataToSkeleton_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetAnimatedMaterialCurveSuffixesCount
struct UInterchangeAnimSequenceFactoryNode_GetAnimatedMaterialCurveSuffixesCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetAnimatedMaterialCurveSuffixes
struct UInterchangeAnimSequenceFactoryNode_GetAnimatedMaterialCurveSuffixes_Params
{
public:
	TArray<class FString>                        OutMaterialCurveSuffixes;                          // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetAnimatedMaterialCurveSuffixe
struct UInterchangeAnimSequenceFactoryNode_GetAnimatedMaterialCurveSuffixe_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_251C[0x4];                                     // Fixing Size After Last Property  
	class FString                                OutMaterialCurveSuffixe;                           // 0x8(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetAnimatedAttributeStepCurveNamesCount
struct UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeStepCurveNamesCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetAnimatedAttributeStepCurveNames
struct UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeStepCurveNames_Params
{
public:
	TArray<class FString>                        OutAttributeStepCurveNames;                        // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetAnimatedAttributeStepCurveName
struct UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeStepCurveName_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2549[0x4];                                     // Fixing Size After Last Property  
	class FString                                OutAttributeStepCurveName;                         // 0x8(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetAnimatedAttributeCurveNamesCount
struct UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeCurveNamesCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetAnimatedAttributeCurveNames
struct UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeCurveNames_Params
{
public:
	TArray<class FString>                        OutAttributeCurveNames;                            // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetAnimatedAttributeCurveName
struct UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeCurveName_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_257A[0x4];                                     // Fixing Size After Last Property  
	class FString                                OutAttributeCurveName;                             // 0x8(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// Function InterchangeFactoryNodes.InterchangeCommonPipelineDataFactoryNode.SetCustomGlobalOffsetTransform
struct UInterchangeCommonPipelineDataFactoryNode_SetCustomGlobalOffsetTransform_Params
{
public:
	class UInterchangeBaseNodeContainer*         NodeContainer;                                     // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_25CE[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 AttributeValue;                                    // 0x10(0x60)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x70(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_25D1[0xF];                                     // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// Function InterchangeFactoryNodes.InterchangeCommonPipelineDataFactoryNode.SetBakeMeshes
struct UInterchangeCommonPipelineDataFactoryNode_SetBakeMeshes_Params
{
public:
	class UInterchangeBaseNodeContainer*         NodeContainer;                                     // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AttributeValue;                                    // 0x8(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x9(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_25EC[0x6];                                     // Fixing Size Of Struct 
};

// 0x70 (0x70 - 0x0)
// Function InterchangeFactoryNodes.InterchangeCommonPipelineDataFactoryNode.GetCustomGlobalOffsetTransform
struct UInterchangeCommonPipelineDataFactoryNode_GetCustomGlobalOffsetTransform_Params
{
public:
	struct CoreUObject_Transform                 AttributeValue;                                    // 0x0(0x60)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x60(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_25F7[0xF];                                     // Fixing Size Of Struct 
};

// 0x2 (0x2 - 0x0)
// Function InterchangeFactoryNodes.InterchangeCommonPipelineDataFactoryNode.GetBakeMeshes
struct UInterchangeCommonPipelineDataFactoryNode_GetBakeMeshes_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x3 (0x3 - 0x0)
// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.SetCustomTwoSided
struct UInterchangeMaterialFactoryNode_SetCustomTwoSided_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddApplyDelegate;                                 // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x2(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x3 (0x3 - 0x0)
// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.SetCustomTranslucencyLightingMode
struct UInterchangeMaterialFactoryNode_SetCustomTranslucencyLightingMode_Params
{
public:
	enum class ETranslucencyLightingMode         AttributeValue;                                    // 0x0(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddApplyDelegate;                                 // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x2(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x3 (0x3 - 0x0)
// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.SetCustomShadingModel
struct UInterchangeMaterialFactoryNode_SetCustomShadingModel_Params
{
public:
	enum class EMaterialShadingModel             AttributeValue;                                    // 0x0(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddApplyDelegate;                                 // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x2(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.SetCustomScreenSpaceReflections
struct UInterchangeMaterialFactoryNode_SetCustomScreenSpaceReflections_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x3 (0x3 - 0x0)
// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.SetCustomRefractionMethod
struct UInterchangeMaterialFactoryNode_SetCustomRefractionMethod_Params
{
public:
	enum class ERefractionMode                   AttributeValue;                                    // 0x0(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddApplyDelegate;                                 // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x2(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.SetCustomOpacityMaskClipValue
struct UInterchangeMaterialFactoryNode_SetCustomOpacityMaskClipValue_Params
{
public:
	float                                        AttributeValue;                                    // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddApplyDelegate;                                 // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x5(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_269E[0x2];                                     // Fixing Size Of Struct 
};

// 0x3 (0x3 - 0x0)
// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.SetCustomBlendMode
struct UInterchangeMaterialFactoryNode_SetCustomBlendMode_Params
{
public:
	enum class EBlendMode                        AttributeValue;                                    // 0x0(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddApplyDelegate;                                 // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x2(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetTransmissionColorConnection
struct UInterchangeMaterialFactoryNode_GetTransmissionColorConnection_Params
{
public:
	class FString                                ExpressionNodeUid;                                 // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OutputName;                                        // 0x10(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_26C0[0x7];                                     // Fixing Size Of Struct 
};

// 0x28 (0x28 - 0x0)
// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetTangentConnection
struct UInterchangeMaterialFactoryNode_GetTangentConnection_Params
{
public:
	class FString                                ExpressionNodeUid;                                 // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OutputName;                                        // 0x10(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_26DF[0x7];                                     // Fixing Size Of Struct 
};

// 0x28 (0x28 - 0x0)
// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetSubsurfaceConnection
struct UInterchangeMaterialFactoryNode_GetSubsurfaceConnection_Params
{
public:
	class FString                                ExpressionNodeUid;                                 // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OutputName;                                        // 0x10(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_26EE[0x7];                                     // Fixing Size Of Struct 
};

// 0x28 (0x28 - 0x0)
// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetSpecularConnection
struct UInterchangeMaterialFactoryNode_GetSpecularConnection_Params
{
public:
	class FString                                ExpressionNodeUid;                                 // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OutputName;                                        // 0x10(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_26F9[0x7];                                     // Fixing Size Of Struct 
};

// 0x28 (0x28 - 0x0)
// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetRoughnessConnection
struct UInterchangeMaterialFactoryNode_GetRoughnessConnection_Params
{
public:
	class FString                                ExpressionNodeUid;                                 // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OutputName;                                        // 0x10(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_270A[0x7];                                     // Fixing Size Of Struct 
};

// 0x28 (0x28 - 0x0)
// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetRefractionConnection
struct UInterchangeMaterialFactoryNode_GetRefractionConnection_Params
{
public:
	class FString                                ExpressionNodeUid;                                 // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OutputName;                                        // 0x10(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_271F[0x7];                                     // Fixing Size Of Struct 
};

// 0x28 (0x28 - 0x0)
// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetOpacityConnection
struct UInterchangeMaterialFactoryNode_GetOpacityConnection_Params
{
public:
	class FString                                ExpressionNodeUid;                                 // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OutputName;                                        // 0x10(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_273B[0x7];                                     // Fixing Size Of Struct 
};

// 0x28 (0x28 - 0x0)
// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetOcclusionConnection
struct UInterchangeMaterialFactoryNode_GetOcclusionConnection_Params
{
public:
	class FString                                ExpressionNodeUid;                                 // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OutputName;                                        // 0x10(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_274B[0x7];                                     // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetObjectClass
struct UInterchangeMaterialFactoryNode_GetObjectClass_Params
{
public:
	class UClass*                                ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetNormalConnection
struct UInterchangeMaterialFactoryNode_GetNormalConnection_Params
{
public:
	class FString                                ExpressionNodeUid;                                 // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OutputName;                                        // 0x10(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2764[0x7];                                     // Fixing Size Of Struct 
};

// 0x28 (0x28 - 0x0)
// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetMetallicConnection
struct UInterchangeMaterialFactoryNode_GetMetallicConnection_Params
{
public:
	class FString                                ExpressionNodeUid;                                 // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OutputName;                                        // 0x10(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2777[0x7];                                     // Fixing Size Of Struct 
};

// 0x28 (0x28 - 0x0)
// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetFuzzColorConnection
struct UInterchangeMaterialFactoryNode_GetFuzzColorConnection_Params
{
public:
	class FString                                ExpressionNodeUid;                                 // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OutputName;                                        // 0x10(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_278C[0x7];                                     // Fixing Size Of Struct 
};

// 0x28 (0x28 - 0x0)
// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetEmissiveColorConnection
struct UInterchangeMaterialFactoryNode_GetEmissiveColorConnection_Params
{
public:
	class FString                                ExpressionNodeUid;                                 // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OutputName;                                        // 0x10(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2797[0x7];                                     // Fixing Size Of Struct 
};

// 0x2 (0x2 - 0x0)
// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetCustomTwoSided
struct UInterchangeMaterialFactoryNode_GetCustomTwoSided_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetCustomTranslucencyLightingMode
struct UInterchangeMaterialFactoryNode_GetCustomTranslucencyLightingMode_Params
{
public:
	enum class ETranslucencyLightingMode         AttributeValue;                                    // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetCustomShadingModel
struct UInterchangeMaterialFactoryNode_GetCustomShadingModel_Params
{
public:
	enum class EMaterialShadingModel             AttributeValue;                                    // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetCustomScreenSpaceReflections
struct UInterchangeMaterialFactoryNode_GetCustomScreenSpaceReflections_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetCustomRefractionMethod
struct UInterchangeMaterialFactoryNode_GetCustomRefractionMethod_Params
{
public:
	enum class ERefractionMode                   AttributeValue;                                    // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetCustomOpacityMaskClipValue
struct UInterchangeMaterialFactoryNode_GetCustomOpacityMaskClipValue_Params
{
public:
	float                                        AttributeValue;                                    // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27D9[0x3];                                     // Fixing Size Of Struct 
};

// 0x2 (0x2 - 0x0)
// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetCustomBlendMode
struct UInterchangeMaterialFactoryNode_GetCustomBlendMode_Params
{
public:
	enum class EBlendMode                        AttributeValue;                                    // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetClothConnection
struct UInterchangeMaterialFactoryNode_GetClothConnection_Params
{
public:
	class FString                                ExpressionNodeUid;                                 // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OutputName;                                        // 0x10(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2825[0x7];                                     // Fixing Size Of Struct 
};

// 0x28 (0x28 - 0x0)
// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetClearCoatRoughnessConnection
struct UInterchangeMaterialFactoryNode_GetClearCoatRoughnessConnection_Params
{
public:
	class FString                                ExpressionNodeUid;                                 // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OutputName;                                        // 0x10(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2830[0x7];                                     // Fixing Size Of Struct 
};

// 0x28 (0x28 - 0x0)
// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetClearCoatNormalConnection
struct UInterchangeMaterialFactoryNode_GetClearCoatNormalConnection_Params
{
public:
	class FString                                ExpressionNodeUid;                                 // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OutputName;                                        // 0x10(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_284C[0x7];                                     // Fixing Size Of Struct 
};

// 0x28 (0x28 - 0x0)
// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetClearCoatConnection
struct UInterchangeMaterialFactoryNode_GetClearCoatConnection_Params
{
public:
	class FString                                ExpressionNodeUid;                                 // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OutputName;                                        // 0x10(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2866[0x7];                                     // Fixing Size Of Struct 
};

// 0x28 (0x28 - 0x0)
// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetBaseColorConnection
struct UInterchangeMaterialFactoryNode_GetBaseColorConnection_Params
{
public:
	class FString                                ExpressionNodeUid;                                 // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OutputName;                                        // 0x10(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2871[0x7];                                     // Fixing Size Of Struct 
};

// 0x28 (0x28 - 0x0)
// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetAnisotropyConnection
struct UInterchangeMaterialFactoryNode_GetAnisotropyConnection_Params
{
public:
	class FString                                ExpressionNodeUid;                                 // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OutputName;                                        // 0x10(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2890[0x7];                                     // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToTransmissionColor
struct UInterchangeMaterialFactoryNode_ConnectToTransmissionColor_Params
{
public:
	class FString                                AttributeValue;                                    // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2898[0x7];                                     // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToTangent
struct UInterchangeMaterialFactoryNode_ConnectToTangent_Params
{
public:
	class FString                                ExpressionNodeUid;                                 // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28A6[0x7];                                     // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToSubsurface
struct UInterchangeMaterialFactoryNode_ConnectToSubsurface_Params
{
public:
	class FString                                ExpressionNodeUid;                                 // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28AD[0x7];                                     // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToSpecular
struct UInterchangeMaterialFactoryNode_ConnectToSpecular_Params
{
public:
	class FString                                ExpressionNodeUid;                                 // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28BB[0x7];                                     // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToRoughness
struct UInterchangeMaterialFactoryNode_ConnectToRoughness_Params
{
public:
	class FString                                ExpressionNodeUid;                                 // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28C7[0x7];                                     // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToRefraction
struct UInterchangeMaterialFactoryNode_ConnectToRefraction_Params
{
public:
	class FString                                AttributeValue;                                    // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28E3[0x7];                                     // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToOpacity
struct UInterchangeMaterialFactoryNode_ConnectToOpacity_Params
{
public:
	class FString                                AttributeValue;                                    // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28F4[0x7];                                     // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToOcclusion
struct UInterchangeMaterialFactoryNode_ConnectToOcclusion_Params
{
public:
	class FString                                AttributeValue;                                    // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2907[0x7];                                     // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToNormal
struct UInterchangeMaterialFactoryNode_ConnectToNormal_Params
{
public:
	class FString                                ExpressionNodeUid;                                 // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2919[0x7];                                     // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToMetallic
struct UInterchangeMaterialFactoryNode_ConnectToMetallic_Params
{
public:
	class FString                                AttributeValue;                                    // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2971[0x7];                                     // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToFuzzColor
struct UInterchangeMaterialFactoryNode_ConnectToFuzzColor_Params
{
public:
	class FString                                AttributeValue;                                    // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2981[0x7];                                     // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToEmissiveColor
struct UInterchangeMaterialFactoryNode_ConnectToEmissiveColor_Params
{
public:
	class FString                                ExpressionNodeUid;                                 // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2985[0x7];                                     // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToCloth
struct UInterchangeMaterialFactoryNode_ConnectToCloth_Params
{
public:
	class FString                                AttributeValue;                                    // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_298B[0x7];                                     // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToClearCoatRoughness
struct UInterchangeMaterialFactoryNode_ConnectToClearCoatRoughness_Params
{
public:
	class FString                                AttributeValue;                                    // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2990[0x7];                                     // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToClearCoatNormal
struct UInterchangeMaterialFactoryNode_ConnectToClearCoatNormal_Params
{
public:
	class FString                                AttributeValue;                                    // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2994[0x7];                                     // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToClearCoat
struct UInterchangeMaterialFactoryNode_ConnectToClearCoat_Params
{
public:
	class FString                                AttributeValue;                                    // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_299D[0x7];                                     // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToBaseColor
struct UInterchangeMaterialFactoryNode_ConnectToBaseColor_Params
{
public:
	class FString                                AttributeValue;                                    // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29A8[0x7];                                     // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToAnisotropy
struct UInterchangeMaterialFactoryNode_ConnectToAnisotropy_Params
{
public:
	class FString                                ExpressionNodeUid;                                 // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29B0[0x7];                                     // Fixing Size Of Struct 
};

// 0x28 (0x28 - 0x0)
// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToTransmissionColor
struct UInterchangeMaterialFactoryNode_ConnectOutputToTransmissionColor_Params
{
public:
	class FString                                ExpressionNodeUid;                                 // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OutputName;                                        // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29B8[0x7];                                     // Fixing Size Of Struct 
};

// 0x28 (0x28 - 0x0)
// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToTangent
struct UInterchangeMaterialFactoryNode_ConnectOutputToTangent_Params
{
public:
	class FString                                ExpressionNodeUid;                                 // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OutputName;                                        // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29C2[0x7];                                     // Fixing Size Of Struct 
};

// 0x28 (0x28 - 0x0)
// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToSubsurface
struct UInterchangeMaterialFactoryNode_ConnectOutputToSubsurface_Params
{
public:
	class FString                                ExpressionNodeUid;                                 // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OutputName;                                        // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29D3[0x7];                                     // Fixing Size Of Struct 
};

// 0x28 (0x28 - 0x0)
// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToSpecular
struct UInterchangeMaterialFactoryNode_ConnectOutputToSpecular_Params
{
public:
	class FString                                ExpressionNodeUid;                                 // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OutputName;                                        // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29DC[0x7];                                     // Fixing Size Of Struct 
};

// 0x28 (0x28 - 0x0)
// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToRoughness
struct UInterchangeMaterialFactoryNode_ConnectOutputToRoughness_Params
{
public:
	class FString                                ExpressionNodeUid;                                 // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OutputName;                                        // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29E6[0x7];                                     // Fixing Size Of Struct 
};

// 0x28 (0x28 - 0x0)
// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToRefraction
struct UInterchangeMaterialFactoryNode_ConnectOutputToRefraction_Params
{
public:
	class FString                                ExpressionNodeUid;                                 // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OutputName;                                        // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29F1[0x7];                                     // Fixing Size Of Struct 
};

// 0x28 (0x28 - 0x0)
// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToOpacity
struct UInterchangeMaterialFactoryNode_ConnectOutputToOpacity_Params
{
public:
	class FString                                ExpressionNodeUid;                                 // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OutputName;                                        // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29FA[0x7];                                     // Fixing Size Of Struct 
};

// 0x28 (0x28 - 0x0)
// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToOcclusion
struct UInterchangeMaterialFactoryNode_ConnectOutputToOcclusion_Params
{
public:
	class FString                                ExpressionNodeUid;                                 // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OutputName;                                        // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A07[0x7];                                     // Fixing Size Of Struct 
};

// 0x28 (0x28 - 0x0)
// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToNormal
struct UInterchangeMaterialFactoryNode_ConnectOutputToNormal_Params
{
public:
	class FString                                ExpressionNodeUid;                                 // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OutputName;                                        // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A12[0x7];                                     // Fixing Size Of Struct 
};

// 0x28 (0x28 - 0x0)
// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToMetallic
struct UInterchangeMaterialFactoryNode_ConnectOutputToMetallic_Params
{
public:
	class FString                                ExpressionNodeUid;                                 // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OutputName;                                        // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A24[0x7];                                     // Fixing Size Of Struct 
};

// 0x28 (0x28 - 0x0)
// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToFuzzColor
struct UInterchangeMaterialFactoryNode_ConnectOutputToFuzzColor_Params
{
public:
	class FString                                ExpressionNodeUid;                                 // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OutputName;                                        // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A30[0x7];                                     // Fixing Size Of Struct 
};

// 0x28 (0x28 - 0x0)
// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToEmissiveColor
struct UInterchangeMaterialFactoryNode_ConnectOutputToEmissiveColor_Params
{
public:
	class FString                                ExpressionNodeUid;                                 // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OutputName;                                        // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A49[0x7];                                     // Fixing Size Of Struct 
};

// 0x28 (0x28 - 0x0)
// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToCloth
struct UInterchangeMaterialFactoryNode_ConnectOutputToCloth_Params
{
public:
	class FString                                ExpressionNodeUid;                                 // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OutputName;                                        // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A57[0x7];                                     // Fixing Size Of Struct 
};

// 0x28 (0x28 - 0x0)
// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToClearCoatRoughness
struct UInterchangeMaterialFactoryNode_ConnectOutputToClearCoatRoughness_Params
{
public:
	class FString                                ExpressionNodeUid;                                 // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OutputName;                                        // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A61[0x7];                                     // Fixing Size Of Struct 
};

// 0x28 (0x28 - 0x0)
// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToClearCoatNormal
struct UInterchangeMaterialFactoryNode_ConnectOutputToClearCoatNormal_Params
{
public:
	class FString                                ExpressionNodeUid;                                 // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OutputName;                                        // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A71[0x7];                                     // Fixing Size Of Struct 
};

// 0x28 (0x28 - 0x0)
// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToClearCoat
struct UInterchangeMaterialFactoryNode_ConnectOutputToClearCoat_Params
{
public:
	class FString                                ExpressionNodeUid;                                 // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OutputName;                                        // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A7C[0x7];                                     // Fixing Size Of Struct 
};

// 0x28 (0x28 - 0x0)
// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToBaseColor
struct UInterchangeMaterialFactoryNode_ConnectOutputToBaseColor_Params
{
public:
	class FString                                ExpressionNodeUid;                                 // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OutputName;                                        // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A86[0x7];                                     // Fixing Size Of Struct 
};

// 0x28 (0x28 - 0x0)
// Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToAnisotropy
struct UInterchangeMaterialFactoryNode_ConnectOutputToAnisotropy_Params
{
public:
	class FString                                ExpressionNodeUid;                                 // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OutputName;                                        // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A8E[0x7];                                     // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// Function InterchangeFactoryNodes.InterchangeMaterialExpressionFactoryNode.SetCustomExpressionClassName
struct UInterchangeMaterialExpressionFactoryNode_SetCustomExpressionClassName_Params
{
public:
	class FString                                AttributeValue;                                    // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2AE1[0x7];                                     // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// Function InterchangeFactoryNodes.InterchangeMaterialExpressionFactoryNode.GetCustomExpressionClassName
struct UInterchangeMaterialExpressionFactoryNode_GetCustomExpressionClassName_Params
{
public:
	class FString                                AttributeValue;                                    // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2AE8[0x7];                                     // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// Function InterchangeFactoryNodes.InterchangeMaterialInstanceFactoryNode.SetCustomParent
struct UInterchangeMaterialInstanceFactoryNode_SetCustomParent_Params
{
public:
	class FString                                AttributeValue;                                    // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B00[0x7];                                     // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// Function InterchangeFactoryNodes.InterchangeMaterialInstanceFactoryNode.SetCustomInstanceClassName
struct UInterchangeMaterialInstanceFactoryNode_SetCustomInstanceClassName_Params
{
public:
	class FString                                AttributeValue;                                    // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B0A[0x7];                                     // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// Function InterchangeFactoryNodes.InterchangeMaterialInstanceFactoryNode.GetCustomParent
struct UInterchangeMaterialInstanceFactoryNode_GetCustomParent_Params
{
public:
	class FString                                AttributeValue;                                    // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B10[0x7];                                     // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// Function InterchangeFactoryNodes.InterchangeMaterialInstanceFactoryNode.GetCustomInstanceClassName
struct UInterchangeMaterialInstanceFactoryNode_GetCustomInstanceClassName_Params
{
public:
	class FString                                AttributeValue;                                    // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B28[0x7];                                     // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// Function InterchangeFactoryNodes.InterchangeMaterialFunctionCallExpressionFactoryNode.SetCustomMaterialFunctionDependency
struct UInterchangeMaterialFunctionCallExpressionFactoryNode_SetCustomMaterialFunctionDependency_Params
{
public:
	class FString                                AttributeValue;                                    // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B4A[0x7];                                     // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// Function InterchangeFactoryNodes.InterchangeMaterialFunctionCallExpressionFactoryNode.GetCustomMaterialFunctionDependency
struct UInterchangeMaterialFunctionCallExpressionFactoryNode_GetCustomMaterialFunctionDependency_Params
{
public:
	class FString                                AttributeValue;                                    // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B5F[0x7];                                     // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// Function InterchangeFactoryNodes.InterchangeMaterialFunctionFactoryNode.GetObjectClass
struct UInterchangeMaterialFunctionFactoryNode_GetObjectClass_Params
{
public:
	class UClass*                                ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function InterchangeFactoryNodes.InterchangeMaterialFunctionFactoryNode.GetInputConnection
struct UInterchangeMaterialFunctionFactoryNode_GetInputConnection_Params
{
public:
	class FString                                InputName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ExpressionNodeUid;                                 // 0x10(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OutputName;                                        // 0x20(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x30(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2BA4[0x7];                                     // Fixing Size Of Struct 
};

// 0x28 (0x28 - 0x0)
// Function InterchangeFactoryNodes.InterchangeMeshActorFactoryNode.SetSlotMaterialDependencyUid
struct UInterchangeMeshActorFactoryNode_SetSlotMaterialDependencyUid_Params
{
public:
	class FString                                SlotName;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                MaterialDependencyUid;                             // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2BC1[0x7];                                     // Fixing Size Of Struct 
};

// 0x70 (0x70 - 0x0)
// Function InterchangeFactoryNodes.InterchangeMeshActorFactoryNode.SetCustomGeometricTransform
struct UInterchangeMeshActorFactoryNode_SetCustomGeometricTransform_Params
{
public:
	struct CoreUObject_Transform                 AttributeValue;                                    // 0x0(0x60)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x60(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2BD1[0xF];                                     // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// Function InterchangeFactoryNodes.InterchangeMeshActorFactoryNode.SetCustomAnimationAssetUidToPlay
struct UInterchangeMeshActorFactoryNode_SetCustomAnimationAssetUidToPlay_Params
{
public:
	class FString                                AttributeValue;                                    // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2BD7[0x7];                                     // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// Function InterchangeFactoryNodes.InterchangeMeshActorFactoryNode.RemoveSlotMaterialDependencyUid
struct UInterchangeMeshActorFactoryNode_RemoveSlotMaterialDependencyUid_Params
{
public:
	class FString                                SlotName;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2BE4[0x7];                                     // Fixing Size Of Struct 
};

// 0x28 (0x28 - 0x0)
// Function InterchangeFactoryNodes.InterchangeMeshActorFactoryNode.GetSlotMaterialDependencyUid
struct UInterchangeMeshActorFactoryNode_GetSlotMaterialDependencyUid_Params
{
public:
	class FString                                SlotName;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OutMaterialDependency;                             // 0x10(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2BF1[0x7];                                     // Fixing Size Of Struct 
};

// 0x50 (0x50 - 0x0)
// Function InterchangeFactoryNodes.InterchangeMeshActorFactoryNode.GetSlotMaterialDependencies
struct UInterchangeMeshActorFactoryNode_GetSlotMaterialDependencies_Params
{
public:
	TMap<class FString, class FString>           OutMaterialDependencies;                           // 0x0(0x50)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// Function InterchangeFactoryNodes.InterchangeMeshActorFactoryNode.GetCustomGeometricTransform
struct UInterchangeMeshActorFactoryNode_GetCustomGeometricTransform_Params
{
public:
	struct CoreUObject_Transform                 AttributeValue;                                    // 0x0(0x60)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x60(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C11[0xF];                                     // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// Function InterchangeFactoryNodes.InterchangeMeshActorFactoryNode.GetCustomAnimationAssetUidToPlay
struct UInterchangeMeshActorFactoryNode_GetCustomAnimationAssetUidToPlay_Params
{
public:
	class FString                                AttributeValue;                                    // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C19[0x7];                                     // Fixing Size Of Struct 
};

// 0x28 (0x28 - 0x0)
// Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.SetSlotMaterialDependencyUid
struct UInterchangeMeshFactoryNode_SetSlotMaterialDependencyUid_Params
{
public:
	class FString                                SlotName;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                MaterialDependencyUid;                             // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C40[0x7];                                     // Fixing Size Of Struct 
};

// 0x2 (0x2 - 0x0)
// Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.SetCustomVertexColorReplace
struct UInterchangeMeshFactoryNode_SetCustomVertexColorReplace_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.SetCustomVertexColorOverride
struct UInterchangeMeshFactoryNode_SetCustomVertexColorOverride_Params
{
public:
	struct CoreUObject_Color                     AttributeValue;                                    // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C55[0x3];                                     // Fixing Size Of Struct 
};

// 0x2 (0x2 - 0x0)
// Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.SetCustomVertexColorIgnore
struct UInterchangeMeshFactoryNode_SetCustomVertexColorIgnore_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x3 (0x3 - 0x0)
// Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.SetCustomUseMikkTSpace
struct UInterchangeMeshFactoryNode_SetCustomUseMikkTSpace_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddApplyDelegate;                                 // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x2(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x3 (0x3 - 0x0)
// Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.SetCustomUseHighPrecisionTangentBasis
struct UInterchangeMeshFactoryNode_SetCustomUseHighPrecisionTangentBasis_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddApplyDelegate;                                 // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x2(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x3 (0x3 - 0x0)
// Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.SetCustomUseFullPrecisionUVs
struct UInterchangeMeshFactoryNode_SetCustomUseFullPrecisionUVs_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddApplyDelegate;                                 // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x2(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x3 (0x3 - 0x0)
// Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.SetCustomUseBackwardsCompatibleF16TruncUVs
struct UInterchangeMeshFactoryNode_SetCustomUseBackwardsCompatibleF16TruncUVs_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddApplyDelegate;                                 // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x2(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x3 (0x3 - 0x0)
// Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.SetCustomRemoveDegenerates
struct UInterchangeMeshFactoryNode_SetCustomRemoveDegenerates_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddApplyDelegate;                                 // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x2(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x3 (0x3 - 0x0)
// Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.SetCustomRecomputeTangents
struct UInterchangeMeshFactoryNode_SetCustomRecomputeTangents_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddApplyDelegate;                                 // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x2(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x3 (0x3 - 0x0)
// Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.SetCustomRecomputeNormals
struct UInterchangeMeshFactoryNode_SetCustomRecomputeNormals_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddApplyDelegate;                                 // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x2(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.SetCustomLODGroup
struct UInterchangeMeshFactoryNode_SetCustomLODGroup_Params
{
public:
	class FName                                  AttributeValue;                                    // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddApplyDelegate;                                 // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x9(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CD1[0x2];                                     // Fixing Size Of Struct 
};

// 0x3 (0x3 - 0x0)
// Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.SetCustomComputeWeightedNormals
struct UInterchangeMeshFactoryNode_SetCustomComputeWeightedNormals_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddApplyDelegate;                                 // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x2(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.RemoveSlotMaterialDependencyUid
struct UInterchangeMeshFactoryNode_RemoveSlotMaterialDependencyUid_Params
{
public:
	class FString                                SlotName;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CF3[0x7];                                     // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.RemoveLodDataUniqueId
struct UInterchangeMeshFactoryNode_RemoveLodDataUniqueId_Params
{
public:
	class FString                                LodDataUniqueId;                                   // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CFE[0x7];                                     // Fixing Size Of Struct 
};

// 0x28 (0x28 - 0x0)
// Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetSlotMaterialDependencyUid
struct UInterchangeMeshFactoryNode_GetSlotMaterialDependencyUid_Params
{
public:
	class FString                                SlotName;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OutMaterialDependency;                             // 0x10(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D1B[0x7];                                     // Fixing Size Of Struct 
};

// 0x50 (0x50 - 0x0)
// Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetSlotMaterialDependencies
struct UInterchangeMeshFactoryNode_GetSlotMaterialDependencies_Params
{
public:
	TMap<class FString, class FString>           OutMaterialDependencies;                           // 0x0(0x50)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetLodDataUniqueIds
struct UInterchangeMeshFactoryNode_GetLodDataUniqueIds_Params
{
public:
	TArray<class FString>                        OutLodDataUniqueIds;                               // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetLodDataCount
struct UInterchangeMeshFactoryNode_GetLodDataCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetCustomVertexColorReplace
struct UInterchangeMeshFactoryNode_GetCustomVertexColorReplace_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetCustomVertexColorOverride
struct UInterchangeMeshFactoryNode_GetCustomVertexColorOverride_Params
{
public:
	struct CoreUObject_Color                     AttributeValue;                                    // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D53[0x3];                                     // Fixing Size Of Struct 
};

// 0x2 (0x2 - 0x0)
// Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetCustomVertexColorIgnore
struct UInterchangeMeshFactoryNode_GetCustomVertexColorIgnore_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetCustomUseMikkTSpace
struct UInterchangeMeshFactoryNode_GetCustomUseMikkTSpace_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetCustomUseHighPrecisionTangentBasis
struct UInterchangeMeshFactoryNode_GetCustomUseHighPrecisionTangentBasis_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetCustomUseFullPrecisionUVs
struct UInterchangeMeshFactoryNode_GetCustomUseFullPrecisionUVs_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetCustomUseBackwardsCompatibleF16TruncUVs
struct UInterchangeMeshFactoryNode_GetCustomUseBackwardsCompatibleF16TruncUVs_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetCustomRemoveDegenerates
struct UInterchangeMeshFactoryNode_GetCustomRemoveDegenerates_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetCustomRecomputeTangents
struct UInterchangeMeshFactoryNode_GetCustomRecomputeTangents_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetCustomRecomputeNormals
struct UInterchangeMeshFactoryNode_GetCustomRecomputeNormals_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetCustomLODGroup
struct UInterchangeMeshFactoryNode_GetCustomLODGroup_Params
{
public:
	class FName                                  AttributeValue;                                    // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2E01[0x3];                                     // Fixing Size Of Struct 
};

// 0x2 (0x2 - 0x0)
// Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetCustomComputeWeightedNormals
struct UInterchangeMeshFactoryNode_GetCustomComputeWeightedNormals_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.AddLodDataUniqueId
struct UInterchangeMeshFactoryNode_AddLodDataUniqueId_Params
{
public:
	class FString                                LodDataUniqueId;                                   // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2E1D[0x7];                                     // Fixing Size Of Struct 
};

// 0x3 (0x3 - 0x0)
// Function InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.SetCustomUseHighPrecisionSkinWeights
struct UInterchangeSkeletalMeshFactoryNode_SetCustomUseHighPrecisionSkinWeights_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddApplyDelegate;                                 // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x2(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.SetCustomThresholdUV
struct UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdUV_Params
{
public:
	float                                        AttributeValue;                                    // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddApplyDelegate;                                 // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x5(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2E6D[0x2];                                     // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// Function InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.SetCustomThresholdTangentNormal
struct UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdTangentNormal_Params
{
public:
	float                                        AttributeValue;                                    // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddApplyDelegate;                                 // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x5(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2E8E[0x2];                                     // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// Function InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.SetCustomThresholdPosition
struct UInterchangeSkeletalMeshFactoryNode_SetCustomThresholdPosition_Params
{
public:
	float                                        AttributeValue;                                    // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddApplyDelegate;                                 // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x5(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2EA0[0x2];                                     // Fixing Size Of Struct 
};

// 0x28 (0x28 - 0x0)
// Function InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.SetCustomSkeletonSoftObjectPath
struct UInterchangeSkeletalMeshFactoryNode_SetCustomSkeletonSoftObjectPath_Params
{
public:
	struct CoreUObject_SoftObjectPath            AttributeValue;                                    // 0x0(0x20)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2EB2[0x7];                                     // Fixing Size Of Struct 
};

// 0x28 (0x28 - 0x0)
// Function InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.SetCustomPhysicAssetSoftObjectPath
struct UInterchangeSkeletalMeshFactoryNode_SetCustomPhysicAssetSoftObjectPath_Params
{
public:
	struct CoreUObject_SoftObjectPath            AttributeValue;                                    // 0x0(0x20)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2EC4[0x7];                                     // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// Function InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.SetCustomMorphThresholdPosition
struct UInterchangeSkeletalMeshFactoryNode_SetCustomMorphThresholdPosition_Params
{
public:
	float                                        AttributeValue;                                    // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddApplyDelegate;                                 // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x5(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2ECE[0x2];                                     // Fixing Size Of Struct 
};

// 0x2 (0x2 - 0x0)
// Function InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.SetCustomImportMorphTarget
struct UInterchangeSkeletalMeshFactoryNode_SetCustomImportMorphTarget_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.SetCustomImportContentType
struct UInterchangeSkeletalMeshFactoryNode_SetCustomImportContentType_Params
{
public:
	enum class EInterchangeSkeletalMeshContentType AttributeValue;                                    // 0x0(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.SetCustomCreatePhysicsAsset
struct UInterchangeSkeletalMeshFactoryNode_SetCustomCreatePhysicsAsset_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.SetCustomBoneInfluenceLimit
struct UInterchangeSkeletalMeshFactoryNode_SetCustomBoneInfluenceLimit_Params
{
public:
	int32                                        AttributeValue;                                    // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddApplyDelegate;                                 // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x5(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2F0D[0x2];                                     // Fixing Size Of Struct 
};

// 0x30 (0x30 - 0x0)
// Function InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.InitializeSkeletalMeshNode
struct UInterchangeSkeletalMeshFactoryNode_InitializeSkeletalMeshNode_Params
{
public:
	class FString                                UniqueID;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DisplayLabel;                                      // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InAssetClass;                                      // 0x20(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.GetObjectClass
struct UInterchangeSkeletalMeshFactoryNode_GetObjectClass_Params
{
public:
	class UClass*                                ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.GetCustomUseHighPrecisionSkinWeights
struct UInterchangeSkeletalMeshFactoryNode_GetCustomUseHighPrecisionSkinWeights_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.GetCustomThresholdUV
struct UInterchangeSkeletalMeshFactoryNode_GetCustomThresholdUV_Params
{
public:
	float                                        AttributeValue;                                    // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2F40[0x3];                                     // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// Function InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.GetCustomThresholdTangentNormal
struct UInterchangeSkeletalMeshFactoryNode_GetCustomThresholdTangentNormal_Params
{
public:
	float                                        AttributeValue;                                    // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2F53[0x3];                                     // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// Function InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.GetCustomThresholdPosition
struct UInterchangeSkeletalMeshFactoryNode_GetCustomThresholdPosition_Params
{
public:
	float                                        AttributeValue;                                    // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2F5E[0x3];                                     // Fixing Size Of Struct 
};

// 0x28 (0x28 - 0x0)
// Function InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.GetCustomSkeletonSoftObjectPath
struct UInterchangeSkeletalMeshFactoryNode_GetCustomSkeletonSoftObjectPath_Params
{
public:
	struct CoreUObject_SoftObjectPath            AttributeValue;                                    // 0x0(0x20)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2F6C[0x7];                                     // Fixing Size Of Struct 
};

// 0x28 (0x28 - 0x0)
// Function InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.GetCustomPhysicAssetSoftObjectPath
struct UInterchangeSkeletalMeshFactoryNode_GetCustomPhysicAssetSoftObjectPath_Params
{
public:
	struct CoreUObject_SoftObjectPath            AttributeValue;                                    // 0x0(0x20)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2F7B[0x7];                                     // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// Function InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.GetCustomMorphThresholdPosition
struct UInterchangeSkeletalMeshFactoryNode_GetCustomMorphThresholdPosition_Params
{
public:
	float                                        AttributeValue;                                    // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2FA4[0x3];                                     // Fixing Size Of Struct 
};

// 0x2 (0x2 - 0x0)
// Function InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.GetCustomImportMorphTarget
struct UInterchangeSkeletalMeshFactoryNode_GetCustomImportMorphTarget_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.GetCustomImportContentType
struct UInterchangeSkeletalMeshFactoryNode_GetCustomImportContentType_Params
{
public:
	enum class EInterchangeSkeletalMeshContentType AttributeValue;                                    // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.GetCustomCreatePhysicsAsset
struct UInterchangeSkeletalMeshFactoryNode_GetCustomCreatePhysicsAsset_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.GetCustomBoneInfluenceLimit
struct UInterchangeSkeletalMeshFactoryNode_GetCustomBoneInfluenceLimit_Params
{
public:
	int32                                        AttributeValue;                                    // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2FE8[0x3];                                     // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// Function InterchangeFactoryNodes.InterchangeSkeletalMeshLodDataNode.SetCustomSkeletonUid
struct UInterchangeSkeletalMeshLodDataNode_SetCustomSkeletonUid_Params
{
public:
	class FString                                AttributeValue;                                    // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3016[0x7];                                     // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// Function InterchangeFactoryNodes.InterchangeSkeletalMeshLodDataNode.RemoveMeshUid
struct UInterchangeSkeletalMeshLodDataNode_RemoveMeshUid_Params
{
public:
	class FString                                MeshName;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3029[0x7];                                     // Fixing Size Of Struct 
};

// 0x1 (0x1 - 0x0)
// Function InterchangeFactoryNodes.InterchangeSkeletalMeshLodDataNode.RemoveAllMeshes
struct UInterchangeSkeletalMeshLodDataNode_RemoveAllMeshes_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function InterchangeFactoryNodes.InterchangeSkeletalMeshLodDataNode.GetMeshUidsCount
struct UInterchangeSkeletalMeshLodDataNode_GetMeshUidsCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function InterchangeFactoryNodes.InterchangeSkeletalMeshLodDataNode.GetMeshUids
struct UInterchangeSkeletalMeshLodDataNode_GetMeshUids_Params
{
public:
	TArray<class FString>                        OutMeshNames;                                      // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function InterchangeFactoryNodes.InterchangeSkeletalMeshLodDataNode.GetCustomSkeletonUid
struct UInterchangeSkeletalMeshLodDataNode_GetCustomSkeletonUid_Params
{
public:
	class FString                                AttributeValue;                                    // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_306F[0x7];                                     // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// Function InterchangeFactoryNodes.InterchangeSkeletalMeshLodDataNode.AddMeshUid
struct UInterchangeSkeletalMeshLodDataNode_AddMeshUid_Params
{
public:
	class FString                                MeshName;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3092[0x7];                                     // Fixing Size Of Struct 
};

// 0x3 (0x3 - 0x0)
// Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.SetCustomSupportFaceRemap
struct UInterchangeStaticMeshFactoryNode_SetCustomSupportFaceRemap_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddApplyDelegate;                                 // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x2(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.SetCustomSrcLightmapIndex
struct UInterchangeStaticMeshFactoryNode_SetCustomSrcLightmapIndex_Params
{
public:
	int32                                        AttributeValue;                                    // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddApplyDelegate;                                 // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x5(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_30F1[0x2];                                     // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.SetCustomMinLightmapResolution
struct UInterchangeStaticMeshFactoryNode_SetCustomMinLightmapResolution_Params
{
public:
	int32                                        AttributeValue;                                    // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddApplyDelegate;                                 // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x5(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3102[0x2];                                     // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.SetCustomMaxLumenMeshCards
struct UInterchangeStaticMeshFactoryNode_SetCustomMaxLumenMeshCards_Params
{
public:
	int32                                        AttributeValue;                                    // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddApplyDelegate;                                 // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x5(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3122[0x2];                                     // Fixing Size Of Struct 
};

// 0x3 (0x3 - 0x0)
// Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.SetCustomGenerateLightmapUVs
struct UInterchangeStaticMeshFactoryNode_SetCustomGenerateLightmapUVs_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddApplyDelegate;                                 // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x2(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x3 (0x3 - 0x0)
// Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.SetCustomGenerateDistanceFieldAsIfTwoSided
struct UInterchangeStaticMeshFactoryNode_SetCustomGenerateDistanceFieldAsIfTwoSided_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddApplyDelegate;                                 // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x2(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.SetCustomDstLightmapIndex
struct UInterchangeStaticMeshFactoryNode_SetCustomDstLightmapIndex_Params
{
public:
	int32                                        AttributeValue;                                    // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddApplyDelegate;                                 // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x5(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_314F[0x2];                                     // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.SetCustomDistanceFieldResolutionScale
struct UInterchangeStaticMeshFactoryNode_SetCustomDistanceFieldResolutionScale_Params
{
public:
	float                                        AttributeValue;                                    // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddApplyDelegate;                                 // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x5(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_315E[0x2];                                     // Fixing Size Of Struct 
};

// 0x28 (0x28 - 0x0)
// Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.SetCustomDistanceFieldReplacementMesh
struct UInterchangeStaticMeshFactoryNode_SetCustomDistanceFieldReplacementMesh_Params
{
public:
	struct CoreUObject_SoftObjectPath            AttributeValue;                                    // 0x0(0x20)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddApplyDelegate;                                 // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x21(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_317C[0x6];                                     // Fixing Size Of Struct 
};

// 0x20 (0x20 - 0x0)
// Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.SetCustomBuildScale3D
struct UInterchangeStaticMeshFactoryNode_SetCustomBuildScale3D_Params
{
public:
	struct CoreUObject_Vector                    AttributeValue;                                    // 0x0(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddApplyDelegate;                                 // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x19(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3186[0x6];                                     // Fixing Size Of Struct 
};

// 0x3 (0x3 - 0x0)
// Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.SetCustomBuildReversedIndexBuffer
struct UInterchangeStaticMeshFactoryNode_SetCustomBuildReversedIndexBuffer_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddApplyDelegate;                                 // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x2(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x3 (0x3 - 0x0)
// Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.SetCustomBuildNanite
struct UInterchangeStaticMeshFactoryNode_SetCustomBuildNanite_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddApplyDelegate;                                 // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x2(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.RemoveSocketUd
struct UInterchangeStaticMeshFactoryNode_RemoveSocketUd_Params
{
public:
	class FString                                SocketUid;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_31ED[0x7];                                     // Fixing Size Of Struct 
};

// 0x30 (0x30 - 0x0)
// Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.InitializeStaticMeshNode
struct UInterchangeStaticMeshFactoryNode_InitializeStaticMeshNode_Params
{
public:
	class FString                                UniqueID;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DisplayLabel;                                      // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InAssetClass;                                      // 0x20(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.GetSocketUids
struct UInterchangeStaticMeshFactoryNode_GetSocketUids_Params
{
public:
	TArray<class FString>                        OutSocketUids;                                     // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.GetSocketUidCount
struct UInterchangeStaticMeshFactoryNode_GetSocketUidCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.GetObjectClass
struct UInterchangeStaticMeshFactoryNode_GetObjectClass_Params
{
public:
	class UClass*                                ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.GetCustomSupportFaceRemap
struct UInterchangeStaticMeshFactoryNode_GetCustomSupportFaceRemap_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.GetCustomSrcLightmapIndex
struct UInterchangeStaticMeshFactoryNode_GetCustomSrcLightmapIndex_Params
{
public:
	int32                                        AttributeValue;                                    // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_326B[0x3];                                     // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.GetCustomMinLightmapResolution
struct UInterchangeStaticMeshFactoryNode_GetCustomMinLightmapResolution_Params
{
public:
	int32                                        AttributeValue;                                    // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_328E[0x3];                                     // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.GetCustomMaxLumenMeshCards
struct UInterchangeStaticMeshFactoryNode_GetCustomMaxLumenMeshCards_Params
{
public:
	int32                                        AttributeValue;                                    // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_329D[0x3];                                     // Fixing Size Of Struct 
};

// 0x2 (0x2 - 0x0)
// Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.GetCustomGenerateLightmapUVs
struct UInterchangeStaticMeshFactoryNode_GetCustomGenerateLightmapUVs_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.GetCustomGenerateDistanceFieldAsIfTwoSided
struct UInterchangeStaticMeshFactoryNode_GetCustomGenerateDistanceFieldAsIfTwoSided_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.GetCustomDstLightmapIndex
struct UInterchangeStaticMeshFactoryNode_GetCustomDstLightmapIndex_Params
{
public:
	int32                                        AttributeValue;                                    // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32CB[0x3];                                     // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.GetCustomDistanceFieldResolutionScale
struct UInterchangeStaticMeshFactoryNode_GetCustomDistanceFieldResolutionScale_Params
{
public:
	float                                        AttributeValue;                                    // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32FF[0x3];                                     // Fixing Size Of Struct 
};

// 0x28 (0x28 - 0x0)
// Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.GetCustomDistanceFieldReplacementMesh
struct UInterchangeStaticMeshFactoryNode_GetCustomDistanceFieldReplacementMesh_Params
{
public:
	struct CoreUObject_SoftObjectPath            AttributeValue;                                    // 0x0(0x20)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3318[0x7];                                     // Fixing Size Of Struct 
};

// 0x20 (0x20 - 0x0)
// Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.GetCustomBuildScale3D
struct UInterchangeStaticMeshFactoryNode_GetCustomBuildScale3D_Params
{
public:
	struct CoreUObject_Vector                    AttributeValue;                                    // 0x0(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3331[0x7];                                     // Fixing Size Of Struct 
};

// 0x2 (0x2 - 0x0)
// Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.GetCustomBuildReversedIndexBuffer
struct UInterchangeStaticMeshFactoryNode_GetCustomBuildReversedIndexBuffer_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.GetCustomBuildNanite
struct UInterchangeStaticMeshFactoryNode_GetCustomBuildNanite_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.AddSocketUids
struct UInterchangeStaticMeshFactoryNode_AddSocketUids_Params
{
public:
	TArray<class FString>                        InSocketUids;                                      // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_336C[0x7];                                     // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.AddSocketUid
struct UInterchangeStaticMeshFactoryNode_AddSocketUid_Params
{
public:
	class FString                                SocketUid;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3440[0x7];                                     // Fixing Size Of Struct 
};

// 0x2 (0x2 - 0x0)
// Function InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.SetOneConvexHullPerUCX
struct UInterchangeStaticMeshLodDataNode_SetOneConvexHullPerUCX_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.SetImportCollision
struct UInterchangeStaticMeshLodDataNode_SetImportCollision_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.RemoveSphereCollisionMeshUid
struct UInterchangeStaticMeshLodDataNode_RemoveSphereCollisionMeshUid_Params
{
public:
	class FString                                MeshName;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_34A4[0x7];                                     // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// Function InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.RemoveMeshUid
struct UInterchangeStaticMeshLodDataNode_RemoveMeshUid_Params
{
public:
	class FString                                MeshName;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_34BE[0x7];                                     // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// Function InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.RemoveConvexCollisionMeshUid
struct UInterchangeStaticMeshLodDataNode_RemoveConvexCollisionMeshUid_Params
{
public:
	class FString                                MeshName;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_34CF[0x7];                                     // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// Function InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.RemoveCapsuleCollisionMeshUid
struct UInterchangeStaticMeshLodDataNode_RemoveCapsuleCollisionMeshUid_Params
{
public:
	class FString                                MeshName;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_34E0[0x7];                                     // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// Function InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.RemoveBoxCollisionMeshUid
struct UInterchangeStaticMeshLodDataNode_RemoveBoxCollisionMeshUid_Params
{
public:
	class FString                                MeshName;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_34FF[0x7];                                     // Fixing Size Of Struct 
};

// 0x1 (0x1 - 0x0)
// Function InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.RemoveAllSphereCollisionMeshes
struct UInterchangeStaticMeshLodDataNode_RemoveAllSphereCollisionMeshes_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.RemoveAllMeshes
struct UInterchangeStaticMeshLodDataNode_RemoveAllMeshes_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.RemoveAllConvexCollisionMeshes
struct UInterchangeStaticMeshLodDataNode_RemoveAllConvexCollisionMeshes_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.RemoveAllCapsuleCollisionMeshes
struct UInterchangeStaticMeshLodDataNode_RemoveAllCapsuleCollisionMeshes_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.RemoveAllBoxCollisionMeshes
struct UInterchangeStaticMeshLodDataNode_RemoveAllBoxCollisionMeshes_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.GetSphereCollisionMeshUidsCount
struct UInterchangeStaticMeshLodDataNode_GetSphereCollisionMeshUidsCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.GetSphereCollisionMeshUids
struct UInterchangeStaticMeshLodDataNode_GetSphereCollisionMeshUids_Params
{
public:
	TArray<class FString>                        OutMeshNames;                                      // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.GetOneConvexHullPerUCX
struct UInterchangeStaticMeshLodDataNode_GetOneConvexHullPerUCX_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.GetMeshUidsCount
struct UInterchangeStaticMeshLodDataNode_GetMeshUidsCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.GetMeshUids
struct UInterchangeStaticMeshLodDataNode_GetMeshUids_Params
{
public:
	TArray<class FString>                        OutMeshNames;                                      // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.GetImportCollision
struct UInterchangeStaticMeshLodDataNode_GetImportCollision_Params
{
public:
	bool                                         AttributeValue;                                    // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.GetConvexCollisionMeshUidsCount
struct UInterchangeStaticMeshLodDataNode_GetConvexCollisionMeshUidsCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.GetConvexCollisionMeshUids
struct UInterchangeStaticMeshLodDataNode_GetConvexCollisionMeshUids_Params
{
public:
	TArray<class FString>                        OutMeshNames;                                      // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.GetCapsuleCollisionMeshUidsCount
struct UInterchangeStaticMeshLodDataNode_GetCapsuleCollisionMeshUidsCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.GetCapsuleCollisionMeshUids
struct UInterchangeStaticMeshLodDataNode_GetCapsuleCollisionMeshUids_Params
{
public:
	TArray<class FString>                        OutMeshNames;                                      // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.GetBoxCollisionMeshUidsCount
struct UInterchangeStaticMeshLodDataNode_GetBoxCollisionMeshUidsCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.GetBoxCollisionMeshUids
struct UInterchangeStaticMeshLodDataNode_GetBoxCollisionMeshUids_Params
{
public:
	TArray<class FString>                        OutMeshNames;                                      // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.AddSphereCollisionMeshUid
struct UInterchangeStaticMeshLodDataNode_AddSphereCollisionMeshUid_Params
{
public:
	class FString                                MeshName;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35C6[0x7];                                     // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// Function InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.AddMeshUid
struct UInterchangeStaticMeshLodDataNode_AddMeshUid_Params
{
public:
	class FString                                MeshName;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35D4[0x7];                                     // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// Function InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.AddConvexCollisionMeshUid
struct UInterchangeStaticMeshLodDataNode_AddConvexCollisionMeshUid_Params
{
public:
	class FString                                MeshName;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35DC[0x7];                                     // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// Function InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.AddCapsuleCollisionMeshUid
struct UInterchangeStaticMeshLodDataNode_AddCapsuleCollisionMeshUid_Params
{
public:
	class FString                                MeshName;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35F1[0x7];                                     // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// Function InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.AddBoxCollisionMeshUid
struct UInterchangeStaticMeshLodDataNode_AddBoxCollisionMeshUid_Params
{
public:
	class FString                                MeshName;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35F5[0x7];                                     // Fixing Size Of Struct 
};

}
}


