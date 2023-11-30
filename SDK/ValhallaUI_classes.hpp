#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x2F0 - 0x2C0)
// Class ValhallaUI.UIWidget
class UUIWidget : public UUserWidget
{
public:
	uint8                                        RegisterForBindings : 1;                           // Mask: 0x1, PropSize: 0x10x2C0(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1199[0x2F];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UUIWidget* GetDefaultObj();

	void StartNewJiggle(class UUIJiggle* NewJiggle, class UCanvasPanel* CanvasToJiggle);
	void RequestShow(bool Visible);
	void OnShown(bool Visible);
	void OnBindingReady(enum class EBindingType Type);
	class AUIHUD* GetHUD();
	void BindingReady(enum class EBindingType Type);
	void Animate(enum class EUIAnimation Type, float Value, float Time, float Delay, bool Quadratic);
};

// 0x0 (0x2F0 - 0x2F0)
// Class ValhallaUI.UIFPS
class UUIFPS : public UUIWidget
{
public:

	static class UClass* StaticClass();
	static class UUIFPS* GetDefaultObj();

	int32 GetFPS();
};

// 0x20 (0x310 - 0x2F0)
// Class ValhallaUI.UIGameMinimapMarker
class UUIGameMinimapMarker : public UUIWidget
{
public:
	bool                                         bShouldClamp;                                      // 0x2F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsClamped;                                        // 0x2F1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsActive;                                         // 0x2F2(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_131F[0x5];                                     // Fixing Size After Last Property  
	class AActor*                                CachedActor;                                       // 0x2F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct CoreUObject_Vector2D                  CachedLocation;                                    // 0x300(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UUIGameMinimapMarker* GetDefaultObj();

	void UpdateLocation(class UObject* WorldContextObject, const struct CoreUObject_Vector& ObjectiveLocation);
	void UpdateActorLocation(class UObject* WorldContextObject, class AActor* ObjectiveActor);
	void UpdateActive();
	bool IsActive();
};

// 0x50 (0x340 - 0x2F0)
// Class ValhallaUI.UIGameMinimapPlayer
class UUIGameMinimapPlayer : public UUIWidget
{
public:
	struct CoreUObject_Vector                    CachedLocation;                                    // 0x2F0(0x18)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    RevealedPosition;                                  // 0x308(0x18)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CachedRotationAngle;                               // 0x320(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RevealedRotationAngle;                             // 0x324(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFriendly;                                         // 0x328(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_146F[0x3];                                     // Fixing Size After Last Property  
	float                                        InterpolationDuration;                             // 0x32C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LocationDistanceThresholdSqr;                      // 0x330(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_147A[0xC];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UUIGameMinimapPlayer* GetDefaultObj();

	void UpdatePlayerLocation(class UObject* WorldContextObject, struct CoreUObject_Vector& RepLocation);
	void ReturnWidgetToFreeList();
	float GetWidgetRotationAngle(bool bRevealCheck);
	struct CoreUObject_Vector GetPlayerLocation(bool bRevealCheck);
};

// 0x60 (0x350 - 0x2F0)
// Class ValhallaUI.UIGameOverlay
class UUIGameOverlay : public UUIWidget
{
public:
	class UCanvasPanel*                          Container;                                         // 0x2F0(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCanvasPanel*                          Direction;                                         // 0x2F8(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        CachedInverseScreenScale;                          // 0x300(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_15B9[0x4];                                     // Fixing Size After Last Property  
	struct CoreUObject_Box2D                     CachedScreenExtents;                               // 0x308(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct CoreUObject_Vector                    CachedLocationOffset;                              // 0x330(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsOffScreen;                                      // 0x348(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsDisplayed;                                      // 0x349(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bOnlyShowIfOffScreen;                              // 0x34A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_15CB[0x5];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UUIGameOverlay* GetDefaultObj();

