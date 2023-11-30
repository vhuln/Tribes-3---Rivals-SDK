#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1C (0x8D4 - 0x8B8)
// BlueprintGeneratedClass GA_Gun_Bow_Exotic_Detonate_Instant.GA_Gun_Bow_Exotic_Detonate_Instant_C
class UGA_Gun_Bow_Exotic_Detonate_Instant_C : public UGA_Gun_Master_Instant_C
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x8B8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<class ABP_DetonateCrossbow_Mine_C*>   Mines;                                             // 0x8C0(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	int32                                        DefaultAmountToHold;                               // 0x8D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_Gun_Bow_Exotic_Detonate_Instant_C* GetDefaultObj();

	void CacheRemoveMine(class ABP_DetonateCrossbow_Mine_C* Mine, bool CallFunc_Array_RemoveItem_ReturnValue);
	void DetonateAll(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class ABP_DetonateCrossbow_Mine_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void CacheNewMine(class ABP_DetonateCrossbow_Mine_C* Mine, int32 CallFunc_Array_Add_ReturnValue, class ABP_DetonateCrossbow_Mine_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_Gun_Bow_Exotic_Detonate_Instant(int32 EntryPoint);
};

}


