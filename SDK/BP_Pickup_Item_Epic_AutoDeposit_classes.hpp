#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x510 - 0x510)
// BlueprintGeneratedClass BP_Pickup_Item_Epic_AutoDeposit.BP_Pickup_Item_Epic_AutoDeposit_C
class ABP_Pickup_Item_Epic_AutoDeposit_C : public ABP_Pickup_Item_C
{
public:

	static class UClass* StaticClass();
	static class ABP_Pickup_Item_Epic_AutoDeposit_C* GetDefaultObj();

	bool CustomPickupFunc(class AValCharacter* ValCharacter);
};

}