	void UpdatePosition_Vector(class UObject* WorldContextObject, const struct CoreUObject_Vector& ObjectiveLocation);
	void UpdatePosition(class UObject* WorldContextObject, class AActor* ObjectiveActor);
	void UpdateDistance_Vector(class UObject* WorldContextObject, const struct CoreUObject_Vector& ObjectiveLocation, class UTextBlock* TextBlock);
	void UpdateDistance(class UObject* WorldContextObject, class AActor* ObjectiveActor, class UTextBlock* TextBlock);
	void ShowOverlay(bool bShouldShow);
	void OnViewportResized();
	void OnOffScreenChanged(bool bIsNowOffScreen);
};

// 0x70 (0x360 - 0x2F0)
// Class ValhallaUI.UIGameRadar
class UUIGameRadar : public UUIWidget
{
public:
	TMap<class APlayerState*, struct CoreUObject_Vector> RepLocations;                                      // 0x2F0(0x50)(Edit, BlueprintVisible, EditConst, Protected, NativeAccessSpecifierProtected)
	struct CoreUObject_Vector                    SelfLocation;                                      // 0x340(0x18)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MapScale;                                          // 0x358(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1698[0x4];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UUIGameRadar* GetDefaultObj();

	void UpdateRadarPlayers(class UObject* WorldContextObject, TMap<class APlayerState*, class UUIGameMinimapPlayer*>& Players);
	struct CoreUObject_Vector2D Get2DLocation(struct CoreUObject_Vector& Location);
};

// 0x258 (0x5E0 - 0x388)
// Class ValhallaUI.UIHUD
class AUIHUD : public AHUD
{
public:
	FMulticastInlineDelegateProperty_            OnQueued;                                          // 0x388(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnCancelQueue;                                     // 0x398(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            MapLoadedEventDel;                                 // 0x3A8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnApplyOptions;                                    // 0x3B8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnRevertOptions;                                   // 0x3C8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnRestoreDefaultOptions;                           // 0x3D8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnBindingReady;                                    // 0x3E8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnNavigateMenu;                                    // 0x3F8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnNavigateOverlay;                                 // 0x408(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnNavigateInfo;                                    // 0x418(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnNavigateDetails;                                 // 0x428(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnOpenSocialOverlay;                               // 0x438(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnCloseDeathCrate;                                 // 0x448(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnChangeLoadout;                                   // 0x458(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnUpdatePrompts;                                   // 0x468(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            ViewportResizedEventDel;                           // 0x478(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnRequestMessage;                                  // 0x488(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnOptionsChanged;                                  // 0x498(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnRequestRemove;                                   // 0x4A8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UDataTable*                            DefaultSceneTable;                                 // 0x4B8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDataTable*                            CurrentSceneTable;                                 // 0x4C0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UUIScene*>                      SceneStack;                                        // 0x4C8(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	class FName                                  CurrentSceneName;                                  // 0x4D8(0x8)(Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<class FName, class UUIScene*>           ShownScenes;                                       // 0x4E0(0x50)(ExportObject, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TMap<class FName, class UUIScene*>           SceneMap;                                          // 0x530(0x50)(ExportObject, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TArray<struct ValhallaUI_PromptData>         PromptData;                                        // 0x580(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1CB0[0x10];                                    // Fixing Size After Last Property  
	class FName                                  TransitionScene;                                   // 0x5A0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bQueued;                                           // 0x5A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1CCB[0x7];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector2D                  ConstrainedViewportSize;                           // 0x5B0(0x10)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1CD6[0x18];                                    // Fixing Size After Last Property  
	class UValHUDStateTracker*                   HUDStateTracker;                                   // 0x5D8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class AUIHUD* GetDefaultObj();

