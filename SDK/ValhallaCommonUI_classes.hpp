#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x440 - 0x438)
// Class ValhallaCommonUI.ValActivatableWidget
class UValActivatableWidget : public UCommonActivatableWidget
{
public:
	enum class EValWidgetInputMode               InputConfig;                                       // 0x438(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EMouseCaptureMode                 GameMouseCaptureMode;                              // 0x439(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        RegisterForBindings : 1;                           // Mask: 0x1, PropSize: 0x10x43A(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F77[0x5];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UValActivatableWidget* GetDefaultObj();

	void OnBindingReady(enum class EBindingType Type);
	class AValHUD* GetHUD();
	void BindingReady(enum class EBindingType Type);
};

// 0x18 (0x15E0 - 0x15C8)
// Class ValhallaCommonUI.ValBoundActionButton
class UValBoundActionButton : public UCommonBoundActionButton
{
public:
	TSubclassOf<class UCommonButtonStyle>        KeyboardStyle;                                     // 0x15C8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UCommonButtonStyle>        GamepadStyle;                                      // 0x15D0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UCommonButtonStyle>        TouchStyle;                                        // 0x15D8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UValBoundActionButton* GetDefaultObj();

};

// 0xB0 (0x438 - 0x388)
// Class ValhallaCommonUI.ValHUD
class AValHUD : public AHUD
{
public:
	FMulticastInlineDelegateProperty_            OnQueued;                                          // 0x388(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnQuickPlay;                                       // 0x398(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnCancelQueue;                                     // 0x3A8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnBindingReady;                                    // 0x3B8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            ViewportResizedEventDel;                           // 0x3C8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnRequestMessage;                                  // 0x3D8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    CameraShakeOffsetLocation;                         // 0x3E8(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Rotator                   CameraShakeOffsetRotation;                         // 0x400(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class UDataTable*                            CurrentLayerTable;                                 // 0x418(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDataTable*                            DefaultLayerTable;                                 // 0x420(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bQueued;                                           // 0x428(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_FD1[0xF];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class AValHUD* GetDefaultObj();

	void SetQueued(bool Value);
	void RequestMessage(class FText Title, class FText Message);
	class UCommonActivatableWidget* PushLayer(class FName LayerName);
	void PopLayer(class UCommonActivatableWidget* Widget);
	void NavigateQuickPlay();
	bool IsOfflineMode();
	bool IsDemoMode();
	void CancelQueue();
	void BindingReady(enum class EBindingType Type);
};

// 0x140 (0x578 - 0x438)
// Class ValhallaCommonUI.ValHUDLobby
class AValHUDLobby : public AValHUD
{
public:
	class FString                                SocialHubServerIPAddress;                          // 0x438(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AValSocialHubBeaconClient*             SocialHubBeacon;                                   // 0x448(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSoftObjectPtr<class UValQueueData>          SocialHubQueue;                                    // 0x450(0x28)(Edit, DisableEditOnInstance, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_FF8[0xF8];                                     // Fixing Size After Last Property  
	bool                                         bAssumeSocialHubOnline;                            // 0x570(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_FFB[0x7];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class AValHUDLobby* GetDefaultObj();

	void JoinSocialHub();
};

// 0x8 (0x448 - 0x440)
// Class ValhallaCommonUI.ValLayer
class UValLayer : public UValActivatableWidget
{
public:
	class FName                                  SceneName;                                         // 0x440(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UValLayer* GetDefaultObj();

	void ShowMe();
	void PushMe();
	void PopMe();
	void HideMe();
};

// 0x8 (0x30 - 0x28)
// Class ValhallaCommonUI.ValUILibrary
class UValUILibrary : public UBlueprintFunctionLibrary
{
public:
	uint8                                        Pad_10E4[0x8];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UValUILibrary* GetDefaultObj();

	void UpdateBloom(TArray<class UWidget*>& Widgets, float SpreadValue, float OffsetMultiplier);
	bool SetBool(bool& Var, bool Value);
	void MoveWidgetTo(class UWidget* Widget, class UWidget** CompletedWidget, const struct CoreUObject_Vector2D& TargetPosition, float TransitionTime, enum class EEasingFunc XEasing, enum class EEasingFunc YEasing, class UObject* WorldContextObject, const struct Engine_LatentActionInfo& LatentInfo);
	class AValPlayerController* GetPlayer(class UObject* WorldContextObject);
	struct SlateCore_SlateBrush GetMappedInputIcon(class FName& InputName, enum class ECommonInputType InputType, class FName& GamepadName);
	void GetInputKey(class FName& InputName, TArray<struct InputCore_Key>* OutInput);
	struct SlateCore_SlateBrush GetIconForInputKey(struct InputCore_Key& Key, enum class ECommonInputType InputType, class FName& GamepadName);
	class AValGameState* GetGameState(class UObject* WorldContextObject);
	class UValGameInstance* GetGameInstance(class UObject* WorldContextObject);
	class AValCharacter* GetCharacter(class UObject* WorldContextObject);
	class UBackendService* GetBackendServiceInterface(class UObject* WorldContextObject);
};

// 0x8 (0x318 - 0x310)
// Class ValhallaCommonUI.ValWidget
class UValWidget : public UCommonUserWidget
{
public:
	uint8                                        RegisterForBindings : 1;                           // Mask: 0x1, PropSize: 0x10x310(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_110B[0x7];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UValWidget* GetDefaultObj();

	void OnBindingReady(enum class EBindingType Type);
	class AValHUD* GetHUD();
	void BindingReady(enum class EBindingType Type);
};

}


