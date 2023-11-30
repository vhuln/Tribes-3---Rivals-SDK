#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class IKRig.IKGoalCreatorInterface
class IIKGoalCreatorInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IIKGoalCreatorInterface* GetDefaultObj();

	void AddIKGoals(TMap<class FName, struct IKRig_IKRigGoal>* OutGoals);
};

// 0x18 (0xB8 - 0xA0)
// Class IKRig.IKRigComponent
class UIKRigComponent : public UActorComponent
{
public:
	uint8                                        Pad_1637[0x18];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UIKRigComponent* GetDefaultObj();

	void SetIKRigGoalTransform(class FName GoalName, const struct CoreUObject_Transform& Transform, float PositionAlpha, float RotationAlpha);
	void SetIKRigGoalPositionAndRotation(class FName GoalName, const struct CoreUObject_Vector& Position, const struct CoreUObject_Quat& Rotation, float PositionAlpha, float RotationAlpha);
	void SetIKRigGoal(struct IKRig_IKRigGoal& Goal);
	void ClearAllGoals();
};

// 0xB8 (0xE0 - 0x28)
// Class IKRig.RetargetChainSettings
class URetargetChainSettings : public UObject
{
public:
	class FName                                  SourceChain;                                       // 0x28(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  TargetChain;                                       // 0x30(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct IKRig_TargetChainSettings             Settings;                                          // 0x38(0xA8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class URetargetChainSettings* GetDefaultObj();

};

// 0x68 (0x90 - 0x28)
// Class IKRig.RetargetRootSettings
class URetargetRootSettings : public UObject
{
public:
	struct IKRig_TargetRootSettings              Settings;                                          // 0x28(0x68)(Edit, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class URetargetRootSettings* GetDefaultObj();

};

// 0x20 (0x48 - 0x28)
// Class IKRig.IKRetargetGlobalSettings
class UIKRetargetGlobalSettings : public UObject
{
public:
	struct IKRig_RetargetGlobalSettings          Settings;                                          // 0x28(0x20)(Edit, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UIKRetargetGlobalSettings* GetDefaultObj();

};

// 0x1E0 (0x208 - 0x28)
// Class IKRig.IKRetargeter
class UIKRetargeter : public UObject
{
public:
	TSoftObjectPtr<class UIKRigDefinition>       SourceIKRigAsset;                                  // 0x28(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftObjectPtr<class UIKRigDefinition>       TargetIKRigAsset;                                  // 0x50(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct IKRig_RetargetChainMap>        ChainMapping;                                      // 0x78(0x10)(ZeroConstructor, Deprecated, NativeAccessSpecifierPrivate)
	TArray<class URetargetChainSettings*>        ChainSettings;                                     // 0x88(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	class URetargetRootSettings*                 RootSettings;                                      // 0x98(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UIKRetargetGlobalSettings*             GlobalSettings;                                    // 0xA0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<class FName, struct IKRig_RetargetProfile> Profiles;                                          // 0xA8(0x50)(NativeAccessSpecifierPrivate)
	class FName                                  CurrentProfile;                                    // 0xF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<class FName, struct IKRig_IKRetargetPose> SourceRetargetPoses;                               // 0x100(0x50)(NativeAccessSpecifierPrivate)
	TMap<class FName, struct IKRig_IKRetargetPose> TargetRetargetPoses;                               // 0x150(0x50)(NativeAccessSpecifierPrivate)
	class FName                                  CurrentSourceRetargetPose;                         // 0x1A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  CurrentTargetRetargetPose;                         // 0x1A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<class FName, struct IKRig_IKRetargetPose> RetargetPoses;                                     // 0x1B0(0x50)(Deprecated, NativeAccessSpecifierPrivate)
	class FName                                  CurrentRetargetPose;                               // 0x200(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UIKRetargeter* GetDefaultObj();

	void SetRootSettingsInRetargetProfile(struct IKRig_RetargetProfile& RetargetProfile, struct IKRig_TargetRootSettings& RootSettings);
	void SetGlobalSettingsInRetargetProfile(struct IKRig_RetargetProfile& RetargetProfile, struct IKRig_RetargetGlobalSettings& GlobalSettings);
	void SetChainSpeedPlantSettingsInRetargetProfile(struct IKRig_RetargetProfile& RetargetProfile, struct IKRig_TargetChainSpeedPlantSettings& SpeedPlantSettings, class FName TargetChainName);
	void SetChainSettingsInRetargetProfile(struct IKRig_RetargetProfile& RetargetProfile, struct IKRig_TargetChainSettings& ChainSettings, class FName TargetChainName);
	void SetChainIKSettingsInRetargetProfile(struct IKRig_RetargetProfile& RetargetProfile, struct IKRig_TargetChainIKSettings& IKSettings, class FName TargetChainName);
	void SetChainFKSettingsInRetargetProfile(struct IKRig_RetargetProfile& RetargetProfile, struct IKRig_TargetChainFKSettings& FKSettings, class FName TargetChainName);
	struct IKRig_TargetRootSettings GetRootSettingsFromRetargetProfile(struct IKRig_RetargetProfile& RetargetProfile);
	void GetRootSettingsFromRetargetAsset(class UIKRetargeter* RetargetAsset, class FName OptionalProfileName, struct IKRig_TargetRootSettings* OutSettings);
	struct IKRig_RetargetGlobalSettings GetGlobalSettingsFromRetargetProfile(struct IKRig_RetargetProfile& RetargetProfile);
	void GetGlobalSettingsFromRetargetAsset(class UIKRetargeter* RetargetAsset, class FName OptionalProfileName, struct IKRig_RetargetGlobalSettings* OutSettings);
	struct IKRig_TargetChainSettings GetChainUsingGoalFromRetargetAsset(class UIKRetargeter* RetargetAsset, class FName IKGoalName);
	struct IKRig_TargetChainSettings GetChainSettingsFromRetargetProfile(struct IKRig_RetargetProfile& RetargetProfile, class FName TargetChainName);
	struct IKRig_TargetChainSettings GetChainSettingsFromRetargetAsset(class UIKRetargeter* RetargetAsset, class FName TargetChainName, class FName OptionalProfileName);
};

