#pragma once




#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x60 - 0x0)
// Function ItemOverlay_Info.ItemOverlay_Info_C.UpdateItemSlot
struct UItemOverlay_Info_C_UpdateItemSlot_Params
{
public:
	struct GameplayTags_GameplayTag              Input_Tag;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetTagName_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_NameToString_ReturnValue;            // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Split_LeftS;                              // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Split_RightS;                             // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_Split_ReturnValue;                        // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8BB[0x7];                                      // Fixing Size After Last Property  
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x48(0x18)(None)
};

// 0x8 (0x8 - 0x0)
// Function ItemOverlay_Info.ItemOverlay_Info_C.UpdateItemIcon
struct UItemOverlay_Info_C_UpdateItemIcon_Params
{
public:
	class UTexture2D*                            NewParam;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function ItemOverlay_Info.ItemOverlay_Info_C.UpdateItemDescription
struct UItemOverlay_Info_C_UpdateItemDescription_Params
{
public:
	class FText                                  Item_Description;                                  // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x18 (0x18 - 0x0)
// Function ItemOverlay_Info.ItemOverlay_Info_C.UpdateItemName
struct UItemOverlay_Info_C_UpdateItemName_Params
{
public:
	class FText                                  Description;                                       // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x16 (0x16 - 0x0)
// Function ItemOverlay_Info.ItemOverlay_Info_C.UpdateRarity
struct UItemOverlay_Info_C_UpdateRarity_Params
{
public:
	enum class ERarity                           Rarity;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8FA[0x3];                                      // Fixing Size After Last Property  
	struct CoreUObject_LinearColor               CallFunc_Map_Find_Value;                           // 0x4(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function ItemOverlay_Info.ItemOverlay_Info_C.ExecuteUbergraph_ItemOverlay_Info
struct UItemOverlay_Info_C_ExecuteUbergraph_ItemOverlay_Info_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


