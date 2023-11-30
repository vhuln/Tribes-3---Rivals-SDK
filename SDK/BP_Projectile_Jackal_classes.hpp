#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x900 - 0x8E8)
// BlueprintGeneratedClass BP_Projectile_Jackal.BP_Projectile_Jackal_C
class ABP_Projectile_Jackal_C : public ABP_Projectile_StickyGrenade_C
{
public:
	bool                                         bImplanted;                                        // 0x8E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_30D3[0x7];                                     // Fixing Size After Last Property  
	double                                       ImplantedTime;                                     // 0x8F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UValGrenadeAudioVisual*                FizzleAV;                                          // 0x8F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Projectile_Jackal_C* GetDefaultObj();

	void OnTravelStopped();
	void Attach_to_Object(class AValCharacter* ActorAttachTo, const struct CoreUObject_Vector& ImpactLocation, const struct CoreUObject_Vector& ImpactNormal);
	void Fizzle();
	void Detonate(bool Fizzle, bool CallFunc_Not_PreBool_ReturnValue);
};

}