// 0x348 (0x370 - 0x28)
// Class IKRig.IKRetargetProcessor
class UIKRetargetProcessor : public UObject
{
public:
	uint8                                        Pad_17FE[0x148];                                   // Fixing Size After Last Property  
	class UIKRigProcessor*                       IKRigProcessor;                                    // 0x170(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_17FF[0x1F8];                                   // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UIKRetargetProcessor* GetDefaultObj();

};

// 0xD8 (0x100 - 0x28)
// Class IKRig.IKRigEffectorGoal
class UIKRigEffectorGoal : public UObject
{
public:
	class FName                                  GoalName;                                          // 0x28(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BoneName;                                          // 0x30(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PositionAlpha;                                     // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RotationAlpha;                                     // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Transform                 CurrentTransform;                                  // 0x40(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Transform                 InitialTransform;                                  // 0xA0(0x60)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UIKRigEffectorGoal* GetDefaultObj();

};

// 0xD8 (0x100 - 0x28)
// Class IKRig.IKRigDefinition
class UIKRigDefinition : public UObject
{
public:
	uint8                                        Pad_1820[0x8];                                     // Fixing Size After Last Property  
	TSoftObjectPtr<class USkeletalMesh>          PreviewSkeletalMesh;                               // 0x30(0x28)(Edit, AssetRegistrySearchable, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct IKRig_IKRigSkeleton                   Skeleton;                                          // 0x58(0x70)(NativeAccessSpecifierPrivate)
	TArray<class UIKRigEffectorGoal*>            Goals;                                             // 0xC8(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<class UIKRigSolver*>                  Solvers;                                           // 0xD8(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct IKRig_RetargetDefinition              RetargetDefinition;                                // 0xE8(0x18)(NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UIKRigDefinition* GetDefaultObj();

};

