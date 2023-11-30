#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x13 (0x560 - 0x54D)
// BlueprintGeneratedClass BP_DestructibleDoor_BuildingA.BP_DestructibleDoor_BuildingA_C
class ABP_DestructibleDoor_BuildingA_C : public ABP_DestructibleDoor_C
{
public:
	uint8                                        Pad_2CB6[0x3];                                     // Fixing Size After Last Property  
	class USpotLightComponent*                   SpotLight1;                                        // 0x550(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                   SpotLight;                                         // 0x558(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_DestructibleDoor_BuildingA_C* GetDefaultObj();

};

}


