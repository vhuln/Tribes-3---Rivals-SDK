#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB (0x558 - 0x54D)
// BlueprintGeneratedClass BP_DestructibleDoor_BuildingA2_Lrg2_Hard.BP_DestructibleDoor_BuildingA2_Lrg2_Hard_C
class ABP_DestructibleDoor_BuildingA2_Lrg2_Hard_C : public ABP_DestructibleDoor_C
{
public:
	uint8                                        Pad_2D01[0x3];                                     // Fixing Size After Last Property  
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x550(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_DestructibleDoor_BuildingA2_Lrg2_Hard_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_DestructibleDoor_BuildingA2_Lrg2_Hard(int32 EntryPoint);
};

}