	bool UpdateConstrainedViewportSize();
	void SimulateKeyInput(const struct InputCore_Key& Key);
	void ShowScene(class FName SceneName);
	void SetQueued(bool Value);
	void SetOptionsChanged(bool bHasOptionsChanged, bool bDifferentFromDefaults);
	void RevertOptions();
	void ReturnToLobby();
	void RestoreDefaultOptions();
	void RequestMessage(class FText Title, class FText Message);
	void PushScene(class FName SceneName);
	void PopScene(class FName SceneName);
	void OpenSocialOverlay();
	void OnScenesReady();
	void OnMapLoadComplete();
	void NavigateOverlay();
	void NavigateMenu();
	void NavigateInfo();
	void NavigateDetails();
	void NavigateBack();
	bool IsSceneInStack(class FName SceneName);
	bool IsOfflineMode();
	bool IsDemoMode();
	void HideScene(class FName SceneName);
	bool GetQueued();
	void GetPromptData(TArray<struct ValhallaUI_PromptData>* Data);
	struct CoreUObject_Vector2D GetConstrainedViewportSize();
	class UUIScene* FindSceneByName(class FName SceneName);
	void CloseDeathCrate();
	void ChangeLoadout();
	void CancelQueue();
	void BindingReady(enum class EBindingType Type);
	void ApplyOptions();
};

// 0x160 (0x740 - 0x5E0)
// Class ValhallaUI.UIHUDCity
class AUIHUDCity : public AUIHUD
{
public:
	FMulticastInlineDelegateProperty_            OnLobbyBeaconConnectionStatusChanged;              // 0x5E0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnJoinLobbyBeacon;                                 // 0x5F0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class FString                                LobbyServerIPAddress;                              // 0x600(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AValLobbyBeaconClient*                 LobbyBeacon;                                       // 0x610(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSoftObjectPtr<class UValQueueData>          SocialHubQueue;                                    // 0x618(0x28)(Edit, DisableEditOnInstance, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1F15[0xF8];                                    // Fixing Size After Last Property  
	bool                                         bAssumeLobbyBeaconOnline;                          // 0x738(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1F1A[0x7];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class AUIHUDCity* GetDefaultObj();

	void OnLobbyBeaconQueuePopped(bool bAccepted);
	void KickIt();
	void JoinLobbyBeacon();
	class AValLobbyBeaconClient* GetLobbyBeacon();
	void CancelLobbyBeaconQueue();
};

// 0x140 (0x720 - 0x5E0)
// Class ValhallaUI.UIHUDLobby
class AUIHUDLobby : public AUIHUD
{
public:
	class FString                                SocialHubServerIPAddress;                          // 0x5E0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AValSocialHubBeaconClient*             SocialHubBeacon;                                   // 0x5F0(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSoftObjectPtr<class UValQueueData>          SocialHubQueue;                                    // 0x5F8(0x28)(Edit, DisableEditOnInstance, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1FC4[0xF8];                                    // Fixing Size After Last Property  
	bool                                         bAssumeSocialHubOnline;                            // 0x718(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1FD7[0x7];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class AUIHUDLobby* GetDefaultObj();

	void JoinSocialHub();
};

// 0x198 (0x488 - 0x2F0)
// Class ValhallaUI.UIMinimap
class UUIMinimap : public UUIWidget
{
public:
	FMulticastInlineDelegateProperty_            OnWidgetRelevancyLost;                             // 0x2F0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                         bDebugShowAI;                                      // 0x300(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2204[0x7];                                     // Fixing Size After Last Property  
	class UTexture2D*                            MiniMapTexture;                                    // 0x308(0x8)(ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<class APlayerState*, struct CoreUObject_Vector> RepLocations;                                      // 0x310(0x50)(Edit, BlueprintVisible, EditConst, Protected, NativeAccessSpecifierProtected)
	float                                        MapScale;                                          // 0x360(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_221C[0x4];                                     // Fixing Size After Last Property  
	TSubclassOf<class UUIGameMinimapPlayer>      CybridWidgetType;                                  // 0x368(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2225[0x88];                                    // Fixing Size After Last Property  
	TSubclassOf<class UUIWidget>                 EnemyBlipWidgetType;                               // 0x3F8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2234[0x88];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UUIMinimap* GetDefaultObj();

