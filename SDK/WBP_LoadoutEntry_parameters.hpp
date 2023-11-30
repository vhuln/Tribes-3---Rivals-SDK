#pragma once




#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x1 (0x1 - 0x0)
// Function WBP_LoadoutEntry.WBP_LoadoutEntry_C.PreConstruct
struct UWBP_LoadoutEntry_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_LoadoutEntry.WBP_LoadoutEntry_C.UpdateEquipped
struct UWBP_LoadoutEntry_C_UpdateEquipped_Params
{
public:
	bool                                         Equipped;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function WBP_LoadoutEntry.WBP_LoadoutEntry_C.UpdateAsset
struct UWBP_LoadoutEntry_C_UpdateAsset_Params
{
public:
	class UValItemAsset*                         ItemAsset;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function WBP_LoadoutEntry.WBP_LoadoutEntry_C.UpdateName
struct UWBP_LoadoutEntry_C_UpdateName_Params
{
public:
	class FText                                  Value;                                             // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x29 (0x29 - 0x0)
// Function WBP_LoadoutEntry.WBP_LoadoutEntry_C.UpdateIcon
struct UWBP_LoadoutEntry_C_UpdateIcon_Params
{
public:
	TSoftObjectPtr<class UTexture2D>             SoftIcon;                                          // 0x0(0x28)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                         CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function WBP_LoadoutEntry.WBP_LoadoutEntry_C.UpdateSize
struct UWBP_LoadoutEntry_C_UpdateSize_Params
{
public:
	struct CoreUObject_Vector2D                  Size;                                              // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector2D_X;                          // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector2D_Y;                          // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast; // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast; // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WBP_LoadoutEntry.WBP_LoadoutEntry_C.ExecuteUbergraph_WBP_LoadoutEntry
struct UWBP_LoadoutEntry_C_ExecuteUbergraph_WBP_LoadoutEntry_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_LoadoutEntry.WBP_LoadoutEntry_C.OnHovered__DelegateSignature
struct UWBP_LoadoutEntry_C_OnHovered__DelegateSignature_Params
{
public:
	class UWBP_LoadoutEntry_C*                   Widget;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_LoadoutEntry.WBP_LoadoutEntry_C.OnSelected__DelegateSignature
struct UWBP_LoadoutEntry_C_OnSelected__DelegateSignature_Params
{
public:
	class UWBP_LoadoutEntry_C*                   Widget;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

}
}


