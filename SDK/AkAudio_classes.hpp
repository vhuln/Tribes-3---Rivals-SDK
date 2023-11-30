#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE0 (0x380 - 0x2A0)
// Class AkAudio.AkPortalComponent
class UAkPortalComponent : public USceneComponent
{
public:
	bool                                         bDynamic;                                          // 0x2A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAkAcousticPortalState            InitialState;                                      // 0x2A1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CD2[0x2];                                      // Fixing Size After Last Property  
	float                                        ObstructionRefreshInterval;                        // 0x2A4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECollisionChannel                 ObstructionCollisionChannel;                       // 0x2A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CD6[0xD7];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UAkPortalComponent* GetDefaultObj();

	bool PortalPlacementValid();
	void OpenPortal();
	class UPrimitiveComponent* GetPrimitiveParent();
	enum class EAkAcousticPortalState GetCurrentState();
	void ClosePortal();
};

// 0x10 (0x2E0 - 0x2D0)
// Class AkAudio.AkAcousticPortal
class AAkAcousticPortal : public AVolume
{
public:
	class UAkPortalComponent*                    Portal;                                            // 0x2D0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAkAcousticPortalState            InitialState;                                      // 0x2D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bRequiresStateMigration;                           // 0x2D9(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_CF6[0x6];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class AAkAcousticPortal* GetDefaultObj();

	void OpenPortal();
	enum class EAkAcousticPortalState GetCurrentState();
	void ClosePortal();
};

// 0x28 (0x50 - 0x28)
// Class AkAudio.AkAudioType
class UAkAudioType : public UObject
{
public:
	bool                                         bAutoLoad;                                         // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D13[0x7];                                      // Fixing Size After Last Property  
	TArray<class UObject*>                       UserData;                                          // 0x30(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_D14[0x10];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UAkAudioType* GetDefaultObj();

	void UnloadData(bool bAsync);
	void LoadData();
	int32 GetWwiseShortId();
};

// 0x10 (0x60 - 0x50)
// Class AkAudio.AkAcousticTexture
class UAkAcousticTexture : public UAkAudioType
{
public:
	struct WwiseResourceLoader_WwiseAcousticTextureCookedData AcousticTextureCookedData;                         // 0x50(0xC)(Edit, Transient, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_D1B[0x4];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UAkAcousticTexture* GetDefaultObj();

};

// 0x18 (0x2B8 - 0x2A0)
// Class AkAudio.AkAcousticTextureSetComponent
class UAkAcousticTextureSetComponent : public USceneComponent
{
public:
	uint8                                        Pad_D29[0x18];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UAkAcousticTextureSetComponent* GetDefaultObj();

};

// 0x40 (0x2D8 - 0x298)
// Class AkAudio.AkAmbientSound
class AAkAmbientSound : public AActor
{
public:
	class UAkAudioEvent*                         AkAudioEvent;                                      // 0x298(0x8)(ZeroConstructor, Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkComponent*                          AkComponent;                                       // 0x2A0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         StopWhenOwnerIsDestroyed;                          // 0x2A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, SimpleDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AutoPost;                                          // 0x2A9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, SimpleDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D37[0x2E];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class AAkAmbientSound* GetDefaultObj();

	void StopAmbientSound();
	void StartAmbientSound();
};

// 0xD8 (0x100 - 0x28)
// Class AkAudio.AkAndroidInitializationSettings
class UAkAndroidInitializationSettings : public UObject
{
public:
	uint8                                        Pad_D48[0x8];                                      // Fixing Size After Last Property  
	struct AkAudio_AkCommonInitializationSettingsWithSampleRate CommonSettings;                                    // 0x30(0x70)(Edit, Config, NativeAccessSpecifierPublic)
	struct AkAudio_AkCommunicationSettingsWithSystemInitialization CommunicationSettings;                             // 0xA0(0x20)(Edit, Config, NativeAccessSpecifierPublic)
	struct AkAudio_AkAndroidAdvancedInitializationSettings AdvancedSettings;                                  // 0xC0(0x40)(Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAkAndroidInitializationSettings* GetDefaultObj();

	void MigrateMultiCoreRendering(bool NewValue);
};

// 0x48 (0x70 - 0x28)
// Class AkAudio.AkPlatformInfo
class UAkPlatformInfo : public UObject
{
public:
	uint8                                        Pad_D59[0x48];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UAkPlatformInfo* GetDefaultObj();

};

// 0x0 (0x70 - 0x70)
// Class AkAudio.AkAndroidPlatformInfo
class UAkAndroidPlatformInfo : public UAkPlatformInfo
{
public:

	static class UClass* StaticClass();
	static class UAkAndroidPlatformInfo* GetDefaultObj();

};

// 0x8 (0x58 - 0x50)
// Class AkAudio.AkAudioBank
class UAkAudioBank : public UAkAudioType
{
public:
	bool                                         AutoLoad;                                          // 0x50(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D6A[0x7];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UAkAudioBank* GetDefaultObj();

};

// 0x80 (0xD0 - 0x50)
// Class AkAudio.AkAudioEvent
class UAkAudioEvent : public UAkAudioType
{
public:
	float                                        MaxAttenuationRadius;                              // 0x50(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsInfinite;                                        // 0x54(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E2C[0x3];                                      // Fixing Size After Last Property  
	float                                        MinimumDuration;                                   // 0x58(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaximumDuration;                                   // 0x5C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct WwiseResourceLoader_WwiseLocalizedEventCookedData EventCookedData;                                   // 0x60(0x60)(Edit, Transient, EditConst, NativeAccessSpecifierPublic)
	class UAkAudioBank*                          RequiredBank;                                      // 0xC0(0x8)(ZeroConstructor, Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E31[0x8];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UAkAudioEvent* GetDefaultObj();

	int32 PostOnGameObjectAndWait(class UAkGameObject* GameObject, const struct Engine_LatentActionInfo& LatentActionInfo);
	int32 PostOnGameObject(class UAkGameObject* GameObject, FDelegateProperty_& Delegate, int32 CallbackMask);
	int32 PostOnComponentAndWait(class UAkComponent* Component, bool bStopWhenAttachedObjectDestroyed, const struct Engine_LatentActionInfo& LatentActionInfo);
	int32 PostOnComponent(class UAkComponent* Component, FDelegateProperty_& Delegate, int32 CallbackMask, bool bStopWhenAttachedObjectDestroyed);
	int32 PostOnActorAndWait(class AActor* Actor, bool bStopWhenAttachedObjectDestroyed, const struct Engine_LatentActionInfo& LatentActionInfo);
	int32 PostOnActor(class AActor* Actor, FDelegateProperty_& Delegate, int32 CallbackMask, bool bStopWhenAttachedObjectDestroyed);
	int32 PostAtLocation(const struct CoreUObject_Vector& Location, const struct CoreUObject_Rotator& Orientation, FDelegateProperty_& Callback, int32 CallbackMask, class UObject* WorldContextObject);
	int32 ExecuteAction(enum class EAkActionOnEventType ActionType, class AActor* Actor, int32 PlayingID, int32 TransitionDuration, enum class EAkCurveInterpolation FadeCurve);
};

// 0x20 (0x2C0 - 0x2A0)
// Class AkAudio.AkGameObject
class UAkGameObject : public USceneComponent
{
public:
	class UAkAudioEvent*                         AkAudioEvent;                                      // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                EventName;                                         // 0x2A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EEB[0x8];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UAkGameObject* GetDefaultObj();

	void Stop();
	void SetRTPCValue(class UAkRtpc* RTPCValue, float Value, int32 InterpolationTimeMs, const class FString& RTPC);
	void PostAssociatedAkEventAsync(class UObject* WorldContextObject, int32 CallbackMask, FDelegateProperty_& PostEventCallback, const struct Engine_LatentActionInfo& LatentInfo, int32* PlayingID);
	int32 PostAssociatedAkEvent(int32 CallbackMask, FDelegateProperty_& PostEventCallback);
	void PostAkEventAsync(class UObject* WorldContextObject, class UAkAudioEvent* AkEvent, int32* PlayingID, int32 CallbackMask, FDelegateProperty_& PostEventCallback, const struct Engine_LatentActionInfo& LatentInfo);
	int32 PostAkEvent(class UAkAudioEvent* AkEvent, int32 CallbackMask, FDelegateProperty_& PostEventCallback, const class FString& InEventName);
	void GetRTPCValue(class UAkRtpc* RTPCValue, enum class ERTPCValueType InputValueType, float* Value, enum class ERTPCValueType* OutputValueType, const class FString& RTPC, int32 PlayingID);
};

