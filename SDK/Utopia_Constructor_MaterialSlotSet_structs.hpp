#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x28 - 0x0)
// UserDefinedStruct Utopia_Constructor_MaterialSlotSet.Utopia_Constructor_MaterialSlotSet
struct Utopia_Constructor_MaterialSlotSet_Utopia_Constructor_MaterialSlotSet
{
public:
	bool                                         UseLightColorOverride_104_ED80CF6946CA59F35BCF59821E84B194; // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_28B7[0x3];                                     // Fixing Size After Last Property  
	struct CoreUObject_LinearColor               LightColorOverride_107_900275734CC92EA5CD26A38A89C5736F; // 0x4(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_28B9[0x4];                                     // Fixing Size After Last Property  
	TArray<struct MaterialSlot_MaterialSlot>     MaterialSlotSet_102_3F7BE37B40C1A5EE55764A89B1B4B1B2; // 0x18(0x10)(Edit, BlueprintVisible)
};

}


