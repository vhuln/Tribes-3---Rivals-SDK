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
// Function BP_ItemPreviewActor.BP_ItemPreviewActor_C.CacheAppearanceAudioVisual
struct ABP_ItemPreviewActor_C_CacheAppearanceAudioVisual_Params
{
public:
	class UValDeviceAudioVisual*                 CallFunc_GetAppearanceAudioVisual_AudioVisual;     // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_ItemPreviewActor.BP_ItemPreviewActor_C.CacheAppearanceAsset
struct ABP_ItemPreviewActor_C_CacheAppearanceAsset_Params
{
public:
	class UValEquipmentAsset*                    CallFunc_GetAppearanceAsset_Asset;                 // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_ItemPreviewActor.BP_ItemPreviewActor_C.CacheAppearanceTag
struct ABP_ItemPreviewActor_C_CacheAppearanceTag_Params
{
public:
	struct GameplayTags_GameplayTag              CallFunc_GetAppearanceTag_Tag;                     // 0x0(0x8)(NoDestructor, HasGetValueTypeHash)
};

// 0xCD (0xCD - 0x0)
// Function BP_ItemPreviewActor.BP_ItemPreviewActor_C.CacheInventoryItem
struct ABP_ItemPreviewActor_C_CacheInventoryItem_Params
{
public:
	struct Valhalla_InventoryItem                InventoryItem;                                     // 0x0(0xC8)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         Changed;                                           // 0xC8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAllTags_ReturnValue;                   // 0xC9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_GuidGuid_ReturnValue;            // 0xCA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0xCB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0xCC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function BP_ItemPreviewActor.BP_ItemPreviewActor_C.CacheAssetScale
struct ABP_ItemPreviewActor_C_CacheAssetScale_Params
{
public:
	bool                                         Changed;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_11F4[0x7];                                     // Fixing Size After Last Property  
	double                                       CallFunc_GetAssetScale_Value;                      // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_DoubleDouble_ReturnValue;        // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function BP_ItemPreviewActor.BP_ItemPreviewActor_C.CacheAssetAnim
struct ABP_ItemPreviewActor_C_CacheAssetAnim_Params
{
public:
	bool                                         Changed;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_126F[0x7];                                     // Fixing Size After Last Property  
	class UAnimSequence*                         CallFunc_GetAssetAnim_Value;                       // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function BP_ItemPreviewActor.BP_ItemPreviewActor_C.CacheMaterial
struct ABP_ItemPreviewActor_C_CacheMaterial_Params
{
public:
	bool                                         Changed;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_12C6[0x7];                                     // Fixing Size After Last Property  
	class UMaterialInterface*                    CallFunc_GetMaterial_Material;                     // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function BP_ItemPreviewActor.BP_ItemPreviewActor_C.CacheData
struct ABP_ItemPreviewActor_C_CacheData_Params
{
public:
	class UMaterialInterface*                    CallFunc_GetMaterial_Material;                     // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UValDeviceAudioVisual*                 CallFunc_GetAppearanceAudioVisual_AudioVisual;     // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UValEquipmentAsset*                    CallFunc_GetAppearanceAsset_Asset;                 // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct GameplayTags_GameplayTag              CallFunc_GetAppearanceTag_Tag;                     // 0x18(0x8)(NoDestructor, HasGetValueTypeHash)
};

// 0xD0 (0xD0 - 0x0)
// Function BP_ItemPreviewActor.BP_ItemPreviewActor_C.UpdateDetailData
struct ABP_ItemPreviewActor_C_UpdateDetailData_Params
{
public:
	struct GameplayTags_GameplayTag              EquipSlot;                                         // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	struct Valhalla_InventoryItem                Item;                                              // 0x8(0xC8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x19 (0x19 - 0x0)
// Function BP_ItemPreviewActor.BP_ItemPreviewActor_C.GetAppearanceAudioVisual
struct ABP_ItemPreviewActor_C_GetAppearanceAudioVisual_Params
{
public:
	class UValDeviceAudioVisual*                 AudioVisual;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_13AE[0x7];                                     // Fixing Size After Last Property  
	class UClass*                                K2Node_ClassDynamicCast_AsVal_Device;              // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ClassDynamicCast_bSuccess;                  // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x91 (0x91 - 0x0)
// Function BP_ItemPreviewActor.BP_ItemPreviewActor_C.GetAppearanceAsset
struct ABP_ItemPreviewActor_C_GetAppearanceAsset_Params
{
public:
	class UValEquipmentAsset*                    Asset;                                             // 0x0(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1489[0x4];                                     // Fixing Size After Last Property  
	class AValGameState*                         CallFunc_GetGameState_ReturnValue;                 // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AValGameState_Lobby*                   K2Node_DynamicCast_AsVal_Game_State_Lobby;         // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_149B[0x7];                                     // Fixing Size After Last Property  
	TArray<struct Valhalla_WeaponCosmeticConfig> CallFunc_GetWeaponCosmeticConfigs_WeaponCosmeticConfigs; // 0x30(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_14A7[0x4];                                     // Fixing Size After Last Property  
	struct Valhalla_WeaponCosmeticConfig         CallFunc_Array_Get_Item;                           // 0x48(0x30)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_GameplayTag_ReturnValue;       // 0x79(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_14B7[0x6];                                     // Fixing Size After Last Property  
	class UObject*                               CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue; // 0x80(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UValItemAsset*                         K2Node_DynamicCast_AsVal_Item_Asset;               // 0x88(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x41 (0x41 - 0x0)
// Function BP_ItemPreviewActor.BP_ItemPreviewActor_C.GetAppearanceTag
struct ABP_ItemPreviewActor_C_GetAppearanceTag_Params
{
public:
	struct GameplayTags_GameplayTag              Tag;                                               // 0x0(0x8)(Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsGameplayTagValid_ReturnValue;           // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1550[0x7];                                     // Fixing Size After Last Property  
	class AValInventoryManager*                  CallFunc_GetInventoryManager_ReturnValue;          // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<struct GameplayTags_GameplayTag>      CallFunc_BreakGameplayTagContainer_GameplayTags;   // 0x18(0x10)(ReferenceParm)
	class UValItemAsset*                         CallFunc_GetItemAssetById_ItemAsset;               // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetItemAssetById_ReturnValue;             // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1559[0x6];                                     // Fixing Size After Last Property  
	class AValInventoryManager*                  CallFunc_GetInventoryManager_ReturnValue_1;        // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x31 (0x31 - 0x0)
// Function BP_ItemPreviewActor.BP_ItemPreviewActor_C.GetAssetAnim
struct ABP_ItemPreviewActor_C_GetAssetAnim_Params
{
public:
	class UValEquipmentAsset*                    Asset;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                         Value;                                             // 0x8(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_15E9[0x7];                                     // Fixing Size After Last Property  
	class UObject*                               CallFunc_LoadAsset_Blocking_ReturnValue;           // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_15F5[0x7];                                     // Fixing Size After Last Property  
	class UAnimSequence*                         K2Node_DynamicCast_AsAnim_Sequence;                // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function BP_ItemPreviewActor.BP_ItemPreviewActor_C.GetAssetScale
struct ABP_ItemPreviewActor_C_GetAssetScale_Params
{
public:
	class UValEquipmentAsset*                    Asset;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       Value;                                             // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_164D[0x7];                                     // Fixing Size After Last Property  
	double                                       K2Node_FunctionResult_Value_ImplicitCast;          // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x49 (0x49 - 0x0)
// Function BP_ItemPreviewActor.BP_ItemPreviewActor_C.GetMaterial
struct ABP_ItemPreviewActor_C_GetMaterial_Params
{
public:
	class UMaterialInterface*                    Material;                                          // 0x0(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_16E7[0x7];                                     // Fixing Size After Last Property  
	class AValInventoryManager*                  CallFunc_GetInventoryManager_ReturnValue;          // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UValItemAsset*                         CallFunc_GetItemAssetById_ItemAsset;               // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetItemAssetById_ReturnValue;             // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_16F4[0x7];                                     // Fixing Size After Last Property  
	class AValInventoryManager*                  CallFunc_GetInventoryManager_ReturnValue_1;        // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UValItemAsset*                         CallFunc_GetItemAssetById_ItemAsset_1;             // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetItemAssetById_ReturnValue_1;           // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_170D[0x6];                                     // Fixing Size After Last Property  
	class AValInventoryManager*                  CallFunc_GetInventoryManager_ReturnValue_2;        // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xE1 (0xE1 - 0x0)
// Function BP_ItemPreviewActor.BP_ItemPreviewActor_C.UpdateData
struct ABP_ItemPreviewActor_C_UpdateData_Params
{
public:
	struct Valhalla_InventoryItem                Item;                                              // 0x0(0xC8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class AValVendorManager*                     LocalVendorManager;                                // 0xC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class UValDeviceAudioVisual*                 LocalAudioVisual;                                  // 0xD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    LocalMaterial;                                     // 0xD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CacheInventoryItem_Changed;               // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function BP_ItemPreviewActor.BP_ItemPreviewActor_C.UpdateAssetAnim
struct ABP_ItemPreviewActor_C_UpdateAssetAnim_Params
{
public:
	class UAnimSequence*                         CallFunc_GetAssetAnim_Value;                       // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xD0 (0xD0 - 0x0)
// Function BP_ItemPreviewActor.BP_ItemPreviewActor_C.UpdateMaterial
struct ABP_ItemPreviewActor_C_UpdateMaterial_Params
{
public:
	class FName                                  LocalParameter;                                    // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UMaterialInstanceDynamic*>      LocalOverrides;                                    // 0x8(0x10)(Edit, BlueprintVisible)
	class UMaterialInstanceDynamic*              LocalMID;                                          // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        LocalIndex;                                        // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_19CA[0x7];                                     // Fixing Size After Last Property  
	class UTexture2D*                            CallFunc_GetMaterialOverrideParams1P_ReturnValue;  // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_19DD[0x7];                                     // Fixing Size After Last Property  
	TArray<class FName>                          CallFunc_Map_Keys_Keys;                            // 0x58(0x10)(ReferenceParm)
	class FName                                  CallFunc_Array_Get_Item;                           // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x74(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A12[0x3];                                     // Fixing Size After Last Property  
	class UMaterialInstanceDynamic*              CallFunc_Array_Get_Item_1;                         // 0x78(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x81(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x82(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A41[0x1];                                     // Fixing Size After Last Property  
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x84(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A5D[0x7];                                     // Fixing Size After Last Property  
	class UMaterialInterface*                    CallFunc_GetMaterialOverride1P_ReturnValue;        // 0x90(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetNumMaterials_ReturnValue;              // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A70[0x4];                                     // Fixing Size After Last Property  
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0xA0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0xAC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A8E[0x3];                                     // Fixing Size After Last Property  
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0xB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A96[0x4];                                     // Fixing Size After Last Property  
	class UMaterialInstanceDynamic*              CallFunc_Array_Get_Item_2;                         // 0xB8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue_1; // 0xC0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1AAC[0x3];                                     // Fixing Size After Last Property  
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0xCC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x100 (0x100 - 0x0)
// Function BP_ItemPreviewActor.BP_ItemPreviewActor_C.UpdateRotation
struct ABP_ItemPreviewActor_C_UpdateRotation_Params
{
public:
	struct CoreUObject_Rotator                   Rotation;                                          // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct Engine_HitResult                      CallFunc_K2_SetRelativeRotation_SweepHitResult;    // 0x18(0xE8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// 0x49 (0x49 - 0x0)
// Function BP_ItemPreviewActor.BP_ItemPreviewActor_C.UpdateMesh
struct ABP_ItemPreviewActor_C_UpdateMesh_Params
{
public:
	class UAnimSequence*                         CallFunc_GetAssetAnim_Value;                       // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_GetAssetScale_Value;                      // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1BE5[0x7];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector                    CallFunc_MakeVector_ReturnValue;                   // 0x18(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1BF4[0x7];                                     // Fixing Size After Last Property  
	class UClass*                                CallFunc_GetABP3P_ReturnValue;                     // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                         CallFunc_GetMesh3P_ReturnValue;                    // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x44 (0x44 - 0x0)
// Function BP_ItemPreviewActor.BP_ItemPreviewActor_C.UpdateItem
struct ABP_ItemPreviewActor_C_UpdateItem_Params
{
public:
	class USkeletalMesh*                         Mesh;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                         Anim;                                              // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       Scale;                                             // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UValAbilityAudioVisual*                AudioVisual;                                       // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                  LocalParameter;                                    // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UMaterialInstanceDynamic*>      LocalOverrides;                                    // 0x28(0x10)(Edit, BlueprintVisible)
	class UMaterialInstanceDynamic*              LocalMID;                                          // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        LocalIndex;                                        // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5 (0x5 - 0x0)
// Function BP_ItemPreviewActor.BP_ItemPreviewActor_C.ExecuteUbergraph_BP_ItemPreviewActor
struct ABP_ItemPreviewActor_C_ExecuteUbergraph_BP_ItemPreviewActor_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