// 0x1C0 (0x480 - 0x2C0)
// Class AkAudio.AkComponent
class UAkComponent : public UAkGameObject
{
public:
	bool                                         bUseSpatialAudio;                                  // 0x2C0(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1035[0x7];                                     // Fixing Size After Last Property  
	enum class EAkCollisionChannel               OcclusionCollisionChannel;                         // 0x2C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         EnableSpotReflectors;                              // 0x2C9(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_103A[0x2];                                     // Fixing Size After Last Property  
	float                                        OuterRadius;                                       // 0x2CC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InnerRadius;                                       // 0x2D0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_103F[0x4];                                     // Fixing Size After Last Property  
	class UAkAuxBus*                             EarlyReflectionAuxBus;                             // 0x2D8(0x8)(Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                EarlyReflectionAuxBusName;                         // 0x2E0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        EarlyReflectionOrder;                              // 0x2F0(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        EarlyReflectionBusSendGain;                        // 0x2F4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        EarlyReflectionMaxPathLength;                      // 0x2F8(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        RoomReverbAuxBusGain;                              // 0x2FC(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        DiffractionMaxEdges;                               // 0x300(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        DiffractionMaxPaths;                               // 0x304(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        DiffractionMaxPathLength;                          // 0x308(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct CoreUObject_IntVector                 LastUpdateLocationCell;                            // 0x30C(0xC)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        UpdateSpatialAudioRoomDistance;                    // 0x318(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         DrawFirstOrderReflections;                         // 0x31C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         DrawSecondOrderReflections;                        // 0x31D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         DrawHigherOrderReflections;                        // 0x31E(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         DrawDiffraction;                                   // 0x31F(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         StopWhenOwnerDestroyed;                            // 0x320(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1060[0x3];                                     // Fixing Size After Last Property  
	float                                        AttenuationScalingFactor;                          // 0x324(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OcclusionRefreshInterval;                          // 0x328(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseReverbVolumes;                                 // 0x32C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1065[0x153];                                   // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UAkComponent* GetDefaultObj();

	void UseReverbVolumes(bool InUseReverbVolumes);
	void UseEarlyReflections(class UAkAuxBus* AuxBus, int32 Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, const class FString& AuxBusName);
	void SetSwitch(class UAkSwitchValue* SwitchValue, const class FString& SwitchGroup, const class FString& SwitchState);
	void SetStopWhenOwnerDestroyed(bool bStopWhenOwnerDestroyed);
	void SetOutputBusVolume(float BusVolume);
	void SetListeners(TArray<class UAkComponent*>& Listeners);
	void SetGameObjectRadius(float In_outerRadius, float In_innerRadius);
	void SetEnableSpotReflectors(bool In_enable);
	void SetEarlyReflectionsVolume(float SendVolume);
	void SetEarlyReflectionsAuxBus(const class FString& AuxBusName);
	void SetAttenuationScalingFactor(float Value);
	void PostTrigger(class UAkTrigger* TriggerValue, const class FString& Trigger);
	void PostAssociatedAkEventAndWaitForEndAsync(int32* PlayingID, const struct Engine_LatentActionInfo& LatentInfo);
	int32 PostAssociatedAkEventAndWaitForEnd(const struct Engine_LatentActionInfo& LatentInfo);
	void PostAkEventAndWaitForEndAsync(class UAkAudioEvent* AkEvent, int32* PlayingID, const struct Engine_LatentActionInfo& LatentInfo);
	int32 PostAkEventAndWaitForEnd(class UAkAudioEvent* AkEvent, const class FString& In_EventName, const struct Engine_LatentActionInfo& LatentInfo);
	enum class ECollisionChannel GetOcclusionCollisionChannel();
	float GetAttenuationRadius();
};

// 0x30 (0x4B0 - 0x480)
// Class AkAudio.AkAudioInputComponent
class UAkAudioInputComponent : public UAkComponent
{
public:
	uint8                                        Pad_10C0[0x30];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UAkAudioInputComponent* GetDefaultObj();

	int32 PostAssociatedAudioInputEvent();
};

// 0x78 (0xC8 - 0x50)
// Class AkAudio.AkAuxBus
class UAkAuxBus : public UAkAudioType
{
public:
	float                                        MaxAttenuationRadius;                              // 0x50(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10D5[0x4];                                     // Fixing Size After Last Property  
	struct WwiseResourceLoader_WwiseLocalizedAuxBusCookedData AuxBusCookedData;                                  // 0x58(0x60)(Edit, Transient, NativeAccessSpecifierPublic)
	class UAkAudioBank*                          RequiredBank;                                      // 0xB8(0x8)(ZeroConstructor, Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10D7[0x8];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UAkAuxBus* GetDefaultObj();

};

// 0xE58 (0xFF0 - 0x198)
// Class AkAudio.AkCheckBox
class UAkCheckBox : public UContentWidget
{
public:
	uint8                                        Pad_118A[0x288];                                   // Fixing Size After Last Property  
	enum class ECheckBoxState                    CheckedState;                                      // 0x420(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_118E[0x3];                                     // Fixing Size After Last Property  
	FDelegateProperty_                           CheckedStateDelegate;                              // 0x424(0x10)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1192[0xC];                                     // Fixing Size After Last Property  
	struct SlateCore_CheckBoxStyle               WidgetStyle;                                       // 0x440(0xAD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0xF10(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsFocusable;                                       // 0xF11(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1197[0x6];                                     // Fixing Size After Last Property  
	struct AkAudio_AkBoolPropertyToControl       ThePropertyToControl;                              // 0xF18(0x10)(Edit, NativeAccessSpecifierPublic)
	struct AkAudio_AkWwiseItemToControl          ItemToControl;                                     // 0xF28(0x40)(Edit, Config, EditConst, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            AkOnCheckStateChanged;                             // 0xF68(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnItemDropped;                                     // 0xF78(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPropertyDropped;                                 // 0xF88(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_11A1[0x58];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UAkCheckBox* GetDefaultObj();

	void SetIsChecked(bool InIsChecked);
	void SetCheckedState(enum class ECheckBoxState InCheckedState);
	void SetAkItemId(struct CoreUObject_Guid& ItemId);
	void SetAkBoolProperty(const class FString& ItemProperty);
	bool IsPressed();
	bool IsChecked();
	enum class ECheckBoxState GetCheckedState();
	class FString GetAkProperty();
	struct CoreUObject_Guid GetAkItemId();
};

// 0x28 (0x50 - 0x28)
// Class AkAudio.AkAssetData
class UAkAssetData : public UObject
{
public:
	uint8                                        Pad_11AF[0x28];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UAkAssetData* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class AkAudio.AkAssetPlatformData
class UAkAssetPlatformData : public UObject
{
public:
	class UAkAssetData*                          CurrentAssetData;                                  // 0x28(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UAkAssetPlatformData* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class AkAudio.AkMediaAssetData
class UAkMediaAssetData : public UObject
{
public:
	uint8                                        Pad_11DE[0x10];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UAkMediaAssetData* GetDefaultObj();

};

// 0x50 (0x78 - 0x28)
// Class AkAudio.AkMediaAsset
class UAkMediaAsset : public UObject
{
public:
	TMap<class FString, class UAkMediaAssetData*> MediaAssetDataPerPlatform;                         // 0x28(0x50)(Edit, Transient, EditConst, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UAkMediaAsset* GetDefaultObj();

};

// 0x0 (0x78 - 0x78)
// Class AkAudio.AkLocalizedMediaAsset
class UAkLocalizedMediaAsset : public UAkMediaAsset
{
public:

	static class UClass* StaticClass();
	static class UAkLocalizedMediaAsset* GetDefaultObj();

};

// 0x0 (0x78 - 0x78)
// Class AkAudio.AkExternalMediaAsset
class UAkExternalMediaAsset : public UAkMediaAsset
{
public:

	static class UClass* StaticClass();
	static class UAkExternalMediaAsset* GetDefaultObj();

};

// 0x0 (0x50 - 0x50)
// Class AkAudio.AkFolder
class UAkFolder : public UAkAudioType
{
public:

	static class UClass* StaticClass();
	static class UAkFolder* GetDefaultObj();

};

// 0x0 (0x570 - 0x570)
// Class AkAudio.DrawPortalComponent
class UDrawPortalComponent : public UPrimitiveComponent
{
public:

	static class UClass* StaticClass();
	static class UDrawPortalComponent* GetDefaultObj();

};

// 0x0 (0x570 - 0x570)
// Class AkAudio.DrawRoomComponent
class UDrawRoomComponent : public UPrimitiveComponent
{
public:

	static class UClass* StaticClass();
	static class UDrawRoomComponent* GetDefaultObj();

};

// 0x68 (0xB8 - 0x50)
// Class AkAudio.AkEffectShareSet
class UAkEffectShareSet : public UAkAudioType
{
public:
	struct WwiseResourceLoader_WwiseLocalizedShareSetCookedData ShareSetCookedData;                                // 0x50(0x60)(Edit, Transient, EditConst, NativeAccessSpecifierPublic)
	uint8                                        Pad_122F[0x8];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UAkEffectShareSet* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class AkAudio.AkGameplayStatics
class UAkGameplayStatics : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UAkGameplayStatics* GetDefaultObj();

