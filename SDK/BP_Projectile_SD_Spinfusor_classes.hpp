#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF (0x7F8 - 0x7E9)
// BlueprintGeneratedClass BP_Projectile_SD_Spinfusor.BP_Projectile_SD_Spinfusor_C
class ABP_Projectile_SD_Spinfusor_C : public ABP_Projectile_Master_C
{
public:
	uint8                                        Pad_9FA[0x7];                                      // Fixing Size After Last Property  
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x7F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_Projectile_SD_Spinfusor_C* GetDefaultObj();

	void OnStoppingHit();
	void ExecuteUbergraph_BP_Projectile_SD_Spinfusor(int32 EntryPoint);
};

}


