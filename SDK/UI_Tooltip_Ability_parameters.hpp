#pragma once




#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x261 (0x261 - 0x0)
// Function UI_Tooltip_Ability.UI_Tooltip_Ability_C.GetAbilityPassiveInfo
struct UUI_Tooltip_Ability_C_GetAbilityPassiveInfo_Params
{
public:
	bool                                         IsUnlocked;                                        // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2DB[0x7];                                      // Fixing Size After Last Property  
	TArray<struct Valhalla_ValAbilityAffectingPassiveInfo> LocalAbilityPassiveInfos;                          // 0x8(0x10)(Edit, BlueprintVisible)
	struct Valhalla_ValAbilityAffectingPassiveInfo LocalCurrentInfo;                                  // 0x18(0x30)(Edit, BlueprintVisible)
	int32                                        LocalHighestMasteryRequirement;                    // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct Valhalla_ValAbilityAffectingPassiveInfo CallFunc_Array_Get_Item;                           // 0x50(0x30)(None)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct CoreUObject_LinearColor               CallFunc_SelectColor_ReturnValue;                  // 0x84(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2E9[0x4];                                      // Fixing Size After Last Property  
	class FText                                  Temp_text_Variable;                                // 0x98(0x18)(None)
	struct SlateCore_SlateColor                  K2Node_MakeStruct_SlateColor;                      // 0xB0(0x14)(None)
	uint8                                        Pad_2EB[0x4];                                      // Fixing Size After Last Property  
	class FText                                  Temp_text_Variable_1;                              // 0xC8(0x18)(None)
	class UTexture2D*                            CallFunc_GetIconFromPlayerProperty_OutText;        // 0xE0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int64                                        CallFunc_Conv_IntToInt64_ReturnValue;              // 0xE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct Engine_FormatArgumentData             K2Node_MakeStruct_FormatArgumentData;              // 0xF0(0x50)(HasGetValueTypeHash)
	class FText                                  CallFunc_GetTextFromPlayerProperty_OutText;        // 0x140(0x18)(None)
	class FText                                  CallFunc_TextToUpper_ReturnValue;                  // 0x158(0x18)(None)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x170(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F3[0x4];                                      // Fixing Size After Last Property  
	struct Engine_FormatArgumentData             K2Node_MakeStruct_FormatArgumentData_1;            // 0x178(0x50)(HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x1C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2FB[0x7];                                      // Fixing Size After Last Property  
	TArray<struct Engine_FormatArgumentData>     K2Node_MakeArray_Array;                            // 0x1D0(0x10)(ReferenceParm)
	bool                                         Temp_bool_Variable;                                // 0x1E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_300[0x7];                                      // Fixing Size After Last Property  
	class FText                                  K2Node_Select_Default;                             // 0x1E8(0x18)(None)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_1;             // 0x200(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_301[0x7];                                      // Fixing Size After Last Property  
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x208(0x18)(None)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x220(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x224(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x225(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_309[0x2];                                      // Fixing Size After Last Property  
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x228(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_30A[0x4];                                      // Fixing Size After Last Property  
	class AGameStateBase*                        CallFunc_GetGameState_ReturnValue;                 // 0x230(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AValInventoryManager*                  CallFunc_GetInventoryManager_ReturnValue;          // 0x238(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AValGameState_Lobby*                   K2Node_DynamicCast_AsVal_Game_State_Lobby;         // 0x240(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x248(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_30E[0x3];                                      // Fixing Size After Last Property  
	int32                                        CallFunc_GetPlayerPropertyLevel_ReturnValue;       // 0x24C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct Valhalla_ValAbilityAffectingPassiveInfo> CallFunc_GetPassivesAffectingAbilityByID_AffectingPassivesArray; // 0x250(0x10)(ReferenceParm)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x260(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1F8 (0x1F8 - 0x0)
// Function UI_Tooltip_Ability.UI_Tooltip_Ability_C.UpdateData
struct UUI_Tooltip_Ability_C_UpdateData_Params
{
public:
	class UValItemAsset*                         ItemAsset;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<enum class EPlayerProperty>           CallFunc_Map_Keys_Keys;                            // 0x8(0x10)(ReferenceParm)
	bool                                         CallFunc_Map_IsNotEmpty_ReturnValue;               // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3CE[0x7];                                      // Fixing Size After Last Property  
	class FText                                  CallFunc_GetTextFromPlayerProperty_OutText;        // 0x20(0x18)(None)
	int32                                        CallFunc_Map_Find_Value;                           // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D8[0x3];                                      // Fixing Size After Last Property  
	struct Engine_FormatArgumentData             K2Node_MakeStruct_FormatArgumentData;              // 0x40(0x50)(HasGetValueTypeHash)
	int64                                        CallFunc_Conv_IntToInt64_ReturnValue;              // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct Engine_FormatArgumentData             K2Node_MakeStruct_FormatArgumentData_1;            // 0x98(0x50)(HasGetValueTypeHash)
	TArray<struct Engine_FormatArgumentData>     K2Node_MakeArray_Array;                            // 0xE8(0x10)(ReferenceParm)
	class FText                                  CallFunc_TextToUpper_ReturnValue;                  // 0xF8(0x18)(None)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x110(0x18)(None)
	int64                                        CallFunc_Conv_IntToInt64_ReturnValue_1;            // 0x128(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct Engine_FormatArgumentData             K2Node_MakeStruct_FormatArgumentData_2;            // 0x130(0x50)(HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x180(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3F0[0x7];                                      // Fixing Size After Last Property  
	TArray<struct Engine_FormatArgumentData>     K2Node_MakeArray_Array_1;                          // 0x188(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue_1;                     // 0x198(0x18)(None)
	class UValGameInstance*                      CallFunc_GetGameInstance_ReturnValue;              // 0x1B0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UValDataTableManager*                  CallFunc_GetDataTableManager_ReturnValue;          // 0x1B8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetGameplayText_Text;                     // 0x1C0(0x18)(None)
	bool                                         CallFunc_GetGameplayText_ReturnValue;              // 0x1D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_402[0x7];                                      // Fixing Size After Last Property  
	class FText                                  CallFunc_TextToUpper_ReturnValue_1;                // 0x1E0(0x18)(None)
};

// 0x8 (0x8 - 0x0)
// Function UI_Tooltip_Ability.UI_Tooltip_Ability_C.OnLoaded_A4EDD58F4B695E03311D149D9193BA79
struct UUI_Tooltip_Ability_C_OnLoaded_A4EDD58F4B695E03311D149D9193BA79_Params
{
public:
	class UObject*                               Loaded;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function UI_Tooltip_Ability.UI_Tooltip_Ability_C.SetMasteryInfoFromSoftAsset
struct UUI_Tooltip_Ability_C_SetMasteryInfoFromSoftAsset_Params
{
public:
	TSoftObjectPtr<class UObject>                Asset;                                             // 0x0(0x28)(BlueprintVisible, BlueprintReadOnly, Parm, UObjectWrapper, HasGetValueTypeHash)
};

// 0x7C (0x7C - 0x0)
// Function UI_Tooltip_Ability.UI_Tooltip_Ability_C.ExecuteUbergraph_UI_Tooltip_Ability
struct UUI_Tooltip_Ability_C_ExecuteUbergraph_UI_Tooltip_Ability_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_498[0x4];                                      // Fixing Size After Last Property  
	class UObject*                               K2Node_CustomEvent_Loaded;                         // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UObject>                K2Node_CustomEvent_Asset;                          // 0x10(0x28)(UObjectWrapper, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x38(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                               Temp_object_Variable;                              // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UValItemAsset*                         K2Node_DynamicCast_AsVal_Item_Asset;               // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4AF[0x7];                                      // Fixing Size After Last Property  
	class UMaterialInstanceDynamic*              CallFunc_GetEffectMaterial_ReturnValue;            // 0x60(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x69(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4C1[0x6];                                      // Fixing Size After Last Property  
	double                                       CallFunc_SelectFloat_ReturnValue;                  // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetScalarParameterValue_Value_ImplicitCast; // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