	void UseReverbVolumes(bool InUseReverbVolumes, class AActor* Actor);
	void UseEarlyReflections(class AActor* Actor, class UAkAuxBus* AuxBus, int32 Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, const class FString& AuxBusName);
	void UnloadInitBank();
	void UnloadBankByName(const class FString& BankName);
	void StopProfilerCapture();
	void StopOutputCapture();
	void StopAllAmbientSounds(class UObject* WorldContextObject);
	void StopAll();
	void StopActor(class AActor* Actor);
	void StartProfilerCapture(const class FString& Filename);
	void StartOutputCapture(const class FString& Filename);
	void StartAllAmbientSounds(class UObject* WorldContextObject);
	class UAkComponent* SpawnAkComponentAtLocation(class UObject* WorldContextObject, class UAkAudioEvent* AkEvent, class USoundBase* Metasound, class UAudioComponent** OutputComponent, const struct CoreUObject_Vector& Location, const struct CoreUObject_Rotator& Orientation, bool AutoPost, const class FString& EventName, bool AutoDestroy);
	void SetSwitch(class UAkSwitchValue* SwitchValue, class AActor* Actor, class FName SwitchGroup, class FName SwitchState);
	void SetState(class UAkStateValue* StateValue, class FName StateGroup, class FName State);
	void SetSpeakerAngles(TArray<float>& SpeakerAngles, float HeightAngle, const class FString& DeviceShareSet);
	void SetRTPCValue(class UAkRtpc* RTPCValue, float Value, int32 InterpolationTimeMs, class AActor* Actor, class FName RTPC);
	void SetReflectionsOrder(int32 Order, bool RefreshPaths);
	void SetPortalToPortalObstruction(class UAkPortalComponent* PortalComponent0, class UAkPortalComponent* PortalComponent1, float ObstructionValue);
	void SetPortalObstructionAndOcclusion(class UAkPortalComponent* PortalComponent, float ObstructionValue, float OcclusionValue);
	void SetPanningRule(enum class EPanningRule PanRule);
	bool SetOutputDeviceEffect(const struct WwiseSoundEngine_AkOutputDeviceID& InDeviceId, int32 InEffectIndex, class UAkEffectShareSet* InEffectShareSet);
	void SetOutputBusVolume(float BusVolume, class AActor* Actor);
	void SetOcclusionRefreshInterval(float RefreshInterval, class AActor* Actor);
	void SetMultiplePositions(class UAkComponent* GameObjectAkComponent, const TArray<struct CoreUObject_Transform>& Positions, enum class EAkMultiPositionType MultiPositionType);
	void SetMultipleChannelMaskEmitterPositions(class UAkComponent* GameObjectAkComponent, const TArray<struct AkAudio_AkChannelMask>& ChannelMasks, const TArray<struct CoreUObject_Transform>& Positions, enum class EAkMultiPositionType MultiPositionType);
	void SetMultipleChannelEmitterPositions(class UAkComponent* GameObjectAkComponent, const TArray<enum class EAkChannelConfiguration>& ChannelMasks, const TArray<struct CoreUObject_Transform>& Positions, enum class EAkMultiPositionType MultiPositionType);
	void SetGameObjectToPortalObstruction(class UAkComponent* GameObjectAkComponent, class UAkPortalComponent* PortalComponent, float ObstructionValue);
	void SetDistanceProbe(class AActor* Listener, class AActor* DistanceProbe);
	void SetCurrentAudioCultureAsync(const class FString& AudioCulture, FDelegateProperty_& Completed);
	void SetCurrentAudioCulture(const class FString& AudioCulture, const struct Engine_LatentActionInfo& LatentInfo, class UObject* WorldContextObject);
	bool SetBusEffectByName(const class FString& InBusName, int32 InEffectIndex, class UAkEffectShareSet* InEffectShareSet);
	bool SetBusEffectByID(const struct WwiseSoundEngine_AkUniqueID& InBusID, int32 InEffectIndex, class UAkEffectShareSet* InEffectShareSet);
	void SetBusConfig(const class FString& BusName, enum class EAkChannelConfiguration ChannelConfiguration);
	bool SetAuxBusEffect(class UAkAuxBus* InAuxBus, int32 InEffectIndex, class UAkEffectShareSet* InEffectShareSet);
	bool SetActorMixerEffect(const struct WwiseSoundEngine_AkUniqueID& InAudioNodeID, int32 InEffectIndex, class UAkEffectShareSet* InEffectShareSet);
	void ResetRTPCValue(class UAkRtpc* RTPCValue, int32 InterpolationTimeMs, class AActor* Actor, class FName RTPC);
	void ReplaceMainOutput(struct AkAudio_AkOutputSettings& MainOutputSettings);
	void RemoveOutput(const struct WwiseSoundEngine_AkOutputDeviceID& In_OutputDeviceId);
	void PostTrigger(class UAkTrigger* TriggerValue, class AActor* Actor, class FName Trigger);
	void PostEventByName(const class FString& EventName, class AActor* Actor, bool bStopWhenAttachedToDestroyed);
	void PostEventAtLocationByName(const class FString& EventName, const struct CoreUObject_Vector& Location, const struct CoreUObject_Rotator& Orientation, class UObject* WorldContextObject);
	int32 PostEventAtLocation(class UAkAudioEvent* AkEvent, class USoundBase* Metasound, class UAudioComponent** OutputComponent, const struct CoreUObject_Vector& Location, const struct CoreUObject_Rotator& Orientation, const class FString& EventName, class UObject* WorldContextObject);
	int32 PostEvent(class UAkAudioEvent* AkEvent, class USoundBase* Metasound, class UAudioComponent** OutputComponent, class AActor* Actor, int32 CallbackMask, FDelegateProperty_& PostEventCallback, bool bStopWhenAttachedToDestroyed, const class FString& EventName);
	void PostAndWaitForEndOfEventAsync(class UAkAudioEvent* AkEvent, class AActor* Actor, int32* PlayingID, bool bStopWhenAttachedToDestroyed, const struct Engine_LatentActionInfo& LatentInfo);
	int32 PostAndWaitForEndOfEvent(class UAkAudioEvent* AkEvent, class AActor* Actor, bool bStopWhenAttachedToDestroyed, const struct Engine_LatentActionInfo& LatentInfo);
	void LoadInitBank();
	void LoadBankByName(const class FString& BankName);
	bool IsGame(class UObject* WorldContextObject);
	bool IsEditor();
	void GetSpeakerAngles(TArray<float>* SpeakerAngles, float* HeightAngle, const class FString& DeviceShareSet);
	void GetRTPCValue(class UAkRtpc* RTPCValue, int32 PlayingID, enum class ERTPCValueType InputValueType, float* Value, enum class ERTPCValueType* OutputValueType, class AActor* Actor, class FName RTPC);
	class FString GetCurrentAudioCulture();
	TArray<class FString> GetAvailableAudioCultures();
	class UAkComponent* GetAkComponent(class USceneComponent* AttachToComponent, bool* ComponentCreated, class FName AttachPointName, const struct CoreUObject_Vector& Location, enum class EAttachLocation LocationType);
	class UObject* GetAkAudioTypeUserData(class UAkAudioType* Instance, class UClass* Type);
	void ExecuteActionOnPlayingID(enum class EAkActionOnEventType ActionType, int32 PlayingID, int32 TransitionDuration, enum class EAkCurveInterpolation FadeCurve);
	void ExecuteActionOnEvent(class UAkAudioEvent* AkEvent, enum class EAkActionOnEventType ActionType, class AActor* Actor, int32 TransitionDuration, enum class EAkCurveInterpolation FadeCurve, int32 PlayingID);
	void ClearSoundBanksAndMedia();
	void ClearBanks();
	void CancelEventCallback(FDelegateProperty_& PostEventCallback);
	void AddOutputCaptureMarker(const class FString& MarkerText);
	void AddOutput(struct AkAudio_AkOutputSettings& In_Settings, struct WwiseSoundEngine_AkOutputDeviceID* Out_DeviceID, TArray<class UAkComponent*>& In_ListenerIDs);
};

// 0x8 (0x30 - 0x28)
// Class AkAudio.AkCallbackInfo
class UAkCallbackInfo : public UObject
{
public:
	class UAkComponent*                          AkComponent;                                       // 0x28(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAkCallbackInfo* GetDefaultObj();

};

// 0x8 (0x38 - 0x30)
// Class AkAudio.AkEventCallbackInfo
class UAkEventCallbackInfo : public UAkCallbackInfo
{
public:
	int32                                        PlayingID;                                         // 0x30(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        EventId;                                           // 0x34(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAkEventCallbackInfo* GetDefaultObj();

};

// 0x10 (0x48 - 0x38)
// Class AkAudio.AkMIDIEventCallbackInfo
class UAkMIDIEventCallbackInfo : public UAkEventCallbackInfo
{
public:
	uint8                                        Pad_17AC[0x10];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UAkMIDIEventCallbackInfo* GetDefaultObj();

