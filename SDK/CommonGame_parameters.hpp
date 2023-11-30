#pragma once




#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x48 - 0x0)
// Function CommonGame.AsyncAction_CreateWidgetAsync.CreateWidgetAsync
struct UAsyncAction_CreateWidgetAsync_CreateWidgetAsync_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UUserWidget>             UserWidgetSoftClass;                               // 0x8(0x28)(Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APlayerController*                     OwningPlayer;                                      // 0x30(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSuspendInputUntilComplete;                        // 0x38(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D02[0x7];                                      // Fixing Size After Last Property  
	class UAsyncAction_CreateWidgetAsync*        ReturnValue;                                       // 0x40(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function CommonGame.AsyncAction_PushContentToLayerForPlayer.PushContentToLayerForPlayer
struct UAsyncAction_PushContentToLayerForPlayer_PushContentToLayerForPlayer_Params
{
public:
	class APlayerController*                     OwningPlayer;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UCommonActivatableWidget> WidgetClass;                                       // 0x8(0x28)(Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GameplayTags_GameplayTag              LayerName;                                         // 0x30(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSuspendInputUntilComplete;                        // 0x38(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D1E[0x7];                                      // Fixing Size After Last Property  
	class UAsyncAction_PushContentToLayerForPlayer* ReturnValue;                                       // 0x40(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function CommonGame.AsyncAction_ShowConfirmation.ShowConfirmationYesNo
struct UAsyncAction_ShowConfirmation_ShowConfirmationYesNo_Params
{
public:
	class UObject*                               InWorldContextObject;                              // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Title;                                             // 0x8(0x18)(Parm, NativeAccessSpecifierPublic)
	class FText                                  Message;                                           // 0x20(0x18)(Parm, NativeAccessSpecifierPublic)
	class UAsyncAction_ShowConfirmation*         ReturnValue;                                       // 0x38(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function CommonGame.AsyncAction_ShowConfirmation.ShowConfirmationOkCancel
struct UAsyncAction_ShowConfirmation_ShowConfirmationOkCancel_Params
{
public:
	class UObject*                               InWorldContextObject;                              // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Title;                                             // 0x8(0x18)(Parm, NativeAccessSpecifierPublic)
	class FText                                  Message;                                           // 0x20(0x18)(Parm, NativeAccessSpecifierPublic)
	class UAsyncAction_ShowConfirmation*         ReturnValue;                                       // 0x38(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function CommonGame.AsyncAction_ShowConfirmation.ShowConfirmationCustom
struct UAsyncAction_ShowConfirmation_ShowConfirmationCustom_Params
{
public:
	class UObject*                               InWorldContextObject;                              // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCommonGameDialogDescriptor*           Descriptor;                                        // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAsyncAction_ShowConfirmation*         ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function CommonGame.CommonUIExtensions.SuspendInputForPlayer
struct UCommonUIExtensions_SuspendInputForPlayer_Params
{
public:
	class APlayerController*                     PlayerController;                                  // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SuspendReason;                                     // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CommonGame.CommonUIExtensions.ResumeInputForPlayer
struct UCommonUIExtensions_ResumeInputForPlayer_Params
{
public:
	class APlayerController*                     PlayerController;                                  // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SuspendToken;                                      // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function CommonGame.CommonUIExtensions.PushStreamedContentToLayer_ForPlayer
struct UCommonUIExtensions_PushStreamedContentToLayer_ForPlayer_Params
{
public:
	class ULocalPlayer*                          LocalPlayer;                                       // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GameplayTags_GameplayTag              LayerName;                                         // 0x8(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UCommonActivatableWidget> WidgetClass;                                       // 0x10(0x28)(Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function CommonGame.CommonUIExtensions.PushContentToLayer_ForPlayer
struct UCommonUIExtensions_PushContentToLayer_ForPlayer_Params
{
public:
	class ULocalPlayer*                          LocalPlayer;                                       // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GameplayTags_GameplayTag              LayerName;                                         // 0x8(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UCommonActivatableWidget>  WidgetClass;                                       // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCommonActivatableWidget*              ReturnValue;                                       // 0x18(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonGame.CommonUIExtensions.PopContentFromLayer
struct UCommonUIExtensions_PopContentFromLayer_Params
{
public:
	class UCommonActivatableWidget*              ActivatableWidget;                                 // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CommonGame.CommonUIExtensions.IsOwningPlayerUsingTouch
struct UCommonUIExtensions_IsOwningPlayerUsingTouch_Params
{
public:
	class UUserWidget*                           WidgetContextObject;                               // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DE0[0x7];                                      // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// Function CommonGame.CommonUIExtensions.IsOwningPlayerUsingGamepad
struct UCommonUIExtensions_IsOwningPlayerUsingGamepad_Params
{
public:
	class UUserWidget*                           WidgetContextObject;                               // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DEB[0x7];                                      // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// Function CommonGame.CommonUIExtensions.GetOwningPlayerInputType
struct UCommonUIExtensions_GetOwningPlayerInputType_Params
{
public:
	class UUserWidget*                           WidgetContextObject;                               // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECommonInputType                  ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DFE[0x7];                                      // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// Function CommonGame.CommonUIExtensions.GetLocalPlayerFromController
struct UCommonUIExtensions_GetLocalPlayerFromController_Params
{
public:
	class APlayerController*                     PlayerController;                                  // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULocalPlayer*                          ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CommonGame.PrimaryGameLayout.RegisterLayer
struct UPrimaryGameLayout_RegisterLayer_Params
{
public:
	struct GameplayTags_GameplayTag              LayerTag;                                          // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCommonActivatableWidgetContainerBase* LayerWidget;                                       // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


