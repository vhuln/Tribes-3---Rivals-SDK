#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x178 (0x1A0 - 0x28)
// Class ClothingSystemRuntimeNv.ClothConfigNv
class UClothConfigNv : public UClothConfigCommon
{
public:
	enum class EClothingWindMethodNv             ClothingWindMethod;                                // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_476[0x3];                                      // Fixing Size After Last Property  
	struct ClothingSystemRuntimeNv_ClothConstraintSetupNv VerticalConstraint;                                // 0x2C(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct ClothingSystemRuntimeNv_ClothConstraintSetupNv HorizontalConstraint;                              // 0x3C(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct ClothingSystemRuntimeNv_ClothConstraintSetupNv BendConstraint;                                    // 0x4C(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct ClothingSystemRuntimeNv_ClothConstraintSetupNv ShearConstraint;                                   // 0x5C(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        SelfCollisionRadius;                               // 0x6C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SelfCollisionStiffness;                            // 0x70(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SelfCollisionCullScale;                            // 0x74(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Damping;                                           // 0x78(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Friction;                                          // 0x90(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WindDragCoefficient;                               // 0x94(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WindLiftCoefficient;                               // 0x98(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_497[0x4];                                      // Fixing Size After Last Property  
	struct CoreUObject_Vector                    LinearDrag;                                        // 0xA0(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    AngularDrag;                                       // 0xB8(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    LinearInertiaScale;                                // 0xD0(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    AngularInertiaScale;                               // 0xE8(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    CentrifugalInertiaScale;                           // 0x100(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SolverFrequency;                                   // 0x118(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StiffnessFrequency;                                // 0x11C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GravityScale;                                      // 0x120(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4BD[0x4];                                      // Fixing Size After Last Property  
	struct CoreUObject_Vector                    GravityOverride;                                   // 0x128(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseGravityOverride;                               // 0x140(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4C6[0x3];                                      // Fixing Size After Last Property  
	float                                        TetherStiffness;                                   // 0x144(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TetherLimit;                                       // 0x148(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CollisionThickness;                                // 0x14C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AnimDriveSpringStiffness;                          // 0x150(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AnimDriveDamperStiffness;                          // 0x154(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EClothingWindMethod_Legacy        WindMethod;                                        // 0x158(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4D2[0x3];                                      // Fixing Size After Last Property  
	struct ClothingSystemRuntimeCommon_ClothConstraintSetup_Legacy VerticalConstraintConfig;                          // 0x15C(0x10)(Deprecated, NoDestructor, NativeAccessSpecifierPublic)
	struct ClothingSystemRuntimeCommon_ClothConstraintSetup_Legacy HorizontalConstraintConfig;                        // 0x16C(0x10)(Deprecated, NoDestructor, NativeAccessSpecifierPublic)
	struct ClothingSystemRuntimeCommon_ClothConstraintSetup_Legacy BendConstraintConfig;                              // 0x17C(0x10)(Deprecated, NoDestructor, NativeAccessSpecifierPublic)
	struct ClothingSystemRuntimeCommon_ClothConstraintSetup_Legacy ShearConstraintConfig;                             // 0x18C(0x10)(Deprecated, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_4E1[0x4];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UClothConfigNv* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class ClothingSystemRuntimeNv.ClothingSimulationFactoryNv
class UClothingSimulationFactoryNv : public UClothingSimulationFactory
{
public:

	static class UClass* StaticClass();
	static class UClothingSimulationFactoryNv* GetDefaultObj();

};

// 0x0 (0x90 - 0x90)
// Class ClothingSystemRuntimeNv.ClothingSimulationInteractorNv
class UClothingSimulationInteractorNv : public UClothingSimulationInteractor
{
public:

	static class UClass* StaticClass();
	static class UClothingSimulationInteractorNv* GetDefaultObj();

	void SetAnimDriveDamperStiffness(float InStiffness);
};

// 0x40 (0x120 - 0xE0)
// Class ClothingSystemRuntimeNv.ClothPhysicalMeshDataNv_Legacy
class UClothPhysicalMeshDataNv_Legacy : public UClothPhysicalMeshDataBase_Legacy
{
public:
	TArray<float>                                MaxDistances;                                      // 0xE0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                BackstopDistances;                                 // 0xF0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                BackstopRadiuses;                                  // 0x100(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                AnimDriveMultipliers;                              // 0x110(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UClothPhysicalMeshDataNv_Legacy* GetDefaultObj();

};

}


