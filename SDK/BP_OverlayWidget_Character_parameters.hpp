#pragma once




#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x11 (0x11 - 0x0)
// Function BP_OverlayWidget_Character.BP_OverlayWidget_Character_C.OnCharacterClassChanged
struct UBP_OverlayWidget_Character_C_OnCharacterClassChanged_Params
{
public:
	struct GameplayTags_GameplayTag              CharacterClass;                                    // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            CallFunc_Map_Find_Value;                           // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function BP_OverlayWidget_Character.BP_OverlayWidget_Character_C.UpdateLoadoutIcon
struct UBP_OverlayWidget_Character_C_UpdateLoadoutIcon_Params
{
public:
	struct GameplayTags_GameplayTag              QueuedClassTag;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            CallFunc_Map_Find_Value;                           // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x60 (0x60 - 0x0)
// Function BP_OverlayWidget_Character.BP_OverlayWidget_Character_C.OnTeamRelationChanged
struct UBP_OverlayWidget_Character_C_OnTeamRelationChanged_Params
{
public:
	enum class ETeamRelation                     Relation;                                          // 0x0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2540[0x3];                                     // Fixing Size After Last Property  
	struct CoreUObject_LinearColor               LocalColorLight;                                   // 0x4(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct CoreUObject_LinearColor               LocalColor;                                        // 0x14(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETeamRelation                     Temp_byte_Variable;                                // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETeamRelation                     Temp_byte_Variable_1;                              // 0x25(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2577[0x2];                                     // Fixing Size After Last Property  
	struct SlateCore_SlateColor                  K2Node_MakeStruct_SlateColor;                      // 0x28(0x14)(None)
	struct CoreUObject_LinearColor               K2Node_Select_Default;                             // 0x3C(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x4C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x4D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_25AD[0x2];                                     // Fixing Size After Last Property  
	struct CoreUObject_LinearColor               K2Node_Select_Default_1;                           // 0x50(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


