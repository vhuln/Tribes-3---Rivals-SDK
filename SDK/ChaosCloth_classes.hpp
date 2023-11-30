#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF0 (0x118 - 0x28)
// Class ChaosCloth.ChaosClothConfig
class UChaosClothConfig : public UClothConfigCommon
{
public:
	enum class EClothMassMode                    MassMode;                                          // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1668[0x3];                                     // Fixing Size After Last Property  
	float                                        UniformMass;                                       // 0x2C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TotalMass;                                         // 0x30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Density;                                           // 0x34(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinPerParticleMass;                                // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ChaosCloth_ChaosClothWeightedValue    EdgeStiffnessWeighted;                             // 0x3C(0x8)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct ChaosCloth_ChaosClothWeightedValue    BendingStiffnessWeighted;                          // 0x44(0x8)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bUseBendingElements;                               // 0x4C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_166E[0x3];                                     // Fixing Size After Last Property  
	float                                        BucklingRatio;                                     // 0x50(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ChaosCloth_ChaosClothWeightedValue    BucklingStiffnessWeighted;                         // 0x54(0x8)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct ChaosCloth_ChaosClothWeightedValue    AreaStiffnessWeighted;                             // 0x5C(0x8)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        VolumeStiffness;                                   // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ChaosCloth_ChaosClothWeightedValue    TetherStiffness;                                   // 0x68(0x8)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct ChaosCloth_ChaosClothWeightedValue    TetherScale;                                       // 0x70(0x8)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bUseGeodesicDistance;                              // 0x78(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_167A[0x3];                                     // Fixing Size After Last Property  
	float                                        ShapeTargetStiffness;                              // 0x7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CollisionThickness;                                // 0x80(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FrictionCoefficient;                               // 0x84(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseCCD;                                           // 0x88(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseSelfCollisions;                                // 0x89(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1682[0x2];                                     // Fixing Size After Last Property  
	float                                        SelfCollisionThickness;                            // 0x8C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SelfCollisionFriction;                             // 0x90(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseSelfIntersections;                             // 0x94(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseLegacyBackstop;                                // 0x95(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1684[0x2];                                     // Fixing Size After Last Property  
	float                                        DampingCoefficient;                                // 0x98(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LocalDampingCoefficient;                           // 0x9C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUsePointBasedWindModel;                           // 0xA0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1686[0x3];                                     // Fixing Size After Last Property  
	struct ChaosCloth_ChaosClothWeightedValue    Drag;                                              // 0xA4(0x8)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct ChaosCloth_ChaosClothWeightedValue    Lift;                                              // 0xAC(0x8)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bUseGravityOverride;                               // 0xB4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_168D[0x3];                                     // Fixing Size After Last Property  
	float                                        GravityScale;                                      // 0xB8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_168F[0x4];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector                    Gravity;                                           // 0xC0(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ChaosCloth_ChaosClothWeightedValue    Pressure;                                          // 0xD8(0x8)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct ChaosCloth_ChaosClothWeightedValue    AnimDriveStiffness;                                // 0xE0(0x8)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct ChaosCloth_ChaosClothWeightedValue    AnimDriveDamping;                                  // 0xE8(0x8)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    LinearVelocityScale;                               // 0xF0(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AngularVelocityScale;                              // 0x108(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FictitiousAngularScale;                            // 0x10C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseTetrahedralConstraints;                        // 0x110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseThinShellVolumeConstraints;                    // 0x111(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseContinuousCollisionDetection;                  // 0x112(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_169E[0x5];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UChaosClothConfig* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class ChaosCloth.ChaosClothSharedSimConfig
class UChaosClothSharedSimConfig : public UClothSharedConfigCommon
{
public:
	int32                                        IterationCount;                                    // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxIterationCount;                                 // 0x2C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SubdivisionCount;                                  // 0x30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseLocalSpaceSimulation;                          // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseXPBDConstraints;                               // 0x35(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16B3[0x2];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UChaosClothSharedSimConfig* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class ChaosCloth.ChaosClothingSimulationFactory
class UChaosClothingSimulationFactory : public UClothingSimulationFactory
{
public:

	static class UClass* StaticClass();
	static class UChaosClothingSimulationFactory* GetDefaultObj();

};

// 0x20 (0x50 - 0x30)
// Class ChaosCloth.ChaosClothingInteractor
class UChaosClothingInteractor : public UClothingInteractor
{
public:
	uint8                                        Pad_178D[0x20];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UChaosClothingInteractor* GetDefaultObj();

	void SetWind(const struct CoreUObject_Vector2D& Drag, const struct CoreUObject_Vector2D& Lift, float AirDensity, const struct CoreUObject_Vector& WindVelocity);
	void SetVelocityScale(const struct CoreUObject_Vector& LinearVelocityScale, float AngularVelocityScale, float FictitiousAngularScale);
	void SetPressure(const struct CoreUObject_Vector2D& Pressure);
	void SetMaterialLinear(float EdgeStiffness, float BendingStiffness, float AreaStiffness);
	void SetMaterial(const struct CoreUObject_Vector2D& EdgeStiffness, const struct CoreUObject_Vector2D& BendingStiffness, const struct CoreUObject_Vector2D& AreaStiffness);
	void SetLongRangeAttachmentLinear(float TetherStiffness, float TetherScale);
	void SetLongRangeAttachment(const struct CoreUObject_Vector2D& TetherStiffness, const struct CoreUObject_Vector2D& TetherScale);
	void SetGravity(float GravityScale, bool bIsGravityOverridden, const struct CoreUObject_Vector& GravityOverride);
	void SetDamping(float DampingCoefficient, float LocalDampingCoefficient);
	void SetCollision(float CollisionThickness, float FrictionCoefficient, bool bUseCCD, float SelfCollisionThickness);
	void SetBackstop(bool bEnabled);
	void SetAnimDriveLinear(float AnimDriveStiffness);
	void SetAnimDrive(const struct CoreUObject_Vector2D& AnimDriveStiffness, const struct CoreUObject_Vector2D& AnimDriveDamping);
	void SetAerodynamics(float DragCoefficient, float LiftCoefficient, const struct CoreUObject_Vector& WindVelocity);
	void ResetAndTeleport(bool bReset, bool bTeleport);
};

// 0x20 (0xB0 - 0x90)
// Class ChaosCloth.ChaosClothingSimulationInteractor
class UChaosClothingSimulationInteractor : public UClothingSimulationInteractor
{
public:
	uint8                                        Pad_179A[0x20];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UChaosClothingSimulationInteractor* GetDefaultObj();

};

}