	void UpdateMapPlayers(class UObject* WorldContextObject, TMap<class APlayerState*, class UUIGameMinimapPlayer*>& Players, const struct CoreUObject_Vector2D& MapTranslation);
	void ReleaseEnemyBlipWidget(class UUIWidget* WidgetToRelease);
	void OnMinimapLoaded();
	class UUIWidget* GetOrCreateEnemyBlipWidget();
	void GetMinimapTexture(class UTexture2D** Texture);
	class UUIGameMinimapPlayer* GetFreeCybridWidget();
	void DebugShowAIOnMinimap();
};

// 0x30 (0x2F0 - 0x2C0)
// Class ValhallaUI.UINetworkIssueItem
class UUINetworkIssueItem : public UUserWidget
{
public:
	class UImage*                                Icon;                                              // 0x2C0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidget*                               DisplayItem;                                       // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        TimeToDisplay;                                     // 0x2D0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_247D[0x4];                                     // Fixing Size After Last Property  
	class UTexture2D*                            MinorIcon;                                         // 0x2D8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTexture2D*                            SevereIcon;                                        // 0x2E0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2492[0x8];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UUINetworkIssueItem* GetDefaultObj();

	void OnUpdateSeverity(bool bIsSevere);
	void DisplayIssueManual(bool bShow, bool bSevere);
	void DisplayIssue(bool bSevere);
};

// 0x10 (0x300 - 0x2F0)
// Class ValhallaUI.UIScene
class UUIScene : public UUIWidget
{
public:
	class FName                                  SceneName;                                         // 0x2F0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Popup;                                             // 0x2F8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bPreventFlushPressedKeysOnFocusChangeEvent : 1;    // Mask: 0x1, PropSize: 0x10x2F9(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_AD : 7;                                     // Fixing Bit-Field Size  
	bool                                         ForceHidden;                                       // 0x2FA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_26D3[0x5];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UUIScene* GetDefaultObj();

	void ShowMe();
	void RequestPrompts();
	bool RequestBack();
	void RegisterPrompts(TArray<struct ValhallaUI_PromptData>& Data);
	void PushMe();
	void PopMe();
	bool IsInStack();
	void HideMe();
	class FString GetScenePath();
};

// 0x10 (0x310 - 0x300)
// Class ValhallaUI.UIScene_Demo
class UUIScene_Demo : public UUIScene
{
public:
	class FString                                ServerIPAddress;                                   // 0x300(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UUIScene_Demo* GetDefaultObj();

};

// 0x78 (0xA8 - 0x30)
// Class ValhallaUI.UIValColorConfigData
class UUIValColorConfigData : public UPrimaryDataAsset
{
public:
	class FName                                  AssetId;                                           // 0x30(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_LinearColor               PrimaryColor;                                      // 0x38(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_LinearColor               SecondaryColor;                                    // 0x48(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<enum class ERarity, struct CoreUObject_LinearColor> RarityColorMap;                                    // 0x58(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UUIValColorConfigData* GetDefaultObj();

	class UUIValColorConfigData* GetColorConfigFromId(class FName& ID);
};

// 0x58 (0x88 - 0x30)
// Class ValhallaUI.UIValPingDataAsset
class UUIValPingDataAsset : public UDataAsset
{
public:
	struct CoreUObject_Color                     GlobalDefaultColor;                                // 0x30(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A8C[0x4];                                     // Fixing Size After Last Property  
	TMap<enum class EValPingType, struct ValhallaUI_ValPingUIData> Data;                                              // 0x38(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UUIValPingDataAsset* GetDefaultObj();

	bool GetPingUIDataFromPingType(class UUIValPingDataAsset* PingData, enum class EValPingType& PingType, struct ValhallaUI_ValPingUIData* OutPingData);
	void AssignPingData(class UUIValPingDataAsset* PingData, class AValPing* Ping, class UImage* Icon, const TArray<class UImage*>& ColorsToSet, const TArray<class UTextBlock*>& TextColorsToSet, class UTextBlock* PingText);
	void AssignInteractTypeData(class UUIValPingDataAsset* PingData, TScriptInterface<class IValContextPingActor> ContextActor, class UImage* Background, class UImage* Icon, class UTextBlock* TitleText, class UTextBlock* DescriptionText);
};

