#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xC8 - 0xC8)
// BlueprintGeneratedClass GC_BulletImpact.GC_BulletImpact_C
class UGC_BulletImpact_C : public UValGC_BulletImpact
{
public:

	static class UClass* StaticClass();
	static class UGC_BulletImpact_C* GetDefaultObj();

	class FString PhysicalSurfaceToString(enum class EPhysicalSurface Surface, const class FString& CallFunc_GetSurfaceTypeAsString_SurfaceTypeAsString);
};

}