	enum class EAkMidiEventType GetType();
	bool GetProgramChange(struct AkAudio_AkMidiProgramChange* AsProgramChange);
	bool GetPitchBend(struct AkAudio_AkMidiPitchBend* AsPitchBend);
	bool GetNoteOn(struct AkAudio_AkMidiNoteOnOff* AsNoteOn);
	bool GetNoteOff(struct AkAudio_AkMidiNoteOnOff* AsNoteOff);
	bool GetNoteAftertouch(struct AkAudio_AkMidiNoteAftertouch* AsNoteAftertouch);
	bool GetGeneric(struct AkAudio_AkMidiGeneric* AsGeneric);
	bool GetChannelAftertouch(struct AkAudio_AkMidiChannelAftertouch* AsChannelAftertouch);
	uint8 GetChannel();
	bool GetCc(struct AkAudio_AkMidiCc* AsCc);
};

// 0x18 (0x50 - 0x38)
// Class AkAudio.AkMarkerCallbackInfo
class UAkMarkerCallbackInfo : public UAkEventCallbackInfo
{
public:
	int32                                        Identifier;                                        // 0x38(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Position;                                          // 0x3C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Label;                                             // 0x40(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAkMarkerCallbackInfo* GetDefaultObj();

};

// 0x18 (0x50 - 0x38)
// Class AkAudio.AkDurationCallbackInfo
class UAkDurationCallbackInfo : public UAkEventCallbackInfo
{
public:
	float                                        Duration;                                          // 0x38(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EstimatedDuration;                                 // 0x3C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AudioNodeID;                                       // 0x40(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MediaId;                                           // 0x44(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStreaming;                                        // 0x48(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17C8[0x7];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UAkDurationCallbackInfo* GetDefaultObj();

};

// 0x40 (0x70 - 0x30)
// Class AkAudio.AkMusicSyncCallbackInfo
class UAkMusicSyncCallbackInfo : public UAkCallbackInfo
{
public:
	int32                                        PlayingID;                                         // 0x30(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct AkAudio_AkSegmentInfo                 SegmentInfo;                                       // 0x34(0x24)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	enum class EAkCallbackType                   MusicSyncType;                                     // 0x58(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17DA[0x7];                                     // Fixing Size After Last Property  
	class FString                                UserCueName;                                       // 0x60(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAkMusicSyncCallbackInfo* GetDefaultObj();

};

// 0x188 (0x440 - 0x2B8)
// Class AkAudio.AkGeometryComponent
class UAkGeometryComponent : public UAkAcousticTextureSetComponent
{
public:
	enum class EAkMeshType                       MeshType;                                          // 0x2B8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_180A[0x3];                                     // Fixing Size After Last Property  
	int32                                        LOD;                                               // 0x2BC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WeldingThreshold;                                  // 0x2C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_180E[0x4];                                     // Fixing Size After Last Property  
	TMap<class UMaterialInterface*, struct AkAudio_AkGeometrySurfaceOverride> StaticMeshSurfaceOverride;                         // 0x2C8(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct AkAudio_AkGeometrySurfaceOverride     CollisionMeshSurfaceOverride;                      // 0x318(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bEnableDiffraction;                                // 0x330(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableDiffractionOnBoundaryEdges;                 // 0x331(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1814[0x6];                                     // Fixing Size After Last Property  
	class AActor*                                AssociatedRoom;                                    // 0x338(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1815[0x10];                                    // Fixing Size After Last Property  
	struct AkAudio_AkGeometryData                GeometryData;                                      // 0x350(0x50)(NativeAccessSpecifierPrivate)
	TMap<int32, double>                          SurfaceAreas;                                      // 0x3A0(0x50)(NativeAccessSpecifierPrivate)
	uint8                                        Pad_181C[0x50];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UAkGeometryComponent* GetDefaultObj();

	void UpdateGeometry();
	void SendGeometry();
	void RemoveGeometry();
	void InitializeParent();
	void ConvertMesh();
};

// 0x20 (0x70 - 0x50)
// Class AkAudio.AkGroupValue
class UAkGroupValue : public UAkAudioType
{
public:
	struct WwiseResourceLoader_WwiseGroupValueCookedData GroupValueCookedData;                              // 0x50(0x14)(Edit, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       GroupShortId;                                      // 0x64(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_182B[0x8];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UAkGroupValue* GetDefaultObj();

};

// 0xD8 (0x100 - 0x28)
// Class AkAudio.AkHololensInitializationSettings
class UAkHololensInitializationSettings : public UObject
{
public:
	uint8                                        Pad_1845[0x8];                                     // Fixing Size After Last Property  
	struct AkAudio_AkCommonInitializationSettingsWithSampleRate CommonSettings;                                    // 0x30(0x70)(Edit, Config, NativeAccessSpecifierPublic)
	struct AkAudio_AkCommunicationSettingsWithSystemInitialization CommunicationSettings;                             // 0xA0(0x20)(Edit, Config, NativeAccessSpecifierPublic)
	struct AkAudio_AkHololensAdvancedInitializationSettings AdvancedSettings;                                  // 0xC0(0x3C)(Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	uint8                                        Pad_184A[0x4];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UAkHololensInitializationSettings* GetDefaultObj();

	void MigrateMultiCoreRendering(bool NewValue);
};

// 0x0 (0x70 - 0x70)
// Class AkAudio.AkHololensPlatformInfo
class UAkHololensPlatformInfo : public UAkPlatformInfo
{
public:

	static class UClass* StaticClass();
	static class UAkHololensPlatformInfo* GetDefaultObj();

};

// 0x48 (0x98 - 0x50)
// Class AkAudio.AkInitBank
class UAkInitBank : public UAkAudioType
{
public:
	struct WwiseResourceLoader_WwiseInitBankCookedData InitBankCookedData;                                // 0x50(0x40)(Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18BD[0x8];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UAkInitBank* GetDefaultObj();

};

// 0xE0 (0x108 - 0x28)
// Class AkAudio.AkIOSInitializationSettings
class UAkIOSInitializationSettings : public UObject
{
public:
	uint8                                        Pad_18C7[0x8];                                     // Fixing Size After Last Property  
	struct AkAudio_AkCommonInitializationSettingsWithSampleRate CommonSettings;                                    // 0x30(0x70)(Edit, Config, NativeAccessSpecifierPublic)
	struct AkAudio_AkAudioSession                AudioSession;                                      // 0xA0(0xC)(Edit, Config, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_18CA[0x4];                                     // Fixing Size After Last Property  
	struct AkAudio_AkCommunicationSettingsWithSystemInitialization CommunicationSettings;                             // 0xB0(0x20)(Edit, Config, NativeAccessSpecifierPublic)
	struct AkAudio_AkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings;                                  // 0xD0(0x38)(Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAkIOSInitializationSettings* GetDefaultObj();

};

// 0x0 (0x70 - 0x70)
// Class AkAudio.AkIOSPlatformInfo
class UAkIOSPlatformInfo : public UAkPlatformInfo
{
public:

	static class UClass* StaticClass();
	static class UAkIOSPlatformInfo* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class AkAudio.AkItemBoolPropertiesConv
class UAkItemBoolPropertiesConv : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UAkItemBoolPropertiesConv* GetDefaultObj();

	class FText Conv_FAkBoolPropertyToControlToText(struct AkAudio_AkBoolPropertyToControl& INAkBoolPropertyToControl);
	class FString Conv_FAkBoolPropertyToControlToString(struct AkAudio_AkBoolPropertyToControl& INAkBoolPropertyToControl);
};

// 0x40 (0x1C0 - 0x180)
// Class AkAudio.AkItemBoolProperties
class UAkItemBoolProperties : public UWidget
{
public:
	FMulticastInlineDelegateProperty_            OnSelectionChanged;                                // 0x180(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPropertyDragged;                                 // 0x190(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1936[0x20];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UAkItemBoolProperties* GetDefaultObj();

	void SetSearchText(const class FString& NewText);
	class FString GetSelectedProperty();
	class FString GetSearchText();
};

// 0x0 (0x28 - 0x28)
// Class AkAudio.AkItemPropertiesConv
class UAkItemPropertiesConv : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UAkItemPropertiesConv* GetDefaultObj();

	class FText Conv_FAkPropertyToControlToText(struct AkAudio_AkPropertyToControl& INAkPropertyToControl);
	class FString Conv_FAkPropertyToControlToString(struct AkAudio_AkPropertyToControl& INAkPropertyToControl);
};

// 0x40 (0x1C0 - 0x180)
// Class AkAudio.AkItemProperties
class UAkItemProperties : public UWidget
{
public:
	FMulticastInlineDelegateProperty_            OnSelectionChanged;                                // 0x180(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPropertyDragged;                                 // 0x190(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_19AC[0x20];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UAkItemProperties* GetDefaultObj();

	void SetSearchText(const class FString& NewText);
	class FString GetSelectedProperty();
	class FString GetSearchText();
};

// 0x90 (0x330 - 0x2A0)
// Class AkAudio.AkLateReverbComponent
class UAkLateReverbComponent : public USceneComponent
{
public:
	bool                                         bEnable;                                           // 0x2A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19D9[0x3];                                     // Fixing Size After Last Property  
	float                                        SendLevel;                                         // 0x2A4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FadeRate;                                          // 0x2A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Priority;                                          // 0x2AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AutoAssignAuxBus;                                  // 0x2B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19DE[0x7];                                     // Fixing Size After Last Property  
	class UAkAuxBus*                             AuxBus;                                            // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AuxBusName;                                        // 0x2C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19E3[0x8];                                     // Fixing Size After Last Property  
	class UAkAuxBus*                             AuxBusManual;                                      // 0x2D8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_19E4[0x50];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UAkLateReverbComponent* GetDefaultObj();

	void AssociateAkTextureSetComponent(class UAkAcousticTextureSetComponent* TextureSetComponent);
};

// 0xD0 (0xF8 - 0x28)
// Class AkAudio.AkLinuxInitializationSettings
class UAkLinuxInitializationSettings : public UObject
{
public:
	uint8                                        Pad_1A00[0x8];                                     // Fixing Size After Last Property  
	struct AkAudio_AkCommonInitializationSettingsWithSampleRate CommonSettings;                                    // 0x30(0x70)(Edit, Config, NativeAccessSpecifierPublic)
	struct AkAudio_AkCommunicationSettingsWithSystemInitialization CommunicationSettings;                             // 0xA0(0x20)(Edit, Config, NativeAccessSpecifierPublic)
	struct AkAudio_AkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings;                                  // 0xC0(0x38)(Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAkLinuxInitializationSettings* GetDefaultObj();

	void MigrateMultiCoreRendering(bool NewValue);
};

// 0x0 (0x70 - 0x70)
// Class AkAudio.AkLinuxPlatformInfo
class UAkLinuxPlatformInfo : public UAkPlatformInfo
{
public:

	static class UClass* StaticClass();
	static class UAkLinuxPlatformInfo* GetDefaultObj();

};

// 0xD0 (0xF8 - 0x28)
// Class AkAudio.AkMacInitializationSettings
class UAkMacInitializationSettings : public UObject
{
public:
	uint8                                        Pad_1A2E[0x8];                                     // Fixing Size After Last Property  
	struct AkAudio_AkCommonInitializationSettingsWithSampleRate CommonSettings;                                    // 0x30(0x70)(Edit, Config, NativeAccessSpecifierPublic)
	struct AkAudio_AkCommunicationSettingsWithSystemInitialization CommunicationSettings;                             // 0xA0(0x20)(Edit, Config, NativeAccessSpecifierPublic)
	struct AkAudio_AkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings;                                  // 0xC0(0x38)(Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAkMacInitializationSettings* GetDefaultObj();

	void MigrateMultiCoreRendering(bool NewValue);
};

// 0x0 (0x70 - 0x70)
// Class AkAudio.AkMacPlatformInfo
class UAkMacPlatformInfo : public UAkPlatformInfo
{
public:

	static class UClass* StaticClass();
	static class UAkMacPlatformInfo* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class AkAudio.AkPlatformInitialisationSettingsBase
class IAkPlatformInitialisationSettingsBase : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IAkPlatformInitialisationSettingsBase* GetDefaultObj();

};

// 0xD0 (0xF8 - 0x28)
// Class AkAudio.AkPS4InitializationSettings
class UAkPS4InitializationSettings : public UObject
{
public:
	uint8                                        Pad_1A71[0x8];                                     // Fixing Size After Last Property  
	struct AkAudio_AkCommonInitializationSettings CommonSettings;                                    // 0x30(0x68)(Edit, Config, NativeAccessSpecifierPublic)
	struct AkAudio_AkCommunicationSettingsWithSystemInitialization CommunicationSettings;                             // 0x98(0x20)(Edit, Config, NativeAccessSpecifierPublic)
	struct AkAudio_AkPS4AdvancedInitializationSettings AdvancedSettings;                                  // 0xB8(0x40)(Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAkPS4InitializationSettings* GetDefaultObj();

	void MigrateMultiCoreRendering(bool NewValue);
};

// 0x0 (0x70 - 0x70)
// Class AkAudio.AkPS4PlatformInfo
class UAkPS4PlatformInfo : public UAkPlatformInfo
{
public:

	static class UClass* StaticClass();
	static class UAkPS4PlatformInfo* GetDefaultObj();

};

// 0xD8 (0x100 - 0x28)
// Class AkAudio.AkPS5InitializationSettings
class UAkPS5InitializationSettings : public UObject
{
public:
	uint8                                        Pad_1A8F[0x8];                                     // Fixing Size After Last Property  
	struct AkAudio_AkCommonInitializationSettings CommonSettings;                                    // 0x30(0x68)(Edit, Config, NativeAccessSpecifierPublic)
	struct AkAudio_AkCommunicationSettingsWithSystemInitialization CommunicationSettings;                             // 0x98(0x20)(Edit, Config, NativeAccessSpecifierPublic)
	struct AkAudio_AkPS5AdvancedInitializationSettings AdvancedSettings;                                  // 0xB8(0x44)(Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A92[0x4];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UAkPS5InitializationSettings* GetDefaultObj();

};

// 0x0 (0x100 - 0x100)
// Class AkAudio.AkDPXInitializationSettings
class UAkDPXInitializationSettings : public UAkPS5InitializationSettings
{
public:

	static class UClass* StaticClass();
	static class UAkDPXInitializationSettings* GetDefaultObj();

};

// 0x0 (0x70 - 0x70)
// Class AkAudio.AkPS5PlatformInfo
class UAkPS5PlatformInfo : public UAkPlatformInfo
{
public:

	static class UClass* StaticClass();
	static class UAkPS5PlatformInfo* GetDefaultObj();

};

// 0x38 (0x308 - 0x2D0)
// Class AkAudio.AkReverbVolume
class AAkReverbVolume : public AVolume
{
public:
	bool                                         bEnabled;                                          // 0x2D0(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AAF[0x7];                                     // Fixing Size After Last Property  
	class UAkAuxBus*                             AuxBus;                                            // 0x2D8(0x8)(ZeroConstructor, Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AuxBusName;                                        // 0x2E0(0x10)(ZeroConstructor, Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SendLevel;                                         // 0x2F0(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FadeRate;                                          // 0x2F4(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Priority;                                          // 0x2F8(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AB1[0x4];                                     // Fixing Size After Last Property  
	class UAkLateReverbComponent*                LateReverbComponent;                               // 0x300(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class AAkReverbVolume* GetDefaultObj();

};

// 0x30 (0x2F0 - 0x2C0)
// Class AkAudio.AkRoomComponent
class UAkRoomComponent : public UAkGameObject
{
public:
	bool                                         bEnable;                                           // 0x2C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDynamic;                                          // 0x2C1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1ACC[0x2];                                     // Fixing Size After Last Property  
	float                                        Priority;                                          // 0x2C4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WallOcclusion;                                     // 0x2C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AuxSendLevel;                                      // 0x2CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AutoPost;                                          // 0x2D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, SimpleDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AD2[0xF];                                     // Fixing Size After Last Property  
	class UAkAcousticTextureSetComponent*        GeometryComponent;                                 // 0x2E0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1AD3[0x8];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UAkRoomComponent* GetDefaultObj();

	void SetGeometryComponent(class UAkAcousticTextureSetComponent* TextureSetComponent);
	class UPrimitiveComponent* GetPrimitiveParent();
};

// 0x10 (0x60 - 0x50)
// Class AkAudio.AkRtpc
class UAkRtpc : public UAkAudioType
{
public:
	struct WwiseResourceLoader_WwiseGameParameterCookedData GameParameterCookedData;                           // 0x50(0xC)(Edit, Transient, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AD9[0x4];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UAkRtpc* GetDefaultObj();

};

// 0x328 (0x350 - 0x28)
// Class AkAudio.AkSettings
class UAkSettings : public UObject
{
public:
	uint8                                        MaxSimultaneousReverbVolumes;                      // 0x28(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AE6[0x7];                                     // Fixing Size After Last Property  
	struct CoreUObject_FilePath                  WwiseProjectPath;                                  // 0x30(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_DirectoryPath             WwiseSoundDataFolder;                              // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_DirectoryPath             RootOutputPath;                                    // 0x50(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_DirectoryPath             GeneratedSoundBanksFolder;                         // 0x60(0x10)(ZeroConstructor, Config, Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_DirectoryPath             WwiseStagingDirectory;                             // 0x70(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSoundBanksTransfered;                             // 0x80(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAssetsMigrated;                                   // 0x81(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bProjectMigrated;                                  // 0x82(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAutoConnectToWAAPI;                               // 0x83(0x1)(ZeroConstructor, Config, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECollisionChannel                 DefaultOcclusionCollisionChannel;                  // 0x84(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECollisionChannel                 DefaultFitToGeometryCollisionChannel;              // 0x85(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AF3[0x2];                                     // Fixing Size After Last Property  
	TMap<TSoftObjectPtr<class UPhysicalMaterial>, struct AkAudio_AkGeometrySurfacePropertiesToMap> AkGeometryMap;                                     // 0x88(0x50)(Edit, EditFixedSize, Config, NativeAccessSpecifierPublic)
	float                                        GlobalDecayAbsorption;                             // 0xD8(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AF6[0x4];                                     // Fixing Size After Last Property  
	TSoftObjectPtr<class UAkAuxBus>              DefaultReverbAuxBus;                               // 0xE0(0x28)(Edit, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<float, TSoftObjectPtr<class UAkAuxBus>> EnvironmentDecayAuxBusMap;                         // 0x108(0x50)(Edit, Config, UObjectWrapper, NativeAccessSpecifierPublic)
	class FString                                HFDampingName;                                     // 0x158(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DecayEstimateName;                                 // 0x168(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TimeToFirstReflectionName;                         // 0x178(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAkRtpc>                HFDampingRTPC;                                     // 0x188(0x28)(Edit, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAkRtpc>                DecayEstimateRTPC;                                 // 0x1B0(0x28)(Edit, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAkRtpc>                TimeToFirstReflectionRTPC;                         // 0x1D8(0x28)(Edit, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAkAudioEvent>          AudioInputEvent;                                   // 0x200(0x28)(Edit, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct CoreUObject_Guid, struct AkAudio_AkAcousticTextureParams> AcousticTextureParamsMap;                          // 0x228(0x50)(Config, NativeAccessSpecifierPublic)
	bool                                         SplitSwitchContainerMedia;                         // 0x278(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SplitMediaPerFolder;                               // 0x279(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         UseEventBasedPackaging;                            // 0x27A(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B05[0x5];                                     // Fixing Size After Last Property  
	class FString                                CommandletCommitMessage;                           // 0x280(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, class FString>           UnrealCultureToWwiseCulture;                       // 0x290(0x50)(Edit, Config, NativeAccessSpecifierPublic)
	class FString                                DefaultAssetCreationPath;                          // 0x2E0(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAkInitBank>            InitBank;                                          // 0x2F0(0x28)(Edit, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAkUnrealAudioRouting             AudioRouting;                                      // 0x318(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWwiseSoundEngineEnabled;                          // 0x31C(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWwiseAudioLinkEnabled;                            // 0x31D(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAkAudioMixerEnabled;                              // 0x31E(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AskedToUseNewAssetManagement;                      // 0x31F(0x1)(ZeroConstructor, Config, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableMultiCoreRendering;                         // 0x320(0x1)(ZeroConstructor, Config, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         MigratedEnableMultiCoreRendering;                  // 0x321(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         FixupRedirectorsDuringMigration;                   // 0x322(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B17[0x5];                                     // Fixing Size After Last Property  
	struct CoreUObject_DirectoryPath             WwiseWindowsInstallationPath;                      // 0x328(0x10)(ZeroConstructor, Config, Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_FilePath                  WwiseMacInstallationPath;                          // 0x338(0x10)(ZeroConstructor, Config, Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B1A[0x8];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UAkSettings* GetDefaultObj();

};

// 0x60 (0x88 - 0x28)
// Class AkAudio.AkSettingsPerUser
class UAkSettingsPerUser : public UObject
{
public:
	struct CoreUObject_DirectoryPath             WwiseWindowsInstallationPath;                      // 0x28(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_FilePath                  WwiseMacInstallationPath;                          // 0x38(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_DirectoryPath             RootOutputPathOverride;                            // 0x48(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_DirectoryPath             GeneratedSoundBanksFolderOverride;                 // 0x58(0x10)(ZeroConstructor, Config, Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                WaapiIPAddress;                                    // 0x68(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       WaapiPort;                                         // 0x78(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAutoConnectToWAAPI;                               // 0x7C(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AutoSyncSelection;                                 // 0x7D(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B38[0x2];                                     // Fixing Size After Last Property  
	uint32                                       WaapiTranslatorTimeout;                            // 0x80(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SuppressGeneratedSoundBanksPathWarnings;           // 0x84(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SoundDataGenerationSkipLanguage;                   // 0x85(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AskForWwiseAssetReload;                            // 0x86(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B3C[0x1];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UAkSettingsPerUser* GetDefaultObj();

};

// 0x5F0 (0x770 - 0x180)
// Class AkAudio.AkSlider
class UAkSlider : public UWidget
{
public:
	float                                        Value;                                             // 0x180(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           ValueDelegate;                                     // 0x184(0x10)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BA0[0xC];                                     // Fixing Size After Last Property  
	struct SlateCore_SliderStyle                 WidgetStyle;                                       // 0x1A0(0x500)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	enum class EOrientation                      Orientation;                                       // 0x6A0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BA2[0x3];                                     // Fixing Size After Last Property  
	struct CoreUObject_LinearColor               SliderBarColor;                                    // 0x6A4(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_LinearColor               SliderHandleColor;                                 // 0x6B4(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IndentHandle;                                      // 0x6C4(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Locked;                                            // 0x6C5(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BA7[0x2];                                     // Fixing Size After Last Property  
	float                                        StepSize;                                          // 0x6C8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsFocusable;                                       // 0x6CC(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BAA[0x3];                                     // Fixing Size After Last Property  
	struct AkAudio_AkPropertyToControl           ThePropertyToControl;                              // 0x6D0(0x10)(Edit, EditConst, NativeAccessSpecifierPublic)
	struct AkAudio_AkWwiseItemToControl          ItemToControl;                                     // 0x6E0(0x40)(Edit, Config, EditConst, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnValueChanged;                                    // 0x720(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnItemDropped;                                     // 0x730(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPropertyDropped;                                 // 0x740(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BAD[0x20];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UAkSlider* GetDefaultObj();