// 0x8 (0x30 - 0x28)
// Class ValhallaUI.ValErrorDisplayViewRedirecter
class UValErrorDisplayViewRedirecter : public URHViewRedirecter
{
public:
	class FName                                  RedirectorTrapRoute;                               // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UValErrorDisplayViewRedirecter* GetDefaultObj();

};

// 0x0 (0x550 - 0x550)
// Class ValhallaUI.ValErrorDisplay
class UValErrorDisplay : public URHWidget
{
public:

	static class UClass* StaticClass();
	static class UValErrorDisplay* GetDefaultObj();

	bool GetKickErrorCode(class FText* OutErrorCode);
	bool GetDisconnectErrorCode(class FText* OutErrorCode);
};

// 0x38 (0x60 - 0x28)
// Class ValhallaUI.ValHUDStateTracker
class UValHUDStateTracker : public UObject
{
public:
	uint8                                        Pad_2D5D[0x38];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UValHUDStateTracker* GetDefaultObj();

	void PollMatchPhase();
	void HandleUpdateMatchPhase(const struct Valhalla_GameplayPhaseInfo& GameplayPhaseInfo);
	void HandlePlayerStateReady(class AValPlayerStateBase* PlayerState);
	void HandlePlayerClientReady(bool bIsClientReady);
	void HandleOnTeamChangeEvent(int32 OldTeam, int32 NewTeam);
};

// 0x8 (0x30 - 0x28)
// Class ValhallaUI.ValQueueForRemoteLobbyViewRedirecter
class UValQueueForRemoteLobbyViewRedirecter : public URHViewRedirecter
{
public:
	class FName                                  RedirectorTrapRoute;                               // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UValQueueForRemoteLobbyViewRedirecter* GetDefaultObj();

};

// 0x28 (0x578 - 0x550)
// Class ValhallaUI.ValQueueForRemoteLobby
class UValQueueForRemoteLobby : public URHWidget
{
public:
	int32                                        LeaveGameSessionsTimeoutSeconds;                   // 0x550(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RequestSessionRetrySeconds;                        // 0x554(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EQueueForRemoteLobbyState         RemoteLobbyState;                                  // 0x558(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2EC0[0x17];                                    // Fixing Size After Last Property  
	class URH_JoinedSession*                     LobbySession;                                      // 0x570(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UValQueueForRemoteLobby* GetDefaultObj();

	void OnSessionRetryTimer();
	void OnRemoteLobbyStateChanged(enum class EQueueForRemoteLobbyState State);
	void OnGameSessionsLeaveTimeout();
};

// 0x20 (0x5D0 - 0x5B0)
// Class ValhallaUI.ValRHUIGameMinimapMarker
class UValRHUIGameMinimapMarker : public UValRHWidget
{
public:
	bool                                         bShouldClamp;                                      // 0x5B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsClamped;                                        // 0x5B1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsActive;                                         // 0x5B2(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3261[0x5];                                     // Fixing Size After Last Property  
	class AActor*                                CachedActor;                                       // 0x5B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct CoreUObject_Vector2D                  CachedLocation;                                    // 0x5C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UValRHUIGameMinimapMarker* GetDefaultObj();

	void UpdateLocation(class UObject* WorldContextObject, const struct CoreUObject_Vector& ObjectiveLocation);
	void UpdateActorLocation(class UObject* WorldContextObject, class AActor* ObjectiveActor);
	void UpdateActive();
	bool IsActive();
};

