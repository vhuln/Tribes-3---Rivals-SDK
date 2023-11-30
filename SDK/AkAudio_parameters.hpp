#pragma once




#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x1 (0x1 - 0x0)
// Function AkAudio.AkPortalComponent.PortalPlacementValid
struct UAkPortalComponent_PortalPlacementValid_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function AkAudio.AkPortalComponent.GetPrimitiveParent
struct UAkPortalComponent_GetPrimitiveParent_Params
{
public:
	class UPrimitiveComponent*                   ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AkAudio.AkPortalComponent.GetCurrentState
struct UAkPortalComponent_GetCurrentState_Params
{
public:
	enum class EAkAcousticPortalState            ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AkAudio.AkAcousticPortal.GetCurrentState
struct AAkAcousticPortal_GetCurrentState_Params
{
public:
	enum class EAkAcousticPortalState            ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AkAudio.AkAudioType.UnloadData
struct UAkAudioType_UnloadData_Params
{
public:
	bool                                         bAsync;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function AkAudio.AkAudioType.GetWwiseShortId
struct UAkAudioType_GetWwiseShortId_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AkAudio.AkAndroidInitializationSettings.MigrateMultiCoreRendering
struct UAkAndroidInitializationSettings_MigrateMultiCoreRendering_Params
{
public:
	bool                                         NewValue;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function AkAudio.AkAudioEvent.PostOnGameObjectAndWait
struct UAkAudioEvent_PostOnGameObjectAndWait_Params
{
public:
	class UAkGameObject*                         GameObject;                                        // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Engine_LatentActionInfo               LatentActionInfo;                                  // 0x8(0x18)(ConstParm, Parm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x20(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D81[0x4];                                      // Fixing Size Of Struct 
};

// 0x20 (0x20 - 0x0)
// Function AkAudio.AkAudioEvent.PostOnGameObject
struct UAkAudioEvent_PostOnGameObject_Params
{
public:
	class UAkGameObject*                         GameObject;                                        // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CallbackMask;                                      // 0x18(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x1C(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function AkAudio.AkAudioEvent.PostOnComponentAndWait
struct UAkAudioEvent_PostOnComponentAndWait_Params
{
public:
	class UAkComponent*                          Component;                                         // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStopWhenAttachedObjectDestroyed;                  // 0x8(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DA1[0x7];                                      // Fixing Size After Last Property  
	struct Engine_LatentActionInfo               LatentActionInfo;                                  // 0x10(0x18)(ConstParm, Parm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x28(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DA3[0x4];                                      // Fixing Size Of Struct 
};

// 0x28 (0x28 - 0x0)
// Function AkAudio.AkAudioEvent.PostOnComponent
struct UAkAudioEvent_PostOnComponent_Params
{
public:
	class UAkComponent*                          Component;                                         // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CallbackMask;                                      // 0x18(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStopWhenAttachedObjectDestroyed;                  // 0x1C(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DB5[0x3];                                      // Fixing Size After Last Property  
	int32                                        ReturnValue;                                       // 0x20(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DB6[0x4];                                      // Fixing Size Of Struct 
};

// 0x30 (0x30 - 0x0)
// Function AkAudio.AkAudioEvent.PostOnActorAndWait
struct UAkAudioEvent_PostOnActorAndWait_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStopWhenAttachedObjectDestroyed;                  // 0x8(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DC5[0x7];                                      // Fixing Size After Last Property  
	struct Engine_LatentActionInfo               LatentActionInfo;                                  // 0x10(0x18)(ConstParm, Parm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x28(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DC7[0x4];                                      // Fixing Size Of Struct 
};

// 0x28 (0x28 - 0x0)
// Function AkAudio.AkAudioEvent.PostOnActor
struct UAkAudioEvent_PostOnActor_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CallbackMask;                                      // 0x18(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStopWhenAttachedObjectDestroyed;                  // 0x1C(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DDC[0x3];                                      // Fixing Size After Last Property  
	int32                                        ReturnValue;                                       // 0x20(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DDE[0x4];                                      // Fixing Size Of Struct 
};

// 0x58 (0x58 - 0x0)
// Function AkAudio.AkAudioEvent.PostAtLocation
struct UAkAudioEvent_PostAtLocation_Params
{
public:
	struct CoreUObject_Vector                    Location;                                          // 0x0(0x18)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Rotator                   Orientation;                                       // 0x18(0x18)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Callback;                                          // 0x30(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CallbackMask;                                      // 0x40(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DFA[0x4];                                      // Fixing Size After Last Property  
	class UObject*                               WorldContextObject;                                // 0x48(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x50(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DFD[0x4];                                      // Fixing Size Of Struct 
};

// 0x20 (0x20 - 0x0)
// Function AkAudio.AkAudioEvent.ExecuteAction
struct UAkAudioEvent_ExecuteAction_Params
{
public:
	enum class EAkActionOnEventType              ActionType;                                        // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E20[0x7];                                      // Fixing Size After Last Property  
	class AActor*                                Actor;                                             // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PlayingID;                                         // 0x10(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TransitionDuration;                                // 0x14(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAkCurveInterpolation             FadeCurve;                                         // 0x18(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E25[0x3];                                      // Fixing Size After Last Property  
	int32                                        ReturnValue;                                       // 0x1C(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function AkAudio.AkGameObject.SetRTPCValue
struct UAkGameObject_SetRTPCValue_Params
{
public:
	class UAkRtpc*                               RTPCValue;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Value;                                             // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InterpolationTimeMs;                               // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                RTPC;                                              // 0x10(0x10)(Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function AkAudio.AkGameObject.PostAssociatedAkEventAsync
struct UAkGameObject_PostAssociatedAkEventAsync_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CallbackMask;                                      // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           PostEventCallback;                                 // 0xC(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E6C[0x4];                                      // Fixing Size After Last Property  
	struct Engine_LatentActionInfo               LatentInfo;                                        // 0x20(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        PlayingID;                                         // 0x38(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E6E[0x4];                                      // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// Function AkAudio.AkGameObject.PostAssociatedAkEvent
struct UAkGameObject_PostAssociatedAkEvent_Params
{
public:
	int32                                        CallbackMask;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           PostEventCallback;                                 // 0x4(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x14(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function AkAudio.AkGameObject.PostAkEventAsync
struct UAkGameObject_PostAkEventAsync_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                         AkEvent;                                           // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PlayingID;                                         // 0x10(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CallbackMask;                                      // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           PostEventCallback;                                 // 0x18(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Engine_LatentActionInfo               LatentInfo;                                        // 0x28(0x18)(Parm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function AkAudio.AkGameObject.PostAkEvent
struct UAkGameObject_PostAkEvent_Params
{
public:
	class UAkAudioEvent*                         AkEvent;                                           // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CallbackMask;                                      // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           PostEventCallback;                                 // 0xC(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EB7[0x4];                                      // Fixing Size After Last Property  
	class FString                                InEventName;                                       // 0x20(0x10)(Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x30(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EB9[0x4];                                      // Fixing Size Of Struct 
};

// 0x30 (0x30 - 0x0)
// Function AkAudio.AkGameObject.GetRTPCValue
struct UAkGameObject_GetRTPCValue_Params
{
public:
	class UAkRtpc*                               RTPCValue;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERTPCValueType                    InputValueType;                                    // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EDD[0x3];                                      // Fixing Size After Last Property  
	float                                        Value;                                             // 0xC(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERTPCValueType                    OutputValueType;                                   // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EDF[0x7];                                      // Fixing Size After Last Property  
	class FString                                RTPC;                                              // 0x18(0x10)(Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PlayingID;                                         // 0x28(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EE1[0x4];                                      // Fixing Size Of Struct 
};

// 0x1 (0x1 - 0x0)
// Function AkAudio.AkComponent.UseReverbVolumes
struct UAkComponent_UseReverbVolumes_Params
{
public:
	bool                                         InUseReverbVolumes;                                // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function AkAudio.AkComponent.UseEarlyReflections
struct UAkComponent_UseEarlyReflections_Params
{
public:
	class UAkAuxBus*                             AuxBus;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Order;                                             // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BusSendGain;                                       // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxPathLength;                                     // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SpotReflectors;                                    // 0x14(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F22[0x3];                                      // Fixing Size After Last Property  
	class FString                                AuxBusName;                                        // 0x18(0x10)(Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function AkAudio.AkComponent.SetSwitch
struct UAkComponent_SetSwitch_Params
{
public:
	class UAkSwitchValue*                        SwitchValue;                                       // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SwitchGroup;                                       // 0x8(0x10)(Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SwitchState;                                       // 0x18(0x10)(Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AkAudio.AkComponent.SetStopWhenOwnerDestroyed
struct UAkComponent_SetStopWhenOwnerDestroyed_Params
{
public:
	bool                                         bStopWhenOwnerDestroyed;                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function AkAudio.AkComponent.SetOutputBusVolume
struct UAkComponent_SetOutputBusVolume_Params
{
public:
	float                                        BusVolume;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AkAudio.AkComponent.SetListeners
struct UAkComponent_SetListeners_Params
{
public:
	TArray<class UAkComponent*>                  Listeners;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function AkAudio.AkComponent.SetGameObjectRadius
struct UAkComponent_SetGameObjectRadius_Params
{
public:
	float                                        In_outerRadius;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        In_innerRadius;                                    // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AkAudio.AkComponent.SetEnableSpotReflectors
struct UAkComponent_SetEnableSpotReflectors_Params
{
public:
	bool                                         In_enable;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function AkAudio.AkComponent.SetEarlyReflectionsVolume
struct UAkComponent_SetEarlyReflectionsVolume_Params
{
public:
	float                                        SendVolume;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AkAudio.AkComponent.SetEarlyReflectionsAuxBus
struct UAkComponent_SetEarlyReflectionsAuxBus_Params
{
public:
	class FString                                AuxBusName;                                        // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function AkAudio.AkComponent.SetAttenuationScalingFactor
struct UAkComponent_SetAttenuationScalingFactor_Params
{
public:
	float                                        Value;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function AkAudio.AkComponent.PostTrigger
struct UAkComponent_PostTrigger_Params
{
public:
	class UAkTrigger*                            TriggerValue;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Trigger;                                           // 0x8(0x10)(Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function AkAudio.AkComponent.PostAssociatedAkEventAndWaitForEndAsync
struct UAkComponent_PostAssociatedAkEventAndWaitForEndAsync_Params
{
public:
	int32                                        PlayingID;                                         // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FC3[0x4];                                      // Fixing Size After Last Property  
	struct Engine_LatentActionInfo               LatentInfo;                                        // 0x8(0x18)(Parm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function AkAudio.AkComponent.PostAssociatedAkEventAndWaitForEnd
struct UAkComponent_PostAssociatedAkEventAndWaitForEnd_Params
{
public:
	struct Engine_LatentActionInfo               LatentInfo;                                        // 0x0(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x18(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FD4[0x4];                                      // Fixing Size Of Struct 
};

// 0x28 (0x28 - 0x0)
// Function AkAudio.AkComponent.PostAkEventAndWaitForEndAsync
struct UAkComponent_PostAkEventAndWaitForEndAsync_Params
{
public:
	class UAkAudioEvent*                         AkEvent;                                           // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PlayingID;                                         // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FED[0x4];                                      // Fixing Size After Last Property  
	struct Engine_LatentActionInfo               LatentInfo;                                        // 0x10(0x18)(Parm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function AkAudio.AkComponent.PostAkEventAndWaitForEnd
struct UAkComponent_PostAkEventAndWaitForEnd_Params
{
public:
	class UAkAudioEvent*                         AkEvent;                                           // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                In_EventName;                                      // 0x8(0x10)(Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Engine_LatentActionInfo               LatentInfo;                                        // 0x18(0x18)(Parm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x30(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1004[0x4];                                     // Fixing Size Of Struct 
};

// 0x1 (0x1 - 0x0)
// Function AkAudio.AkComponent.GetOcclusionCollisionChannel
struct UAkComponent_GetOcclusionCollisionChannel_Params
{
public:
	enum class ECollisionChannel                 ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function AkAudio.AkComponent.GetAttenuationRadius
struct UAkComponent_GetAttenuationRadius_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function AkAudio.AkAudioInputComponent.PostAssociatedAudioInputEvent
struct UAkAudioInputComponent_PostAssociatedAudioInputEvent_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AkAudio.AkCheckBox.SetIsChecked
struct UAkCheckBox_SetIsChecked_Params
{
public:
	bool                                         InIsChecked;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AkAudio.AkCheckBox.SetCheckedState
struct UAkCheckBox_SetCheckedState_Params
{
public:
	enum class ECheckBoxState                    InCheckedState;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AkAudio.AkCheckBox.SetAkItemId
struct UAkCheckBox_SetAkItemId_Params
{
public:
	struct CoreUObject_Guid                      ItemId;                                            // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AkAudio.AkCheckBox.SetAkBoolProperty
struct UAkCheckBox_SetAkBoolProperty_Params
{
public:
	class FString                                ItemProperty;                                      // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AkAudio.AkCheckBox.IsPressed
struct UAkCheckBox_IsPressed_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AkAudio.AkCheckBox.IsChecked
struct UAkCheckBox_IsChecked_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AkAudio.AkCheckBox.GetCheckedState
struct UAkCheckBox_GetCheckedState_Params
{
public:
	enum class ECheckBoxState                    ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AkAudio.AkCheckBox.GetAkProperty
struct UAkCheckBox_GetAkProperty_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AkAudio.AkCheckBox.GetAkItemId
struct UAkCheckBox_GetAkItemId_Params
{
public:
	struct CoreUObject_Guid                      ReturnValue;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AkAudio.AkGameplayStatics.UseReverbVolumes
struct UAkGameplayStatics_UseReverbVolumes_Params
{
public:
	bool                                         InUseReverbVolumes;                                // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_124A[0x7];                                     // Fixing Size After Last Property  
	class AActor*                                Actor;                                             // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function AkAudio.AkGameplayStatics.UseEarlyReflections
struct UAkGameplayStatics_UseEarlyReflections_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAuxBus*                             AuxBus;                                            // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Order;                                             // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BusSendGain;                                       // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxPathLength;                                     // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SpotReflectors;                                    // 0x1C(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1267[0x3];                                     // Fixing Size After Last Property  
	class FString                                AuxBusName;                                        // 0x20(0x10)(Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AkAudio.AkGameplayStatics.UnloadBankByName
struct UAkGameplayStatics_UnloadBankByName_Params
{
public:
	class FString                                BankName;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function AkAudio.AkGameplayStatics.StopAllAmbientSounds
struct UAkGameplayStatics_StopAllAmbientSounds_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function AkAudio.AkGameplayStatics.StopActor
struct UAkGameplayStatics_StopActor_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AkAudio.AkGameplayStatics.StartProfilerCapture
struct UAkGameplayStatics_StartProfilerCapture_Params
{
public:
	class FString                                Filename;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AkAudio.AkGameplayStatics.StartOutputCapture
struct UAkGameplayStatics_StartOutputCapture_Params
{
public:
	class FString                                Filename;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function AkAudio.AkGameplayStatics.StartAllAmbientSounds
struct UAkGameplayStatics_StartAllAmbientSounds_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function AkAudio.AkGameplayStatics.SpawnAkComponentAtLocation
struct UAkGameplayStatics_SpawnAkComponentAtLocation_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                         AkEvent;                                           // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                            Metasound;                                         // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAudioComponent*                       OutputComponent;                                   // 0x18(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Location;                                          // 0x20(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Rotator                   Orientation;                                       // 0x38(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         AutoPost;                                          // 0x50(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12DC[0x7];                                     // Fixing Size After Last Property  
	class FString                                EventName;                                         // 0x58(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AutoDestroy;                                       // 0x68(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12DE[0x7];                                     // Fixing Size After Last Property  
	class UAkComponent*                          ReturnValue;                                       // 0x70(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function AkAudio.AkGameplayStatics.SetSwitch
struct UAkGameplayStatics_SetSwitch_Params
{
public:
	class UAkSwitchValue*                        SwitchValue;                                       // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Actor;                                             // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SwitchGroup;                                       // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SwitchState;                                       // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function AkAudio.AkGameplayStatics.SetState
struct UAkGameplayStatics_SetState_Params
{
public:
	class UAkStateValue*                         StateValue;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  StateGroup;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  State;                                             // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function AkAudio.AkGameplayStatics.SetSpeakerAngles
struct UAkGameplayStatics_SetSpeakerAngles_Params
{
public:
	TArray<float>                                SpeakerAngles;                                     // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	float                                        HeightAngle;                                       // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1309[0x4];                                     // Fixing Size After Last Property  
	class FString                                DeviceShareSet;                                    // 0x18(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function AkAudio.AkGameplayStatics.SetRTPCValue
struct UAkGameplayStatics_SetRTPCValue_Params
{
public:
	class UAkRtpc*                               RTPCValue;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Value;                                             // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InterpolationTimeMs;                               // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Actor;                                             // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  RTPC;                                              // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function AkAudio.AkGameplayStatics.SetReflectionsOrder
struct UAkGameplayStatics_SetReflectionsOrder_Params
{
public:
	int32                                        Order;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         RefreshPaths;                                      // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1324[0x3];                                     // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// Function AkAudio.AkGameplayStatics.SetPortalToPortalObstruction
struct UAkGameplayStatics_SetPortalToPortalObstruction_Params
{
public:
	class UAkPortalComponent*                    PortalComponent0;                                  // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkPortalComponent*                    PortalComponent1;                                  // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ObstructionValue;                                  // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1331[0x4];                                     // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// Function AkAudio.AkGameplayStatics.SetPortalObstructionAndOcclusion
struct UAkGameplayStatics_SetPortalObstructionAndOcclusion_Params
{
public:
	class UAkPortalComponent*                    PortalComponent;                                   // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ObstructionValue;                                  // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OcclusionValue;                                    // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AkAudio.AkGameplayStatics.SetPanningRule
struct UAkGameplayStatics_SetPanningRule_Params
{
public:
	enum class EPanningRule                      PanRule;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function AkAudio.AkGameplayStatics.SetOutputDeviceEffect
struct UAkGameplayStatics_SetOutputDeviceEffect_Params
{
public:
	struct WwiseSoundEngine_AkOutputDeviceID     InDeviceId;                                        // 0x0(0x8)(ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        InEffectIndex;                                     // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1361[0x4];                                     // Fixing Size After Last Property  
	class UAkEffectShareSet*                     InEffectShareSet;                                  // 0x10(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1363[0x7];                                     // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// Function AkAudio.AkGameplayStatics.SetOutputBusVolume
struct UAkGameplayStatics_SetOutputBusVolume_Params
{
public:
	float                                        BusVolume;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1371[0x4];                                     // Fixing Size After Last Property  
	class AActor*                                Actor;                                             // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AkAudio.AkGameplayStatics.SetOcclusionRefreshInterval
struct UAkGameplayStatics_SetOcclusionRefreshInterval_Params
{
public:
	float                                        RefreshInterval;                                   // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_137B[0x4];                                     // Fixing Size After Last Property  
	class AActor*                                Actor;                                             // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function AkAudio.AkGameplayStatics.SetMultiplePositions
struct UAkGameplayStatics_SetMultiplePositions_Params
{
public:
	class UAkComponent*                          GameObjectAkComponent;                             // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct CoreUObject_Transform>         Positions;                                         // 0x8(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class EAkMultiPositionType              MultiPositionType;                                 // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_138C[0x7];                                     // Fixing Size Of Struct 
};

// 0x30 (0x30 - 0x0)
// Function AkAudio.AkGameplayStatics.SetMultipleChannelMaskEmitterPositions
struct UAkGameplayStatics_SetMultipleChannelMaskEmitterPositions_Params
{
public:
	class UAkComponent*                          GameObjectAkComponent;                             // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct AkAudio_AkChannelMask>         ChannelMasks;                                      // 0x8(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct CoreUObject_Transform>         Positions;                                         // 0x18(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class EAkMultiPositionType              MultiPositionType;                                 // 0x28(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13A8[0x7];                                     // Fixing Size Of Struct 
};

// 0x30 (0x30 - 0x0)
// Function AkAudio.AkGameplayStatics.SetMultipleChannelEmitterPositions
struct UAkGameplayStatics_SetMultipleChannelEmitterPositions_Params
{
public:
	class UAkComponent*                          GameObjectAkComponent;                             // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<enum class EAkChannelConfiguration>   ChannelMasks;                                      // 0x8(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct CoreUObject_Transform>         Positions;                                         // 0x18(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class EAkMultiPositionType              MultiPositionType;                                 // 0x28(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13CC[0x7];                                     // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// Function AkAudio.AkGameplayStatics.SetGameObjectToPortalObstruction
struct UAkGameplayStatics_SetGameObjectToPortalObstruction_Params
{
public:
	class UAkComponent*                          GameObjectAkComponent;                             // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkPortalComponent*                    PortalComponent;                                   // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ObstructionValue;                                  // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13E5[0x4];                                     // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// Function AkAudio.AkGameplayStatics.SetDistanceProbe
struct UAkGameplayStatics_SetDistanceProbe_Params
{
public:
	class AActor*                                Listener;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                DistanceProbe;                                     // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function AkAudio.AkGameplayStatics.SetCurrentAudioCultureAsync
struct UAkGameplayStatics_SetCurrentAudioCultureAsync_Params
{
public:
	class FString                                AudioCulture;                                      // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Completed;                                         // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function AkAudio.AkGameplayStatics.SetCurrentAudioCulture
struct UAkGameplayStatics_SetCurrentAudioCulture_Params
{
public:
	class FString                                AudioCulture;                                      // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Engine_LatentActionInfo               LatentInfo;                                        // 0x10(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	class UObject*                               WorldContextObject;                                // 0x28(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function AkAudio.AkGameplayStatics.SetBusEffectByName
struct UAkGameplayStatics_SetBusEffectByName_Params
{
public:
	class FString                                InBusName;                                         // 0x0(0x10)(ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InEffectIndex;                                     // 0x10(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1427[0x4];                                     // Fixing Size After Last Property  
	class UAkEffectShareSet*                     InEffectShareSet;                                  // 0x18(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1429[0x7];                                     // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// Function AkAudio.AkGameplayStatics.SetBusEffectByID
struct UAkGameplayStatics_SetBusEffectByID_Params
{
public:
	struct WwiseSoundEngine_AkUniqueID           InBusID;                                           // 0x0(0x4)(ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        InEffectIndex;                                     // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkEffectShareSet*                     InEffectShareSet;                                  // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_143C[0x7];                                     // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// Function AkAudio.AkGameplayStatics.SetBusConfig
struct UAkGameplayStatics_SetBusConfig_Params
{
public:
	class FString                                BusName;                                           // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAkChannelConfiguration           ChannelConfiguration;                              // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1443[0x7];                                     // Fixing Size Of Struct 
};

// 0x20 (0x20 - 0x0)
// Function AkAudio.AkGameplayStatics.SetAuxBusEffect
struct UAkGameplayStatics_SetAuxBusEffect_Params
{
public:
	class UAkAuxBus*                             InAuxBus;                                          // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InEffectIndex;                                     // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1450[0x4];                                     // Fixing Size After Last Property  
	class UAkEffectShareSet*                     InEffectShareSet;                                  // 0x10(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1454[0x7];                                     // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// Function AkAudio.AkGameplayStatics.SetActorMixerEffect
struct UAkGameplayStatics_SetActorMixerEffect_Params
{
public:
	struct WwiseSoundEngine_AkUniqueID           InAudioNodeID;                                     // 0x0(0x4)(ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        InEffectIndex;                                     // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkEffectShareSet*                     InEffectShareSet;                                  // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_146E[0x7];                                     // Fixing Size Of Struct 
};

// 0x20 (0x20 - 0x0)
// Function AkAudio.AkGameplayStatics.ResetRTPCValue
struct UAkGameplayStatics_ResetRTPCValue_Params
{
public:
	class UAkRtpc*                               RTPCValue;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InterpolationTimeMs;                               // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1486[0x4];                                     // Fixing Size After Last Property  
	class AActor*                                Actor;                                             // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  RTPC;                                              // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function AkAudio.AkGameplayStatics.ReplaceMainOutput
struct UAkGameplayStatics_ReplaceMainOutput_Params
{
public:
	struct AkAudio_AkOutputSettings              MainOutputSettings;                                // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function AkAudio.AkGameplayStatics.RemoveOutput
struct UAkGameplayStatics_RemoveOutput_Params
{
public:
	struct WwiseSoundEngine_AkOutputDeviceID     In_OutputDeviceId;                                 // 0x0(0x8)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function AkAudio.AkGameplayStatics.PostTrigger
struct UAkGameplayStatics_PostTrigger_Params
{
public:
	class UAkTrigger*                            TriggerValue;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Actor;                                             // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Trigger;                                           // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function AkAudio.AkGameplayStatics.PostEventByName
struct UAkGameplayStatics_PostEventByName_Params
{
public:
	class FString                                EventName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Actor;                                             // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStopWhenAttachedToDestroyed;                      // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14B2[0x7];                                     // Fixing Size Of Struct 
};

// 0x48 (0x48 - 0x0)
// Function AkAudio.AkGameplayStatics.PostEventAtLocationByName
struct UAkGameplayStatics_PostEventAtLocationByName_Params
{
public:
	class FString                                EventName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Location;                                          // 0x10(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Rotator                   Orientation;                                       // 0x28(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class UObject*                               WorldContextObject;                                // 0x40(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// Function AkAudio.AkGameplayStatics.PostEventAtLocation
struct UAkGameplayStatics_PostEventAtLocation_Params
{
public:
	class UAkAudioEvent*                         AkEvent;                                           // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                            Metasound;                                         // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAudioComponent*                       OutputComponent;                                   // 0x10(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Location;                                          // 0x18(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Rotator                   Orientation;                                       // 0x30(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class FString                                EventName;                                         // 0x48(0x10)(Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               WorldContextObject;                                // 0x58(0x8)(Parm, ZeroConstructor, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x60(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14EE[0x4];                                     // Fixing Size Of Struct 
};

// 0x50 (0x50 - 0x0)
// Function AkAudio.AkGameplayStatics.PostEvent
struct UAkGameplayStatics_PostEvent_Params
{
public:
	class UAkAudioEvent*                         AkEvent;                                           // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                            Metasound;                                         // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAudioComponent*                       OutputComponent;                                   // 0x10(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Actor;                                             // 0x18(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CallbackMask;                                      // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           PostEventCallback;                                 // 0x24(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStopWhenAttachedToDestroyed;                      // 0x34(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1504[0x3];                                     // Fixing Size After Last Property  
	class FString                                EventName;                                         // 0x38(0x10)(Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x48(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1506[0x4];                                     // Fixing Size Of Struct 
};

// 0x30 (0x30 - 0x0)
// Function AkAudio.AkGameplayStatics.PostAndWaitForEndOfEventAsync
struct UAkGameplayStatics_PostAndWaitForEndOfEventAsync_Params
{
public:
	class UAkAudioEvent*                         AkEvent;                                           // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Actor;                                             // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PlayingID;                                         // 0x10(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStopWhenAttachedToDestroyed;                      // 0x14(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_151C[0x3];                                     // Fixing Size After Last Property  
	struct Engine_LatentActionInfo               LatentInfo;                                        // 0x18(0x18)(Parm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function AkAudio.AkGameplayStatics.PostAndWaitForEndOfEvent
struct UAkGameplayStatics_PostAndWaitForEndOfEvent_Params
{
public:
	class UAkAudioEvent*                         AkEvent;                                           // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Actor;                                             // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStopWhenAttachedToDestroyed;                      // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_152C[0x7];                                     // Fixing Size After Last Property  
	struct Engine_LatentActionInfo               LatentInfo;                                        // 0x18(0x18)(Parm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x30(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_152D[0x4];                                     // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// Function AkAudio.AkGameplayStatics.LoadBankByName
struct UAkGameplayStatics_LoadBankByName_Params
{
public:
	class FString                                BankName;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AkAudio.AkGameplayStatics.IsGame
struct UAkGameplayStatics_IsGame_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1542[0x7];                                     // Fixing Size Of Struct 
};

// 0x1 (0x1 - 0x0)
// Function AkAudio.AkGameplayStatics.IsEditor
struct UAkGameplayStatics_IsEditor_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function AkAudio.AkGameplayStatics.GetSpeakerAngles
struct UAkGameplayStatics_GetSpeakerAngles_Params
{
public:
	TArray<float>                                SpeakerAngles;                                     // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        HeightAngle;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1555[0x4];                                     // Fixing Size After Last Property  
	class FString                                DeviceShareSet;                                    // 0x18(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function AkAudio.AkGameplayStatics.GetRTPCValue
struct UAkGameplayStatics_GetRTPCValue_Params
{
public:
	class UAkRtpc*                               RTPCValue;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PlayingID;                                         // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERTPCValueType                    InputValueType;                                    // 0xC(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_156B[0x3];                                     // Fixing Size After Last Property  
	float                                        Value;                                             // 0x10(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERTPCValueType                    OutputValueType;                                   // 0x14(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1571[0x3];                                     // Fixing Size After Last Property  
	class AActor*                                Actor;                                             // 0x18(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  RTPC;                                              // 0x20(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AkAudio.AkGameplayStatics.GetCurrentAudioCulture
struct UAkGameplayStatics_GetCurrentAudioCulture_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AkAudio.AkGameplayStatics.GetAvailableAudioCultures
struct UAkGameplayStatics_GetAvailableAudioCultures_Params
{
public:
	TArray<class FString>                        ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function AkAudio.AkGameplayStatics.GetAkComponent
struct UAkGameplayStatics_GetAkComponent_Params
{
public:
	class USceneComponent*                       AttachToComponent;                                 // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ComponentCreated;                                  // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15A3[0x3];                                     // Fixing Size After Last Property  
	class FName                                  AttachPointName;                                   // 0xC(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15A4[0x4];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector                    Location;                                          // 0x18(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAttachLocation                   LocationType;                                      // 0x30(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15A9[0x7];                                     // Fixing Size After Last Property  
	class UAkComponent*                          ReturnValue;                                       // 0x38(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function AkAudio.AkGameplayStatics.GetAkAudioTypeUserData
struct UAkGameplayStatics_GetAkAudioTypeUserData_Params
{
public:
	class UAkAudioType*                          Instance;                                          // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                Type;                                              // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AkAudio.AkGameplayStatics.ExecuteActionOnPlayingID
struct UAkGameplayStatics_ExecuteActionOnPlayingID_Params
{
public:
	enum class EAkActionOnEventType              ActionType;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15DB[0x3];                                     // Fixing Size After Last Property  
	int32                                        PlayingID;                                         // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TransitionDuration;                                // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAkCurveInterpolation             FadeCurve;                                         // 0xC(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15DF[0x3];                                     // Fixing Size Of Struct 
};

// 0x28 (0x28 - 0x0)
// Function AkAudio.AkGameplayStatics.ExecuteActionOnEvent
struct UAkGameplayStatics_ExecuteActionOnEvent_Params
{
public:
	class UAkAudioEvent*                         AkEvent;                                           // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAkActionOnEventType              ActionType;                                        // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15F7[0x7];                                     // Fixing Size After Last Property  
	class AActor*                                Actor;                                             // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TransitionDuration;                                // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAkCurveInterpolation             FadeCurve;                                         // 0x1C(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15F9[0x3];                                     // Fixing Size After Last Property  
	int32                                        PlayingID;                                         // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15FB[0x4];                                     // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// Function AkAudio.AkGameplayStatics.CancelEventCallback
struct UAkGameplayStatics_CancelEventCallback_Params
{
public:
	FDelegateProperty_                           PostEventCallback;                                 // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AkAudio.AkGameplayStatics.AddOutputCaptureMarker
struct UAkGameplayStatics_AddOutputCaptureMarker_Params
{
public:
	class FString                                MarkerText;                                        // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function AkAudio.AkGameplayStatics.AddOutput
struct UAkGameplayStatics_AddOutput_Params
{
public:
	struct AkAudio_AkOutputSettings              In_Settings;                                       // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct WwiseSoundEngine_AkOutputDeviceID     Out_DeviceID;                                      // 0x18(0x8)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	TArray<class UAkComponent*>                  In_ListenerIDs;                                    // 0x20(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AkAudio.AkMIDIEventCallbackInfo.GetType
struct UAkMIDIEventCallbackInfo_GetType_Params
{
public:
	enum class EAkMidiEventType                  ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function AkAudio.AkMIDIEventCallbackInfo.GetProgramChange
struct UAkMIDIEventCallbackInfo_GetProgramChange_Params
{
public:
	struct AkAudio_AkMidiProgramChange           AsProgramChange;                                   // 0x0(0x3)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x3(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function AkAudio.AkMIDIEventCallbackInfo.GetPitchBend
struct UAkMIDIEventCallbackInfo_GetPitchBend_Params
{
public:
	struct AkAudio_AkMidiPitchBend               AsPitchBend;                                       // 0x0(0x8)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1734[0x3];                                     // Fixing Size Of Struct 
};

// 0x5 (0x5 - 0x0)
// Function AkAudio.AkMIDIEventCallbackInfo.GetNoteOn
struct UAkMIDIEventCallbackInfo_GetNoteOn_Params
{
public:
	struct AkAudio_AkMidiNoteOnOff               AsNoteOn;                                          // 0x0(0x4)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x5 (0x5 - 0x0)
// Function AkAudio.AkMIDIEventCallbackInfo.GetNoteOff
struct UAkMIDIEventCallbackInfo_GetNoteOff_Params
{
public:
	struct AkAudio_AkMidiNoteOnOff               AsNoteOff;                                         // 0x0(0x4)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x5 (0x5 - 0x0)
// Function AkAudio.AkMIDIEventCallbackInfo.GetNoteAftertouch
struct UAkMIDIEventCallbackInfo_GetNoteAftertouch_Params
{
public:
	struct AkAudio_AkMidiNoteAftertouch          AsNoteAftertouch;                                  // 0x0(0x4)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x5 (0x5 - 0x0)
// Function AkAudio.AkMIDIEventCallbackInfo.GetGeneric
struct UAkMIDIEventCallbackInfo_GetGeneric_Params
{
public:
	struct AkAudio_AkMidiGeneric                 AsGeneric;                                         // 0x0(0x4)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function AkAudio.AkMIDIEventCallbackInfo.GetChannelAftertouch
struct UAkMIDIEventCallbackInfo_GetChannelAftertouch_Params
{
public:
	struct AkAudio_AkMidiChannelAftertouch       AsChannelAftertouch;                               // 0x0(0x3)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x3(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AkAudio.AkMIDIEventCallbackInfo.GetChannel
struct UAkMIDIEventCallbackInfo_GetChannel_Params
{
public:
	uint8                                        ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x5 (0x5 - 0x0)
// Function AkAudio.AkMIDIEventCallbackInfo.GetCc
struct UAkMIDIEventCallbackInfo_GetCc_Params
{
public:
	struct AkAudio_AkMidiCc                      AsCc;                                              // 0x0(0x4)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AkAudio.AkHololensInitializationSettings.MigrateMultiCoreRendering
struct UAkHololensInitializationSettings_MigrateMultiCoreRendering_Params
{
public:
	bool                                         NewValue;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function AkAudio.AkItemBoolPropertiesConv.Conv_FAkBoolPropertyToControlToText
struct UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToText_Params
{
public:
	struct AkAudio_AkBoolPropertyToControl       INAkBoolPropertyToControl;                         // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                  ReturnValue;                                       // 0x10(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function AkAudio.AkItemBoolPropertiesConv.Conv_FAkBoolPropertyToControlToString
struct UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToString_Params
{
public:
	struct AkAudio_AkBoolPropertyToControl       INAkBoolPropertyToControl;                         // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AkAudio.AkItemBoolProperties.SetSearchText
struct UAkItemBoolProperties_SetSearchText_Params
{
public:
	class FString                                NewText;                                           // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AkAudio.AkItemBoolProperties.GetSelectedProperty
struct UAkItemBoolProperties_GetSelectedProperty_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AkAudio.AkItemBoolProperties.GetSearchText
struct UAkItemBoolProperties_GetSearchText_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function AkAudio.AkItemPropertiesConv.Conv_FAkPropertyToControlToText
struct UAkItemPropertiesConv_Conv_FAkPropertyToControlToText_Params
{
public:
	struct AkAudio_AkPropertyToControl           INAkPropertyToControl;                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                  ReturnValue;                                       // 0x10(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function AkAudio.AkItemPropertiesConv.Conv_FAkPropertyToControlToString
struct UAkItemPropertiesConv_Conv_FAkPropertyToControlToString_Params
{
public:
	struct AkAudio_AkPropertyToControl           INAkPropertyToControl;                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AkAudio.AkItemProperties.SetSearchText
struct UAkItemProperties_SetSearchText_Params
{
public:
	class FString                                NewText;                                           // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AkAudio.AkItemProperties.GetSelectedProperty
struct UAkItemProperties_GetSelectedProperty_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AkAudio.AkItemProperties.GetSearchText
struct UAkItemProperties_GetSearchText_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function AkAudio.AkLateReverbComponent.AssociateAkTextureSetComponent
struct UAkLateReverbComponent_AssociateAkTextureSetComponent_Params
{
public:
	class UAkAcousticTextureSetComponent*        TextureSetComponent;                               // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AkAudio.AkLinuxInitializationSettings.MigrateMultiCoreRendering
struct UAkLinuxInitializationSettings_MigrateMultiCoreRendering_Params
{
public:
	bool                                         NewValue;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AkAudio.AkMacInitializationSettings.MigrateMultiCoreRendering
struct UAkMacInitializationSettings_MigrateMultiCoreRendering_Params
{
public:
	bool                                         NewValue;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AkAudio.AkPS4InitializationSettings.MigrateMultiCoreRendering
struct UAkPS4InitializationSettings_MigrateMultiCoreRendering_Params
{
public:
	bool                                         NewValue;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function AkAudio.AkRoomComponent.SetGeometryComponent
struct UAkRoomComponent_SetGeometryComponent_Params
{
public:
	class UAkAcousticTextureSetComponent*        TextureSetComponent;                               // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function AkAudio.AkRoomComponent.GetPrimitiveParent
struct UAkRoomComponent_GetPrimitiveParent_Params
{
public:
	class UPrimitiveComponent*                   ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function AkAudio.AkSlider.SetValue
struct UAkSlider_SetValue_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function AkAudio.AkSlider.SetStepSize
struct UAkSlider_SetStepSize_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AkAudio.AkSlider.SetSliderHandleColor
struct UAkSlider_SetSliderHandleColor_Params
{
public:
	struct CoreUObject_LinearColor               InValue;                                           // 0x0(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AkAudio.AkSlider.SetSliderBarColor
struct UAkSlider_SetSliderBarColor_Params
{
public:
	struct CoreUObject_LinearColor               InValue;                                           // 0x0(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AkAudio.AkSlider.SetLocked
struct UAkSlider_SetLocked_Params
{
public:
	bool                                         InValue;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AkAudio.AkSlider.SetIndentHandle
struct UAkSlider_SetIndentHandle_Params
{
public:
	bool                                         InValue;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AkAudio.AkSlider.SetAkSliderItemProperty
struct UAkSlider_SetAkSliderItemProperty_Params
{
public:
	class FString                                ItemProperty;                                      // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AkAudio.AkSlider.SetAkSliderItemId
struct UAkSlider_SetAkSliderItemId_Params
{
public:
	struct CoreUObject_Guid                      ItemId;                                            // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function AkAudio.AkSlider.GetValue
struct UAkSlider_GetValue_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AkAudio.AkSlider.GetAkSliderItemProperty
struct UAkSlider_GetAkSliderItemProperty_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AkAudio.AkSlider.GetAkSliderItemId
struct UAkSlider_GetAkSliderItemId_Params
{
public:
	struct CoreUObject_Guid                      ReturnValue;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AkAudio.AkSurfaceReflectorSetComponent.UpdateAcousticProperties
struct UAkSurfaceReflectorSetComponent_UpdateAcousticProperties_Params
{
public:
	TArray<struct AkAudio_AkSurfacePoly>         In_AcousticPolys;                                  // 0x0(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function AkAudio.AkWaapiCalls.Unsubscribe
struct UAkWaapiCalls_Unsubscribe_Params
{
public:
	struct AkAudio_AkWaapiSubscriptionId         SubscriptionId;                                    // 0x0(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         UnsubscriptionDone;                                // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C26[0x7];                                     // Fixing Size After Last Property  
	struct AkAudio_AKWaapiJsonObject             ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function AkAudio.AkWaapiCalls.SubscribeToWaapi
struct UAkWaapiCalls_SubscribeToWaapi_Params
{
public:
	struct AkAudio_AkWaapiUri                    WaapiUri;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct AkAudio_AKWaapiJsonObject             WaapiOptions;                                      // 0x10(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Callback;                                          // 0x20(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct AkAudio_AkWaapiSubscriptionId         SubscriptionId;                                    // 0x30(0x8)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         SubscriptionDone;                                  // 0x38(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C39[0x7];                                     // Fixing Size After Last Property  
	struct AkAudio_AKWaapiJsonObject             ReturnValue;                                       // 0x40(0x10)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AkAudio.AkWaapiCalls.SetSubscriptionID
struct UAkWaapiCalls_SetSubscriptionID_Params
{
public:
	struct AkAudio_AkWaapiSubscriptionId         Subscription;                                      // 0x0(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        ID;                                                // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C47[0x4];                                     // Fixing Size Of Struct 
};

// 0x14 (0x14 - 0x0)
// Function AkAudio.AkWaapiCalls.RegisterWaapiProjectLoadedCallback
struct UAkWaapiCalls_RegisterWaapiProjectLoadedCallback_Params
{
public:
	FDelegateProperty_                           Callback;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C4E[0x3];                                     // Fixing Size Of Struct 
};

// 0x14 (0x14 - 0x0)
// Function AkAudio.AkWaapiCalls.RegisterWaapiConnectionLostCallback
struct UAkWaapiCalls_RegisterWaapiConnectionLostCallback_Params
{
public:
	FDelegateProperty_                           Callback;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C56[0x3];                                     // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// Function AkAudio.AkWaapiCalls.GetSubscriptionID
struct UAkWaapiCalls_GetSubscriptionID_Params
{
public:
	struct AkAudio_AkWaapiSubscriptionId         Subscription;                                      // 0x0(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C68[0x4];                                     // Fixing Size Of Struct 
};

// 0x20 (0x20 - 0x0)
// Function AkAudio.AkWaapiCalls.Conv_FAkWaapiSubscriptionIdToText
struct UAkWaapiCalls_Conv_FAkWaapiSubscriptionIdToText_Params
{
public:
	struct AkAudio_AkWaapiSubscriptionId         INAkWaapiSubscriptionId;                           // 0x0(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	class FText                                  ReturnValue;                                       // 0x8(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function AkAudio.AkWaapiCalls.Conv_FAkWaapiSubscriptionIdToString
struct UAkWaapiCalls_Conv_FAkWaapiSubscriptionIdToString_Params
{
public:
	struct AkAudio_AkWaapiSubscriptionId         INAkWaapiSubscriptionId;                           // 0x0(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function AkAudio.AkWaapiCalls.CallWaapi
struct UAkWaapiCalls_CallWaapi_Params
{
public:
	struct AkAudio_AkWaapiUri                    WaapiUri;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct AkAudio_AKWaapiJsonObject             WaapiArgs;                                         // 0x10(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct AkAudio_AKWaapiJsonObject             WaapiOptions;                                      // 0x20(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct AkAudio_AKWaapiJsonObject             ReturnValue;                                       // 0x30(0x10)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function AkAudio.SAkWaapiFieldNamesConv.Conv_FAkWaapiFieldNamesToText
struct USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToText_Params
{
public:
	struct AkAudio_AkWaapiFieldNames             INAkWaapiFieldNames;                               // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                  ReturnValue;                                       // 0x10(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function AkAudio.SAkWaapiFieldNamesConv.Conv_FAkWaapiFieldNamesToString
struct USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToString_Params
{
public:
	struct AkAudio_AkWaapiFieldNames             INAkWaapiFieldNames;                               // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function AkAudio.AkWaapiJsonManager.SetStringField
struct UAkWaapiJsonManager_SetStringField_Params
{
public:
	struct AkAudio_AkWaapiFieldNames             FieldName;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                FieldValue;                                        // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct AkAudio_AKWaapiJsonObject             Target;                                            // 0x20(0x10)(Parm, NativeAccessSpecifierPublic)
	struct AkAudio_AKWaapiJsonObject             ReturnValue;                                       // 0x30(0x10)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function AkAudio.AkWaapiJsonManager.SetObjectField
struct UAkWaapiJsonManager_SetObjectField_Params
{
public:
	struct AkAudio_AkWaapiFieldNames             FieldName;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct AkAudio_AKWaapiJsonObject             FieldValue;                                        // 0x10(0x10)(Parm, NativeAccessSpecifierPublic)
	struct AkAudio_AKWaapiJsonObject             Target;                                            // 0x20(0x10)(Parm, NativeAccessSpecifierPublic)
	struct AkAudio_AKWaapiJsonObject             ReturnValue;                                       // 0x30(0x10)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function AkAudio.AkWaapiJsonManager.SetNumberField
struct UAkWaapiJsonManager_SetNumberField_Params
{
public:
	struct AkAudio_AkWaapiFieldNames             FieldName;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	float                                        FieldValue;                                        // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DAA[0x4];                                     // Fixing Size After Last Property  
	struct AkAudio_AKWaapiJsonObject             Target;                                            // 0x18(0x10)(Parm, NativeAccessSpecifierPublic)
	struct AkAudio_AKWaapiJsonObject             ReturnValue;                                       // 0x28(0x10)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function AkAudio.AkWaapiJsonManager.SetBoolField
struct UAkWaapiJsonManager_SetBoolField_Params
{
public:
	struct AkAudio_AkWaapiFieldNames             FieldName;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         FieldValue;                                        // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DCF[0x7];                                     // Fixing Size After Last Property  
	struct AkAudio_AKWaapiJsonObject             Target;                                            // 0x18(0x10)(Parm, NativeAccessSpecifierPublic)
	struct AkAudio_AKWaapiJsonObject             ReturnValue;                                       // 0x28(0x10)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function AkAudio.AkWaapiJsonManager.SetArrayStringFields
struct UAkWaapiJsonManager_SetArrayStringFields_Params
{
public:
	struct AkAudio_AkWaapiFieldNames             FieldName;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<class FString>                        FieldStringValues;                                 // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct AkAudio_AKWaapiJsonObject             Target;                                            // 0x20(0x10)(Parm, NativeAccessSpecifierPublic)
	struct AkAudio_AKWaapiJsonObject             ReturnValue;                                       // 0x30(0x10)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function AkAudio.AkWaapiJsonManager.SetArrayObjectFields
struct UAkWaapiJsonManager_SetArrayObjectFields_Params
{
public:
	struct AkAudio_AkWaapiFieldNames             FieldName;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct AkAudio_AKWaapiJsonObject>     FieldObjectValues;                                 // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct AkAudio_AKWaapiJsonObject             Target;                                            // 0x20(0x10)(Parm, NativeAccessSpecifierPublic)
	struct AkAudio_AKWaapiJsonObject             ReturnValue;                                       // 0x30(0x10)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function AkAudio.AkWaapiJsonManager.GetStringField
struct UAkWaapiJsonManager_GetStringField_Params
{
public:
	struct AkAudio_AkWaapiFieldNames             FieldName;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct AkAudio_AKWaapiJsonObject             Target;                                            // 0x10(0x10)(Parm, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x20(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function AkAudio.AkWaapiJsonManager.GetObjectField
struct UAkWaapiJsonManager_GetObjectField_Params
{
public:
	struct AkAudio_AkWaapiFieldNames             FieldName;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct AkAudio_AKWaapiJsonObject             Target;                                            // 0x10(0x10)(Parm, NativeAccessSpecifierPublic)
	struct AkAudio_AKWaapiJsonObject             ReturnValue;                                       // 0x20(0x10)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function AkAudio.AkWaapiJsonManager.GetNumberField
struct UAkWaapiJsonManager_GetNumberField_Params
{
public:
	struct AkAudio_AkWaapiFieldNames             FieldName;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct AkAudio_AKWaapiJsonObject             Target;                                            // 0x10(0x10)(Parm, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x20(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E7D[0x4];                                     // Fixing Size Of Struct 
};

// 0x28 (0x28 - 0x0)
// Function AkAudio.AkWaapiJsonManager.GetIntegerField
struct UAkWaapiJsonManager_GetIntegerField_Params
{
public:
	struct AkAudio_AkWaapiFieldNames             FieldName;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct AkAudio_AKWaapiJsonObject             Target;                                            // 0x10(0x10)(Parm, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x20(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E92[0x4];                                     // Fixing Size Of Struct 
};

// 0x28 (0x28 - 0x0)
// Function AkAudio.AkWaapiJsonManager.GetBoolField
struct UAkWaapiJsonManager_GetBoolField_Params
{
public:
	struct AkAudio_AkWaapiFieldNames             FieldName;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct AkAudio_AKWaapiJsonObject             Target;                                            // 0x10(0x10)(Parm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EAA[0x7];                                     // Fixing Size Of Struct 
};

// 0x30 (0x30 - 0x0)
// Function AkAudio.AkWaapiJsonManager.GetArrayField
struct UAkWaapiJsonManager_GetArrayField_Params
{
public:
	struct AkAudio_AkWaapiFieldNames             FieldName;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct AkAudio_AKWaapiJsonObject             Target;                                            // 0x10(0x10)(Parm, NativeAccessSpecifierPublic)
	TArray<struct AkAudio_AKWaapiJsonObject>     ReturnValue;                                       // 0x20(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function AkAudio.AkWaapiJsonManager.Conv_FAKWaapiJsonObjectToText
struct UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToText_Params
{
public:
	struct AkAudio_AKWaapiJsonObject             INAKWaapiJsonObject;                               // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
	class FText                                  ReturnValue;                                       // 0x10(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function AkAudio.AkWaapiJsonManager.Conv_FAKWaapiJsonObjectToString
struct UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToString_Params
{
public:
	struct AkAudio_AKWaapiJsonObject             INAKWaapiJsonObject;                               // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function AkAudio.AkWaapiUriConv.Conv_FAkWaapiUriToText
struct UAkWaapiUriConv_Conv_FAkWaapiUriToText_Params
{
public:
	struct AkAudio_AkWaapiUri                    INAkWaapiUri;                                      // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                  ReturnValue;                                       // 0x10(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function AkAudio.AkWaapiUriConv.Conv_FAkWaapiUriToString
struct UAkWaapiUriConv_Conv_FAkWaapiUriToString_Params
{
public:
	struct AkAudio_AkWaapiUri                    INAkWaapiUri;                                      // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AkAudio.AkWindowsInitializationSettings.MigrateMultiCoreRendering
struct UAkWindowsInitializationSettings_MigrateMultiCoreRendering_Params
{
public:
	bool                                         NewValue;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AkAudio.AkWinGDKInitializationSettings.MigrateMultiCoreRendering
struct UAkWinGDKInitializationSettings_MigrateMultiCoreRendering_Params
{
public:
	bool                                         NewValue;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AkAudio.AkWwiseTree.SetSearchText
struct UAkWwiseTree_SetSearchText_Params
{
public:
	class FString                                NewText;                                           // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function AkAudio.AkWwiseTree.GetSelectedItem
struct UAkWwiseTree_GetSelectedItem_Params
{
public:
	struct AkAudio_AkWwiseObjectDetails          ReturnValue;                                       // 0x0(0x30)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AkAudio.AkWwiseTree.GetSearchText
struct UAkWwiseTree_GetSearchText_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AkAudio.AkXboxOneGDKInitializationSettings.MigrateMultiCoreRendering
struct UAkXboxOneGDKInitializationSettings_MigrateMultiCoreRendering_Params
{
public:
	bool                                         NewValue;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AkAudio.AkXboxOneInitializationSettings.MigrateMultiCoreRendering
struct UAkXboxOneInitializationSettings_MigrateMultiCoreRendering_Params
{
public:
	bool                                         NewValue;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AkAudio.AkXSXInitializationSettings.MigrateMultiCoreRendering
struct UAkXSXInitializationSettings_MigrateMultiCoreRendering_Params
{
public:
	bool                                         NewValue;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function AkAudio.PostEventAsync.PostEventAsync
struct UPostEventAsync_PostEventAsync_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                         AkEvent;                                           // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Actor;                                             // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CallbackMask;                                      // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           PostEventCallback;                                 // 0x1C(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStopWhenAttachedToDestroyed;                      // 0x2C(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21F1[0x3];                                     // Fixing Size After Last Property  
	class UPostEventAsync*                       ReturnValue;                                       // 0x30(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function AkAudio.PostEventAtLocationAsync.PostEventAtLocationAsync
struct UPostEventAtLocationAsync_PostEventAtLocationAsync_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                         AkEvent;                                           // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Location;                                          // 0x10(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Rotator                   Orientation;                                       // 0x28(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class UPostEventAtLocationAsync*             ReturnValue;                                       // 0x40(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


