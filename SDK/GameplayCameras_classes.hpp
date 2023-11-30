#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x118 (0x1F0 - 0xD8)
// Class GameplayCameras.LegacyCameraShake
class ULegacyCameraShake : public UCameraShakeBase
{
public:
	float                                        OscillationDuration;                               // 0xD8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OscillationBlendInTime;                            // 0xDC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OscillationBlendOutTime;                           // 0xE0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GameplayCameras_ROscillator           RotOscillation;                                    // 0xE4(0x24)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct GameplayCameras_VOscillator           LocOscillation;                                    // 0x108(0x24)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct GameplayCameras_FOscillator           FOVOscillation;                                    // 0x12C(0xC)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                        AnimPlayRate;                                      // 0x138(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AnimScale;                                         // 0x13C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AnimBlendInTime;                                   // 0x140(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AnimBlendOutTime;                                  // 0x144(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RandomAnimSegmentDuration;                         // 0x148(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EAC[0x4];                                      // Fixing Size After Last Property  
	class UCameraAnimationSequence*              AnimSequence;                                      // 0x150(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bRandomAnimSegment : 1;                            // Mask: 0x1, PropSize: 0x10x158(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_4E : 7;                                     // Fixing Bit-Field Size  
	uint8                                        Pad_EB0[0x3];                                      // Fixing Size After Last Property  
	float                                        OscillatorTimeRemaining;                           // 0x15C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EB1[0x70];                                     // Fixing Size After Last Property  
	class USequenceCameraShakePattern*           SequenceShakePattern;                              // 0x1D0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_EB2[0x18];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class ULegacyCameraShake* GetDefaultObj();

	class ULegacyCameraShake* StartLegacyCameraShakeFromSource(class APlayerCameraManager* PlayerCameraManager, TSubclassOf<class ULegacyCameraShake> ShakeClass, class UCameraShakeSourceComponent* SourceComponent, float Scale, enum class ECameraShakePlaySpace PlaySpace, const struct CoreUObject_Rotator& UserPlaySpaceRot);
	class ULegacyCameraShake* StartLegacyCameraShake(class APlayerCameraManager* PlayerCameraManager, TSubclassOf<class ULegacyCameraShake> ShakeClass, float Scale, enum class ECameraShakePlaySpace PlaySpace, const struct CoreUObject_Rotator& UserPlaySpaceRot);
	void ReceiveStopShake(bool bImmediately);
	void ReceivePlayShake(float Scale);
	bool ReceiveIsFinished();
	void BlueprintUpdateCameraShake(float DeltaTime, float Alpha, struct Engine_MinimalViewInfo& POV, struct Engine_MinimalViewInfo* ModifiedPOV);
};

// 0x0 (0x28 - 0x28)
// Class GameplayCameras.LegacyCameraShakePattern
class ULegacyCameraShakePattern : public UCameraShakePattern
{
public:

	static class UClass* StaticClass();
	static class ULegacyCameraShakePattern* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GameplayCameras.LegacyCameraShakeFunctionLibrary
class ULegacyCameraShakeFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class ULegacyCameraShakeFunctionLibrary* GetDefaultObj();

	class ULegacyCameraShake* Conv_LegacyCameraShake(class UCameraShakeBase* CameraShake);
};

// 0x18 (0x60 - 0x48)
// Class GameplayCameras.CameraAnimationCameraModifier
class UCameraAnimationCameraModifier : public UCameraModifier
{
public:
	TArray<struct GameplayCameras_ActiveCameraAnimationInfo> ActiveAnimations;                                  // 0x48(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint16                                       NextInstanceSerialNumber;                          // 0x58(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_F42[0x6];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UCameraAnimationCameraModifier* GetDefaultObj();

	void StopCameraAnimation(struct GameplayCameras_CameraAnimationHandle& Handle, bool bImmediate);
	void StopAllCameraAnimationsOf(class UCameraAnimationSequence* Sequence, bool bImmediate);
	void StopAllCameraAnimations(bool bImmediate);
	struct GameplayCameras_CameraAnimationHandle PlayCameraAnimation(class UCameraAnimationSequence* Sequence, const struct GameplayCameras_CameraAnimationParams& Params);
	bool IsCameraAnimationActive(struct GameplayCameras_CameraAnimationHandle& Handle);
	class UCameraAnimationCameraModifier* GetCameraAnimationCameraModifierFromPlayerController(class APlayerController* PlayerController);
	class UCameraAnimationCameraModifier* GetCameraAnimationCameraModifierFromID(class UObject* WorldContextObject, int32 ControllerId);
	class UCameraAnimationCameraModifier* GetCameraAnimationCameraModifier(class UObject* WorldContextObject, int32 PlayerIndex);
};

// 0x0 (0x28 - 0x28)
// Class GameplayCameras.GameplayCamerasFunctionLibrary
class UGameplayCamerasFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGameplayCamerasFunctionLibrary* GetDefaultObj();

	enum class ECameraShakePlaySpace Conv_CameraShakePlaySpace(enum class ECameraAnimationPlaySpace CameraAnimationPlaySpace);
	enum class ECameraAnimationPlaySpace Conv_CameraAnimationPlaySpace(enum class ECameraShakePlaySpace CameraShakePlaySpace);
	class UCameraAnimationCameraModifier* Conv_CameraAnimationCameraModifier(class APlayerCameraManager* PlayerCameraManager);
};

