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
// Function WBP_PlayerIdentity_Avatar.WBP_PlayerIdentity_Avatar_C.SetAvatar
struct UWBP_PlayerIdentity_Avatar_C_SetAvatar_Params
{
public:
	class URHAvatar*                             Avatar;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UIconInfo*                             CallFunc_GetLargeAvatarInfo_ReturnValue;           // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

}
}