// 0x50 (0x600 - 0x5B0)
// Class ValhallaUI.ValRHUIGameMinimapPlayer
class UValRHUIGameMinimapPlayer : public UValRHWidget
{
public:
	struct CoreUObject_Vector                    CachedLocation;                                    // 0x5B0(0x18)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    RevealedPosition;                                  // 0x5C8(0x18)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CachedRotationAngle;                               // 0x5E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RevealedRotationAngle;                             // 0x5E4(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFriendly;                                         // 0x5E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3545[0x3];                                     // Fixing Size After Last Property  
	float                                        InterpolationDuration;                             // 0x5EC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LocationDistanceThresholdSqr;                      // 0x5F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3547[0xC];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UValRHUIGameMinimapPlayer* GetDefaultObj();

	void UpdatePlayerLocation(class UObject* WorldContextObject, struct CoreUObject_Vector& RepLocation);
	void ReturnWidgetToFreeList();
	float GetWidgetRotationAngle(bool bRevealCheck);
	struct CoreUObject_Vector GetPlayerLocation(bool bRevealCheck);
};

// 0x88 (0x638 - 0x5B0)
// Class ValhallaUI.ValRHUIGameOverlay
class UValRHUIGameOverlay : public UValRHWidget
{
public:
	class UCanvasPanel*                          Container;                                         // 0x5B0(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCanvasPanel*                          Direction;                                         // 0x5B8(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        CachedInverseScreenScale;                          // 0x5C0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3912[0x4];                                     // Fixing Size After Last Property  
	struct CoreUObject_Box2D                     CachedScreenExtents;                               // 0x5C8(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct CoreUObject_Vector                    CachedLocationOffset;                              // 0x5F0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsOffScreen;                                      // 0x608(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsDisplayed;                                      // 0x609(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bOnlyShowIfOffScreen;                              // 0x60A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3964[0x5];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector2D                  ConstrainedViewportSize;                           // 0x610(0x10)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct CoreUObject_Vector2D                  CachedViewportSize;                                // 0x620(0x10)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        CachedDist;                                        // 0x630(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_398B[0x4];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UValRHUIGameOverlay* GetDefaultObj();

	bool UpdateViewportSize();
	void UpdatePosition_Vector(class UObject* WorldContextObject, const struct CoreUObject_Vector& ObjectiveLocation);
	void UpdatePosition(class UObject* WorldContextObject, class AActor* ObjectiveActor);
	void UpdateDistance_Vector(class UObject* WorldContextObject, const struct CoreUObject_Vector& ObjectiveLocation, class UTextBlock* TextBlock);
	void UpdateDistance(class UObject* WorldContextObject, class AActor* ObjectiveActor, class UTextBlock* TextBlock);
	bool UpdateConstrainedViewportSize();
	void ShowOverlay(bool bShouldShow);
	void OnOffScreenChanged(bool bIsNowOffScreen);
	struct CoreUObject_Vector2D GetViewportSize();
	struct CoreUObject_Vector2D GetConstrainedViewportSize();
};

// 0x70 (0x620 - 0x5B0)
// Class ValhallaUI.ValRHUIGameRadar
class UValRHUIGameRadar : public UValRHWidget
{
public:
	TMap<class APlayerState*, struct CoreUObject_Vector> RepLocations;                                      // 0x5B0(0x50)(Edit, BlueprintVisible, EditConst, Protected, NativeAccessSpecifierProtected)
	struct CoreUObject_Vector                    SelfLocation;                                      // 0x600(0x18)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MapScale;                                          // 0x618(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3A99[0x4];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UValRHUIGameRadar* GetDefaultObj();

	void UpdateRadarPlayers(class UObject* WorldContextObject, TMap<class APlayerState*, class UValRHUIGameMinimapPlayer*>& Players);
	struct CoreUObject_Vector2D Get2DLocation(struct CoreUObject_Vector& Location);
};

