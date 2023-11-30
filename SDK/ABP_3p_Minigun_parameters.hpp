#pragma once




#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// Function ABP_3p_Minigun.ABP_3p_Minigun_C.WeaponLayer
struct UABP_3p_Minigun_C_WeaponLayer_Params
{
public:
	struct Engine_PoseLink                       WeaponLayer;                                       // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function ABP_3p_Minigun.ABP_3p_Minigun_C.AnimGraph
struct UABP_3p_Minigun_C_AnimGraph_Params
{
public:
	struct Engine_PoseLink                       AnimGraph;                                         // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function ABP_3p_Minigun.ABP_3p_Minigun_C.ExecuteUbergraph_ABP_3p_Minigun
struct UABP_3p_Minigun_C_ExecuteUbergraph_ABP_3p_Minigun_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


