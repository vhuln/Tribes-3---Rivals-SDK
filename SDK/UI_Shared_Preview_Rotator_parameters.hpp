#pragma once




#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0xC - 0x0)
// Function UI_Shared_Preview_Rotator.UI_Shared_Preview_Rotator_C.UpdateDefaultRotation
struct UUI_Shared_Preview_Rotator_C_UpdateDefaultRotation_Params
{
public:
	double                                       Rotation;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetScrollOffset_ReturnValue;              // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x35 (0x35 - 0x0)
// Function UI_Shared_Preview_Rotator.UI_Shared_Preview_Rotator_C.GetItemDetailPreview
struct UUI_Shared_Preview_Rotator_C_GetItemDetailPreview_Params
{
public:
	class ABP_ItemPreviewActor_C*                Preview;                                           // 0x0(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_ItemPreviewActor_C*>        CallFunc_GetAllActorsOfClassWithTag_OutActors;     // 0x10(0x10)(ReferenceParm)
	class ABP_ItemPreviewActor_C*                CallFunc_Array_Get_Item;                           // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3404[0x3];                                     // Fixing Size After Last Property  
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x54 (0x54 - 0x0)
// Function UI_Shared_Preview_Rotator.UI_Shared_Preview_Rotator_C.GetItemRotation
struct UUI_Shared_Preview_Rotator_C_GetItemRotation_Params
{
public:
	double                                       Offset;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct CoreUObject_Rotator                   Rotation;                                          // 0x8(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue;             // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct CoreUObject_Rotator                   CallFunc_MakeRotator_ReturnValue;                  // 0x38(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                        CallFunc_MakeRotator_Yaw_ImplicitCast;             // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x54 (0x54 - 0x0)
// Function UI_Shared_Preview_Rotator.UI_Shared_Preview_Rotator_C.GetCharRotation
struct UUI_Shared_Preview_Rotator_C_GetCharRotation_Params
{
public:
	double                                       Offset;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct CoreUObject_Rotator                   Rotation;                                          // 0x8(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue;             // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct CoreUObject_Rotator                   CallFunc_MakeRotator_ReturnValue;                  // 0x38(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                        CallFunc_MakeRotator_Yaw_ImplicitCast;             // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x21 (0x21 - 0x0)
// Function UI_Shared_Preview_Rotator.UI_Shared_Preview_Rotator_C.GetCharPreviews
struct UUI_Shared_Preview_Rotator_C_GetCharPreviews_Params
{
public:
	TArray<class ABP_MergedPreviewActor_Loadout_C*> Previews;                                          // 0x0(0x10)(Parm, OutParm)
	TArray<class ABP_MergedPreviewActor_Loadout_C*> CallFunc_GetAllActorsOfClassWithTag_OutActors;     // 0x10(0x10)(ReferenceParm)
	bool                                         CallFunc_Array_IsEmpty_ReturnValue;                // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x35 (0x35 - 0x0)
// Function UI_Shared_Preview_Rotator.UI_Shared_Preview_Rotator_C.GetItemPreview
struct UUI_Shared_Preview_Rotator_C_GetItemPreview_Params
{
public:
	class ABP_ItemPreviewActor_C*                Preview;                                           // 0x0(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_ItemPreviewActor_C*>        CallFunc_GetAllActorsOfClassWithTag_OutActors;     // 0x10(0x10)(ReferenceParm)
	class ABP_ItemPreviewActor_C*                CallFunc_Array_Get_Item;                           // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34A0[0x3];                                     // Fixing Size After Last Property  
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function UI_Shared_Preview_Rotator.UI_Shared_Preview_Rotator_C.Reset
struct UUI_Shared_Preview_Rotator_C_Reset_Params
{
public:
	struct Engine_TimerHandle                    CallFunc_K2_SetTimer_ReturnValue;                  // 0x0(0x8)(NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetScrollOffset_NewScrollOffset_ImplicitCast; // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function UI_Shared_Preview_Rotator.UI_Shared_Preview_Rotator_C.OnInitialized
struct UUI_Shared_Preview_Rotator_C_OnInitialized_Params
{
public:
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x1A0 (0x1A0 - 0x0)
// Function UI_Shared_Preview_Rotator.UI_Shared_Preview_Rotator_C.OnRotation
struct UUI_Shared_Preview_Rotator_C_OnRotation_Params
{
public:
	float                                        Offset;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_ItemPreviewActor_C*                CallFunc_GetItemDetailPreview_Preview;             // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3516[0x3];                                     // Fixing Size After Last Property  
	int32                                        Temp_int_Array_Index_Variable;                     // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3517[0x4];                                     // Fixing Size After Last Property  
	struct CoreUObject_Rotator                   CallFunc_GetItemRotation_Rotation;                 // 0x20(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct CoreUObject_Rotator                   CallFunc_GetCharRotation_Rotation;                 // 0x38(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct CoreUObject_Rotator                   CallFunc_GetItemRotation_Rotation_1;               // 0x50(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class ABP_ItemPreviewActor_C*                CallFunc_GetItemPreview_Preview;                   // 0x68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_351C[0x7];                                     // Fixing Size After Last Property  
	TArray<class ABP_MergedPreviewActor_Loadout_C*> CallFunc_GetCharPreviews_Previews;                 // 0x78(0x10)(ReferenceParm)
	class ABP_MergedPreviewActor_Loadout_C*      CallFunc_Array_Get_Item;                           // 0x88(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3525[0x4];                                     // Fixing Size After Last Property  
	struct Engine_HitResult                      CallFunc_K2_SetActorRelativeRotation_SweepHitResult; // 0x98(0xE8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x180(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_352B[0x7];                                     // Fixing Size After Last Property  
	double                                       CallFunc_GetItemRotation_Offset_ImplicitCast;      // 0x188(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_GetCharRotation_Offset_ImplicitCast;      // 0x190(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_GetItemRotation_Offset_ImplicitCast_1;    // 0x198(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