// 0x198 (0x748 - 0x5B0)
// Class ValhallaUI.ValRHUIMinimap
class UValRHUIMinimap : public UValRHWidget
{
public:
	FMulticastInlineDelegateProperty_            OnWidgetRelevancyLost;                             // 0x5B0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                         bDebugShowAI;                                      // 0x5C0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C57[0x7];                                     // Fixing Size After Last Property  
	class UTexture2D*                            MiniMapTexture;                                    // 0x5C8(0x8)(ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<class APlayerState*, struct CoreUObject_Vector> RepLocations;                                      // 0x5D0(0x50)(Edit, BlueprintVisible, EditConst, Protected, NativeAccessSpecifierProtected)
	float                                        MapScale;                                          // 0x620(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3C5A[0x4];                                     // Fixing Size After Last Property  
	TSubclassOf<class UValRHUIGameMinimapPlayer> CybridWidgetType;                                  // 0x628(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3C60[0x88];                                    // Fixing Size After Last Property  
	TSubclassOf<class UValRHWidget>              EnemyBlipWidgetType;                               // 0x6B8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3C65[0x88];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UValRHUIMinimap* GetDefaultObj();

	void UpdateMapPlayers(class UObject* WorldContextObject, TMap<class APlayerState*, class UValRHUIGameMinimapPlayer*>& Players, const struct CoreUObject_Vector2D& MapTranslation, float ZoomedRenderScale);
	void ReleaseEnemyBlipWidget(class UValRHWidget* WidgetToRelease);
	void PanToMouse(struct CoreUObject_Vector2D& MousePos, class UWidget* MapWidget, struct CoreUObject_Vector2D& CurrentTranslation, struct CoreUObject_Vector2D& TargetTranslation, float CurrentZoom, float TargetZoom);
	void OnMinimapLoaded();
	class UValRHWidget* GetOrCreateEnemyBlipWidget();
	void GetMinimapTexture(class UTexture2D** Texture);
	class UValRHUIGameMinimapPlayer* GetFreeCybridWidget();
	void DebugShowAIOnMinimap();
	void CounterScaleWidget(class UWidget* Widget, float ZoomedRenderScale);
	struct CoreUObject_Vector2D ClampTranslation(struct CoreUObject_Vector2D& Translation, struct CoreUObject_Vector2D& MapSize, float ExtentMultiplier);
};

// 0x0 (0x28 - 0x28)
// Class ValhallaUI.ValViewRedirector_ShowPostMatch
class UValViewRedirector_ShowPostMatch : public URHViewRedirecter
{
public:

	static class UClass* StaticClass();
	static class UValViewRedirector_ShowPostMatch* GetDefaultObj();

	bool ShowEOM(class ARHHUDCommon* HUD);
};

// 0x0 (0x5C0 - 0x5C0)
// Class ValhallaUI.ValVoiceActivityWidget
class UValVoiceActivityWidget : public URHVoiceActivityWidget
{
public:

	static class UClass* StaticClass();
	static class UValVoiceActivityWidget* GetDefaultObj();

};

// 0x0 (0x2F0 - 0x2F0)
// Class ValhallaUI.UIWidget_MatchInfo
class UUIWidget_MatchInfo : public UUIWidget
{
public:

	static class UClass* StaticClass();
	static class UUIWidget_MatchInfo* GetDefaultObj();

	class FString GetRallyHereUuid();
	class FString GetMatchId();
};

// 0x0 (0x28 - 0x28)
// Class ValhallaUI.ValAntiCheatViolationViewRedirector
class UValAntiCheatViolationViewRedirector : public URHViewRedirecter
{
public:

	static class UClass* StaticClass();
	static class UValAntiCheatViolationViewRedirector* GetDefaultObj();

};

// 0x0 (0x550 - 0x550)
// Class ValhallaUI.ValAntiCheatViolationWidget
class UValAntiCheatViolationWidget : public URHWidget
{
public:

	static class UClass* StaticClass();
	static class UValAntiCheatViolationWidget* GetDefaultObj();

	void GetClientViolationMessages(TArray<class FText>* OutMessages);
};

// 0x8 (0x4F0 - 0x4E8)
// Class ValhallaUI.ValRHLobbyHUD
class AValRHLobbyHUD : public ARHLobbyHUD
{
public:
	class UValQueueScheduleManager*              QueueScheduleManager;                              // 0x4E8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class AValRHLobbyHUD* GetDefaultObj();

