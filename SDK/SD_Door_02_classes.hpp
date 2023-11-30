#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x370 - 0x338)
// BlueprintGeneratedClass SD_Door_02.SD_Door_02_C
class ASD_Door_02_C : public ACellFeatures_Parent_C
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x338(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UValAkPortalComponent*                 ValAkPortal;                                       // 0x340(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         Box;                                               // 0x348(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  DoorFrame2;                                        // 0x350(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  DoorFrame1;                                        // 0x358(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SM_TechWall_Fan_Blades;                            // 0x360(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  DoorFrame;                                         // 0x368(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ASD_Door_02_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_SD_Door_02(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue);
};

}


