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
// Function ABP_3p_Pistol.ABP_3p_Pistol_C.WeaponLayer
struct UABP_3p_Pistol_C_WeaponLayer_Params
{
public:
	struct Engine_PoseLink                       WeaponLayer;                                       // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function ABP_3p_Pistol.ABP_3p_Pistol_C.AnimGraph
struct UABP_3p_Pistol_C_AnimGraph_Params
{
public:
	struct Engine_PoseLink                       AnimGraph;                                         // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function ABP_3p_Pistol.ABP_3p_Pistol_C.ExecuteUbergraph_ABP_3p_Pistol
struct UABP_3p_Pistol_C_ExecuteUbergraph_ABP_3p_Pistol_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