	void SetValue(float InValue);
	void SetStepSize(float InValue);
	void SetSliderHandleColor(const struct CoreUObject_LinearColor& InValue);
	void SetSliderBarColor(const struct CoreUObject_LinearColor& InValue);
	void SetLocked(bool InValue);
	void SetIndentHandle(bool InValue);
	void SetAkSliderItemProperty(const class FString& ItemProperty);
	void SetAkSliderItemId(struct CoreUObject_Guid& ItemId);
	float GetValue();
	class FString GetAkSliderItemProperty();
	struct CoreUObject_Guid GetAkSliderItemId();
};

// 0x18 (0x2E8 - 0x2D0)
// Class AkAudio.AkSpatialAudioVolume
class AAkSpatialAudioVolume : public AVolume
{
public:
	class UAkSurfaceReflectorSetComponent*       SurfaceReflectorSet;                               // 0x2D0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkLateReverbComponent*                LateReverb;                                        // 0x2D8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkRoomComponent*                      Room;                                              // 0x2E0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class AAkSpatialAudioVolume* GetDefaultObj();

};

// 0x38 (0x2D0 - 0x298)
// Class AkAudio.AkSpotReflector
class AAkSpotReflector : public AActor
{
public:
	class UAkAuxBus*                             EarlyReflectionAuxBus;                             // 0x298(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                EarlyReflectionAuxBusName;                         // 0x2A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAcousticTexture*                    AcousticTexture;                                   // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DistanceScalingFactor;                             // 0x2B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Level;                                             // 0x2BC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SameRoomOnly;                                      // 0x2C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         EnableRoomOverride;                                // 0x2C1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BC7[0x6];                                     // Fixing Size After Last Property  
	class AActor*                                RoomOverride;                                      // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class AAkSpotReflector* GetDefaultObj();

};

// 0x0 (0x70 - 0x70)
// Class AkAudio.AkStateValue
class UAkStateValue : public UAkGroupValue
{
public:

	static class UClass* StaticClass();
	static class UAkStateValue* GetDefaultObj();

};

// 0x60 (0x510 - 0x4B0)
// Class AkAudio.AkSubmixInputComponent
class UAkSubmixInputComponent : public UAkAudioInputComponent
{
public:
	uint8                                        Pad_1BD7[0x8];                                     // Fixing Size After Last Property  
	class USoundSubmix*                          SubmixToRecord;                                    // 0x4B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BD9[0x50];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UAkSubmixInputComponent* GetDefaultObj();

};

// 0x38 (0x2F0 - 0x2B8)
// Class AkAudio.AkSurfaceReflectorSetComponent
class UAkSurfaceReflectorSetComponent : public UAkAcousticTextureSetComponent
{
public:
	bool                                         bEnableSurfaceReflectors;                          // 0x2B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BEE[0x7];                                     // Fixing Size After Last Property  
	TArray<struct AkAudio_AkSurfacePoly>         AcousticPolys;                                     // 0x2C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bEnableDiffraction;                                // 0x2D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableDiffractionOnBoundaryEdges;                 // 0x2D1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BF0[0x6];                                     // Fixing Size After Last Property  
	class AActor*                                AssociatedRoom;                                    // 0x2D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BF1[0x10];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UAkSurfaceReflectorSetComponent* GetDefaultObj();

	void UpdateSurfaceReflectorSet();
	void UpdateAcousticProperties(const TArray<struct AkAudio_AkSurfacePoly>& In_AcousticPolys);
	void SendSurfaceReflectorSet();
	void RemoveSurfaceReflectorSet();
};

// 0x0 (0x70 - 0x70)
// Class AkAudio.AkSwitchValue
class UAkSwitchValue : public UAkGroupValue
{
public:

	static class UClass* StaticClass();
	static class UAkSwitchValue* GetDefaultObj();

};

// 0x10 (0x60 - 0x50)
// Class AkAudio.AkTrigger
class UAkTrigger : public UAkAudioType
{
public:
	struct WwiseResourceLoader_WwiseTriggerCookedData TriggerCookedData;                                 // 0x50(0xC)(Edit, Transient, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BFE[0x4];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UAkTrigger* GetDefaultObj();

};

// 0xE0 (0x108 - 0x28)
// Class AkAudio.AkTVOSInitializationSettings
class UAkTVOSInitializationSettings : public UObject
{
public:
	uint8                                        Pad_1C0B[0x8];                                     // Fixing Size After Last Property  
	struct AkAudio_AkCommonInitializationSettingsWithSampleRate CommonSettings;                                    // 0x30(0x70)(Edit, Config, NativeAccessSpecifierPublic)
	struct AkAudio_AkAudioSession                AudioSession;                                      // 0xA0(0xC)(Edit, Config, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C0C[0x4];                                     // Fixing Size After Last Property  
	struct AkAudio_AkCommunicationSettingsWithSystemInitialization CommunicationSettings;                             // 0xB0(0x20)(Edit, Config, NativeAccessSpecifierPublic)
	struct AkAudio_AkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings;                                  // 0xD0(0x38)(Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAkTVOSInitializationSettings* GetDefaultObj();

};

// 0x0 (0x70 - 0x70)
// Class AkAudio.AkTVOSPlatformInfo
class UAkTVOSPlatformInfo : public UAkPlatformInfo
{
public:

	static class UClass* StaticClass();
	static class UAkTVOSPlatformInfo* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class AkAudio.AkWaapiCalls
class UAkWaapiCalls : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UAkWaapiCalls* GetDefaultObj();

