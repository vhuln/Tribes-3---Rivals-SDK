#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x2C8 - 0x298)
// Class CinematicCamera.CameraRig_Crane
class ACameraRig_Crane : public AActor
{
public:
	float                                        CranePitch;                                        // 0x298(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CraneYaw;                                          // 0x29C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CraneArmLength;                                    // 0x2A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLockMountPitch;                                   // 0x2A4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLockMountYaw;                                     // 0x2A5(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_483[0x2];                                      // Fixing Size After Last Property  
	class USceneComponent*                       TransformComponent;                                // 0x2A8(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USceneComponent*                       CraneYawControl;                                   // 0x2B0(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USceneComponent*                       CranePitchControl;                                 // 0x2B8(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USceneComponent*                       CraneCameraMount;                                  // 0x2C0(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class ACameraRig_Crane* GetDefaultObj();

};

// 0x20 (0x2B8 - 0x298)
// Class CinematicCamera.CameraRig_Rail
class ACameraRig_Rail : public AActor
{
public:
	float                                        CurrentPositionOnRail;                             // 0x298(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLockOrientationToRail;                            // 0x29C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4A7[0x3];                                      // Fixing Size After Last Property  
	class USceneComponent*                       TransformComponent;                                // 0x2A0(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USplineComponent*                      RailSplineComponent;                               // 0x2A8(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USceneComponent*                       RailCameraMount;                                   // 0x2B0(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class ACameraRig_Rail* GetDefaultObj();

	class USplineComponent* GetRailSplineComponent();
};

// 0x80 (0xA20 - 0x9A0)
// Class CinematicCamera.CineCameraActor
class ACineCameraActor : public ACameraActor
{
public:
	struct CinematicCamera_CameraLookatTrackingSettings LookatTrackingSettings;                            // 0x9A0(0x68)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	uint8                                        Pad_4C8[0x18];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class ACineCameraActor* GetDefaultObj();

	class UCineCameraComponent* GetCineCameraComponent();
};

// 0x110 (0xB40 - 0xA30)
// Class CinematicCamera.CineCameraComponent
class UCineCameraComponent : public UCameraComponent
{
public:
	struct CinematicCamera_CameraFilmbackSettings FilmbackSettings;                                  // 0xA30(0xC)(Deprecated, NoDestructor, NativeAccessSpecifierPublic)
	struct CinematicCamera_CameraFilmbackSettings Filmback;                                          // 0xA3C(0xC)(Edit, BlueprintVisible, Interp, NoDestructor, NativeAccessSpecifierPublic)
	struct CinematicCamera_CameraLensSettings    LensSettings;                                      // 0xA48(0x1C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_588[0x4];                                      // Fixing Size After Last Property  
	struct CinematicCamera_CameraFocusSettings   FocusSettings;                                     // 0xA68(0x60)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct CinematicCamera_PlateCropSettings     CropSettings;                                      // 0xAC8(0x4)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                        CurrentFocalLength;                                // 0xACC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CurrentAperture;                                   // 0xAD0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CurrentFocusDistance;                              // 0xAD4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_CustomNearClippingPlane : 1;             // Mask: 0x1, PropSize: 0x10xAD8(0x1)(Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_20 : 7;                                     // Fixing Bit-Field Size  
	uint8                                        Pad_58E[0x3];                                      // Fixing Size After Last Property  
	float                                        CustomNearClippingPlane;                           // 0xADC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_58F[0x8];                                      // Fixing Size After Last Property  
	TArray<struct CinematicCamera_NamedFilmbackPreset> FilmbackPresets;                                   // 0xAE8(0x10)(ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected)
	TArray<struct CinematicCamera_NamedLensPreset> LensPresets;                                       // 0xAF8(0x10)(ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected)
	class FString                                DefaultFilmbackPresetName;                         // 0xB08(0x10)(ZeroConstructor, Config, Deprecated, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                DefaultFilmbackPreset;                             // 0xB18(0x10)(ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                DefaultLensPresetName;                             // 0xB28(0x10)(ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        DefaultLensFocalLength;                            // 0xB38(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        DefaultLensFStop;                                  // 0xB3C(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UCineCameraComponent* GetDefaultObj();

	void SetLensSettings(struct CinematicCamera_CameraLensSettings& NewLensSettings);
	void SetLensPresetByName(const class FString& InPresetName);
	void SetFocusSettings(struct CinematicCamera_CameraFocusSettings& NewFocusSettings);
	void SetFilmbackPresetByName(const class FString& InPresetName);
	void SetFilmback(struct CinematicCamera_CameraFilmbackSettings& NewFilmback);
	void SetCustomNearClippingPlane(float NewCustomNearClippingPlane);
	void SetCurrentFocalLength(float InFocalLength);
	void SetCurrentAperture(float NewCurrentAperture);
	void SetCropSettings(struct CinematicCamera_PlateCropSettings& NewCropSettings);
	void SetCropPresetByName(const class FString& InPresetName);
	float GetVerticalFieldOfView();
	TArray<struct CinematicCamera_NamedLensPreset> GetLensPresetsCopy();
	class FString GetLensPresetName();
	float GetHorizontalFieldOfView();
	TArray<struct CinematicCamera_NamedFilmbackPreset> GetFilmbackPresetsCopy();
	class FString GetFilmbackPresetName();
	class FString GetDefaultFilmbackPresetName();
	class FString GetCropPresetName();
};

// 0x78 (0xB0 - 0x38)
// Class CinematicCamera.CineCameraSettings
class UCineCameraSettings : public UDeveloperSettings
{
public:
	class FString                                DefaultLensPresetName;                             // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DefaultLensFocalLength;                            // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DefaultLensFStop;                                  // 0x4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct CinematicCamera_NamedLensPreset> LensPresets;                                       // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	class FString                                DefaultFilmbackPreset;                             // 0x60(0x10)(Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct CinematicCamera_NamedFilmbackPreset> FilmbackPresets;                                   // 0x70(0x10)(Edit, BlueprintVisible, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	class FString                                DefaultCropPresetName;                             // 0x80(0x10)(Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct CinematicCamera_NamedPlateCropPreset> CropPresets;                                       // 0x90(0x10)(Edit, BlueprintVisible, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	uint8                                        Pad_677[0x10];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UCineCameraSettings* GetDefaultObj();

	void SetLensPresets(TArray<struct CinematicCamera_NamedLensPreset>& InLensPresets);
	void SetFilmbackPresets(TArray<struct CinematicCamera_NamedFilmbackPreset>& InFilmbackPresets);
	void SetDefaultLensPresetName(const class FString& InDefaultLensPresetName);
	void SetDefaultLensFStop(float InDefaultLensFStop);
	void SetDefaultLensFocalLength(float InDefaultLensFocalLength);
	void SetDefaultFilmbackPreset(const class FString& InDefaultFilmbackPreset);
	void SetDefaultCropPresetName(const class FString& InDefaultCropPresetName);
	void SetCropPresets(TArray<struct CinematicCamera_NamedPlateCropPreset>& InCropPresets);
	TArray<class FString> GetLensPresetNames();
	bool GetLensPresetByName(const class FString& PresetName, struct CinematicCamera_CameraLensSettings* LensSettings);
	TArray<class FString> GetFilmbackPresetNames();
	bool GetFilmbackPresetByName(const class FString& PresetName, struct CinematicCamera_CameraFilmbackSettings* FilmbackSettings);
	TArray<class FString> GetCropPresetNames();
	bool GetCropPresetByName(const class FString& PresetName, struct CinematicCamera_PlateCropSettings* CropSettings);
	class UCineCameraSettings* GetCineCameraSettings();
};

}


