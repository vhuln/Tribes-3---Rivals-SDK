#pragma once




#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x28 - 0x0)
// Function GC_BulletImpact.GC_BulletImpact_C.PhysicalSurfaceToString
struct UGC_BulletImpact_C_PhysicalSurfaceToString_Params
{
public:
	enum class EPhysicalSurface                  Surface;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3167[0x7];                                     // Fixing Size After Last Property  
	class FString                                ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	class FString                                CallFunc_GetSurfaceTypeAsString_SurfaceTypeAsString; // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

}
}