	struct AkAudio_AKWaapiJsonObject Unsubscribe(struct AkAudio_AkWaapiSubscriptionId& SubscriptionId, bool* UnsubscriptionDone);
	struct AkAudio_AKWaapiJsonObject SubscribeToWaapi(struct AkAudio_AkWaapiUri& WaapiUri, struct AkAudio_AKWaapiJsonObject& WaapiOptions, FDelegateProperty_& Callback, struct AkAudio_AkWaapiSubscriptionId* SubscriptionId, bool* SubscriptionDone);
	void SetSubscriptionID(struct AkAudio_AkWaapiSubscriptionId& Subscription, int32 ID);
	bool RegisterWaapiProjectLoadedCallback(FDelegateProperty_& Callback);
	bool RegisterWaapiConnectionLostCallback(FDelegateProperty_& Callback);
	int32 GetSubscriptionID(struct AkAudio_AkWaapiSubscriptionId& Subscription);
	class FText Conv_FAkWaapiSubscriptionIdToText(struct AkAudio_AkWaapiSubscriptionId& INAkWaapiSubscriptionId);
	class FString Conv_FAkWaapiSubscriptionIdToString(struct AkAudio_AkWaapiSubscriptionId& INAkWaapiSubscriptionId);
	struct AkAudio_AKWaapiJsonObject CallWaapi(struct AkAudio_AkWaapiUri& WaapiUri, struct AkAudio_AKWaapiJsonObject& WaapiArgs, struct AkAudio_AKWaapiJsonObject& WaapiOptions);
};

// 0x0 (0x28 - 0x28)
// Class AkAudio.SAkWaapiFieldNamesConv
class USAkWaapiFieldNamesConv : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class USAkWaapiFieldNamesConv* GetDefaultObj();

	class FText Conv_FAkWaapiFieldNamesToText(struct AkAudio_AkWaapiFieldNames& INAkWaapiFieldNames);
	class FString Conv_FAkWaapiFieldNamesToString(struct AkAudio_AkWaapiFieldNames& INAkWaapiFieldNames);
};

// 0x0 (0x28 - 0x28)
// Class AkAudio.AkWaapiJsonManager
class UAkWaapiJsonManager : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UAkWaapiJsonManager* GetDefaultObj();

	struct AkAudio_AKWaapiJsonObject SetStringField(struct AkAudio_AkWaapiFieldNames& FieldName, const class FString& FieldValue, const struct AkAudio_AKWaapiJsonObject& Target);
	struct AkAudio_AKWaapiJsonObject SetObjectField(struct AkAudio_AkWaapiFieldNames& FieldName, const struct AkAudio_AKWaapiJsonObject& FieldValue, const struct AkAudio_AKWaapiJsonObject& Target);
	struct AkAudio_AKWaapiJsonObject SetNumberField(struct AkAudio_AkWaapiFieldNames& FieldName, float FieldValue, const struct AkAudio_AKWaapiJsonObject& Target);
	struct AkAudio_AKWaapiJsonObject SetBoolField(struct AkAudio_AkWaapiFieldNames& FieldName, bool FieldValue, const struct AkAudio_AKWaapiJsonObject& Target);
	struct AkAudio_AKWaapiJsonObject SetArrayStringFields(struct AkAudio_AkWaapiFieldNames& FieldName, TArray<class FString>& FieldStringValues, const struct AkAudio_AKWaapiJsonObject& Target);
	struct AkAudio_AKWaapiJsonObject SetArrayObjectFields(struct AkAudio_AkWaapiFieldNames& FieldName, TArray<struct AkAudio_AKWaapiJsonObject>& FieldObjectValues, const struct AkAudio_AKWaapiJsonObject& Target);
	class FString GetStringField(struct AkAudio_AkWaapiFieldNames& FieldName, const struct AkAudio_AKWaapiJsonObject& Target);
	struct AkAudio_AKWaapiJsonObject GetObjectField(struct AkAudio_AkWaapiFieldNames& FieldName, const struct AkAudio_AKWaapiJsonObject& Target);
	float GetNumberField(struct AkAudio_AkWaapiFieldNames& FieldName, const struct AkAudio_AKWaapiJsonObject& Target);
	int32 GetIntegerField(struct AkAudio_AkWaapiFieldNames& FieldName, const struct AkAudio_AKWaapiJsonObject& Target);
	bool GetBoolField(struct AkAudio_AkWaapiFieldNames& FieldName, const struct AkAudio_AKWaapiJsonObject& Target);
	TArray<struct AkAudio_AKWaapiJsonObject> GetArrayField(struct AkAudio_AkWaapiFieldNames& FieldName, const struct AkAudio_AKWaapiJsonObject& Target);
	class FText Conv_FAKWaapiJsonObjectToText(const struct AkAudio_AKWaapiJsonObject& INAKWaapiJsonObject);
	class FString Conv_FAKWaapiJsonObjectToString(const struct AkAudio_AKWaapiJsonObject& INAKWaapiJsonObject);
};

// 0x0 (0x28 - 0x28)
// Class AkAudio.AkWaapiUriConv
class UAkWaapiUriConv : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UAkWaapiUriConv* GetDefaultObj();

	class FText Conv_FAkWaapiUriToText(struct AkAudio_AkWaapiUri& INAkWaapiUri);
	class FString Conv_FAkWaapiUriToString(struct AkAudio_AkWaapiUri& INAkWaapiUri);
};

// 0xD8 (0x100 - 0x28)
// Class AkAudio.AkWindowsInitializationSettings
class UAkWindowsInitializationSettings : public UObject
{
public:
	uint8                                        Pad_1FAE[0x8];                                     // Fixing Size After Last Property  
	struct AkAudio_AkCommonInitializationSettingsWithSampleRate CommonSettings;                                    // 0x30(0x70)(Edit, Config, NativeAccessSpecifierPublic)
	struct AkAudio_AkCommunicationSettingsWithSystemInitialization CommunicationSettings;                             // 0xA0(0x20)(Edit, Config, NativeAccessSpecifierPublic)
	struct AkAudio_AkWindowsAdvancedInitializationSettings AdvancedSettings;                                  // 0xC0(0x40)(Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAkWindowsInitializationSettings* GetDefaultObj();

	void MigrateMultiCoreRendering(bool NewValue);
};

// 0x0 (0x70 - 0x70)
// Class AkAudio.AkWin32PlatformInfo
class UAkWin32PlatformInfo : public UAkPlatformInfo
{
public:

	static class UClass* StaticClass();
	static class UAkWin32PlatformInfo* GetDefaultObj();

};

// 0x0 (0x70 - 0x70)
// Class AkAudio.AkWin64PlatformInfo
class UAkWin64PlatformInfo : public UAkPlatformInfo
{
public:

	static class UClass* StaticClass();
	static class UAkWin64PlatformInfo* GetDefaultObj();

};

// 0x0 (0x70 - 0x70)
// Class AkAudio.AkWindowsPlatformInfo
class UAkWindowsPlatformInfo : public UAkWin64PlatformInfo
{
public:

	static class UClass* StaticClass();
	static class UAkWindowsPlatformInfo* GetDefaultObj();

};

// 0xD8 (0x100 - 0x28)
// Class AkAudio.AkWinGDKInitializationSettings
class UAkWinGDKInitializationSettings : public UObject
{
public:
	uint8                                        Pad_200A[0x8];                                     // Fixing Size After Last Property  
	struct AkAudio_AkCommonInitializationSettingsWithSampleRate CommonSettings;                                    // 0x30(0x70)(Edit, Config, NativeAccessSpecifierPublic)
	struct AkAudio_AkCommunicationSettingsWithSystemInitialization CommunicationSettings;                             // 0xA0(0x20)(Edit, Config, NativeAccessSpecifierPublic)
	struct AkAudio_AkWinGDKAdvancedInitializationSettings AdvancedSettings;                                  // 0xC0(0x40)(Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAkWinGDKInitializationSettings* GetDefaultObj();

	void MigrateMultiCoreRendering(bool NewValue);
};

// 0x0 (0x100 - 0x100)
// Class AkAudio.AkWinAnvilInitializationSettings
class UAkWinAnvilInitializationSettings : public UAkWinGDKInitializationSettings
{
public:

	static class UClass* StaticClass();
	static class UAkWinAnvilInitializationSettings* GetDefaultObj();

};

// 0x0 (0x70 - 0x70)
// Class AkAudio.AkWinGDKPlatformInfo
class UAkWinGDKPlatformInfo : public UAkPlatformInfo
{
public:

	static class UClass* StaticClass();
	static class UAkWinGDKPlatformInfo* GetDefaultObj();

};

// 0x0 (0x70 - 0x70)
// Class AkAudio.AkWinAnvilPlatformInfo
class UAkWinAnvilPlatformInfo : public UAkWinGDKPlatformInfo
{
public:

	static class UClass* StaticClass();
	static class UAkWinAnvilPlatformInfo* GetDefaultObj();

};

// 0x40 (0x1C0 - 0x180)
// Class AkAudio.AkWwiseTree
class UAkWwiseTree : public UWidget
{
public:
	FMulticastInlineDelegateProperty_            OnSelectionChanged;                                // 0x180(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnItemDragged;                                     // 0x190(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_2078[0x20];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UAkWwiseTree* GetDefaultObj();

	void SetSearchText(const class FString& NewText);
	struct AkAudio_AkWwiseObjectDetails GetSelectedItem();
	class FString GetSearchText();
};

// 0x60 (0x1E0 - 0x180)
// Class AkAudio.AkWwiseTreeSelector
class UAkWwiseTreeSelector : public UWidget
{
public:
	FMulticastInlineDelegateProperty_            OnSelectionChanged;                                // 0x180(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnItemDragged;                                     // 0x190(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_207F[0x40];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UAkWwiseTreeSelector* GetDefaultObj();

};