// 0x120 (0x148 - 0x28)
// Class IKRig.IKRigProcessor
class UIKRigProcessor : public UObject
{
public:
	uint8                                        Pad_1832[0x38];                                    // Fixing Size After Last Property  
	TArray<class UIKRigSolver*>                  Solvers;                                           // 0x60(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1834[0xD8];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UIKRigProcessor* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class IKRig.IKRigSolver
class UIKRigSolver : public UObject
{
public:
	bool                                         bIsEnabled;                                        // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1852[0x7];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UIKRigSolver* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class IKRig.IKRig_BodyMoverEffector
class UIKRig_BodyMoverEffector : public UObject
{
public:
	class FName                                  GoalName;                                          // 0x28(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BoneName;                                          // 0x30(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InfluenceMultiplier;                               // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_185A[0x4];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UIKRig_BodyMoverEffector* GetDefaultObj();

};

// 0x50 (0x80 - 0x30)
// Class IKRig.IKRig_BodyMover
class UIKRig_BodyMover : public UIKRigSolver
{
public:
	class FName                                  RootBone;                                          // 0x30(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PositionAlpha;                                     // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PositionPositiveX;                                 // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PositionNegativeX;                                 // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PositionPositiveY;                                 // 0x44(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PositionNegativeY;                                 // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PositionPositiveZ;                                 // 0x4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PositionNegativeZ;                                 // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RotationAlpha;                                     // 0x54(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RotateXAlpha;                                      // 0x58(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RotateYAlpha;                                      // 0x5C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RotateZAlpha;                                      // 0x60(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1881[0x4];                                     // Fixing Size After Last Property  
	TArray<class UIKRig_BodyMoverEffector*>      Effectors;                                         // 0x68(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	uint8                                        Pad_1882[0x8];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UIKRig_BodyMover* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class IKRig.IKRig_LimbEffector
class UIKRig_LimbEffector : public UObject
{
public:
	class FName                                  GoalName;                                          // 0x28(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BoneName;                                          // 0x30(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UIKRig_LimbEffector* GetDefaultObj();

};

// 0x60 (0x90 - 0x30)
// Class IKRig.IKRig_LimbSolver
class UIKRig_LimbSolver : public UIKRigSolver
{
public:
	class FName                                  RootName;                                          // 0x30(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReachPrecision;                                    // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAxis                             HingeRotationAxis;                                 // 0x3C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18A1[0x3];                                     // Fixing Size After Last Property  
	int32                                        MaxIterations;                                     // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableLimit;                                      // 0x44(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18A3[0x3];                                     // Fixing Size After Last Property  
	float                                        MinRotationAngle;                                  // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAveragePull;                                      // 0x4C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18A5[0x3];                                     // Fixing Size After Last Property  
	float                                        PullDistribution;                                  // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReachStepAlpha;                                    // 0x54(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableTwistCorrection;                            // 0x58(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAxis                             EndBoneForwardAxis;                                // 0x59(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18AB[0x6];                                     // Fixing Size After Last Property  
	class UIKRig_LimbEffector*                   Effector;                                          // 0x60(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_18AC[0x28];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UIKRig_LimbSolver* GetDefaultObj();

};

// 0x20 (0x48 - 0x28)
// Class IKRig.IKRig_FBIKEffector
class UIKRig_FBIKEffector : public UObject
{
public:
	class FName                                  GoalName;                                          // 0x28(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BoneName;                                          // 0x30(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StrengthAlpha;                                     // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PullChainAlpha;                                    // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PinRotation;                                       // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        IndexInSolver;                                     // 0x44(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UIKRig_FBIKEffector* GetDefaultObj();

};

// 0x50 (0x78 - 0x28)
// Class IKRig.IKRig_FBIKBoneSettings
class UIKRig_FBIKBoneSettings : public UObject
{
public:
	class FName                                  bone;                                              // 0x28(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RotationStiffness;                                 // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PositionStiffness;                                 // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPBIKLimitType                    X;                                                 // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18E8[0x3];                                     // Fixing Size After Last Property  
	float                                        MinX;                                              // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxX;                                              // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPBIKLimitType                    Y;                                                 // 0x44(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18EF[0x3];                                     // Fixing Size After Last Property  
	float                                        MinY;                                              // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxY;                                              // 0x4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPBIKLimitType                    Z;                                                 // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18F4[0x3];                                     // Fixing Size After Last Property  
	float                                        MinZ;                                              // 0x54(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxZ;                                              // 0x58(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUsePreferredAngles;                               // 0x5C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18FA[0x3];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector                    PreferredAngles;                                   // 0x60(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UIKRig_FBIKBoneSettings* GetDefaultObj();

};

// 0xD0 (0x100 - 0x30)
// Class IKRig.IKRigFBIKSolver
class UIKRigFBIKSolver : public UIKRigSolver
{
public:
	class FName                                  RootBone;                                          // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Iterations;                                        // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MassMultiplier;                                    // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowStretch;                                     // 0x40(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPBIKRootBehavior                 RootBehavior;                                      // 0x41(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_190B[0x2];                                     // Fixing Size After Last Property  
	struct PBIK_RootPrePullSettings              PrePullRootSettings;                               // 0x44(0x20)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                        PullChainAlpha;                                    // 0x64(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxAngle;                                          // 0x68(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OverRelaxation;                                    // 0x6C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStartSolveFromInputPose;                          // 0x70(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1913[0x7];                                     // Fixing Size After Last Property  
	TArray<class UIKRig_FBIKEffector*>           Effectors;                                         // 0x78(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<class UIKRig_FBIKBoneSettings*>       BoneSettings;                                      // 0x88(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	uint8                                        Pad_1914[0x68];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UIKRigFBIKSolver* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class IKRig.IKRig_PoleSolverEffector
class UIKRig_PoleSolverEffector : public UObject
{
public:
	class FName                                  GoalName;                                          // 0x28(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BoneName;                                          // 0x30(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Alpha;                                             // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_191F[0x4];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UIKRig_PoleSolverEffector* GetDefaultObj();

};

// 0x38 (0x68 - 0x30)
// Class IKRig.IKRig_PoleSolver
class UIKRig_PoleSolver : public UIKRigSolver
{
public:
	class FName                                  RootName;                                          // 0x30(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  EndName;                                           // 0x38(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UIKRig_PoleSolverEffector*             Effector;                                          // 0x40(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1931[0x20];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UIKRig_PoleSolver* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class IKRig.IKRig_SetTransformEffector
class UIKRig_SetTransformEffector : public UObject
{
public:
	bool                                         bEnablePosition;                                   // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableRotation;                                   // 0x29(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1951[0x2];                                     // Fixing Size After Last Property  
	float                                        Alpha;                                             // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UIKRig_SetTransformEffector* GetDefaultObj();

};

// 0x20 (0x50 - 0x30)
// Class IKRig.IKRig_SetTransform
class UIKRig_SetTransform : public UIKRigSolver
{
public:
	class FName                                  Goal;                                              // 0x30(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  RootBone;                                          // 0x38(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UIKRig_SetTransformEffector*           Effector;                                          // 0x40(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1960[0x8];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UIKRig_SetTransform* GetDefaultObj();

};

}


