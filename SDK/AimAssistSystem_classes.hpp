#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x120 (0x1C0 - 0xA0)
// Class AimAssistSystem.UASAimAssistComponent
class UUASAimAssistComponent : public UActorComponent
{
public:
	uint8                                        Pad_EBF[0x8];                                      // Fixing Size After Last Property  
	FMulticastInlineDelegateProperty_            OnAimDataAssetChangedDelegate;                     // 0xA8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                         bEnableStickiness;                                 // 0xB8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableMagnetism;                                  // 0xB9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableScaling;                                    // 0xBA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bScalingByDPI;                                     // 0xBB(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableAutoAim;                                    // 0xBC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowDebug;                                        // 0xBD(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bDrawCircles;                                      // 0xBE(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bDrawCrosshair;                                    // 0xBF(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bDebugOverlayBox;                                  // 0xC0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bShowValidTargetSockets;                           // 0xC1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bDebugTargetTraces;                                // 0xC2(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_ECE[0x5];                                      // Fixing Size After Last Property  
	class UUASAimAssistConfigDataAsset*          AimAssistDataAsset;                                // 0xC8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  TargetsDetectionProfileName;                       // 0xD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  ObstacleCheckProfileName;                          // 0xD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_ED5[0xE0];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UUASAimAssistComponent* GetDefaultObj();

	void ShowAimAssistDebug(bool bShow);
	void SetAimAssistEnabled(bool bEnabled);
	void SetAimAssistDataAsset(class UUASAimAssistConfigDataAsset* DataAsset);
	void OnTargetDestroyed(class AActor* DestroyedActor);
	struct CoreUObject_Rotator GetRotationToCrosshairDirection(struct CoreUObject_Vector& From, class FName TraceProfileName, float MinDistanceToRotateToTarget, float Distance);
	bool GetCurrentTargetSocketLocation(struct CoreUObject_Vector* OutLocation);
	struct CoreUObject_Vector2D GetCrosshairPosition();
	void GetControlMultipliers(float* Pitch, float* Yaw);
	bool CustomGetCurrentTargetLocation(struct CoreUObject_Vector* OutLocation);
	bool bIsAimAssistEnabled();
};

// 0x208 (0x238 - 0x30)
// Class AimAssistSystem.UASAimAssistConfigDataAsset
class UUASAimAssistConfigDataAsset : public UDataAsset
{
public:
	float                                        UpdateTargetsRate;                                 // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EE9[0x4];                                      // Fixing Size After Last Property  
	struct CoreUObject_Vector                    AimAreaExtents;                                    // 0x38(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStickinessZoneConfig;                             // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EF2[0x7];                                      // Fixing Size After Last Property  
	struct AimAssistSystem_UASStickinessZoneConfig StickinessZoneConfig;                              // 0x58(0x118)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         bMagnetismZoneConfig;                              // 0x170(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EF9[0x3];                                      // Fixing Size After Last Property  
	struct AimAssistSystem_UASMagnetismZoneConfig MagnetismZoneConfig;                               // 0x174(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bScalingZoneConfig;                                // 0x17C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EFD[0x3];                                      // Fixing Size After Last Property  
	struct AimAssistSystem_UASZonesScalingConfig ZonesScalingConfig;                                // 0x180(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         bAutoAimConfig;                                    // 0x208(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F03[0x3];                                      // Fixing Size After Last Property  
	struct AimAssistSystem_UASAutoAimConfig      AutoAimConfig;                                     // 0x20C(0x1C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector2D                  CrosshairOffset;                                   // 0x228(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UUASAimAssistConfigDataAsset* GetDefaultObj();

};

// 0x20 (0xC0 - 0xA0)
// Class AimAssistSystem.UASAimAssistTargetComponent
class UUASAimAssistTargetComponent : public UActorComponent
{
public:
	class UMeshComponent*                        MeshComponent;                                     // 0xA0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsAimAssistActive;                                // 0xA8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_F17[0x7];                                      // Fixing Size After Last Property  
	TArray<class FName>                          AimTargetSocketNames;                              // 0xB0(0x10)(Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UUASAimAssistTargetComponent* GetDefaultObj();

	void Init(class UMeshComponent* Mesh);
};

}


