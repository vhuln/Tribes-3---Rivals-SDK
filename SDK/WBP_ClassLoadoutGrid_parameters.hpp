#pragma once




#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x48 - 0x0)
// Function WBP_ClassLoadoutGrid.WBP_ClassLoadoutGrid_C.CacheSections
struct UWBP_ClassLoadoutGrid_C_CacheSections_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2299[0x4];                                     // Fixing Size After Last Property  
	TArray<class UWidget*>                       CallFunc_GetAllChildren_ReturnValue;               // 0x10(0x10)(ReferenceParm, ContainsInstancedReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_229B[0x4];                                     // Fixing Size After Last Property  
	class UWidget*                               CallFunc_Array_Get_Item;                           // 0x28(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_229E[0x7];                                     // Fixing Size After Last Property  
	class UWBP_ClassLoadoutOptionSection_C*      K2Node_DynamicCast_AsWBP_Class_Loadout_Option_Section; // 0x38(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_22A2[0x3];                                     // Fixing Size After Last Property  
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_ClassLoadoutGrid.WBP_ClassLoadoutGrid_C.UpdateSelectionMade
struct UWBP_ClassLoadoutGrid_C_UpdateSelectionMade_Params
{
public:
	bool                                         CachedInitialSelectionMade;                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_ClassLoadoutGrid.WBP_ClassLoadoutGrid_C.UpdateEquipButtonEnabled
struct UWBP_ClassLoadoutGrid_C_UpdateEquipButtonEnabled_Params
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_22D0[0x3];                                     // Fixing Size After Last Property  
	int32                                        CallFunc_SelectInt_ReturnValue;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x54 (0x54 - 0x0)
// Function WBP_ClassLoadoutGrid.WBP_ClassLoadoutGrid_C.GetSelectedClass
struct UWBP_ClassLoadoutGrid_C_GetSelectedClass_Params
{
public:
	struct GameplayTags_GameplayTag              ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)
	bool                                         Found;                                             // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2306[0x6];                                     // Fixing Size After Last Property  
	class AValPlayerController*                  CallFunc_GetPlayer_ReturnValue;                    // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2307[0x7];                                     // Fixing Size After Last Property  
	class AValPlayerState_Frontier*              K2Node_DynamicCast_AsVal_Player_State_Frontier;    // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_230C[0x2];                                     // Fixing Size After Last Property  
	struct GameplayTags_GameplayTag              CallFunc_GetQueuedLoadoutTag_ReturnValue;          // 0x2C(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsGameplayTagValid_ReturnValue;           // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2312[0x3];                                     // Fixing Size After Last Property  
	class AValInventoryManager*                  CallFunc_GetInventoryManager_ReturnValue;          // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2317[0x3];                                     // Fixing Size After Last Property  
	struct GameplayTags_GameplayTag              CallFunc_GetCharacterClass_ReturnValue;            // 0x44(0x8)(NoDestructor, HasGetValueTypeHash)
	struct GameplayTags_GameplayTag              K2Node_Select_Default;                             // 0x4C(0x8)(NoDestructor, HasGetValueTypeHash)
};

// 0x27 (0x27 - 0x0)
// Function WBP_ClassLoadoutGrid.WBP_ClassLoadoutGrid_C.UpdateAvailabilityForSelectedClass
struct UWBP_ClassLoadoutGrid_C_UpdateAvailabilityForSelectedClass_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2352[0x3];                                     // Fixing Size After Last Property  
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct Valhalla_ClassCountData               CallFunc_Array_Get_Item;                           // 0x14(0x10)(NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_MatchesTag_ReturnValue;                   // 0x25(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x26(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WBP_ClassLoadoutGrid.WBP_ClassLoadoutGrid_C.UpdateClassCount
struct UWBP_ClassLoadoutGrid_C_UpdateClassCount_Params
{
public:
	TArray<struct Valhalla_ClassCountData>       ClassCount;                                        // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x29 (0x29 - 0x0)
// Function WBP_ClassLoadoutGrid.WBP_ClassLoadoutGrid_C.GetInventoryManager
struct UWBP_ClassLoadoutGrid_C_GetInventoryManager_Params
{
public:
	class AValInventoryManager*                  InventoryManager;                                  // 0x0(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Valid;                                             // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_238A[0x7];                                     // Fixing Size After Last Property  
	class AValPlayerController*                  CallFunc_GetPlayer_ReturnValue;                    // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_238F[0x7];                                     // Fixing Size After Last Property  
	class AValInventoryManager*                  CallFunc_GetInventoryManager_ReturnValue;          // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x25 (0x25 - 0x0)
// Function WBP_ClassLoadoutGrid.WBP_ClassLoadoutGrid_C.UpdateButtonState
struct UWBP_ClassLoadoutGrid_C_UpdateButtonState_Params
{
public:
	bool                                         LocalSelectedClass;                                // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_23C4[0x3];                                     // Fixing Size After Last Property  
	int32                                        CallFunc_SelectInt_ReturnValue;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_SelectInt_ReturnValue_1;                  // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_23C8[0x3];                                     // Fixing Size After Last Property  
	int32                                        CallFunc_SelectInt_ReturnValue_2;                  // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct GameplayTags_GameplayTag              CallFunc_GetSelectedClass_ReturnValue;             // 0x14(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetSelectedClass_Found;                   // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_UpdateAvailabilityForSelectedClass_ReturnValue; // 0x1D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_23C9[0x2];                                     // Fixing Size After Last Property  
	int32                                        CallFunc_SelectInt_ReturnValue_3;                  // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_GameplayTag_ReturnValue;       // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function WBP_ClassLoadoutGrid.WBP_ClassLoadoutGrid_C.HandleOnOptionHovered
struct UWBP_ClassLoadoutGrid_C_HandleOnOptionHovered_Params
{
public:
	class UWBP_LoadoutEntry_C*                   Widget;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function WBP_ClassLoadoutGrid.WBP_ClassLoadoutGrid_C.BindSections
struct UWBP_ClassLoadoutGrid_C_BindSections_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0xC(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2409[0x4];                                     // Fixing Size After Last Property  
	class UWBP_ClassLoadoutOptionSection_C*      CallFunc_Array_Get_Item;                           // 0x20(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_240D[0x3];                                     // Fixing Size After Last Property  
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x30(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x25 (0x25 - 0x0)
// Function WBP_ClassLoadoutGrid.WBP_ClassLoadoutGrid_C.UpdateClass
struct UWBP_ClassLoadoutGrid_C_UpdateClass_Params
{
public:
	struct GameplayTags_GameplayTag              Class;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_243D[0x4];                                     // Fixing Size After Last Property  
	class UWBP_ClassLoadoutOptionSection_C*      CallFunc_Array_Get_Item;                           // 0x18(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WBP_ClassLoadoutGrid.WBP_ClassLoadoutGrid_C.ExecuteUbergraph_WBP_ClassLoadoutGrid
struct UWBP_ClassLoadoutGrid_C_ExecuteUbergraph_WBP_ClassLoadoutGrid_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_ClassLoadoutGrid.WBP_ClassLoadoutGrid_C.OnClassSelectionConfirmed__DelegateSignature
struct UWBP_ClassLoadoutGrid_C_OnClassSelectionConfirmed__DelegateSignature_Params
{
public:
	struct GameplayTags_GameplayTag              Class;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

}
}


