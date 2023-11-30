#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x18 - 0x0)
// UserDefinedStruct MaterialSlot.MaterialSlot
struct MaterialSlot_MaterialSlot
{
public:
	int32                                        SlotIndex_2_A7ADBB364768E178074DF38510FB26C3;      // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_23D9[0x4];                                     // Fixing Size After Last Property  
	class UMaterialInterface*                    Material_5_B962A95D4D13661D7E9C188F7A6B20C0;       // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                  SlotName_8_8F82F63C498CF598815037AED133E927;       // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


