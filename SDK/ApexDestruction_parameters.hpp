#pragma once




#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x8 - 0x0)
// Function ApexDestruction.DestructibleComponent.SetDestructibleMesh
struct UDestructibleComponent_SetDestructibleMesh_Params
{
public:
	class UDestructibleMesh*                     NewMesh;                                           // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ApexDestruction.DestructibleComponent.GetDestructibleMesh
struct UDestructibleComponent_GetDestructibleMesh_Params
{
public:
	class UDestructibleMesh*                     ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function ApexDestruction.DestructibleComponent.ApplyRadiusDamage
struct UDestructibleComponent_ApplyRadiusDamage_Params
{
public:
	float                                        BaseDamage;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1040[0x4];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector                    HurtOrigin;                                        // 0x8(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DamageRadius;                                      // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ImpulseStrength;                                   // 0x24(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFullDamage;                                       // 0x28(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1043[0x7];                                     // Fixing Size Of Struct 
};

// 0x40 (0x40 - 0x0)
// Function ApexDestruction.DestructibleComponent.ApplyDamage
struct UDestructibleComponent_ApplyDamage_Params
{
public:
	float                                        DamageAmount;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1078[0x4];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector                    HitLocation;                                       // 0x8(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    ImpulseDir;                                        // 0x20(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ImpulseStrength;                                   // 0x38(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_107B[0x4];                                     // Fixing Size Of Struct 
};

}
}