	void OnSelectedRegionChanged();
	void LeaveAllGameSessions();
};

// 0x0 (0x568 - 0x568)
// Class ValhallaUI.ValRHQuickPlayWidget
class UValRHQuickPlayWidget : public URHQuickPlayWidget
{
public:

	static class UClass* StaticClass();
	static class UValRHQuickPlayWidget* GetDefaultObj();

};

// 0x10 (0x560 - 0x550)
// Class ValhallaUI.ValTotalPlayerCountWidget
class UValTotalPlayerCountWidget : public URHWidget
{
public:
	class FString                                PlayerCountJsonPanel;                              // 0x550(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UValTotalPlayerCountWidget* GetDefaultObj();

	bool GetTotalPlayerCount(int32* OutPlayerCount);
};

// 0x0 (0x28 - 0x28)
// Class ValhallaUI.UILibrary
class UUILibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UUILibrary* GetDefaultObj();

	void SetWidgetGrandchildrenRotation(class UPanelWidget* ParentWidget, float Angle);
	struct RallyHereStart_ReportPlayerParams SetupReportPlayerFromDamageSummary(class UObject* WorldContextObject, struct Valhalla_DamageSummaryData& DamageSummary);
	bool SetBool(bool& Var, bool Value);
	bool ProjectWorldToScreenBidirectional(class APlayerController* Player, struct CoreUObject_Vector& WorldPosition, struct CoreUObject_Vector2D* ScreenPosition, bool* bTargetBehindCamera, bool bPlayerViewportRelative);
	struct CoreUObject_LinearColor GetSecondaryColorFromName(class FName& ID);
	int32 GetRadialOptionSelected(class UWidget* RelativeWidget, int32 NumOptions, float* MouseAngle, float DeadZone);
	class AValPlayerCameraManager* GetPlayerCameraManager(class UObject* WorldContextObject);
	class AValPlayerController* GetPlayer(class UObject* WorldContextObject);
	class AValGameState* GetGameState(class UObject* WorldContextObject);
	bool GetGamepadButtonForAction(class FName Action, struct InputCore_Key* Button);
	class UValGameInstance* GetGameInstance(class UObject* WorldContextObject);
	struct CoreUObject_LinearColor GetColorFromRarity(class FName& ID, enum class ERarity Rarity);
	struct CoreUObject_LinearColor GetColorFromName(class FName& ID);
	class AValCharacter* GetCharacter(class UObject* WorldContextObject);
	bool GetButtonForAxisMapping(class FName Axis, struct InputCore_Key* Button, float Scale, bool IsGamepadKey);
	bool GetButtonForActionMappingUsingWidget(class UWidget* InWidget, class FName Action, struct InputCore_Key* Button);
	bool GetButtonForActionMapping(class FName Action, struct InputCore_Key* Button, bool IsGamepadKey);
	class UBackendService* GetBackendServiceInterface(class UObject* WorldContextObject);
	bool GetAllButtonsForAxisMapping(class FName Axis, TArray<struct InputCore_Key>* Buttons, float Scale, bool IsGamepadKey);
	bool GetAllButtonsForActionMappingUsingWidget(class UWidget* InWidget, class FName Action, TArray<struct InputCore_Key>* Buttons);
	bool GetAllButtonsForActionMapping(class FName Action, TArray<struct InputCore_Key>* Buttons, bool IsGamepadKey);
	bool CanSubmitPlayerReport(class UObject* WorldContextObject, struct RallyHereStart_ReportPlayerParams& Params);
};

// 0x8 (0x4A0 - 0x498)
// Class ValhallaUI.ValRHHUDCommon
class AValRHHUDCommon : public ARHHUDCommon
{
public:
	class UValHUDStateTracker*                   HUDStateTracker;                                   // 0x498(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class AValRHHUDCommon* GetDefaultObj();

};

}


