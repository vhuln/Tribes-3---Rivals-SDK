#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x668 - 0x650)
// BlueprintGeneratedClass GA_RubyWeapon_Master.GA_RubyWeapon_Master_C
class UGA_RubyWeapon_Master_C : public URubyWeapon
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x650(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                HitEffect;                                         // 0x658(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABP_ValChar_Master_C*                  OwningCharacter;                                   // 0x660(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_RubyWeapon_Master_C* GetDefaultObj();

	void CacheData(class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ABP_ValChar_Master_C* K2Node_DynamicCast_AsBP_Val_Char_Master, bool K2Node_DynamicCast_bSuccess);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_RubyWeapon_Master(int32 EntryPoint);
};

}


