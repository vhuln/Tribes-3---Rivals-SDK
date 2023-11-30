#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB (0x558 - 0x54D)
// BlueprintGeneratedClass BP_DestructibleDoor_BuildingA1.BP_DestructibleDoor_BuildingA1_C
class ABP_DestructibleDoor_BuildingA1_C : public ABP_DestructibleDoor_C
{
public:
	uint8                                        Pad_37E[0x3];                                      // Fixing Size After Last Property  
	class UPointLightComponent*                  PointLight;                                        // 0x550(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_DestructibleDoor_BuildingA1_C* GetDefaultObj();

};

}


