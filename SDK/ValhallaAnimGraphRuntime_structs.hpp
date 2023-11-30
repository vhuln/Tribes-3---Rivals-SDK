#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EPoseMirrorPlane : uint8
{
	XZ                             = 0,
	XY                             = 1,
	YZ                             = 2,
	EPoseMirrorPlane_MAX           = 3,
};

enum class ERecoilAllowMirror : uint8
{
	Both                           = 0,
	UnmirroredOnly                 = 1,
	MirroredOnly                   = 2,
	ERecoilAllowMirror_MAX         = 3,
};

enum class ERecoilStart : uint8
{
	ERS_SpecifyOffset              = 0,
	ERS_Random                     = 1,
	ERS_SpecifyOffsetRandom        = 2,
	ERS_MAX                        = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x38 - 0x0)
// ScriptStruct ValhallaAnimGraphRuntime.BoneMirrorPair
struct ValhallaAnimGraphRuntime_BoneMirrorPair
{
public:
	struct Engine_BoneReference                  BoneOne;                                           // 0x0(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct Engine_BoneReference                  BoneTwo;                                           // 0x10(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    RotationFlipAxis;                                  // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ValhallaAnimGraphRuntime.BoneMirrorConfig
struct ValhallaAnimGraphRuntime_BoneMirrorConfig
{
public:
	TArray<struct Engine_BoneReference>          UnpairedMirrorBones;                               // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct ValhallaAnimGraphRuntime_BoneMirrorPair> PairedMirrorBones;                                 // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ValhallaAnimGraphRuntime.RecoilParams
struct ValhallaAnimGraphRuntime_RecoilParams
{
public:
	struct CoreUObject_Vector                    PhaseOffset;                                       // 0x0(0x18)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERecoilStart                      X;                                                 // 0x18(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ERecoilStart                      Y;                                                 // 0x19(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ERecoilStart                      Z;                                                 // 0x1A(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_328[0x5];                                      // Fixing Size Of Struct 
};

// 0xB0 (0xB0 - 0x0)
// ScriptStruct ValhallaAnimGraphRuntime.RecoilInfo
struct ValhallaAnimGraphRuntime_RecoilInfo
{
public:
	float                                        TimeDurationPos;                                   // 0x0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeDurationRot;                                   // 0x4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    RotAmplitude;                                      // 0x8(0x18)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    RotFrequency;                                      // 0x20(0x18)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ValhallaAnimGraphRuntime_RecoilParams RotParams;                                         // 0x38(0x20)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    LocAmplitude;                                      // 0x58(0x18)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    LocFrequency;                                      // 0x70(0x18)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ValhallaAnimGraphRuntime_RecoilParams LocParams;                                         // 0x88(0x20)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	float                                        BlendInTime;                                       // 0xA8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0xAC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMirrored;                                         // 0xAD(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_333[0x2];                                      // Fixing Size Of Struct 
};

// 0x198 (0x260 - 0xC8)
// ScriptStruct ValhallaAnimGraphRuntime.ValAnimNode_Recoil
struct ValhallaAnimGraphRuntime_ValAnimNode_Recoil : public AnimGraphRuntime_AnimNode_SkeletalControlBase
{
public:
	struct Engine_BoneReference                  BoneToRecoil;                                      // 0xC8(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bBoneSpaceRecoil;                                  // 0xD8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_33E[0x3];                                      // Fixing Size After Last Property  
	float                                        RotTimeToGo;                                       // 0xDC(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PosTimeToGo;                                       // 0xE0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_341[0x4];                                      // Fixing Size After Last Property  
	struct ValhallaAnimGraphRuntime_RecoilInfo   Recoil;                                            // 0xE8(0xB0)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bApplyControl;                                     // 0x198(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_343[0x3];                                      // Fixing Size After Last Property  
	float                                        BlendInTime;                                       // 0x19C(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BlendInRemainingTime;                              // 0x1A0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_347[0x4];                                      // Fixing Size After Last Property  
	struct CoreUObject_Vector                    BlendLoc;                                          // 0x1A8(0x18)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Rotator                   BlendRot;                                          // 0x1C0(0x18)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct CoreUObject_Rotator                   RotOffset;                                         // 0x1D8(0x18)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_34B[0x18];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector                    LocOffset;                                         // 0x208(0x18)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_34E[0x18];                                     // Fixing Size After Last Property  
	int32                                        FireImpulseCounter;                                // 0x238(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERecoilAllowMirror                MirrorPermissions;                                 // 0x23C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPoseMirrorPlane                  MirrorPlane;                                       // 0x23D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_355[0x2];                                      // Fixing Size After Last Property  
	struct CoreUObject_Vector                    RotationFlipAxis;                                  // 0x240(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InternalFireImpulseCounter;                        // 0x258(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_357[0x4];                                      // Fixing Size Of Struct 
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ValhallaAnimGraphRuntime.RotatorSpringState
struct ValhallaAnimGraphRuntime_RotatorSpringState
{
public:
	uint8                                        Pad_35A[0x30];                                     // Fixing Size Of Struct 
};

// 0xF0 (0x1B8 - 0xC8)
// ScriptStruct ValhallaAnimGraphRuntime.ValAnimNode_SpringInterp
struct ValhallaAnimGraphRuntime_ValAnimNode_SpringInterp : public AnimGraphRuntime_AnimNode_SkeletalControlBase
{
public:
	struct Engine_BoneReference                  BoneToSpringInterp;                                // 0xC8(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bBoneSpaceSpringInterp;                            // 0xD8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bApplyControl;                                     // 0xD9(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_361[0x6];                                      // Fixing Size After Last Property  
	struct Engine_VectorSpringState              LocSpringState;                                    // 0xE0(0x38)(Transient, NoDestructor, NativeAccessSpecifierPublic)
	struct ValhallaAnimGraphRuntime_RotatorSpringState RotSpringState;                                    // 0x118(0x30)(Transient, NoDestructor, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    TargetLoc;                                         // 0x148(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LocStiffness;                                      // 0x160(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LocDampingFactor;                                  // 0x164(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RotStiffness;                                      // 0x168(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RotDampingFactor;                                  // 0x16C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Rotator                   TargetRot;                                         // 0x170(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct CoreUObject_Rotator                   RotOffset;                                         // 0x188(0x18)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    LocOffset;                                         // 0x1A0(0x18)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x380 (0x380 - 0x0)
// ScriptStruct ValhallaAnimGraphRuntime.RecoilProfile
struct ValhallaAnimGraphRuntime_RecoilProfile
{
public:
	struct ValhallaAnimGraphRuntime_RecoilInfo   PelvisRecoil;                                      // 0x0(0xB0)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct ValhallaAnimGraphRuntime_RecoilInfo   SpineRecoil;                                       // 0xB0(0xB0)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct ValhallaAnimGraphRuntime_RecoilInfo   NeckRecoil;                                        // 0x160(0xB0)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct ValhallaAnimGraphRuntime_RecoilInfo   HandRecoil;                                        // 0x210(0xB0)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct ValhallaAnimGraphRuntime_RecoilInfo   RightClavicleRecoil;                               // 0x2C0(0xB0)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Spine1RecoilAlpha;                                 // 0x370(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Spine2RecoilAlpha;                                 // 0x374(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Spine3RecoilAlpha;                                 // 0x378(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_370[0x4];                                      // Fixing Size Of Struct 
};

}


