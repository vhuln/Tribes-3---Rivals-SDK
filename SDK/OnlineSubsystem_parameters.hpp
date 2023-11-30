#pragma once




#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x18 - 0x0)
// Function OnlineSubsystem.TurnBasedMatchInterface.OnMatchReceivedTurn
struct ITurnBasedMatchInterface_OnMatchReceivedTurn_Params
{
public:
	class FString                                Match;                                             // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDidBecomeActive;                                  // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_84C[0x7];                                      // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystem.TurnBasedMatchInterface.OnMatchEnded
struct ITurnBasedMatchInterface_OnMatchEnded_Params
{
public:
	class FString                                Match;                                             // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


