#pragma once




#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x3 (0x3 - 0x0)
// Function WBP_ShopPanel_Base.WBP_ShopPanel_Base_C.OnCanOwnMoreUpdated
struct UWBP_ShopPanel_Base_C_OnCanOwnMoreUpdated_Params
{
public:
	bool                                         IsValid;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function WBP_ShopPanel_Base.WBP_ShopPanel_Base_C.UpdateIconDisplay
struct UWBP_ShopPanel_Base_C_UpdateIconDisplay_Params
{
public:
	struct UMG_WidgetTransform                   K2Node_MakeStruct_WidgetTransform;                 // 0x0(0x38)(NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function WBP_ShopPanel_Base.WBP_ShopPanel_Base_C.UpdateIsSelected
struct UWBP_ShopPanel_Base_C_UpdateIsSelected_Params
{
public:
	bool                                         Selected;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function WBP_ShopPanel_Base.WBP_ShopPanel_Base_C.NavigateConfirm
struct UWBP_ShopPanel_Base_C_NavigateConfirm_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NavigateConfirm_ReturnValue;              // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function WBP_ShopPanel_Base.WBP_ShopPanel_Base_C.CheckItemOwned
struct UWBP_ShopPanel_Base_C_CheckItemOwned_Params
{
public:
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class URH_PlayerInfo*                        CallFunc_GetLocalPlayerInfo_ReturnValue;           // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x21 (0x21 - 0x0)
// Function WBP_ShopPanel_Base.WBP_ShopPanel_Base_C.UpdatePendingPortalPurchaseState
struct UWBP_ShopPanel_Base_C_UpdatePendingPortalPurchaseState_Params
{
public:
	bool                                         Value;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3828[0x7];                                     // Fixing Size After Last Property  
	class URH_PlayerInfo*                        CallFunc_GetLocalPlayerInfo_ReturnValue;           // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x10(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x44 (0x44 - 0x0)
// Function WBP_ShopPanel_Base.WBP_ShopPanel_Base_C.UpdateIsOwned
struct UWBP_ShopPanel_Base_C_UpdateIsOwned_Params
{
public:
	bool                                         IsOwned;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3978[0x2];                                     // Fixing Size After Last Property  
	struct SlateCore_SlateColor                  K2Node_MakeStruct_SlateColor;                      // 0x4(0x14)(None)
	struct SlateCore_SlateColor                  K2Node_MakeStruct_SlateColor_1;                    // 0x18(0x14)(None)
	int32                                        CallFunc_SelectInt_ReturnValue;                    // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct SlateCore_SlateColor                  K2Node_Select_Default;                             // 0x30(0x14)(None)
};

// 0x91 (0x91 - 0x0)
// Function WBP_ShopPanel_Base.WBP_ShopPanel_Base_C.UpdateStoreItem
struct UWBP_ShopPanel_Base_C_UpdateStoreItem_Params
{
public:
	class URHStoreItem*                          StoreItem;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         LocalIsOwned;                                      // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B1E[0x7];                                     // Fixing Size After Last Property  
	TSoftObjectPtr<class UPlatformInventoryItem> CallFunc_GetInventoryItem_ReturnValue;             // 0x10(0x28)(UObjectWrapper, HasGetValueTypeHash)
	class UObject*                               CallFunc_LoadAsset_Blocking_ReturnValue;           // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlatformInventoryItem*                K2Node_DynamicCast_AsPlatform_Inventory_Item;      // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B55[0x6];                                     // Fixing Size After Last Property  
	class FText                                  CallFunc_GetItemName_ReturnValue;                  // 0x50(0x18)(None)
	class URHPortalOffer*                        CallFunc_GetPortalOffer_ReturnValue;               // 0x68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B6D[0x7];                                     // Fixing Size After Last Property  
	class UIconInfo*                             CallFunc_GetIconInfoByName_Icon;                   // 0x78(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetIconInfoByName_ReturnValue;            // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B80[0x7];                                     // Fixing Size After Last Property  
	class UImageIconInfo*                        K2Node_DynamicCast_AsImage_Icon_Info;              // 0x88(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_ShopPanel_Base.WBP_ShopPanel_Base_C.UpdateSize
struct UWBP_ShopPanel_Base_C_UpdateSize_Params
{
public:
	float                                        CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast; // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast; // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function WBP_ShopPanel_Base.WBP_ShopPanel_Base_C.Set Icon Texture From Soft Object Path
struct UWBP_ShopPanel_Base_C_Set_Icon_Texture_From_Soft_Object_Path_Params
{
public:
	struct CoreUObject_SoftObjectPath            ImagePath;                                         // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function WBP_ShopPanel_Base.WBP_ShopPanel_Base_C.PreConstruct
struct UWBP_ShopPanel_Base_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA (0xA - 0x0)
// Function WBP_ShopPanel_Base.WBP_ShopPanel_Base_C.UpdatePrice
struct UWBP_ShopPanel_Base_C_UpdatePrice_Params
{
public:
	struct Valhalla_ShopPrice                    ShopPrice;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	bool                                         LocalIsOwned;                                      // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function WBP_ShopPanel_Base.WBP_ShopPanel_Base_C.UpdateName
struct UWBP_ShopPanel_Base_C_UpdateName_Params
{
public:
	class FText                                  ItemName;                                          // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x1 (0x1 - 0x0)
// Function WBP_ShopPanel_Base.WBP_ShopPanel_Base_C.UpdateRarity
struct UWBP_ShopPanel_Base_C_UpdateRarity_Params
{
public:
	enum class ERarity                           Rarity;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x120 (0x120 - 0x0)
// Function WBP_ShopPanel_Base.WBP_ShopPanel_Base_C.UpdateData
struct UWBP_ShopPanel_Base_C_UpdateData_Params
{
public:
	struct Valhalla_InventoryItem                Item;                                              // 0x0(0xC8)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  Temp_text_Variable;                                // 0xC8(0x18)(None)
	bool                                         Temp_bool_Variable;                                // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3EA7[0x7];                                     // Fixing Size After Last Property  
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0xE8(0x18)(None)
	bool                                         CallFunc_IsEmpty_ReturnValue;                      // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3EB1[0x7];                                     // Fixing Size After Last Property  
	class FText                                  K2Node_Select_Default;                             // 0x108(0x18)(None)
};

// 0x8 (0x8 - 0x0)
// Function WBP_ShopPanel_Base.WBP_ShopPanel_Base_C.Set Icon Texture From Material
struct UWBP_ShopPanel_Base_C_Set_Icon_Texture_From_Material_Params
{
public:
	class UMaterialInterface*                    Material;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x22 (0x22 - 0x0)
// Function WBP_ShopPanel_Base.WBP_ShopPanel_Base_C.ExecuteUbergraph_WBP_ShopPanel_Base
struct UWBP_ShopPanel_Base_C_ExecuteUbergraph_WBP_ShopPanel_Base_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetAnimationCurrentTime_ReturnValue;      // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetAnimationCurrentTime_ReturnValue_1;    // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3F5C[0x4];                                     // Fixing Size After Last Property  
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_1;              // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_ShopPanel_Base.WBP_ShopPanel_Base_C.OnPortalOfferSelected__DelegateSignature
struct UWBP_ShopPanel_Base_C_OnPortalOfferSelected__DelegateSignature_Params
{
public:
	class URHStoreItem*                          PortalOffer;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_ShopPanel_Base.WBP_ShopPanel_Base_C.OnStoreItemSelected__DelegateSignature
struct UWBP_ShopPanel_Base_C_OnStoreItemSelected__DelegateSignature_Params
{
public:
	class URHStoreItem*                          StoreItem;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0xD0 (0xD0 - 0x0)
// Function WBP_ShopPanel_Base.WBP_ShopPanel_Base_C.OnItemSelected__DelegateSignature
struct UWBP_ShopPanel_Base_C_OnItemSelected__DelegateSignature_Params
{
public:
	struct Valhalla_InventoryItem                InventoryItem;                                     // 0x0(0xC8)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UWBP_ShopPanel_Base_C*                 Widget;                                            // 0xC8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

}
}


