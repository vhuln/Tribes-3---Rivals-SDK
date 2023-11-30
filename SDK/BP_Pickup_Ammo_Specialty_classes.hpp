#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x440 - 0x440)
// BlueprintGeneratedClass BP_Pickup_Ammo_Specialty.BP_Pickup_Ammo_Specialty_C
class ABP_Pickup_Ammo_Specialty_C : public ABP_Pickup_Ammo_C
{
public:

	static class UClass* StaticClass();
	static class ABP_Pickup_Ammo_Specialty_C* GetDefaultObj();

	enum class EValPingType GetContextPingType();
};

}