// 0x10 (0x38 - 0x28)
// Class GameplayCameras.CompositeCameraShakePattern
class UCompositeCameraShakePattern : public UCameraShakePattern
{
public:
	TArray<class UCameraShakePattern*>           ChildPatterns;                                     // 0x28(0x10)(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UCompositeCameraShakePattern* GetDefaultObj();

};

// 0x8 (0xE0 - 0xD8)
// Class GameplayCameras.DefaultCameraShakeBase
class UDefaultCameraShakeBase : public UCameraShakeBase
{
public:
	uint8                                        Pad_F7E[0x8];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UDefaultCameraShakeBase* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class GameplayCameras.GameplayCamerasSubsystem
class UGameplayCamerasSubsystem : public UWorldSubsystem
{
public:

	static class UClass* StaticClass();
	static class UGameplayCamerasSubsystem* GetDefaultObj();

	void StopCameraAnimation(class APlayerController* PlayerController, struct GameplayCameras_CameraAnimationHandle& Handle, bool bImmediate);
	void StopAllCameraAnimationsOf(class APlayerController* PlayerController, class UCameraAnimationSequence* Sequence, bool bImmediate);
	void StopAllCameraAnimations(class APlayerController* PlayerController, bool bImmediate);
	struct GameplayCameras_CameraAnimationHandle PlayCameraAnimation(class APlayerController* PlayerController, class UCameraAnimationSequence* Sequence, const struct GameplayCameras_CameraAnimationParams& Params);
	bool IsCameraAnimationActive(class APlayerController* PlayerController, struct GameplayCameras_CameraAnimationHandle& Handle);
};

// 0x30 (0x58 - 0x28)
// Class GameplayCameras.SimpleCameraShakePattern
class USimpleCameraShakePattern : public UCameraShakePattern
{
public:
	float                                        Duration;                                          // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BlendInTime;                                       // 0x2C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BlendOutTime;                                      // 0x30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FFA[0x24];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class USimpleCameraShakePattern* GetDefaultObj();

};

// 0x80 (0xD8 - 0x58)
// Class GameplayCameras.PerlinNoiseCameraShakePattern
class UPerlinNoiseCameraShakePattern : public USimpleCameraShakePattern
{
public:
	float                                        LocationAmplitudeMultiplier;                       // 0x58(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LocationFrequencyMultiplier;                       // 0x5C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GameplayCameras_PerlinNoiseShaker     X;                                                 // 0x60(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct GameplayCameras_PerlinNoiseShaker     Y;                                                 // 0x68(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct GameplayCameras_PerlinNoiseShaker     Z;                                                 // 0x70(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                        RotationAmplitudeMultiplier;                       // 0x78(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RotationFrequencyMultiplier;                       // 0x7C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GameplayCameras_PerlinNoiseShaker     Pitch;                                             // 0x80(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct GameplayCameras_PerlinNoiseShaker     Yaw;                                               // 0x88(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct GameplayCameras_PerlinNoiseShaker     Roll;                                              // 0x90(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct GameplayCameras_PerlinNoiseShaker     FOV;                                               // 0x98(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1018[0x38];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UPerlinNoiseCameraShakePattern* GetDefaultObj();

};

// 0x8 (0xE0 - 0xD8)
// Class GameplayCameras.TestCameraShake
class UTestCameraShake : public UCameraShakeBase
{
public:
	uint8                                        Pad_101E[0x8];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UTestCameraShake* GetDefaultObj();

};

// 0x30 (0x88 - 0x58)
// Class GameplayCameras.ConstantCameraShakePattern
class UConstantCameraShakePattern : public USimpleCameraShakePattern
{
public:
	struct CoreUObject_Vector                    LocationOffset;                                    // 0x58(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Rotator                   RotationOffset;                                    // 0x70(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UConstantCameraShakePattern* GetDefaultObj();

};

// 0xA0 (0xF8 - 0x58)
// Class GameplayCameras.WaveOscillatorCameraShakePattern
class UWaveOscillatorCameraShakePattern : public USimpleCameraShakePattern
{
public:
	float                                        LocationAmplitudeMultiplier;                       // 0x58(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LocationFrequencyMultiplier;                       // 0x5C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GameplayCameras_WaveOscillator        X;                                                 // 0x60(0xC)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct GameplayCameras_WaveOscillator        Y;                                                 // 0x6C(0xC)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct GameplayCameras_WaveOscillator        Z;                                                 // 0x78(0xC)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                        RotationAmplitudeMultiplier;                       // 0x84(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RotationFrequencyMultiplier;                       // 0x88(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GameplayCameras_WaveOscillator        Pitch;                                             // 0x8C(0xC)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct GameplayCameras_WaveOscillator        Yaw;                                               // 0x98(0xC)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct GameplayCameras_WaveOscillator        Roll;                                              // 0xA4(0xC)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct GameplayCameras_WaveOscillator        FOV;                                               // 0xB0(0xC)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1048[0x3C];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UWaveOscillatorCameraShakePattern* GetDefaultObj();

};

}


