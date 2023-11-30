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
// Function BP_Loot_Crate_Master_Dungeon.BP_Loot_Crate_Master_Dungeon_C.OnHoverStart
struct ABP_Loot_Crate_Master_Dungeon_C_OnHoverStart_Params
{
public:
	class AValCharacter*                         Initiator;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_Loot_Crate_Master_Dungeon.BP_Loot_Crate_Master_Dungeon_C.OnHoverEnd
struct ABP_Loot_Crate_Master_Dungeon_C_OnHoverEnd_Params
{
public:
	class AValCharacter*                         Initiator;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_Loot_Crate_Master_Dungeon.BP_Loot_Crate_Master_Dungeon_C.ExecuteUbergraph_BP_Loot_Crate_Master_Dungeon
struct ABP_Loot_Crate_Master_Dungeon_C_ExecuteUbergraph_BP_Loot_Crate_Master_Dungeon_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2BFF[0x4];                                     // Fixing Size After Last Property  
	class AValCharacter*                         K2Node_Event_Initiator;                            // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AValCharacter*                         K2Node_Event_Initiator_1;                          // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
}


