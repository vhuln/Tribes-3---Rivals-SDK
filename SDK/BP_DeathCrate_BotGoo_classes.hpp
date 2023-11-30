#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x618 - 0x610)
// BlueprintGeneratedClass BP_DeathCrate_BotGoo.BP_DeathCrate_BotGoo_C
class ABP_DeathCrate_BotGoo_C : public ABP_DeathCrate_Cybrid_C
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x610(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_DeathCrate_BotGoo_C* GetDefaultObj();

	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ExecuteUbergraph_BP_DeathCrate_BotGoo(int32 EntryPoint, class AActor* K2Node_Event_OtherActor);
};

}


