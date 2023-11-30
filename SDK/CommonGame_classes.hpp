#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0xA0 - 0x30)
// Class CommonGame.AsyncAction_CreateWidgetAsync
class UAsyncAction_CreateWidgetAsync : public UCancellableAsyncAction
{
public:
	FMulticastInlineDelegateProperty_            OnComplete;                                        // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_D08[0x60];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UAsyncAction_CreateWidgetAsync* GetDefaultObj();

	class UAsyncAction_CreateWidgetAsync* CreateWidgetAsync(class UObject* WorldContextObject, TSoftClassPtr<class UUserWidget> UserWidgetSoftClass, class APlayerController* OwningPlayer, bool bSuspendInputUntilComplete);
};

// 0x70 (0xA0 - 0x30)
// Class CommonGame.AsyncAction_PushContentToLayerForPlayer
class UAsyncAction_PushContentToLayerForPlayer : public UCancellableAsyncAction
{
public:
	FMulticastInlineDelegateProperty_            BeforePush;                                        // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            AfterPush;                                         // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_D26[0x50];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UAsyncAction_PushContentToLayerForPlayer* GetDefaultObj();

	class UAsyncAction_PushContentToLayerForPlayer* PushContentToLayerForPlayer(class APlayerController* OwningPlayer, TSoftClassPtr<class UCommonActivatableWidget> WidgetClass, const struct GameplayTags_GameplayTag& LayerName, bool bSuspendInputUntilComplete);
};

// 0x28 (0x58 - 0x30)
// Class CommonGame.AsyncAction_ShowConfirmation
class UAsyncAction_ShowConfirmation : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnResult;                                          // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UObject*                               WorldContextObject;                                // 0x40(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class ULocalPlayer*                          TargetLocalPlayer;                                 // 0x48(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonGameDialogDescriptor*           Descriptor;                                        // 0x50(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UAsyncAction_ShowConfirmation* GetDefaultObj();

	class UAsyncAction_ShowConfirmation* ShowConfirmationYesNo(class UObject* InWorldContextObject, class FText Title, class FText Message);
	class UAsyncAction_ShowConfirmation* ShowConfirmationOkCancel(class UObject* InWorldContextObject, class FText Title, class FText Message);
	class UAsyncAction_ShowConfirmation* ShowConfirmationCustom(class UObject* InWorldContextObject, class UCommonGameDialogDescriptor* Descriptor);
};

// 0x40 (0x68 - 0x28)
// Class CommonGame.CommonGameDialogDescriptor
class UCommonGameDialogDescriptor : public UObject
{
public:
	class FText                                  Header;                                            // 0x28(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  Body;                                              // 0x40(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<struct CommonGame_ConfirmationDialogAction> ButtonActions;                                     // 0x58(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UCommonGameDialogDescriptor* GetDefaultObj();

};

// 0x0 (0x438 - 0x438)
// Class CommonGame.CommonGameDialog
class UCommonGameDialog : public UCommonActivatableWidget
{
public:

	static class UClass* StaticClass();
	static class UCommonGameDialog* GetDefaultObj();

};

// 0x50 (0x300 - 0x2B0)
// Class CommonGame.CommonLocalPlayer
class UCommonLocalPlayer : public ULocalPlayer
{
public:
	uint8                                        Pad_D80[0x50];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UCommonLocalPlayer* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class CommonGame.CommonMessagingSubsystem
class UCommonMessagingSubsystem : public ULocalPlayerSubsystem
{
public:

	static class UClass* StaticClass();
	static class UCommonMessagingSubsystem* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class CommonGame.CommonUIExtensions
class UCommonUIExtensions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UCommonUIExtensions* GetDefaultObj();

	class FName SuspendInputForPlayer(class APlayerController* PlayerController, class FName SuspendReason);
	void ResumeInputForPlayer(class APlayerController* PlayerController, class FName SuspendToken);
	void PushStreamedContentToLayer_ForPlayer(class ULocalPlayer* LocalPlayer, const struct GameplayTags_GameplayTag& LayerName, TSoftClassPtr<class UCommonActivatableWidget> WidgetClass);
	class UCommonActivatableWidget* PushContentToLayer_ForPlayer(class ULocalPlayer* LocalPlayer, const struct GameplayTags_GameplayTag& LayerName, TSubclassOf<class UCommonActivatableWidget> WidgetClass);
	void PopContentFromLayer(class UCommonActivatableWidget* ActivatableWidget);
	bool IsOwningPlayerUsingTouch(class UUserWidget* WidgetContextObject);
	bool IsOwningPlayerUsingGamepad(class UUserWidget* WidgetContextObject);
	enum class ECommonInputType GetOwningPlayerInputType(class UUserWidget* WidgetContextObject);
	class ULocalPlayer* GetLocalPlayerFromController(class APlayerController* PlayerController);
};

// 0x30 (0x60 - 0x30)
// Class CommonGame.GameUIManagerSubsystem
class UGameUIManagerSubsystem : public UGameInstanceSubsystem
{
public:
	class UGameUIPolicy*                         CurrentPolicy;                                     // 0x30(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftClassPtr<class UGameUIPolicy>           DefaultUIPolicyClass;                              // 0x38(0x28)(Edit, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UGameUIManagerSubsystem* GetDefaultObj();

};

// 0x40 (0x68 - 0x28)
// Class CommonGame.GameUIPolicy
class UGameUIPolicy : public UObject
{
public:
	uint8                                        Pad_E33[0x8];                                      // Fixing Size After Last Property  
	TSoftClassPtr<class UPrimaryGameLayout>      LayoutClass;                                       // 0x30(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct CommonGame_RootViewportLayoutInfo> RootViewportLayouts;                               // 0x58(0x10)(ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UGameUIPolicy* GetDefaultObj();

};

// 0x68 (0x378 - 0x310)
// Class CommonGame.PrimaryGameLayout
class UPrimaryGameLayout : public UCommonUserWidget
{
public:
	uint8                                        Pad_E4A[0x18];                                     // Fixing Size After Last Property  
	TMap<struct GameplayTags_GameplayTag, class UCommonActivatableWidgetContainerBase*> Layers;                                            // 0x328(0x50)(ExportObject, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UPrimaryGameLayout* GetDefaultObj();

	void RegisterLayer(const struct GameplayTags_GameplayTag& LayerTag, class UCommonActivatableWidgetContainerBase* LayerWidget);
};

}