// 0xD8 (0x100 - 0x28)
// Class AkAudio.AkXboxOneGDKInitializationSettings
class UAkXboxOneGDKInitializationSettings : public UObject
{
public:
	uint8                                        Pad_20A9[0x8];                                     // Fixing Size After Last Property  
	struct AkAudio_AkCommonInitializationSettings CommonSettings;                                    // 0x30(0x68)(Edit, Config, NativeAccessSpecifierPublic)
	struct AkAudio_AkXboxOneGDKApuHeapInitializationSettings ApuHeapSettings;                                   // 0x98(0x8)(Edit, Config, NoDestructor, NativeAccessSpecifierPublic)
	struct AkAudio_AkCommunicationSettingsWithSystemInitialization CommunicationSettings;                             // 0xA0(0x20)(Edit, Config, NativeAccessSpecifierPublic)
	struct AkAudio_AkXboxOneGDKAdvancedInitializationSettings AdvancedSettings;                                  // 0xC0(0x3C)(Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	uint8                                        Pad_20BE[0x4];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UAkXboxOneGDKInitializationSettings* GetDefaultObj();

	void MigrateMultiCoreRendering(bool NewValue);
};

// 0x0 (0x100 - 0x100)
// Class AkAudio.AkXboxOneAnvilInitializationSettings
class UAkXboxOneAnvilInitializationSettings : public UAkXboxOneGDKInitializationSettings
{
public:

	static class UClass* StaticClass();
	static class UAkXboxOneAnvilInitializationSettings* GetDefaultObj();

};

// 0x0 (0x100 - 0x100)
// Class AkAudio.AkXB1InitializationSettings
class UAkXB1InitializationSettings : public UAkXboxOneGDKInitializationSettings
{
public:

	static class UClass* StaticClass();
	static class UAkXB1InitializationSettings* GetDefaultObj();

};

// 0x0 (0x70 - 0x70)
// Class AkAudio.AkXboxOneGDKPlatformInfo
class UAkXboxOneGDKPlatformInfo : public UAkPlatformInfo
{
public:

	static class UClass* StaticClass();
	static class UAkXboxOneGDKPlatformInfo* GetDefaultObj();

};

// 0x0 (0x70 - 0x70)
// Class AkAudio.AkXboxOneAnvilPlatformInfo
class UAkXboxOneAnvilPlatformInfo : public UAkXboxOneGDKPlatformInfo
{
public:

	static class UClass* StaticClass();
	static class UAkXboxOneAnvilPlatformInfo* GetDefaultObj();

};

// 0x0 (0x70 - 0x70)
// Class AkAudio.AkXB1PlatformInfo
class UAkXB1PlatformInfo : public UAkXboxOneGDKPlatformInfo
{
public:

	static class UClass* StaticClass();
	static class UAkXB1PlatformInfo* GetDefaultObj();

};

// 0xD8 (0x100 - 0x28)
// Class AkAudio.AkXboxOneInitializationSettings
class UAkXboxOneInitializationSettings : public UObject
{
public:
	uint8                                        Pad_2113[0x8];                                     // Fixing Size After Last Property  
	struct AkAudio_AkCommonInitializationSettings CommonSettings;                                    // 0x30(0x68)(Edit, Config, NativeAccessSpecifierPublic)
	struct AkAudio_AkXboxOneApuHeapInitializationSettings ApuHeapSettings;                                   // 0x98(0x8)(Edit, Config, NoDestructor, NativeAccessSpecifierPublic)
	struct AkAudio_AkCommunicationSettingsWithSystemInitialization CommunicationSettings;                             // 0xA0(0x20)(Edit, Config, NativeAccessSpecifierPublic)
	struct AkAudio_AkXboxOneAdvancedInitializationSettings AdvancedSettings;                                  // 0xC0(0x3C)(Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	uint8                                        Pad_2118[0x4];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UAkXboxOneInitializationSettings* GetDefaultObj();

	void MigrateMultiCoreRendering(bool NewValue);
};

// 0x0 (0x70 - 0x70)
// Class AkAudio.AkXboxOnePlatformInfo
class UAkXboxOnePlatformInfo : public UAkPlatformInfo
{
public:

	static class UClass* StaticClass();
	static class UAkXboxOnePlatformInfo* GetDefaultObj();

};

// 0xE0 (0x108 - 0x28)
// Class AkAudio.AkXSXInitializationSettings
class UAkXSXInitializationSettings : public UObject
{
public:
	uint8                                        Pad_2147[0x8];                                     // Fixing Size After Last Property  
	struct AkAudio_AkCommonInitializationSettings CommonSettings;                                    // 0x30(0x68)(Edit, Config, NativeAccessSpecifierPublic)
	struct AkAudio_AkXSXApuHeapInitializationSettings ApuHeapSettings;                                   // 0x98(0x8)(Edit, Config, NoDestructor, NativeAccessSpecifierPublic)
	struct AkAudio_AkCommunicationSettingsWithSystemInitialization CommunicationSettings;                             // 0xA0(0x20)(Edit, Config, NativeAccessSpecifierPublic)
	struct AkAudio_AkXSXAdvancedInitializationSettings AdvancedSettings;                                  // 0xC0(0x44)(Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	uint8                                        Pad_2149[0x4];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UAkXSXInitializationSettings* GetDefaultObj();

	void MigrateMultiCoreRendering(bool NewValue);
};

// 0x0 (0x108 - 0x108)
// Class AkAudio.AkMPXInitializationSettings
class UAkMPXInitializationSettings : public UAkXSXInitializationSettings
{
public:

	static class UClass* StaticClass();
	static class UAkMPXInitializationSettings* GetDefaultObj();

};

// 0x0 (0x70 - 0x70)
// Class AkAudio.AkXSXPlatformInfo
class UAkXSXPlatformInfo : public UAkPlatformInfo
{
public:

	static class UClass* StaticClass();
	static class UAkXSXPlatformInfo* GetDefaultObj();

};

// 0x80 (0x170 - 0xF0)
// Class AkAudio.MovieSceneAkAudioEventSection
class UMovieSceneAkAudioEventSection : public UMovieSceneSection
{
public:
	uint8                                        Pad_2183[0x28];                                    // Fixing Size After Last Property  
	class UAkAudioEvent*                         Event;                                             // 0x118(0x8)(Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         RetriggerEvent;                                    // 0x120(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2185[0x3];                                     // Fixing Size After Last Property  
	int32                                        ScrubTailLengthMs;                                 // 0x124(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         StopAtSectionEnd;                                  // 0x128(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2188[0x7];                                     // Fixing Size After Last Property  
	class FString                                EventName;                                         // 0x130(0x10)(Edit, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        MaxSourceDuration;                                 // 0x140(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2189[0x4];                                     // Fixing Size After Last Property  
	class FString                                MaxDurationSourceID;                               // 0x148(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_218B[0x18];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UMovieSceneAkAudioEventSection* GetDefaultObj();

};

// 0x18 (0xB0 - 0x98)
// Class AkAudio.MovieSceneAkTrack
class UMovieSceneAkTrack : public UMovieSceneTrack
{
public:
	TArray<class UMovieSceneSection*>            Sections;                                          // 0x98(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	bool                                         bIsAMasterTrack;                                   // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2199[0x7];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UMovieSceneAkTrack* GetDefaultObj();

};

// 0x8 (0xB8 - 0xB0)
// Class AkAudio.MovieSceneAkAudioEventTrack
class UMovieSceneAkAudioEventTrack : public UMovieSceneAkTrack
{
public:
	uint8                                        Pad_21A0[0x8];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UMovieSceneAkAudioEventTrack* GetDefaultObj();

};

// 0x1D8 (0x2C8 - 0xF0)
// Class AkAudio.MovieSceneAkAudioRTPCSection
class UMovieSceneAkAudioRTPCSection : public UMovieSceneSection
{
public:
	class UAkRtpc*                               RTPC;                                              // 0xF0(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                Name;                                              // 0xF8(0x10)(Edit, ZeroConstructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct Engine_RichCurve                      FloatCurve;                                        // 0x108(0x80)(Protected, NativeAccessSpecifierProtected)
	struct AkAudio_MovieSceneFloatChannelSerializationHelper FloatChannelSerializationHelper;                   // 0x188(0x30)(Protected, NativeAccessSpecifierProtected)
	struct MovieScene_MovieSceneFloatChannel     RTPCChannel;                                       // 0x1B8(0x110)(Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UMovieSceneAkAudioRTPCSection* GetDefaultObj();

};

// 0x8 (0xB8 - 0xB0)
// Class AkAudio.MovieSceneAkAudioRTPCTrack
class UMovieSceneAkAudioRTPCTrack : public UMovieSceneAkTrack
{
public:
	uint8                                        Pad_21BB[0x8];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UMovieSceneAkAudioRTPCTrack* GetDefaultObj();

};

// 0x58 (0x88 - 0x30)
// Class AkAudio.PostEventAsync
class UPostEventAsync : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            Completed;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_220D[0x48];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UPostEventAsync* GetDefaultObj();

	class UPostEventAsync* PostEventAsync(class UObject* WorldContextObject, class UAkAudioEvent* AkEvent, class AActor* Actor, int32 CallbackMask, FDelegateProperty_& PostEventCallback, bool bStopWhenAttachedToDestroyed);
	void PollPostEventFuture();
};

// 0x68 (0x98 - 0x30)
// Class AkAudio.PostEventAtLocationAsync
class UPostEventAtLocationAsync : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            Completed;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_222D[0x58];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UPostEventAtLocationAsync* GetDefaultObj();

	class UPostEventAtLocationAsync* PostEventAtLocationAsync(class UObject* WorldContextObject, class UAkAudioEvent* AkEvent, const struct CoreUObject_Vector& Location, const struct CoreUObject_Rotator& Orientation);
	void PollPostEventFuture();
};

}


